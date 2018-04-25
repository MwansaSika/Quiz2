
#include <iostream>//Library


class circle {
private://Only I can change values(Private)
	double radius;
	const double PI = 3.14159;


public: //For everyone to use.
	circle() {
		radius = 0.0;
	}
	circle(double r) {
		setRadius(r);
	}
	void setRadius(double r) {
		radius = r;
	}
	double getRadius() {
		return radius;
	}
	double getArea() {
		return PI * radius*radius;
	}
	double getDiameter() {
		return radius * radius;
	}
	double getCircumference() {
		return 2 * PI * radius;
	}
};

int main()
{
	double r;
	circle mycircle(r);

	cout << "The radius is: ";
	cin >> r; //input an r to be used for calculations
	cout << "The radius of the circle is " << mycircle.getRadius() << endl;
	cout << " the area is: " << mycircle.getArea() << endl;
	cout << " the diameter is: " << mycircle.getDiameter() << endl;
	cout << " the circumference is: " << mycircle.getCircumference() << endl;

	cin.get;
	cin.get;
	return 0;
