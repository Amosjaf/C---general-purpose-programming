/*
 * Author: Araunah Amos
 *
 * Date: 16th January, 2023
 *
 * Description: Computes time in seconds
 */

#include <stdio.h>
/**
 * main - Function to calculate time in seconds
 *
 * Description: Converts hours and minutes to seconds and gives output
 * of time in seconds
 *
 * Return: 0 for success
 */

int main(void)
{
	int hours, minutes, seconds, time_in_seconds;

	printf("Enter time in h:m:s format\n");
	scanf("%i:%i:%i", &hours, &minutes, &seconds);
	time_in_seconds = (hours * 3600) + (minutes * 60) + seconds;
	printf("The time in seconds is %i\n", time_in_seconds);
	return (0);
}
