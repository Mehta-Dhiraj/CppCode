/*#include <iostream>
#include<string>
using namespace std;

int intOnly(string);

int main() {

	string str;

	cout << "Enter a number:\n";
	cin >> str;

	int n = intOnly(str);

	while (n == 1) {
		cout << "Opps!!! You have entered a wrong input\n";
		cout << "Please enter only integer values:\n";
		cin >> str;
		n = intOnly(str);
	}

	if (n == 0)
		cout << "Thanks" << endl;

	return 0;
}
int intOnly(string str) {
	int flag = 0;
	for (int i = 0; i < str.length(); i++) {

		if (!isdigit(str[i])) {
			flag = 1;
			break;
		}
	}
	return flag;
}*/
