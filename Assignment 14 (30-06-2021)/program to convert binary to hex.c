//program  to convert binary to hex
#include <stdio.h>

int main()
{
	long int binary = 0;
	int hex = 0, i = 1, remainder = 0;
	printf("Enter the binary value: ");
	scanf("%ld",&binary);
	
	while(binary != 0)
	{
		remainder = binary % 10;
		hex =  hex + remainder * i;
		i = i*2;
		binary = binary / 10;
	}
	printf("The hex value is %X",hex);   //%d gives decimal value
}
/*Output1:
Enter the binary value: 11111111
The hex value is FF

Output2:
Enter the binary value: 10100101
The hex value is A5

Output3:
Enter the binary value: 11
The hex value is 3
*/