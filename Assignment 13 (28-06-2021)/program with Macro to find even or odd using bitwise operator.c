//program with Macro to find even or odd using bitwise operator
#include<stdio.h>
#define ODD_OR_EVEN(num) (num & 1)// or #define ODD_OR_EVEN(num) (num & (1<<0))


int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(ODD_OR_EVEN(num))
	{
		printf("%d is odd number",num);
	}
	else
	{
		printf("%d is even number",num);
	}
}
/*Output1:
Enter a number: 7
7 is odd number
  
Output2:
Enter a number: 1254654156
1254654156 is even number

Output3:
Enter a number: 0
0 is even number

Output4:
Enter a number: 1
1 is odd number
*/