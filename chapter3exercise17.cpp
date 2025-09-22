/*
* File Name: chapter3exercise6
* Programmer: Carter Pride
* Date: 09/2025
* Purpose to determine the amount of ingrediants needed to bake a desired amount of cookies.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	int num1 = rant() % 900 + 100, num2 = rand() % 900 + 100;

	cout << " Solve the displayed problem. \n ";
	cout << "  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "----" << endl;

	cout << "\nPress enter to show answer.";
	cin.ignore();
	cin.get();

	int sum = num1 + num2;

	cout << "\n  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "----" << endl;
	cout << "  " << sum << endl;

}
