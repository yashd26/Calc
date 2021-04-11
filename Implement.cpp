#include <iostream>
using namespace std;
#include "Calculator_logic.cpp"

int main() {
	while (true) {
		Calculator calc;

		cout << "\t\t" << "--WELCOME TO MY CALCULATOR--\n\n\n";
		cout << "Enter ur number: ";
		cin >> calc.num1;
		cout << "Enter operation(+, -, *, /): ";
		cin >> calc.op;
		cout << "Enter 2nd number: ";
		cin >> calc.num2;
		cout << "\n\n\n";

		if (calc.op == '+') {
			calc.Addition();
			calc.display_board();
		}
		else if (calc.op == '-') {
			calc.substraction();
			calc.display_board();
		}
		else if (calc.op == '*') {
			calc.multiplication();
			calc.display_board();
		}
		else if (calc.op == '/') {
			calc.division();
			calc.display_board();
		}
	}
	return 0;
}





