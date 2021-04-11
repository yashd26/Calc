// CREATING A CALCULATOR (WITH NO EXCEPTION HANDLING ND ONLY FOR CALCULATION OF INTEGERS)
// DESIGN ONLY SUITABLE FOR SINGLE DIGIT NUMBERS
#include <iostream>
using namespace std;

// CREATING A CLASS
class Calculator {
public:
	// INITIALISING VARIABLES
	int num1, num2, result;
	char op; // OPERATION
	
	Calculator() {
		num1 = 0; // FIRST NUMBER
		num2 = 0; // SECOND NUMBER
		result = 0; // RESULT
	}

	void display_board() {
		cout << "\t\t" << "-----" << "  ---  " << "-----" << "     " << "-----\n";
		cout << "\t\t" << "|" << "_" << num1 << "_|" << "  |" << op << "|  " << "|" << "_" << num2 << "_|" << "  =  " << "|" << "_" << result << "_|";
		cout << "\n\n\n";
	}

	int Addition() {
		result = num1 + num2;
		return result;
	}

	int substraction() {
		result = num1 - num2;
		return result;
	}

	int multiplication() {
		result = num1 * num2;
		return result;
	}

	int division() {
		result = num1 / num2;
		return result;
	}
};