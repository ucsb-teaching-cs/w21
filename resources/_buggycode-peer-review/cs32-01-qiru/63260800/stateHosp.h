#include <memory>
#include <string>
#include <iostream>
#include "hospitalData.h"
#include "rating.h"

#ifndef STATEH_H
#define STATEH_H

/*
  class to represent state hospital data - fairly redundent at this point but will use
  inheritence next
*/
class stateHosp {
  //TODO implement
public:
    stateHosp(string inS) : state(inS), type(""), hospitals(0), overallHospitals(0), mortalityHospitals(0), readmissionHospitals(0), overallRating(0), mortalityRating(0), readmissionRating(0) {}

  string getState() const { return state; }
  void addHospitaltoState(shared_ptr<hospitalData>  CI);
  double getOverallRate();
  double getStateMortalityRating();
  double getStateReadmissionRating();
  double getHospitals();
  double getOverall();
  double getReadmission();

  friend std::ostream& operator<<(std::ostream &out, stateHosp &SH);



string state;
string type;
int hospitals;
int overallHospitals;
int mortalityHospitals;
int readmissionHospitals;

rating overallRating;
rating mortalityRating;
rating readmissionRating;
};
#endif
