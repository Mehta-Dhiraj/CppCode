/*#include<iostream>
using namespace std;

int main() {

	int d1, m1, y1, d2, m2, y2, totaldays = 0;
	char c;

	cout << "Enter first date (dd/mm/yyyy formate)\n";
	cin >> d1 >> c >> m1 >> c >> y1;

	cout << "Enter second date (dd/mm/yyyy formate)\n";
	cin >> d2 >> c >> m2 >> c >> y2;

	int monthDays[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	if (y1 == y2) {
		if (m1 == m2) {
			totaldays = d2 - d1 + 1;
		}
		else {
			for (int i = m1; i < m2; i++) {
				totaldays += monthDays[i];
			}
			totaldays += d2 - d1 + 1;
		}
	}
	else {
		y2 = y2 - y1;
		if (m1 == m2) {
			totaldays = d2 - d1 + 1;
		}
		else {
			for (int i = m1; i < m2; i++) {
				totaldays += monthDays[i];
			}
			totaldays += d2 - d1 + 1;
		}

		totaldays += y2 * 365;
	}
	cout<< totaldays;
	return 0;
}*/