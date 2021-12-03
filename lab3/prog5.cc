/**
@file: prog5.cc
@author: Jack Sherlock, lab section 104
@date: 9-10-2021
@brief: Converts a given temperature in Fahrenheit to Celsius, and vice versa
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   double fah = 56;  //declare and initialize at the same time - page 48
   double cel = 20;

   ctof = 9.0/5  * cel + 32;
   ftoc = 5.0/9 * (fah -32);

   cout << fixed << setprecision(1);
   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << endl;

   return (EXIT_SUCCESS);
}
