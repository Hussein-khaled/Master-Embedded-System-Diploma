/*======================================================================================================================
 Name        : Ex3_C_Program_to_Add_Two_Integers
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Progtamming => EX_3
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	int num_1, num_2;

	printf("Enter two Integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d", &num_1, &num_2);
	printf("Sum: %d", num_1+num_2);
	return 0;
}
