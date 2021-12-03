/**
@file: lab10.cc
@author: Jack Sherlock
@date: 10-29-2021
@brief: reads files and displays highest and lowest values with their respective name
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>

using namespace std;

int main() 
{
    ifstream inStream1;
    ifstream inStream2;
    double prices[6];
    string names[6];
    double min;
    double max;
    string minName;
    string maxName;

    inStream1.open("data1.txt"); ///file is open

    if (inStream1.fail()) 
    {
        cout << "Error; cannot access file" << endl;
        exit(0);
    }

    inStream2.open("data2.txt"); ///file is open

    if (inStream2.fail()) 
    {
        cout << "Error; cannot access file" << endl;
        exit(0);
    } ///check for file failure

    for (int i = 0; i < 6; i++) 
    {
        inStream1 >> prices[i];
        inStream2 >> names[i];
    } ///load arrays

    min = prices[0];
    max = prices[0]; ///take first array element

    for (int j = 0;j < 6; j++) 
    {
        if (prices[j] <= min) 
        {
            min = prices[j];
            minName = names[j]; ///sets a new min and associates a name with it
        }

        if (prices[j] >= max) 
        {
            max = prices[j];
            maxName = names[j]; ///sets a new max and associates a name with it
        }
    }

    cout << fixed << setprecision(2);
    cout << "The least expensive part is the " << minName << " at a price of $" << min << endl;
    cout << "The most expensive part is the " << maxName << " at a price of $" << max << endl;

    inStream1.close(); ///file is closed
    inStream2.close(); ///file is closed

    return 0;
}