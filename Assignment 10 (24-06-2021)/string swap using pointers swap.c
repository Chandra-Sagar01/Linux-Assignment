//String swap using pointers swap
#include<stdio.h>

int string_swap(char **st1, char **st2)
{
	char *temp  = *st1;
	*st1 = *st2;
	*st2 = temp;
}

int main()
{
    char str1[20], str2[20];
    
    printf("Enter string 1: ");
    fgets(str1,sizeof(str1),stdin);
    
    printf("Enter string 2: ");
    fgets(str2,sizeof(str2),stdin);
    
    char *st1 = str1, *st2 = str2;
    printf("\nBefore swapping: ");
    printf("\nstr1 = %sstr2 = %s",st1,st2);
    
    string_swap(&st1,&st2);
    printf("\nAfter swapping: ");
    printf("\nstr1 = %sstr2 = %s",st1,st2);
}
/*Output:
Enter string 1: Hello
Enter string 2: World!

Before swapping:
str1 = Hello
str2 = World!

After swapping:
str1 = World!
str2 = Hello
*/