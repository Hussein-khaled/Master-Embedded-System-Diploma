/*======================================================================================================================
 Name        : Ex7_C_Program_to_Swap_Two_numbers_Without_temp
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Progtamming => EX_7
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	int x, y;

	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &y);

	/*First Method*/
//	x = x + y;
//	y = x - y;
//	x = x - y;

	/*Second Method */
	x = x  ^  y;
	y = x  ^  y;
	x = x  ^  y;

	printf("\nAfter swapping, value of a = %d\nAfter swapping, value of b = %d", x, y);
	return 0;
}
