#include<iostream>
using namespace std;

class Item {
private:
	int a, b;
public:
	void showData() {
		cout << "You are in Item" << endl;
		cout << a << " " << b << endl;
	}
	void setData(int a, int b) {
		this->a = a;
		this->b = b;
	}
	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
	operator int() {
		b = 0;
		return a;
	}
};
class Product {
private:
	int m, n;
public:
	void showData() {
		cout << "You are in Product" << endl;
		cout << m << " " << n << endl;
	}
	void setData(int m, int n) {
		this->m = m;
		this->n = n;
	}
	Product(Item i) {
		m = i.getA();
		n = i.getB();
	}
	Product() {
		m = 0;
		n = 0;
	}
};
int main() {
	
	Item i1;
	Product p1;
	i1.setData(3, 4);
	p1 = i1;
	p1.showData();
	i1.showData();
	int x = i1;
	cout << x;
	return 0;
}