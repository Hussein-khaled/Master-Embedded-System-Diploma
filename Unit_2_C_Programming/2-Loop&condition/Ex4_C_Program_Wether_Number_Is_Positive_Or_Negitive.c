/*======================================================================================================================
 Name        : Ex4_C_Program_Wether_Number_Is_Positive_Or_Negitive.c
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Programming => EX_4
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	float num;

	printf("Enter a Numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &num);

	if(num > 0)
	{
		printf("%f is Positive", num);
	}
	else if (num < 0)
	{
		printf("%f is Negative", num);
	}
	else
	{
		printf("You Entered zero");
	}
	return 0;
}
