/*#include<iostream>
#include<map>
using namespace std;

int main() {
	map<int, string> m;

	map<string, string> p;

	m.insert(make_pair(101, "Dhiraj"));
	m.insert(make_pair(102, "Rani"));
	m.insert(make_pair(103, "Rakesh"));
	m.insert(make_pair(104, "Hanshraj"));
	m.insert(make_pair(105, "Hanshraj meena"));

	map<int, string>::iterator itr = m.begin();

	while (itr != m.end()) {
		cout << itr->first << " " << itr->second << endl;
		itr++;
	}
	cout << m.at(102);
	cout << endl << m[101];

	p.insert(make_pair("Dhiraj", "Rani"));
	p.insert(make_pair("Heer", "Ranjha"));
	p.insert(make_pair("Laila", "Majnu"));
	p.insert(make_pair("Krishna", "Radhe"));
	p.insert(make_pair("Ram", "Janki"));

	map<string, string>::iterator it = p.begin();
	cout << endl << endl;
	while (it != p.end()) {
		cout << it->first << "->" << it->second << endl;
		it++;
	}
	cout << endl << p.at("Heer") << endl;
}*/