/* Q. 30. Program to print reverse of a given number
Author : Sohan */
#include <stdio.h>
int main() 
{
	int number, digit, reverse = 0;
	printf("Enter a number : ");
	scanf("%d", &number);
	while (number > 0) 
	{
		digit = number % 10;
		reverse = reverse * 10 + digit;
		number = number / 10;
	}
	printf("%d", reverse);
	return 0;
}