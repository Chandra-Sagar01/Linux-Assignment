//linked list- insert node at given position
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

void insert_front(int item)
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

void insert_at_pos_n(int pos, int item)
{
	if(pos == 1)
	{
		insert_front(item);
		return;
	}
	int i = 0;
	NODE temp = (NODE)malloc(1*sizeof(struct node));
	if(temp == NULL)
	{
		printf("Memory not allocated!!");
		exit(1);
	}
	temp->data = item;
	if(pos == 1)
	{
		temp->link = head;
		head = temp;
		return;
	}
	traverse = head;
	for(i = 0; i < (pos-2); i++)
	{
		traverse = traverse->link;
	}
	temp->link = traverse->link;
	traverse->link = temp;
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
	display();
	
	printf("\n\nEnter the data you want to insert: ");
    scanf("%d",&data);
    printf("Enter the position at which you want to insert the nodes: ");
    scanf("%d",&pos);
    if(pos != 0 && pos <= n)
    {
        insert_at_pos_n(pos,data);
        display();
    }
    else 
    { 
        printf("Invalid position"); 
    	
    }
}
/*Output1:
Enter the number of nodes: 1
Enter the data for the nodes:
1
Created list: 1

Enter the data you want to insert: 20
Enter the position at which you want to insert the nodes: 1
Created list: 20 1
////////////////////////////////////////////////////////////////////////////////////////////////
Output2:
Enter the number of nodes: 0
Number of nodes cannot be 0, try again!!
Enter the number of nodes: 1
Enter the data for the nodes:
1
Created list: 1

Enter the data you want to insert: 20
Enter the position at which you want to insert the nodes: 0
Invalid position

////////////////////////////////////////////////////////////////////////////////////////////////
Output3:
Enter the number of nodes: 5
Enter the data for the nodes:
1
2
3
4
5
Created list: 5 4 3 2 1

Enter the data you want to insert: 0
Enter the position at which you want to insert the nodes: 6
Invalid position

////////////////////////////////////////////////////////////////////////////////////////////////
Output3:
Enter the number of nodes: 5
Enter the data for the nodes:
1
2
3
4
5
Created list: 5 4 3 2 1

Enter the data you want to insert: 100
Enter the position at which you want to insert the nodes: 3
Created list: 5 4 100 3 2 1
*/