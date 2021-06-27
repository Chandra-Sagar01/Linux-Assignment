//program for string length, string copy and string comparison
#include<stdio.h>

//string length function - calculate and returns string length
size_t strlen(const char *s)
{
	const char *src;
	for(src = s; *src != '\0'; src++);  //untill \0 is detected increment src address
	return (src - s);                    //return (incremented address - src address = value in bytes) which gives string length
}

//string copy function - copies string from source to destination and returns destination address
char *strcpy(char *dest, const char *src)
{
	char *temp = dest;
	while((*dest++ = *src++)!='\0');  //character assignment returns ASCII value of character of src which is being assihned to dest
	return temp;
}

//string compare function - compares both the strings, if same returns 0 
//else the 
int strcmp(const char *cs, const char *ct)
{
	unsigned char c1,c2;
	while(1)
	{
		c1 = *cs++;
		c2 = *ct++;
		if(c1 != c2)
		{
			return c1 < c2 ? -1:1;
		}
		if(!c1)
		{
			break;
		}
	}
	return 0;
}

int main()
{
    char str1[20] = "Hello World!", str2[20];
    printf("str1 length is %d\n",strlen(str1)); 		//prints string length of str1
    
    int *str2_address = (int*)strcpy(str2,str1);
    printf("after copying str2 is %s\n",str2);  		//prints string str2
    printf("str2 address: %u %u\n",str2,str2_address);  //prints string str2 address
    
////////////////////////comparing same strings/////////////////////////////////    
    int ret = strcmp(str1,str2);  
    if (ret == 0)
    printf("str1 and str2 strings are same\n");
    else
    printf("str1 and str2 strings are not same\n");

////////////////////////comparing different strings - return value is 1/////////////////////////////////   
    char str3[5] = "ba", str4[5] = "ab";      
    ret = strcmp(str3,str4);						//in first characters since ASCII value of b>a  1 is returned
    if (ret == 0)
    printf("str2 and str3 strings are same\n");
    else
    printf("str2 and str3 strings are not same\n");
    printf("ret = %d\n",ret);
    
////////////////////////comparing different strings - return value is -1/////////////////////////////////   
    char str5[5] = "ab", str6[5] = "ba"; 
    ret = strcmp(str5,str6);                  //in first characters since ASCII value of a<b   -1 is returned
    if (ret == 0)
    printf("str5 and str6 strings are same\n");
    else
    printf("str5 and str6 strings are not same\n");
    printf("ret = %d\n",ret);
}
/*Output:
str1 length is 12
after copying str2 is Hello World!
str2 address: 6684128 6684128
str1 and str2 strings are same
str2 and str3 strings are not same
ret = 1
str5 and str6 strings are not same
ret = -1
*/