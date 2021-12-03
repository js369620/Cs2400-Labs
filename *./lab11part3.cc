#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() 
{
    const int SIZE = 10;
    double a_list[] = {3.2, 4.6, 7.0, 12.5, 8.3, 9.1};
    int nums[SIZE];
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    string name[SIZE];
    float values[SIZE];

    cout << sizeof(a_list) << endl;
    cout << sizeof(nums) << endl 
         << sizeof(vowels) << endl
         << sizeof(name) << endl
         << sizeof(values) << endl;



    return 0;
}