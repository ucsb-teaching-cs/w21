#include "hospitalData.h"
#include <sstream>



//print hospital data partial - you must fill in
std::ostream& operator<<(std::ostream &out, hospitalData &HD) {
    out << "Hosptial Info: " << HD.getName() << ", " << HD.getState();
    out << "\nType: " << HD.getType();
    out << "\nOverall rating (out of 5): " << HD.getOverallRate().getRatingNum();
    out << "\nmortality rating: " << HD.getMortality().getRating();
    out << "\nreadmission rating:" << HD.getReadmit().getRating();
    return out;
}
