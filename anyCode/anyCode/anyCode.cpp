#include <iostream>
using namespace std;

int numberTranslation_2in10(int& x) {
	int a, b, c, d;
	a = x / 100;
	b = x / 10 % 10;
	c = x  % 10;
	return  x  = (a * 4 + b * 2 + c);
}

int numberTranslation_3in10(int& x) {
	int a, b, c, d;
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	return  x = (a * 9 + b * 3 + c);
}

int numberTranslation_10in4(int x, int y) {
	int z, a, b, c, d;
	z = x + y;
	a = z / 64;
	b = z / 16 % 4;
	c = z / 4 % 4;
	d = z % 4;
	return (a * 1000 + b * 100 + c * 10 + d);
}

int main() {
	int x, y;
	cin >> x >> y;
	numberTranslation_2in10(x);
	numberTranslation_3in10(y);
	cout << x << " + " << y << " = " << x + y;
	cout << endl;
	cout << numberTranslation_10in4(x, y);
}
