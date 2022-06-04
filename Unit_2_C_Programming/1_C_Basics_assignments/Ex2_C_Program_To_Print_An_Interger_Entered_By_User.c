/*
 ======================================================================================================================
 Name        : Ex2_C_Program_To_Print_An_Interger_Entered_By_User
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Progtamming => EX_2
 ======================================================================================================================
 */
#include "stdio.h"
#include "string.h"

int main()
{
	int num;

	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	printf("you Entered: %d", num);
	return 0;
}
