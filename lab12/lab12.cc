/**
@file - lab12.cc
@author - Jack Sherlock
@date - 11-12-2021
@brief - stores file contents in a vector and then print a report
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

struct Employee 
    {
        int id;
        string firstName;
        string lastName;
        double salary;
    }; ///things associated with each employee
/**
 * loadVector: read from the file and put data into a vector
 * @param: vector <Employee> &employeeVector
 * @return: none
 * */
void loadVector(vector <Employee> &employeeVector);
/**
 * printReport: prints vector contents and total payroll
 * @param: vector <Employee> &employeeVector, double totalPayroll
 * @return: none
 * */
void printReport(vector <Employee> &employeeVector, double totalPayroll);
/**
 * calculateTotal: adds salaries to total payroll
 * @param: vector <Employee> &employeeVector
 * @return: double totalPayroll
 * */ 
double calculateTotal(vector <Employee> &employeeVector);


int main() 
{

    
    vector <Employee> employeeVector;
    double totalPayroll;
   
    loadVector(employeeVector);

    totalPayroll = calculateTotal(employeeVector);

    printReport(employeeVector, totalPayroll);

    return 0;
}

void loadVector(vector <Employee> &employeeVector) 
{
    ifstream inStream;
    Employee e;
    

    inStream.open("employees.txt"); ///file is open

    if (inStream.fail()) 
    {
        cout << "Error; cannot access file." << endl;
        exit(0);
    }

    while (!inStream.eof()) 
    {
        inStream >> e.id; ///get id, names, and salary
        inStream >> e.firstName;
        inStream >> e.lastName;
        inStream >> e.salary;

        employeeVector.push_back(e); ///add to the vector

    }

    inStream.close(); ///file is closed
}

void printReport(vector <Employee> &employeeVector, double totalPayroll) 
{
    int size = employeeVector.size() - 1;
    string fullName;

    cout << setw(10) << left << setfill(' ') << "ID";
    cout << setw(20) << left << setfill(' ') << "Name"; 
    cout << setw(9) << left << setfill(' ') << "Salary" << endl;
    
    for (int i = 0; i < size; i++) 
    {
        fullName = employeeVector[i].firstName + " " + employeeVector[i].lastName; ///combines strings 
        
        cout << setw(10) << left << employeeVector[i].id;

        
        
        cout << setw(20) << left << fullName; ///having 2 separate strings wouldn't work properly with the setw
        
        cout << fixed << setprecision(2) << "$" << employeeVector[i].salary << endl;
    }

    cout << "Total payroll: $" << totalPayroll << endl; ///includes totalPayroll at the end
}

double calculateTotal(vector <Employee> &employeeVector) 
{
    double totalPayroll = 0;
    int size = employeeVector.size() - 1;

    for (int i = 0; i < size; i++) 
    {
        totalPayroll += employeeVector[i].salary; ///adds each salary to the payroll
    }

    return totalPayroll;
}