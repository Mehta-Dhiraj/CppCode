//#include<iostream>
//using namespace std;
//
//class Complex {
//private:
//	int a, b;
//public:
//	void setData(int a, int b) {
//		this->a = a;
//		this->b = b;
//	}
//	void showData() {
//		cout << "\na : " << a << ", b : " << b << endl;
//	}
//	friend ostream& operator << (ostream &out, Complex &c);
//	friend istream& operator >> (istream &in, Complex &c);
//	friend Complex operator + (Complex &x, Complex &y);
//};
//
//Complex operator + (Complex &x, Complex &y) {
//	Complex temp;
//	temp.a = x.a + y.a;
//	temp.b = x.b + y.b;
//	return temp;
//}
//ostream& operator << (ostream &out, Complex &c)
//{
//	out << c.a;
//	out << "+i" << c.b << endl;
//	return out;
//}
//istream& operator >> (istream&in, Complex &c)
//{
//	char ch;
//	cout << "Enter a Complex number\n";
//	in >> c.a >> ch >> ch >> c.b;
//	return in;
//}
//
//int main() {	
//	Complex c1, c2, c3;
//	cin >> c1 >> c2;
//	c3 = c1 + c2;
//	cout << c3;
//	return 0;
//}
