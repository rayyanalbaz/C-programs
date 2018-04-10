#include <stdio.h>

#define MAX 80										/*defining MAX as a constant = 80 */
int main(void)
	{
		
		char  encrypted[80];							/*initializing the array to save the input in it */
		int x=0,y=0,z,ch;								/*initializing some variables to use in loops*/
		
	
		printf("Enter message to be encrypted:");		/*prinintg a message to the user */

		for(x=0; (ch = getchar()) != '\n';x++)			/*for loop to read in the word to be encrypted*/
		{
		encrypted[x]= ch;								/*adding the word char by char to the array*/
		}

		printf("Enter shift amount (1-25):");			/*asking the user to rnter the shift amount */
		scanf("%d", &y);								/*saving shift amount into y*/


		printf("Encrypted message:");					/*printing "encrypted message"*/
		for (z = 0; z < x; z++)							/*for loop to go through each elment in the array */
		{
			char c = encrypted[z];						/*saving each element into c once*/	

			if (encrypted[z] >= 'a' && encrypted[z] <= 'z')		/*checking if the element is a within the lower case in the ASSCI numbers*/
			
			{
				c = ((c - 'a') + y) % 26 + 'a';					/*shifting the letter given the amount of the shift */
			}else if (encrypted[z] >= 'A' && encrypted[z] <= 'Z')		/*checking if the element is within the uppercase range in the ASSCI numbers*/
			{
				c = ((c - 'A') + y) % 26 + 'A';					/*shiting the element with the given amount of shift and it wraps around if its not in range */
			}
			printf("%c", c);										/*printing the encrypted message*/
		}
		printf("\n");								/*print new line */
		return 0;								/*terminates */

		
		
    
	}
