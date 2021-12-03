/**
@file: lab11.cc
@author: Jack Sherlock
@date: 11-05-2021
@brief: converts characters from one file into capital letters and asterices in another file
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main() 
{
    ifstream inStream;
    ofstream outStream;
    char ch;

    inStream.open("text.txt"); ///file is open

    if (inStream.fail()) 
    {
        cout << "Error; cannot access file." << endl;
        exit(0);
    }

    outStream.open("output.txt"); ///file is open

    if (outStream.fail()) 
    {
        cout << "Error; cannot access file." << endl;
        exit(0);
    }

    while (!inStream.eof()) 
    {
        inStream.get(ch);

        if (ch >= 'a' && ch <= 'z') 
        {
            ch = toupper(ch);
            outStream << ch;
        }  ///capitalizes lower case characters
        else if (ch >= '0' && ch <= '9') 
        {
            ch = '*';
            outStream << ch;
        } ///turns digits into an asterisk
        else 
        {
            outStream << ch;
        } ///anything else goes straight to the output file
    }

    inStream.close(); ///file is closed

    outStream.close(); ///file is closed





    return 0;
}