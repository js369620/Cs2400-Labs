// Don't forget to include the header block
// more information on keyword const on pages 95 - 97
// For if else format look at page 77
/**
@file: prog1.cc
@author: Jack Sherlock, lab section 104
@date: 9-10-2021
@brief: Take two integers and provide their sum and product.
*/


#include<iostream> 
#include<cstdlib>

using namespace std;

const int INT1 = 15;
const int INT2 = 20; 
int main()
{
    cout << "Sum of " << INT1 << " and " << INT2 << " is " << INT1 + INT2;
    cout << " Product is " << INT1 * INT2 << endl;

if (INT1 < INT2) 

cout << INT2 << "is bigger";

else cout << INT1 << "is bigger"; 

return (EXIT_SUCCESS);

}
