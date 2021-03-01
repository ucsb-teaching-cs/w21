#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <iomanip>
#include "dataAQ.h"
#include "demogData.h"
#include "stateDemog.h"
#include "hospitalData.h"
#include "stateHosp.h"
#include "parse.h"
#include <memory>


using namespace std;

int main() {

	dataAQ theAnswers;

    //read in a csv file and create a vector of objects representing each counties data
    std::vector<shared_ptr<demogData>> theDemogData = read_csv(
            "county_demographics.csv", DEMOG);

    //read in a csv file and create a vector of objects representing each hospital data
    std::vector<shared_ptr<hospitalData>> theHospitalData = read_csvHospital(
            "hospitals.csv", HOSPITAL);

    //helper functions to aggregate the data
    theAnswers.createStateDemogData(theDemogData);

    //TODO: fix - this does nothing right now
    theAnswers.createStateHospData(theHospitalData);

    //set up output formating
    cout << std::setprecision(2) << std::fixed;

    //example from lab02
    cout << "*** the state that needs the most high schools**" << endl;
    string needHS = theAnswers.teenPop();
    cout << *(theAnswers.allStateDemogData[needHS]) << endl;
    /*EXAMPLE extremum - TODO fix so this works*/
    cout << "\n";
    
    string stateLowHospRate = theAnswers.LowHospRating();
    cout<< "The state with the lowest hospital rating is: " << stateLowHospRate << endl;
    //TODO print out the data
    cout << *(theAnswers.allStateHospData[stateLowHospRate]) << endl;
    cout << "\nDemographic data for that state is: \n";
    //TODO print out the data
    cout << *(theAnswers.allStateDemogData[stateLowHospRate]) << endl;
    cout << "\n";

    string stateHighHospRate = theAnswers.HighHospRating();
    cout<< "The state with the highest hospital rating is: " << stateHighHospRate << endl;
    //TODO print out the data
    cout << *(theAnswers.allStateHospData[stateHighHospRate]) << endl;
    cout << "\nDemographic data for that state is: \n";
    //TODO print out the data
    cout << *(theAnswers.allStateDemogData[stateHighHospRate]) << endl;
    cout << "\n";


    string stateHighMortRate = theAnswers.HighMortHospRating();
    cout<< "The state with the highest mortality rating is: " << stateHighMortRate << endl;
    //TODO print out the data
    cout << *(theAnswers.allStateHospData[stateHighMortRate]) << endl;
    cout << "\nDemographic data for that state is: \n";
    //TODO print out the data
    cout << *(theAnswers.allStateDemogData[stateHighMortRate]) << endl;
    cout << "\n";

    string stateHighReadmitRate = theAnswers.HighReadmitHospRating();
    cout<< "The state with the highest readmission rating is: " << stateHighReadmitRate << endl;
    //TODO print out the data
    cout << *(theAnswers.allStateHospData[stateHighReadmitRate]) << endl;
    cout << "\nDemographic data for that state is: \n";
    //TODO print out the data
    cout << *(theAnswers.allStateDemogData[stateHighReadmitRate]) << endl;
    cout << "\n";

    /*EXAMPLE sort - TODO fix so this works*/









    
    std::vector<stateHosp*> hospHighToLow;
    theAnswers.sortStateHospRatingHighLow(hospHighToLow);
    cout << "the 10 states with highest hospital ratings sorted on overall: " << endl;
    for (int i=0; i < 10; i++) {
        cout << i<< " " << hospHighToLow.at(i)->getState();
        cout <<  " overall hospital rating: " << hospHighToLow.at(i)->getOverallRate() << endl;
    }
    cout << "\n";

        std::vector<stateHosp*> hospLowToHigh;
    theAnswers.sortStateHospRatingLowHigh(hospLowToHigh);
    cout << "the 10 states with lowest hospital ratings sorted on overall: " << endl;
    for (int i=0; i < 10; i++) {
        cout << i<< " " << hospLowToHigh.at(i)->getState();
        cout <<  " overall hospital rating: " << hospLowToHigh.at(i)->getOverallRate() << endl;
    }
    cout << "\n";

        std::vector<stateDemog*> demogLowToHigh;
    theAnswers.sortStateDemogPovLevelLowHigh(demogLowToHigh);
    cout << "the 10 states with lowest level of persons below the poverty line: " << endl;
    for (int i=0; i < 10; i++) {
        cout << i<< " " << demogLowToHigh.at(i)->getState();
        cout <<  " persons below poverty level: " << demogLowToHigh.at(i)->getBelowPoverty() << endl;
    }
    cout << "\n";

        std::vector<stateDemog*> demogHighToLow;
    theAnswers.sortStateDemogPovLevelHighLow(demogHighToLow);
    cout << "the 10 states with highest level of persons below the poverty line: " << endl;
    for (int i=0; i < 10; i++) {
        cout << i<< " " << demogHighToLow.at(i)->getState();
        cout <<  " persons below poverty level: " << demogHighToLow.at(i)->getBelowPoverty() << endl;
    }
    cout << "\n";

    return 0; 
}

