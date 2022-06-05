/*======================================================================================================================
 Name        : Ex3_C_Program_To_Get_Max_Num_From_Three_Num.c
 Author      : Hussein Khaled
 Created on	 : Jul 4, 2022
 Description : Unit 2, lesson_3 C-Programming => EX_3
 =====================================================================================================================*/

#include "stdio.h"
#include "string.h"

int main()
{
	float num_1, num_2, num_3;

	printf("Enter Three Numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f", &num_1, &num_2, &num_3);

	if(num_1 > num_2)
	{
		if(num_1 > num_3)
		{
			printf("Largest number = %0.2f", num_1);
		}
		else
		{
			printf("Largest number = %0.2f", num_3);
		}
	}
	else
	{
		if(num_2 > num_3)
		{
			printf("Largest number = %0.2f", num_2);
		}
		else
		{
			printf("Largest number = %0.2f", num_3);
		}
	}
	return 0;
}
