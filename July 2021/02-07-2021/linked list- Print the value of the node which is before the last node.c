//linked list- Print the value of the node which is before the last node
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

typedef struct node* NODE;
NODE head = NULL;
NODE traverse = NULL;

void insert_front(int item)   //function for inserting node at front
{
	NODE temp = (NODE)malloc(1*sizeof(struct node));
	if(temp == NULL)
	{
		printf("Memory not allocated!!");
		exit(1);
	}
	temp->data = item;
	temp->link = head;
	head = temp;
}

int find_before_last_node()
{
	NODE ptr = head;
	int node_count = 0, i =0;
	while(ptr != NULL)
	{
		ptr = ptr->link;
		node_count++;    //gives number of nodes
	}
	
	if(node_count == 1)  //if only one node was created
	{
		printf("\nOnly one node exists, hence before last node value cannot be found in this case");
		exit(1);
	}
	ptr = head;
	for(i = 1; i< node_count-1; i++)
	{
		ptr = ptr->link;
	}
	return ptr->data;
}

void display()
{
	traverse = head;
	printf("Created list: ");
	while(traverse != NULL)
	{
		printf("%d ",traverse->data);
		traverse = traverse->link;
	}
}
int main()
{
	int i = 0, n = 0, pos = 0, data = 0;
    while(n == 0)          //if the number of nodes entered is 0, ask user to re-enter
    {
    	printf("Enter the number of nodes: ");
    	scanf("%d",&n);
    	if(n == 0)
    	{
    		printf("Number of nodes cannot be 0, try again!!\n");
		}
	}
    printf("Enter the data for the nodes: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        insert_front(data);
    }
	display();   //display the linked list
	
	printf("\n\nThe before last node value is %d",find_before_last_node());
    
}
/*Output1:
Enter the number of nodes: 5
Enter the data for the nodes:
1
2
3
4
5
Created list: 5 4 3 2 1

The before last node value is 2
////////////////////////////////////////////////////////////////////////////////////////////////
Output2:
Enter the number of nodes: 5
Enter the data for the nodes:
1
2
3
4
5
Created list: 5 4 3 2 1

The before last node value is 2

////////////////////////////////////////////////////////////////////////////////////////////////
Output3:
Enter the number of nodes: 0
Number of nodes cannot be 0, try again!!
Enter the number of nodes: 1
Enter the data for the nodes:
10
Created list: 10
Only one node exists, hence before last node value cannot be found in this case
*/