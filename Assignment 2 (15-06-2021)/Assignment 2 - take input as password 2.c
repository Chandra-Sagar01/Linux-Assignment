//15-06-2021, Assignment 2 - take input as password and display 'x' or '*' instead of characters
#include<stdio.h>
#include<conio.h>

int main()
{
    char str[20]; int i =0;
    printf("Type the password and hit enter:\n");
    
    for(i=0;(str[i]=getch()) != '\r';i++)
    {
    	printf("*");
	}
	str[i] = '\0';
    printf("\nEntered password is %s",str);
}
/*Output:
Type the password and hit enter:
***********
Entered password is abcdefg@123
*/