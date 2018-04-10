#include <stdio.h>															/*input output library*/
int main(void)																/*main function*/
{
	int  row , num , spacea, stara , starb , spaceb , x = -1, last;			/*declaring variables*/
	printf("Enter the number of rows in the triangle:");										/*asking the user for number of rows in the triangle*/
	scanf("%d", &num);														/*saving the inpputed number in num*/
	if ((num > 20) || (num < 1)	)											/*if statement to check if the input is within the limit */
	{
		printf("The input must be between (1-20) inclusive");	  			/*printing the error message*/
	}
	else
	{															
		for (row = 1; row <= num - 1; row++)								/*for loop to go throw each row*/
		{
			for ( spacea = (num - row ); spacea >= 1; spacea--)				/*for loop to print the spaces for it to be an Equilateral triangle*/
			{														
				printf(" ");												/*printing the spaces */
			}
			printf("*");													/*printing the first star */
			for (spaceb = (row + x) - 1; spaceb >= 1 ; spaceb--)			/*for loop for printing the spaces inside the triangle*/	
			{
				printf(" ");												/*printing the spaces*/
			}
			x++;														
			if (row > 1)
			{
				printf("*");												/*printing the star after the spaces in the middle*/
			}
			printf("\n");													/*starting a new line which is a new row */
		}
		for (last = (num * 2) - 1 ; last >= 1; last--)						/*for loop to print the last row */
		{
			printf("*");													/*printing the last row*/
		}
	}
	printf("\n");
}

