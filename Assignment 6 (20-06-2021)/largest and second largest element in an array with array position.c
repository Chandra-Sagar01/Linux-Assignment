//largest and second largest element in an array with array position
#include <stdio.h>

int main()
{
	int size = 0, i = 0, max = 0, max2 = 0, pos = 0, pos2 = 0;
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
	//get the largest number and it's position
	max = arr[0];
	for(i=1;i<size;i++)
	{
		if(max>=arr[i])
		{
		}
		else
		{
			max = arr[i];
			pos  = i;
		}
	}
	printf("\nThe largest element is %d and its array position is %d\n",max,pos);
	
	//if the first number is largest then take the 2nd element as max2
	//assign i = 0 to begin with 
	if(pos == 0)
	{
		max2 = arr[1];
		i = 0;
		pos2 = 1;
	}
	//if the largest value is in some other position then take the 1st element as max2
	//assihn i =1 to begin with 
	else
	{
		max2 = arr[0];
		i = 1;
	}
	//get the second largest number and it's position
	for(;i<size;i++)
	{
		if(i == pos)
		{
			continue;
		}
		else
		{
			if(max2>=arr[i])
			{
			}
			else
			{
			max2 = arr[i];
			pos2  = i;
			}
		}
		
	}
	printf("The second largest element is %d and its array position is %d\n",max2,pos2);
}
/*Output:
Enter the array size:
5
Enter the array elements:
515
6
622
65
262
the entered array elements are:515 6 622 65 262
The largest element is 622 and its array position is 2
The second largest element is 515 and its array position is 0
*/