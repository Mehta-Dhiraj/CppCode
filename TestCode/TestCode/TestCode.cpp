#include<iostream>
#include<string>
using namespace std;

string missingLetter(string s); //function declaration

int main() {

	string str;
	bool result;

	cout << "Enter a string\n";
	getline(cin, str);
	string missing = missingLetter(str);

	if (missing == "") {
		cout << "\nNope";
	}
	else {
		cout << missing;
	}

	return 0;
}

string missingLetter(string str) {
	int first = str[0];
	int last = str[str.length() - 1];
	int round = last - first;
	string new_str = "";
	for (int i = 0; i < round; i++) {

		if (str[i] != first) {

			new_str = new_str + (char)first;
		}
		first++;
	}
	return new_str;
}
