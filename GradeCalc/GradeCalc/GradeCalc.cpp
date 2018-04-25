// Raphael Nacache

#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to Grade Calculator!" << endl;

	int homework_percent;
	int midterm_percent;
	int final_percent;
	double homework_grade;
	double midterm_grade;
	double final_grade;

	cout << "Please list the percentage of each section." << endl;

	cout << "Homework %: ";
	cin >> homework_percent;

	cout << "Midterm %: ";
	cin >> midterm_percent;

	cout << "Final %: ";
	cin >> final_percent;

	cout << "Now enter your grades." << endl;

	cout << "Homework: ";
	cin >> homework_grade;

	cout << "Midterm: ";
	cin >> midterm_grade;

	cout << "Final: ";
	cin >> final_grade;
}