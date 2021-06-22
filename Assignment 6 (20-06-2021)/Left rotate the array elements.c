//Left rotate the array elements upto user's choice of rotation count
#include <stdio.h>

int main()
{
	int size = 0, i = 0, temp = 0, num = 0;
	printf("Enter the array size:\n");
	scanf("%d",&size);
	int arr[size] ;
	printf("Enter the array elements:\n");
	for(i = 0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the entered array elements are:");
	for(i = 0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nenter the number of rotations to be performed:\n");
	scanf("%d",&num);
	
while(num != 0)
{
	for(i = 0;i<size;i++)
	{
		if(i == 0)
		{
			temp = arr[0];
		}
		
		if(i == (size-1))
		{
			arr[i] = temp;
		}
		else
		{
			arr[i] = arr[i+1];
		}
	}
	num--;
}
	printf("\nthe rotated array elements are:");
	for(i = 0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
}
/*Output1:
Enter the array size:
5
Enter the array elements:
-8
0
4
3
9
the entered array elements are:-8 0 4 3 9
The array is not sorted in ascending order

Output2:
Enter the array size:
5
Enter the array elements:
5
4
3
2
1
the entered array elements are:5 4 3 2 1
enter the number of rotations to be performed:
1

the rotated array elements are:4 3 2 1 5
*/
