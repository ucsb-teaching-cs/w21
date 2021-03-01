/* aggregate data */
#include "dataAQ.h"
#include "demogData.h"
#include <iostream>
#include <algorithm>

dataAQ::dataAQ() {}

/* necessary function to aggregate the data - this CAN and SHOULD vary per
   student - depends on how they map, etc. */
void dataAQ::createStateDemogData(std::vector<shared_ptr<demogData>> theData) {
	    //process the vector in our county data aggregate 
    for (const auto &obj : theData) {
        string stateName = obj->getState();
        //if first state entry, create it
        if (allStateDemogData.count(stateName) < 1) {
           //cout << "Making a new state entry: " << stateName << endl;
           allStateDemogData[stateName] = new stateDemog(stateName);
        }
        //either way now add this county info 
        //this keeps a running total
        allStateDemogData[stateName]->addCountytoState(obj);

    }

}

void dataAQ::createStateHospData(std::vector<shared_ptr<hospitalData>> theData) {
	for (auto &obj : theData) {
        string stateName = obj->getState();
        if (allStateHospData.count(stateName) < 1) {
            allStateHospData[stateName] = new stateHosp(stateName);
        }
        allStateHospData[stateName]->addHospitaltoState(obj);

    }
}

//compare predicate on teen population (on map entry)
bool compareTeen(std::pair<std::string, stateDemog *> left, std::pair<std::string, stateDemog *> right) {
        return left.second->getpopUnder18() < right.second->getpopUnder18();
}

//predicate version
//return the name of the state with the largest population under age 18
string dataAQ::teenPop()  {
  std::pair<std::string, stateDemog *> min 
      = *max_element(allStateDemogData.begin(), allStateDemogData.end(), compareTeen);
  return min.first; 
}

/* Lab03 fill in */
bool compareHospRating(std::pair<std::string, stateHosp *> left, std::pair<std::string, stateHosp *> right)
{
        return left.second->getOverallRate() > right.second->getOverallRate();
}


string dataAQ::LowHospRating() {
  std::pair<std::string, stateHosp *> min
      = *min_element(allStateHospData.begin(), allStateHospData.end(), compareHospRating);
  return min.first; 
}

string dataAQ::HighHospRating() {
  std::pair<std::string, stateHosp *> min
      = *max_element(allStateHospData.begin(), allStateHospData.end(), compareHospRating);
  return min.first; 
}

bool compareMortalityRating(std::pair<std::string, stateHosp *> left, std::pair<std::string, stateHosp *> right)
{
        return left.second->getStateMortalityRating() < right.second->getStateMortalityRating();
}
bool compareReadmissionRating(std::pair<std::string, stateHosp *> left, std::pair<std::string, stateHosp *> right)
{
        return left.second->getStateReadmissionRating() < right.second->getStateReadmissionRating();
}
string dataAQ::HighMortHospRating(){
  std::pair<std::string, stateHosp *> min
      = *max_element(allStateHospData.begin(), allStateHospData.end(), compareMortalityRating);
  return min.first;
}

string dataAQ::HighReadmitHospRating() {
  std::pair<std::string, stateHosp *> min
      = *max_element(allStateHospData.begin(), allStateHospData.end(), compareReadmissionRating);
  return min.first;
}

bool compareRatingHighToLowSort(stateHosp* left, stateHosp* right)
{
        return left->getOverallRate() > right->getOverallRate();
}

void dataAQ::sortStateHospRatingHighLow(std::vector<stateHosp *>& hospHighToLow) {
    std::map<string, stateHosp*>::iterator it = allStateHospData.begin();
    while (it != allStateHospData.end())
    {
        hospHighToLow.push_back(it->second);
        it++;
    }
    
    std::sort(hospHighToLow.begin(), hospHighToLow.end(), compareRatingHighToLowSort);
}

bool compareRatingLowToHighSort(stateHosp* left, stateHosp* right)
{
        return left->getOverallRate() < right->getOverallRate();
}

void dataAQ::sortStateHospRatingLowHigh(std::vector<stateHosp *>& hospLowToHigh) {
	std::map<string, stateHosp*>::iterator it = allStateHospData.begin();
    while (it != allStateHospData.end())
    {
        hospLowToHigh.push_back(it->second);
        it++;
    }
    
    std::sort(hospLowToHigh.begin(), hospLowToHigh.end(), compareRatingLowToHighSort);
}

bool comparePovLowHigh(stateDemog* left, stateDemog* right)
{
        return left->getBelowPoverty() < right->getBelowPoverty();
}

bool comparePovHighLow(stateDemog* left, stateDemog* right)
{
        return left->getBelowPoverty() > right->getBelowPoverty();
}

void dataAQ::sortStateDemogPovLevelLowHigh(std::vector<stateDemog*>& incomeHighLow) {
	std::map<string, stateDemog*>::iterator it = allStateDemogData.begin();
    while (it != allStateDemogData.end())
    {
        incomeHighLow.push_back(it->second);
        it++;
    }
    
    std::sort(incomeHighLow.begin(), incomeHighLow.end(), comparePovLowHigh);
}

void dataAQ::sortStateDemogPovLevelHighLow(std::vector<stateDemog*>& povLevelHighLow) {
	std::map<string, stateDemog*>::iterator it = allStateDemogData.begin();
    while (it != allStateDemogData.end())
    {
        povLevelHighLow.push_back(it->second);
        it++;
    }
    
    std::sort(povLevelHighLow.begin(), povLevelHighLow.end(), comparePovHighLow);
}


