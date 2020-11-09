#include "util.c"
#include <stdlib.h>

#define d data
// Function to insert node in a linked list
void insert(struct Node** root, int item)
{
 
	struct Node *newNode = NULL, *ptr;

	newNode = malloc(sizeof(struct Node));
	if (!newNode)
		return;
	newNode->data = item;
	newNode->next = NULL;

	if (!(*root))
		
	{
		*root = newNode;
		return ;
	}
	
	ptr = *root;
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = newNode;
}

// Function which returns new linked list
struct Node* newList(struct Node* root1, struct Node* root2)
{
	struct Node *head = NULL, *newNode = NULL;
	
	while (root1 || root2)
	{
		if (!root2)
			insert(&head, root1->data);

		if (!root1)
			insert(&head, root2->data);


		if (root1 && root2)
		{
			if (root2->data - root1->data >= 0)
				insert(&head, root2->data);
			else 
				insert(&head, root1->data);
		}
		if (root1)
			root1 = root1->next;

		if (root2)
			root2 = root2->next;
		printf(" =\n" );
	
	}

	return (head);
}


// Driver code
int main()
{
    struct Node *root1 = NULL, *root2 = NULL, *root = NULL;

    // First linked list
    insert(&root1, 5);
    insert(&root1, 2);
    insert(&root1, 3);
    insert(&root1, 8);

    printf(" first List\n");
    printList(root1);

    // Second linked list
    insert(&root2, 7);
    insert(&root2, 1);
    insert(&root2, 4);
    insert(&root2, 5);
    insert(&root2, 5);
    insert(&root2, 5);
    insert(&root2, 7);

    printf(" Second List\n");
    printList(root2);

    root = newList(root1, root2);
    printf(" New List\n");
    printList(root);
    return 0;
}
