//mem copy operation with void pointers
#include<stdio.h>

void *memcpy(void *dest, const void *src, size_t count)
{
	char *tmp = dest;
	const char *s = src;

	while (count--)
		*tmp++ = *s++;
	return dest;
}

int main()
{
	char str1[20], str2[20];
	int len = 0;
	
	printf("Enter string 1:");
	fgets(str1,sizeof(str1),stdin);  //to read string with space
	printf("str1 is %s",str1);
	
	for(len = 0;str1[len];len++);
	printf("string length is %d\n",len);
	
	//transfer string 1 to string 2
	memcpy(str2,str1,len);
	printf("str2 is %s",str2);
}
/*Output1:
Enter string 1:Hello World!
str1 is Hello World!
string length is 13
str2 is Hello World!

Output2:
Enter string 1:123456789
str1 is 123456789
string length is 10
str2 is 123456789
*/