// Raphael Nacache

#include <iostream>
using namespace std;

int main()
{
	cout << "----------------------------" << endl;
	cout << "WELCOME TO GRADE CALCULATOR!" << endl;
	cout << "----------------------------" << endl;
	cout << endl;

	int homework_percent;
	int midterm_percent;
	int final_percent;
	double homework_grade;
	double midterm_grade;
	double final_grade;

	cout << "Please list the percentage of each section." << endl;

	cout << "Homework %: ";
	cin >> homework_percent;

	if (homework_percent < 0 || homework_percent > 100)
	{
		cout << "The homework percentage needs to be between 0 and 100." << endl;
		return 1;
	}

	cout << "Midterm %: ";
	cin >> midterm_percent;

	if (midterm_percent < 0 || midterm_percent > 100)
	{
		cout << "The midterm percentage needs to be between 0 and 100." << endl;
		return 1;
	}

	cout << "Final %: ";
	cin >> final_percent;

	if (final_percent < 0 || final_percent > 100)
	{
		cout << "The final percentage needs to be between 0 and 100." << endl;
		return 1;
	}

	cout << "Now enter your grades." << endl;

	cout << "Homework: ";
	cin >> homework_grade;

	cout << "Midterm: ";
	cin >> midterm_grade;

	cout << "Final: ";
	cin >> final_grade;

	double a = homework_percent / 100.0;
	double b = midterm_percent / 100.0;
	double c = final_percent / 100.0;

	double grade = (a*homework_grade) + (b*midterm_grade) + (c*final_grade);
	cout << "Your final grade is: " << grade << "%" << endl;

	if (grade >= 90 && grade <= 100)
		cout << "Congrats you got an A" << endl;
	else if (grade >= 80 && grade < 90)
		cout << "Good job you got a B" << endl;
	else if (grade >= 70 && grade < 80)
		cout << "You got a C" << endl;
	else if (grade >= 60 && grade < 70)
		cout << "Sorry, you got a D" << endl;
	else if (grade >= 0 && grade < 60)
		cout << "You failed, you got an F" << endl;
	else cout << "There was an error in calculating your grade, please try again." << endl;

	cout << "Thank you, Bye!" << endl;
}
