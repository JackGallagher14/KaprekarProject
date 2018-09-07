#include<math.h>

#include "kaprekarUtils.h"

/**
 * <p>This function tests whether the given input <code>n</code>
 * is a Kaprekar Number or not.  A Kaprekar Number is a non-negative
 * integer n whose square can be split into two positive integers
 * whose sum is equal to the original number.  For the purposes of
 * this method, we restrict our consideration to base-10 representations.</p>
 *
 * For example, 45 is a Kaprekar number, because
 *   45<sup>2</sup> = 2025
 * and
 *   20 + 25 = 45.
 *
 * <p>See Wikipedia's
 * <a href="https://en.wikipedia.org/wiki/Kaprekar_number">Kaprekar Number</a>
 * article for more information.</p>
 *
 * @param n
 * @return <code>true</code> if <code>n</code> is a Kaprekar Number,
 * <code>false</code> otherwise.
 */
int isKaprekar(int n) {

  if(n < 1) {
    return 0;
    //*in order to return false you have to put return 0
  }

  int i;
  long square = n * (long) n;
  int numDigits = log(n) + 1;
  //*it can be log base anything not just log base 10
  //*you did not need to specify int in the quation since n is already declared
  //*an int in the isKaprekar statement
  long modulus = 1;
  long first, second;

  //for each possible "split" of the square...
  //*The variable declared is numDigits, numberOfDigits was in the for loop
  for(i=1; i<=numDigits; i++) {
    //increase the modulus by a factor of 10
    modulus *= 10;
    //*modulus misspelled

    //split the square into two parts
    first = square / modulus;
    second = square % modulus;

    //test if the split makes a Kaprekar number
    if(second > 0 && (first + second) == n) {
      //*Put the entire statment on one line instead of making into two, makes
      //*it easier to read
      return 1;
    }
  }
  return 0;

}
