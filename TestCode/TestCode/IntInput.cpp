#include <cctype>
#include <iostream>
#include <cstring>
#include<string>
using namespace std;

int main() {

	string num;
	int flag = 0, reverse = 0, num1 = 0;
	cout << "Enter a number:\n";
	cin >> num;

	for (int i = 0; i < num.length(); i++) {

		if (!isdigit(num[i]))
			flag = 1;
		break;
	}

	if (flag == 1) {
		cout << "Invalid Input! Please enter only Integer value\n";
	}
	else {
		num1 = stoi(num);
		while (num1 != 0) {
			reverse = reverse * 10 + num1 % 10;
			num1 /= 10;
		}
		cout << reverse;
	}
	return 0;
}
