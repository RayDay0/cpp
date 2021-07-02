#include <iostream>
using namespace std;

int numberTranslation_2in10(int& x) {
	int a, b, c, d;
	a = x / 100;
	b = x / 10 % 10;
	c = x  % 10;
	return  x  = (a * 4 + b * 2 + c);
}

int main() {
	int x, a, b, c, d, e, f;
	cin >> x;
	a = x / 10;
	b = x % 10;
	int y = a * 8 + b;
	cout << y << endl;
	a = y / 2;
	b = y % 2;
	cout << a * 10 + b;
}

 /*
	Напишите программу, которая складывает двоичное и троичное числа (не более трёх разрядов).
	В начале преобразуйте числа в десятичный вид. Сложите их. Далее сумму переведите в четверичный формат.
	В первой строке выведите сумму, во второй строке её четверичную запись.
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
 Напишите программу, которая переводит восьмеричное  двузначное число в десятичный вид, а далее в двоичный формат.


 */