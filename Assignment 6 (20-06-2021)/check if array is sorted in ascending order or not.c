//to check if array is sorted in ascending order or not
#include <stdio.h>

int main()
{
	int size = 0, i = 0, flag = 1;
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
	
	for(i = 0;i<(size-1);i++)
	{
		if(arr[i]<=arr[i+1])
		{
			flag = 0;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nThe array is not sorted in ascending order\n");
	}
	else
	{
		printf("\nThe array is sorted in ascending order\n");
	}
}
/*Output1:
Enter the array size:
5
Enter the array elements:
-2
-1
0
5
9
the entered array elements are:-2 -1 0 5 9
The array is sorted in ascending order

Output2:
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
*/