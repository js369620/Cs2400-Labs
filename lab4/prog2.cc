/**
@file: prog2.cc
@author: Jack Sherlock
@date: 9-17-2021
@brief: 
*/

#include <iostream>
#include <cstdlib>
#include <iomanip> 

using namespace std;

int main()
{
    const double RATE = 5.50;
    const double COMMISSION1 = 0.10;
    const double COMMISSION2 = 0.15; ///constants, global

    double weeklySales; ///input
    double plan1;
    double plan2; ///plan1 goes with COMMISSION1, plan2 with COMMISSION2

    cout << "Enter your weekly sales: ";
    cin >> weeklySales;

    plan1 = (RATE * 40) + (weeklySales * COMMISSION1);
    plan2 = weeklySales * COMMISSION2; ///calculations

    cout << fixed << setprecision(2);
    cout << "Amount of Sales: $" << weeklySales << endl;
    cout << "Plan 1: $" << plan1 << endl;
    cout << "Plan 2: $" << plan2 << endl; ///prints weeklySales, plan1 and plan2

    if (plan1 > plan2) 
    {
        cout << "Plan 1 is better than Plan 2" << endl;
    }
    else if (plan2 > plan1) 
    {
        cout << "Plan 2 is better than Plan 1" << endl;
    }
    else if (plan1 == plan2) 
    {
        cout << "Both plans are equal" << endl;
    } ///output is determined by the greater plan
}