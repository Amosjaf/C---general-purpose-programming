/*
 * Author: Amos Araunah
 *
 * Date: 16th January, 2023
 *
 * Description: A program that converts fahrenheit to celsius
 */

#include <stdio.h>
/**
 * main - applies formula for the conversion of fahrenheit to celsius
 *
 * Description: User gives input of temperature in degrees fahreheit
 * the value of which is subsequently converted to celsius and the output
 * is thereafter printed to the screen
 *
 * Return: 0 for success
 */

int main(void)
{
	int fahrenheit;
	float celsius;

	printf("Please enter temperature in fahrenheit\n");
	scanf("%i", &fahrenheit);
	celsius = ((float)fahrenheit - 32) * 5 / 9;
	printf("The temperature in Celsius is %.1f\n", celsius);
	return (0);
}
