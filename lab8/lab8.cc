/**
@file lab8.cc
@author Jack Sherlock
@date 10-15-2021
@brief the user can encrypt or decrypt files
*/ 

#include <iostream>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;

/**
 * displayMenu - displays options
 * @param - none
 * @return - none
 * */
void displayMenu();

/**
 * getKey - gets the key value that changes the file text
 * @param - int key
 * @return - int key
 * */
int getKey(int key);

/**
 * encryption - adds the key value to file characters
 * @param - int key
 * @return - none
 * */
void encryption(int key);

/**
 * decryption - subtracts the key value to file characters
 * @param - int key
 * @return - none
 * */
void decryption(int key);



int main() 
{
    int choice, key;
    key = 3; ///key defaults to 3

    do 
    {
    displayMenu(); ///calls displayMenu
    cin >> choice;

    if (choice == 1) 
    {
        key = getKey(key); ///calls getKey
        cout << "Key value set to " << key << endl;
    }
    else if (choice == 2) 
    {
        encryption(key); ///calls encryption

    }
    else if (choice == 3) 
    {
        decryption(key); ///calls decryption

    }

    } while (choice != 4); ///loop ends when the user enters 4
    return 0;
}

void displayMenu() 
{
    cout << "1. Set the shift key value (default is 3)" << endl
         << "2. Encrypt a file" << endl 
         << "3. Decrypt a file" << endl
         << "4. Quit" << endl 
         << "Enter your choice: "; ///lists options
}

int getKey(int key) 
{    
    do 
    {
    cout << "Enter a value between 1 and 10: ";
    cin >> key;
    } while (!(key >= 1) || !(key <= 10)); ///will keep asking until the input is between 1 and 10

    return key;   
}

void encryption(int key) 
{
    ifstream inStream;
    ofstream outStream;
    string inputFileName;
    string outputFileName;
    char ch;

    cout << "Enter the input file name: ";
    cin >> inputFileName;
    cout << "Enter the output file name: ";
    cin >> outputFileName; ///asks for files

    inStream.open(inputFileName);
    outStream.open(outputFileName); ///files are opened

    if (inStream.fail()) 
    {
        cout << "Failed to access file." << endl;
        return;
    }

    if (outStream.fail()) 
    {
        cout << "Failed to access file." << endl;
        return;
    }


    while (!inStream.eof()) ///loop repeats until it reaches the end of the file
    {
        inStream.get(ch);
        
        ch = ch + key; ///makes text unreadable

        outStream << ch;
    }

    inStream.close();
    outStream.close(); ///files are closed

    cout << "Encryption completed." << endl;
     
}

void decryption(int key) 
{
    ifstream inStream;
    ofstream outStream;
    string inputFileName;
    string outputFileName;
    char ch;

    cout << "Enter the input file name: ";
    cin >> inputFileName;
    cout << "Enter the output file name: ";
    cin >> outputFileName; ///asks for files

    inStream.open(inputFileName);
    outStream.open(outputFileName); ///files are opened

    if (inStream.fail()) 
    {
        cout << "Failed to access file." << endl;
        return;
    }

    if (outStream.fail()) 
    {
        cout << "Failed to access file." << endl;
        return;
    }


    while (!inStream.eof()) ///loop repeats until it reaches the end of the file
    {
        inStream.get(ch);
        
        ch = ch - key; ///makes text readable

        outStream << ch;
    }

    inStream.close();
    outStream.close(); ///files are closed

    cout << "Decryption completed." << endl;
}
