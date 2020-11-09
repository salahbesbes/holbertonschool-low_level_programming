
#include "util.c"
// Main function that inserts nodes of linked list q into p at  
// alternate positions. Since head of first list never changes  
// and head of second list  may change, we need single pointer 
// for first list and double pointer for second list. 
void merge(struct Node *first, struct Node **head2) 
{
	struct Node *current, *Next1, *next2;

	current = first;
	while (current && *head2)
	{
		// save next 
		Next1 = current->next;
		next2 = (*head2)->next;
		// change the arrow pointer
		current->next = *head2;
		(*head2)->next = Next1;

		// advance the pointer and the header
		*head2 = next2;
		current = Next1;
	}

} 



int main() 
{ 
     struct Node *p = NULL, *q = NULL; 
     push(&p, 3); 
     push(&p, 2); 
     push(&p, 1); 
     printf("First Linked List:\n"); 
     printList(p); 
  
     push(&q, 8); 
     push(&q, 7); 
     push(&q, 6); 
     push(&q, 5); 
     push(&q, 4); 
     printf("Second Linked List:\n"); 
     printList(q); 
  
     merge(p, &q); 
  
     printf("Modified First Linked List:\n"); 
     printList(p); 
  
     printf("Modified Second Linked List:\n"); 
     printList(q); 
     return 0; 
}
