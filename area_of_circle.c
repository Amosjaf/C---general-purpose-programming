#include <stdio.h>
#define PI 3.142
/*
 * Author - Araunah Amos
 *
 * Date - 16th Januay, 2023
 *
 * style - betty style
 */

/**
 * main - start of the program execution
 *
 * description - computes area using formular for area of a circle
 *
 * Return: 0 for success
 */

int main(void)
{
	float r, area;

	printf("Please enter the radius of the circle to calculate area\n");
	scanf("%f", &r);
	area = PI * r * r;
	printf("%.2f\n", area);
	return (0);
}
