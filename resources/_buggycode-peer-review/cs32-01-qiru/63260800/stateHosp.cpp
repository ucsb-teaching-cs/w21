#include "stateHosp.h"
#include "hospitalData.h"
#include <sstream>
#include <string>
#include <assert.h>


std::ostream& operator<<(std::ostream &out, stateHosp&SH) {
    out << "State Hospital Info: " << SH.getState();
    out << "\nNumber of Hospitals: " << SH.getHospitals();
    out << "\noverall rating:" << SH.getOverallRate();
    out << "\nmortality rating:" << SH.getStateMortalityRating();
    out << "\nreadmission rating:" << SH.getStateReadmissionRating();
    return out;
}

void stateHosp::addHospitaltoState(shared_ptr<hospitalData> CI) {
	assert(state.compare(CI->getState()) == 0);
	type = CI->getType();
	hospitals++;
	if (CI->getOverallRate().getRatingNum() != -1) {overallRating += CI->getOverallRate(); overallHospitals++;}
	if (CI->getMortality().getRatingNum() != -1) {mortalityRating += CI->getMortality(); mortalityHospitals++;}
	if (CI->getReadmit().getRatingNum() != -1) {readmissionRating += CI->getReadmit(); readmissionHospitals++;}

}

  double stateHosp::getOverallRate()
  {
	  return overallRating / overallHospitals;
  }

  double stateHosp::getStateMortalityRating()
  {
	  return mortalityRating / mortalityHospitals;
  }
  double stateHosp::getStateReadmissionRating()
  {
	  return readmissionRating / readmissionHospitals;
  }

  double stateHosp::getHospitals()
  {
	  return hospitals;
  }

  double stateHosp::getOverall()
  {
    return overallRating.getRatingNum();
  }

  double stateHosp::getReadmission()
  {
    return readmissionRating.getRatingNum();
  }