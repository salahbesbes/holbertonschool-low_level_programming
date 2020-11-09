#include "util.c"
struct Node* circular(struct Node* head)
{
	struct Node *current = head;

	while (current->next)
		current = current->next;
	current->next = head;
	return (head);
}
 
int main() 
{ 

 // Start with empty list 
    struct Node* head = NULL; 
  
    // Using push() function to construct 
    // singly linked list 
    // 17->22->13->14->15 
    push(&head, 15); 
    push(&head, 14); 
    push(&head, 13); 
    push(&head, 22); 
    push(&head, 17); 
  
    // Call the circular_list function that  
    // convert singly linked list to circular 
    // linked list. 
    circular(head); 
  
    printf("Display list: \n"); 
    displayList(head); 

     return 0; 
} 
