/**
@file: lab13b.cc
@author: Jack Sherlock
@date: 11-19-2021
@brief: counts cars and money paid at a tollbooth
**/

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>

using namespace std;

class Tollbooth
{
    public:
        Tollbooth(); ///default

        void payinCar();
        void nopayCar();
        void display(ostream& fileout); ///helpers

    private:
        int carCount;
        double totalMoney;
};

int main() 
{
    char input;
    Tollbooth a;

    do 
    {
        cout << "P - paid   N - not paid   Q - quit -> ";
        cin >> input;

        input = toupper(input);
        
        if (input == 'P')
        {
            a.payinCar();
        }
        else if (input == 'N')
        {
            a.nopayCar();
        }
        
    } while (input != 'Q');
    
    a.display(cout);

    return 0;
}

Tollbooth::Tollbooth() 
{
    carCount = 0;
    totalMoney = 0;
}

void Tollbooth::payinCar()
{
    carCount++;
    totalMoney = totalMoney + 0.50;
}

void Tollbooth::nopayCar()
{
    carCount++;
}

void Tollbooth::display(ostream& fileout)
{
    fileout << "Total number of cars: " << carCount << endl;
    fileout << "Total amount collected: $" << fixed << setprecision(2) << totalMoney << endl;

}