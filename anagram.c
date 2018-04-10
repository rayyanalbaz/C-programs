#include <stdio.h>										
#include <ctype.h>
#define NUM 26								/*defining NUM constant =26*/
int main(void)
{
	
	int first[NUM] = {0};					/*declaring array 'first' with 26 elements all = 0 */
	int i,p,z;								/*initializing some variables to use in loops*/
	char ch;								/*initializing some variables to use in loops*/
	printf("Enter first word:");			/*printing user message*/
	while ((ch = getchar()) != '\n')		/*while loop to get the input from the user char by char until enter is detected*/
	{
		if (isalpha(ch))					/*checking if the element read from user is in the alphabet */
		{
	
			i = tolower(ch);				/*makes sure its lower case */
			i = i - 97;						/*converting the char into the element's index to be saved in the array */
			p = first[i];						
			first[i] = p + 1;				/* everytime the same letter is read it will add 1 to the same postion of the letter*/
		}
	}
	printf("Enter second word:");			/*asking the user to enter second word to compare*/
	while ((ch = getchar()) != '\n')		/*while loop to get the input from the user char by char until enter is detected*/
	{
		if (isalpha(ch) )					/*checking if the element read from user is in the alphabet */
		{
			i = tolower(ch);				/*makes sure its lower case */
			i = i - 97;						/*converting the char into the element's index to be saved in the array */
			p = first[i];
			first[i] = p - 1;				/* everytime the same letter is read it will detuct 1 from the same postion of the letter*/
		}
	}
	for(z= 0; z < NUM; z++)					/*for loop to go through each element in the array */
	{
		if ( first[z] != 0)					/*if they are anagrams the array should only contain 0's if it detects anything else it will orint its not an anagram*/
		{
			printf("The words are not anagrams.\n");
			return 0;
		}
	}
	printf("The words are anagrams.\n");
	return 0;
}

