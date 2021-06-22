//largest and second largest element in an array
#include <stdio.h>

int main()
{
	int size = 0, i = 0, max = 0, max2 = 0;
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
	//Assign the large value to max and second largest to max2 among first two values of array
	if(arr[0>arr[1]])
	{
		max = arr[0];
		max2 = arr[1];
	}
	else
	{
		max = arr[1];
		max2 = arr[0];
	}
	
	for(i=2;i<size;i++)
	{
		if(max>=arr[i])
		{
		}

		else
		{
			max2 = max;
			max = arr[i];
		}
	}
	printf("\nThe largest element is %d\n",max);	
	printf("The second largest element is %d\n",max2);
}
/*Output:
Enter the array size:
5
Enter the array elements:
54
151
6463
3
26
the entered array elements are:54 151 6463 3 26
The largest element is 6463
The second largest element is 54
*/