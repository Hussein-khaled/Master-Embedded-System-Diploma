/*======================================================================================================================
 Name        : Ex6_C_Program_To_Calculate_Sum_Of_Netural_Numbers.c
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Programming => EX_6
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	int num, sum = 0, i;
	printf("Enter An Integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);

	for(i = 1; i < num; i++)
	{
		sum += i;
	}

	printf("Sum = %d", sum);
	return 0;
}
