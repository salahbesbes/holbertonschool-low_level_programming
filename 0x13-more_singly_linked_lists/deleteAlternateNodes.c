#include "util.c"
#include <stdlib.h>


/* deletes alternate nodes of a list starting with head */
void deleteAlt(struct Node *head)
{
	struct Node *current, *Next, *Prev;
/*
	if (!head->next)
		return;
*/
	Prev = head;
	Next = head->next;

	while (Next && Prev)
	{
		Prev->next = Next->next;
		free(Next);
		Prev = Prev->next;
		if (Prev)
			Next = Prev->next;
	}
}

/* Driver program to test above functions */
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    /* Using push() to construct below list
      1->2->3->4->5  */
    push(&head, 5);

    printf("\nList before calling deleteAlt() \n");
    printList(head);

    deleteAlt(head);

    printf("\nList after calling deleteAlt() \n");
    printList(head);

    return 0;
}
