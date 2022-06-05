/*======================================================================================================================
 Name        :  Ex8_C_Program_Simple_calculator.c
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Programming => EX_8
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	float num1, num2;
	char op;

	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &op);

	printf("Enter Two operand: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f", &num1, &num2);

	switch (op)
	  {
	    case '+':
	      printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
	      break;
	    case '-':
	      printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
	      break;
	    case '*':
	      printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
	      break;
	    case '/':
	      printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
	      break;

	    default:
	      printf("Error! operator is not correct");
	  }

	return 0;
}


