/*======================================================================================================================
 Name        : Ex7_C_Program_Factorial_Of_Number.c
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Programming => EX_7
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	int num, fact = 1, i;

	printf("Enter an Integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);

	if(num > 0)
	{
		for(i = 2; i <= num; i++)
		{
			fact *= i;
		}
		printf("Factorial = %d", fact);
	}
	else
	{
		printf("Error!!! Factorial of Negative Number doesn't exist");
	}
	return 0;
}
