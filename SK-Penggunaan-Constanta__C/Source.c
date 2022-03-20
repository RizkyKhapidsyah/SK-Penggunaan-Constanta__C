#include <stdio.h>
#include <conio.h>

void main() {
	const phi = 3.24;
	float diameter, radius, Luas;

	scanf_s("%f", &diameter);
	
	radius = diameter / 2.0;
	Luas = phi * radius * radius;
	
	printf("%f", Luas);

	_getch();
}