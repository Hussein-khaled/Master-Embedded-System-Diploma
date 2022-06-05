/*======================================================================================================================
 Name        : Ex2_C_Program_Check_alpha_is_Vowel_or_consonant
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Programming => EX_2
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	char c;
	printf("Enter An Alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &c);

	switch(c)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
		printf("%c is a vowel.", c);
		break;
	default:
		printf("%c is a consonant.", c);
		break;
	}
	return 0;
}
