/**
@file: lab9.cc
@author: Jack Sherlock
@date: 10-22-2021
@brief: shows the highest, lowest, and average temperatures
*/

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

/**
 * highest - finds highest temperature
 * @param - int dailyLow[]
 * @return - highest
 * */
int highest(int dailyLow[]);

/**
 * lowest - finds lowest temperature
 * @param - int dailyLow[]
 * @return - lowest
 * */
int lowest(int dailyLow[]);

/**
 * average - takes the average of all temperatures
 * @param - int dailyLow[]
 * @return - average
 * */
int average(int dailyLow[]);

int main() 
{
    ifstream inStream;
    int dailyLow[30];
    int low;
    int high;
    int avg;
    
    inStream.open("athens_low_temps.txt"); ///file is open

    if (inStream.fail()) 
    {
        cout << "Cannot access file." << endl;
        exit(0);
    }

    for (int i = 0; i < 30; i++) 
    {
        inStream >> dailyLow[i];
    } ///file contents should be loaded into array

    inStream.close(); ///file is closed

    low = lowest(dailyLow);
    high = highest(dailyLow);
    avg = average(dailyLow); ///each function is called and returns a value for each variable

    cout << "The lowest recorded temperature was " << low << " degrees." << endl;
    cout << "The highest recorded temperature was " << high << " degrees." << endl;
    cout << "The average temperature was " << avg << " degrees." << endl;
    ///results are displayed

    return 0;
}

int lowest(int dailyLow[]) 
{
    int lowest = 100;
    
    for (int i = 0; i < 30; i++) ///iterates for each array element
    {
        
        if (dailyLow[i] < lowest) 
        {
            lowest = dailyLow[i]; ///sets a new lowest value
        }
    }

    return lowest;
}

int highest(int dailyLow[]) 
{
    int highest = 0;
    
    for (int i = 0; i < 30; i++) ///iterates for each array element
    {
        

        if (dailyLow[i] > highest) 
        {
            highest = dailyLow[i]; ///sets a new highest value 
        }
    }

    return highest;
}

int average(int dailyLow[]) 
{
    int total = 0;
    int average;

    for (int i = 0; i < 30; i++) ///iterates for each array element
    {
        total = total + dailyLow[i]; ///adds each value to total to be divided later
    }

    average = total / 30;

    return average;
}