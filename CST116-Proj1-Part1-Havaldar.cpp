/*

CST116 C++ Programming
Project 1 Part 1
Abdullah Havaldar
	Phone: 503-764-5753
	Email: abdullah.havaldar@oit.edu

Purpose:
To take in the Name, Income, and GPA of 4 people
Print them out with appropriate headings
Headings and data must line up
Must use Manipulators
Use appropriate data types to store the data

*/

#include <iostream>;
#include <list>;
using std::cout;
using std::endl;

int main()
{
	string name;
	int income;
	float gpa;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your income: ";
	cin >> income;

	cout << "Enter your GPA: ";
	cin >> gpa;

	cout << "Person 1's name is ";
	cout << name << endl;
	cout << ". Their income is ";
	cout << income << endl;
	cout << ". Their GPA is ";
	cout << gpa << endl;
}