/*======================================================================================================================
 Name        : Ex5_C_Program_to_print_ASCII_for_Character
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Progtamming => EX_5
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	char c;

	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of G = %d", c);
	return 0;
}
