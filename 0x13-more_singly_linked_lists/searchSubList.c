#include "util.c"
#include <stdlib.h>





// Returns true if subList list is present in list 
// list 
int findList(struct Node* subList, struct Node* list) 
{

	struct Node *current, *copyList, *nodes;
	int found = 0;
	nodes= subList;
	while (list)
	{
		copyList = list;
		while (nodes)
		{
			if (!copyList)
				return (0);
			else if (copyList->data == nodes->data)
			{
				copyList = copyList->next;
				nodes = nodes->next;
			}
			else 
				break;
		}
		if (!nodes)
			return(1);
		nodes = subList;
		list = list->next;
	}
	return (0);
}

// Function to add new node to linked lists 
struct Node *newNode(int key) 
{ 
    struct Node *temp = NULL; 
    temp = malloc(sizeof(struct Node));
    temp->data = key; 
    temp->next = NULL; 
    return temp; 
} 



/* Driver program to test above functions*/
int main()
{
    /* Let us create two linked lists to test
    the above functions. Created lists shall be
        a: 1->2->3->4
        b: 1->2->1->2->3->4*/
    struct Node *sub = newNode(1);
    sub->next = newNode(2);
    sub->next->next = newNode(3);
    sub->next->next->next = newNode(4);
    sub->next->next->next->next = newNode(4);
    sub->next->next->next->next->next = newNode(4);

    struct Node *list = newNode(1);
    list->next = newNode(2);
    list->next->next = newNode(1);
    list->next->next->next = newNode(2);
    list->next->next->next->next = newNode(3);
    list->next->next->next->next->next = newNode(4);
    list->next->next->next->next->next->next = newNode(4);
    list->next->next->next->next->next->next->next = newNode(4);
    printf(" subList ");
    printList(sub);
    printf(" Ori List ");
    printList(list);
    /*
*/
    findList(sub,list) ? printf("LIST FOUND\n") :
                    printf("LIST NOT FOUND\n");;

    return 0;
}
