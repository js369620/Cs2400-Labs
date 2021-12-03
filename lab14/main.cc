
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "my_int.h"

int main()
{ 
  my_int value1, value2;
     
  value1.input(cin);  

  value2.input(cin);
 
  value1.output(cout);

  if (is_prime(value1))
    cout<<"  is a prime number  \n";
  else
   cout<<" is not a prime number \n";

  value2.output(cout);

  if (is_prime(value2))
    cout<<"  is a prime number  \n";
  else
   cout<<" is not a prime number \n";

  if (value1 > value2)
  {
    cout << "value1 is greater than value2 \n";
  }
  else if (value2 > value1)
  {
    cout << "value2 is greater than value1 \n";
  }
 
  return 0;
}