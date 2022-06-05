/*======================================================================================================================
 Name        : Ex5_C_Program_To_Check_Whether_Alphabet_Or_Not
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Programming => EX_5
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	char c;
	printf("Enter A Character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &c);

	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
	{
		printf("%c is an Alphabet", c);
	}
	else
	{
		printf("%c is not an Alphabet", c);
	}

	return 0;
}
