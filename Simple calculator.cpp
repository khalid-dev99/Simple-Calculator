#include<iostream>
using namespace std; 
int main() {
	char choice;
	double num1, num2;
	cout << "Enter Two Digits: ";
	cin >> num1 >> choice >> num2;
	switch (choice) {
	case '+':
		cout << "The Result is: " << num1 + num2 << endl;
		break;
	case '-':
		cout << "The Result is: " << num1 - num2 << endl;
		break;
	case '*':
		cout << "The Result is: " << num1 * num2 << endl;
		break;
	case '/':
		if (num2 != 0) {
			cout << "The Result is: " << num1 / num2 << endl;
			break;
		}
	default:
		cout << "Invalid operation" << endl;
		break;
	}
	return 0;

}
