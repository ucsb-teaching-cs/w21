#include <string>
#include <iostream>
#include <utility>
#include "rating.h"
#include <memory>

#ifndef HOSP_H
#define HOSP_H

using namespace std;

/*
  class to represent hospital data
  from CORGIS
*/
class hospitalData {
  public:
	 //constructor for starting code - make complete by adding rating
    hospitalData(string inN, string inS, string inType, rating oRating, rating mRating, rating rRating) :
            name(inN), state(inS), type(inType), overallRating(oRating), mortalityRating(mRating), readmissionRating(rRating) {
    }
    string getName() { return name; }
    string getState() { return state; }
    string getType() { return type; }

rating getOverallRate() 
{
    return overallRating;
}
rating getMortality() 
{
    return mortalityRating;
}
rating getReadmit() 
{
    return readmissionRating;
}

   friend std::ostream& operator<<(std::ostream &out, const hospitalData &HD);

private:
    string name;
    string state;
    string type;
    rating overallRating;
    rating mortalityRating;
    rating readmissionRating;

};

#endif
