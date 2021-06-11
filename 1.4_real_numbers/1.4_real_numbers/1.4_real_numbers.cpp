﻿#include <iostream>

using namespace std;

int main() {
	double a, b, c, d, e, f, x, y;
	cin >> a >> b >> c >> d >> e >> f;
	y = (a * f - c * e) / (a * d - b * c);
	x = (e - b * y) / a;
	cout << x << " " << y;


	return 0;
}

/*
6. Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений
	ax + by = e,
	cx + dy = f.

  Формат входных данных
	Вводятся шесть чисел - коэффициенты уравнений системы.
  Формат выходных данных
	Вывод программы зависит от вида решения этой системы.
	Если система не имеет решений, то программа должна вывести единственное число 0.
	Если система имеет бесконечно много решений, каждое из которых имеет вид y=kx+n, то программа должна вывести число 1, а затем значения k и n.
	Если система имеет единственное решение (x0, y0), то программа должна вывести число 2, а затем значения x0 и y0.
	Если система имеет бесконечно много решений вида x=x0, y — любое, то программа должна вывести число 3, а затем значение x0.
	Если система имеет бесконечно много решений вида y=y0, x — любое, то программа должна вывести число 4, а затем значение y0.
	Если любая пара чисел (x, y)  является решением, то программа должна вывести число 5.
	Sample 1: 1 0 0 1 3 3 => 2 3 3
	Sample 2: 1 1 2 2 1 2 => 1 -1 1
	Sample 3: 0 2 0 4 1 2 => 4 0.5
	Sample 4: 2 3 4 6 1 2 => 1 -0.666667 0.333333
	Sample 5: 0 1 0 3 5 15 => 4 5
	Sample 6: 1 0 1 0 3 3 => 3 3
	
	
	*/

/*
1. Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. 
	Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
  Формат входных данных
	Программа получает на вход целые числа P, X, Y, K .
  Формат выходных данных
	Программа должна вывести два числа: величину вклада через K лет в рублях и копейках. Дробное число копеек по истечение
	года отбрасывается. Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
  Примечание
	В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.

2. Дан многочлен P(x)=anxn + an−1xn−1+ … + a1x + a0 и число x. Вычислите значение этого многочлена, воспользовавшись схемой Горнера:
	P(x)=(…(((anx + an−1)x + an−2)x + an−3) … )x+ a0
  Формат входных данных
	Сначала программе подается на вход целое неотрицательное число n ≤ 20, затем действительное число x, 
	затем следует n+1 вещественное число — коэффициенты многочлена от старшего к младшему.
  Формат выходных данных
	Программа должна вывести значение многочлена.
	int  n;
	double x, a, res;
	cin >> n >> x >> a;
	res = a;
	while (n != 0)
	{
		cin >> a;
		res = res * x + a;
		--n;
	}
	cout << res;

3. Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
  Формат входных данных
	Вводятся три действительных числа.
  Формат выходных данных
	Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число,
	если нет корней — не выводите ничего.
	int a, b, c;
	double d, x1, x2;
	cin >> a >> b >> c;
	d = sqrt(b * b - 4 * a * c);
	if (d > 0) {
		x1 = (-b + d) / 2 * a;
		x2 = (-b - d) / 2 * a;
		if (x1 > x2) {
			cout << x2 << ' ' << x1;
		}
		else cout << x2 << " " << x2;
	}
	else if (d == 0) cout << (-b / 2 * a);

4. Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений
	a*x + b*y = e
	c*x + d*y = f
	имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.
	double a, b, c, d, e, f, x, y;
	cin >> a >> b >> c >> d >> e >> f;
	y = (a * f - c * e) / (a * d - b * c);
	x = (e - b * y) / a;
	cout << x << " " << y;

*/