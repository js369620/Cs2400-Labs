/**
@file: lab13a.cc
@author: Jack Sherlock
@date: 11-19-2021
@brief: takes a value and increments it
**/

#include <iostream>
#include <cstdlib>

using namespace std;

class Counter 
{
    public:
        Counter(); ///initializes the counter value to 0
        Counter(int new_val); ///value is set according to the incoming argument

        void increment(); ///increment counter value by 1
        int get_value(); ///returns the value of member variable

    private:
        int value;
};

int main() 
{
    Counter thing(5);
	    
    cout << "Starting value: " << thing.get_value() << endl;

	if (thing.get_value() < 10)
	{
		thing.increment();
	}
	    
	cout << "Ending value: " << thing.get_value() << endl;
}

Counter::Counter() 
{
    value = 0;
}

Counter::Counter(int new_val)
{ 
    value = new_val;
}

int Counter::get_value() 
{
    return value;
}

void Counter::increment()
{
    value++;
}