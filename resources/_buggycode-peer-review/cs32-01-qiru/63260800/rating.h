#ifndef RATING_H
#define RATING_H

#include <string>
#include <iostream>

using namespace std;

class rating {
  public:
    //constructor that takes in a number
    rating()
    {
        mRating = 0;
    }

    rating(double inRating)  {
        mRating = inRating;
    }

    rating(string inRating)
    {
        if (inRating == "Above")
        {
            mRating = 3;
        }
        else if (inRating == "Same")
        {
            mRating = 2;
        }
        else if (inRating == "Below")
        {
            mRating = 1;
        }
        else if (inRating == "Unknown")
        {
            mRating = -1;
        }
        else if (inRating == "None")
        {
            mRating = -1;
        }
    }

    //a method to return a string based on the current rating TODO complete
    const string getRating() const;
    double getRatingNum() const;

    void addRating(double addRating);

    friend std::ostream& operator<<(std::ostream &out, const rating &r);

    
    //TODO write operator overload
    
    const rating operator += (const rating &obj)
    {
        if (obj.getRatingNum() >= 0)
        {
            mRating += obj.getRatingNum();
        }
        return *this;
    }

    const double operator / (const double number)
    {
        return mRating / number;
    }

    const bool operator < (const rating &obj)
    {
        if (mRating < obj.getRatingNum())
        {
            return true;
        }
        else return false;
    }

    const bool operator > (const rating &obj)
    {
        if (mRating > obj.getRatingNum())
        {
            return true;
        }
        else return false;
    }

private:
    double mRating;
};
#endif
