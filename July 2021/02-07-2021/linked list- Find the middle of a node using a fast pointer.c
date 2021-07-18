//linked list- Find the middle of a node using a fast pointer
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

int find_middle_node()
{
	NODE slow_ptr = head, fast_ptr = head;
	int node_count = 0;
	while(fast_ptr != NULL && fast_ptr->link != NULL)
	{
		slow_ptr = slow_ptr->link;
		fast_ptr = fast_ptr->link->link;
		node_count++;
	}
	if(node_count ==0)  //if only one node was created
	{
		printf("\nOnly one node exists, hence middle node value cannot be found in this case");
		exit(1);
	}
	return slow_ptr->data;
}

void display()
{
	traverse = head;
	printf("List: ");
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
	
	printf("\n\nThe middle node value is %d",find_middle_node());
    
}
/*Output1:
Enter the number of nodes: 3
Enter the data for the nodes:
1
2
3
List: 3 2 1

The middle node value is 2
////////////////////////////////////////////////////////////////////////////////////////////////
Output2:
Enter the number of nodes: 1
Enter the data for the nodes:
2
List: 2
Only one node exists, hence middle node value cannot be found in this case

////////////////////////////////////////////////////////////////////////////////////////////////
Output3:
Enter the number of nodes: 0
Number of nodes cannot be 0, try again!!
Enter the number of nodes: 1
Enter the data for the nodes:
1
List: 1
Only one node exists, hence middle node value cannot be found in this case

Output4:
Enter the number of nodes: 2
Enter the data for the nodes:
10
20
List: 20 10

The middle node value is 10
*/