//maximum sum of a contiguous subarray
#include <stdio.h>

int main()
{
	int size = 0, i = 0, sum = 0, max_sum = 0;
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
	
	for(i = 0;i<size;i++)
	{
		sum = sum + arr[i];
		sum = (sum>arr[i]) ? sum:arr[i];   //suppose sum value is -ve and arr[i] value is +ve, update sum with the +ve value
		max_sum = ((max_sum>=sum) ? max_sum:sum);
	}

	printf("\nMaximum sum of subarray is %d ",max_sum);
}
/*Output1:
Enter the array size:
5
Enter the array elements:
-1
-2
3
-1
2
the entered array elements are:-1 -2 3 -1 2
Maximum sum of subarray is 4

Output2:
Enter the array size:
6
Enter the array elements:
-10
2
2
-4
6
4
the entered array elements are:-10 2 2 -4 6 4
Maximum sum of subarray is 10
*/
