...

import { gcd, lcm } from "./Helpers";

export default class Rational {
  constructor(numerator, denominator) {
  
    // Some checks for valid types and denominator == 0 removed for irrelevancy 
    
    // Please assume that the gcd function accurately returns the greatest common divisor when passed two numbers (regardless of sign)
    
    if (this.numerator !== 0 && numerator > 0 && denominator > 0) {
      const greatestCommonDivisor = gcd(this.numerator, this.denominator);
      this.numerator /= greatestCommonDivisor;
      this.denominator /= greatestCommonDivisor;
    }
    else if ((this.numerator !== 0 && numerator < 0 && denominator < 0) || (this.numerator !== 0 && numerator > 0 && denominator < 0)){
      const greatestCommonDivisor = gcd(this.numerator, this.denominator);
      this.numerator /= greatestCommonDivisor;
      this.numerator *= -1;
      this.denominator /= greatestCommonDivisor;
      this.denominator *= -1;
    }
  }
  
  minus(other) {
    Rational.verifyIsRational(other); 
    const numerator =
      this.numerator * other.denominator - other.numerator * this.denominator;
    const denominator = this.denominator * other.denominator;

    return new Rational(numerator, denominator);
  }

  static subtract(first, second) {
    Rational.verifyIsRational(first);
    Rational.verifyIsRational(second);

    return first.minus(second);
  }
  
  ...
