#include <iostream>

using namespace std;

double Add(double, double);
double Sub(double, double);
double Mult(double, double);
double Div(double, double);

int main() {
	double a, b, c;
	char op;
	do {
		cout << "Enter the numbers and operand beetween them: "; cin >> a >> op >> b;
		switch (op) {
		case '+':c = Add(a, b); break;
		case '-':c = Sub(a, b); break;
		case '*':c = Mult(a, b); break;
		case '/':c = Div(a, b); break;
		default: cout << "Wrong operand! Try again!" << endl; continue;
		}
		cout << "Result: " << c << endl;
	} while (a && b != 0);
	return 0;
}

double Add(double x, double y) {
	double z = x + y;
	return z;
}
double Sub(double x, double y) {
	double z = x - y;
	return z;
}
double Mult(double x, double y) {
	double z = x * y;
	return z;
}
double Div(double x, double y) {
	double z = x / y;
	return z;
}
