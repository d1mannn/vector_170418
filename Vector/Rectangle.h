#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
	double sideA, sideB;
	class Pointer
	{
	public:
		Pointer() = default;
		Pointer(double x, double y) :x(x), y(y) {}
		double &getX() { return x; } // по ссылке чтобы был изменяемым
		double &getY() { return y; }
		void setXY(double x, double y) {
			this->x = x;
			this->y = y;
		}
	private:
		double x;
		double y;

	} a, b, c, d, center;
public:

	//default construc
	Rectangle() = default;
	//parameter construct
	Rectangle(double xa, double ya, double xb,
		double yb, double xc, double yc, double xd, double yd);
	//Rectangle(double xCenter, double yCenter, double sideA, double sideB);
	//accessors
	double getXA() { return a.getX(); }
	double getYA() { return a.getY(); }
	double getXB() { return b.getX(); }
	double getYB() { return b.getY(); }
	double getXC() { return c.getX(); }
	double getYC() { return c.getY(); }
	double getXD() { return d.getX(); }
	double getYD() { return d.getY(); }

	double getSideA() { return sideA; }
	double getSideB() { return sideB; }
	//methods
	void move(char direction, double value);

	void coordinates(double xCenter, double yCenter, double sideA, double sideB);

	void resize(double X, double Y);
	Rectangle(double xCenter, double yCenter, double sideA, double sideB);
};

// либо class rectangle{ Pointer a, b, c, d;};