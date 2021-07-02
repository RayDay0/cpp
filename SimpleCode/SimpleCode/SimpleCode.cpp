#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	Human();
	~Human();
	int age;
	int weight;
	string name;

	void Print()
	{
		cout << "Имя:\t" << name << "\nВес:\t" << weight << "\nВозраст:\t" << age << endl;

	}

private:

};
class CoffeeGrinder
{
private:

	bool CheckVoltage()
	{
		return true;
	}

public:
	void Start()
	{
		(CheckVoltage()) ? cout << "OOOPAAA!!" : cout << "Beep Beep";
	}
};

Human::Human()
{
}

Human::~Human()
{
}

class Point
{
public:

	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	int GetY()
	{
		return y;
	}

	void SetY(int valueY) {
		y = valueY;
	}

	int GetX()
	{
		return x;
	}
	
	void SetX(int valueX)
	{
		x = valueX;
	}
	
	void Print()
	{
		cout << "x = " << x << "\t y = " << y << endl << endl;
	}
private:
	int x;
	int y;
};


int main() {
	Point a(5, 44);
	a.Print();



	return 0;
}


