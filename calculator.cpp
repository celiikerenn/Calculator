#include <iostream>

using namespace std;


int main() {

	int operation;
	float num1, num2;
	
	
	cout << "^^^Welcome to the calculator^^^\n" << endl;
	cout << "ATTENTION: If you want to enter a frictional number , you have to use comma , otherwise you will get an ERROR.\n" << endl;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	cout << "Please,select the operation you want to do;" << endl;
	cout << "1-Addition\n2 - Extraction\n3 - Multiplication\n4 - Division\n";
	cin >> operation;
	
		

	if (operation == 1) {
			cout << "The result of your calculation: " << num1 + num2 << endl;
	}

	else if (operation == 2) {
			cout << "The result of your calculation: " << num1 - num2 << endl;
	}

	else if (operation == 3) {
			cout << "The result of your calculation: " << num1 * num2 << endl;
	}

	else if (operation == 4) {
			cout << "The result of your calculation: " << num1 / num2 << endl;
	}

	else {
		cout << "You made the wrong choice.Please try again!!!" << endl;
	}
	
	return 0;
}
