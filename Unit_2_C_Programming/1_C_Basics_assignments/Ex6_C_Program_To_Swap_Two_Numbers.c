/*======================================================================================================================
 Name        : Ex6_C_Program_to_Swap_Two_numbers
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Progtamming => EX_6
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	float x, y, temp;

	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &x);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &y);

	temp = x;
	x = y;
	y = temp;

	printf("\nAfter swapping, value of a = %0.2f\nAfter swapping, value of b = %0.2f", x, y);
	return 0;
}
