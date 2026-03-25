#include <iostream>

#include "triangle.h"
#include "rectangular_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"

#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	my_namespace::Triangle triangle(10, 20, 30, 50, 60, 70);
	my_namespace::RectangularTriangle rectTriangle(10, 20, 30, 50, 60);
	my_namespace::IsoscelesTriangle isosTriangle(10, 20, 50, 60);
	my_namespace::EquilateralTriangle eqTriangle(30);

	my_namespace::Quadrangle quad(10, 20, 30, 40, 50, 60, 70, 80);
	my_namespace::Rectangle rectangle(10, 20);
	my_namespace::Square square(20);
	my_namespace::Parallelogram parallelogram(20, 30, 30, 40);
	my_namespace::Rhomb rhomb(30, 30, 40);

	triangle.printInfo(&triangle);
	rectTriangle.printInfo(&rectTriangle);
	isosTriangle.printInfo(&isosTriangle);
	eqTriangle.printInfo(&eqTriangle);

	quad.printInfo(&quad);
	rectangle.printInfo(&rectangle);
	square.printInfo(&square);
	parallelogram.printInfo(&parallelogram);
	rhomb.printInfo(&rhomb);

	return EXIT_SUCCESS;
}