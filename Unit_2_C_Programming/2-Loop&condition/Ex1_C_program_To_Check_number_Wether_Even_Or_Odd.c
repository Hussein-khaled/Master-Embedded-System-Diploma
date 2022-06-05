/*======================================================================================================================
 Name        : Ex1_C_Program_Check_Number_Wether_Even_Or_Odd
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Programming => EX_1
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	int num;
	printf("Enter An Integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);

	if(num%2 == 0)
	{
		printf("%d is Even", num);
	}
	else
	{
		printf("%d is Odd", num);
	}
	return 0;
}
