//string swap by swapping the data

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Swaps strings by swapping data*/
void swap_string(char *str1, char *str2)
{
char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
strcpy(temp, str1);
strcpy(str1, str2);
strcpy(str2, temp);
free(temp);
}

int main()
{
	char str1[20], str2[20];
    
  	printf("Enter string 1: ");
    fgets(str1,sizeof(str1),stdin);
    
    printf("Enter string 2: ");
    fgets(str2,sizeof(str2),stdin);
    
	swap_string(str1, str2);
	printf("str1 is %sstr2 is %s", str1, str2);
	return 0;
}
/*Output:
Enter string 1: Hello
Enter string 2: World!
str1 is World!
str2 is Hello
*/