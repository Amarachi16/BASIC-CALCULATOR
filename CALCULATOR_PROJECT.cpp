//AMARACHI EZEKIEL 
//CALCULATOR PROJECT
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	cout << "WELCOME TO AMARACHI'S CALCULATOR!" << endl;
	cout << "ENJOY :)" << endl;


	char choice;


	do
	{
		double num1;
		double num2;
		double exponent;
		char op;

		cout << "Enter the first number: ";
		cin >> num1;

		cout << "Enter operator(+,-,/,*,s for square root,^): ";
		cin >> op;

		if (op == 's')
		{
			cout << "Square root of number = " << sqrt(num1);
		}
		else if (op == '^')
		{
			cout << "Raised to power: ";
			cin >> exponent;

			cout << "Answer = " << pow(num1, exponent);
		}
		else
		{

			cout << "Enter the second number: ";
			cin >> num2;



			switch (op)
			{
			case '+':
				cout << "Sum = " << num1 + num2;
				break;
			case '-':
				cout << "Difference = " << abs(num1 - num2);
				break;
			case '*':
				cout << "Multiplication = " << num1 * num2;
				break;
			case '/':
				if (num2 != 0)
				{
					cout << "Division = " << num1 / num2;

				}
				else
				{
					cout << "Zero Division Error";

				}
				break;
			default:
				cout << "Invalid Operator";

			}
		

		}
		cout << endl;
		cout << "Do you want to perform another calculation(Y/N): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
		cout << "Thank you for using Amarachi's Calculator. Come by again :)";


	





	return 0;

	

}


