/*======================================================================================================================
 Name        : Ex4_C_Program_to_Add_Two_Floating_point_Numbers
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Progtamming => EX_4
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	float x, y;

	printf("Enter Two Numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f%f", &x, &y);
	printf("Product: %f", x*y);
	return 0;
}
