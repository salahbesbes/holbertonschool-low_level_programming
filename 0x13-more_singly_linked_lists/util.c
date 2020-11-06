// C program to merge a linked list into another at 
// alternate positions 
#include <stdio.h> 
#include <stdlib.h> 
  
// A nexted list node 
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
  
/* Function to insert a node at the beginning */
void push(struct Node ** head_ref, int new_data) 
{ 
    struct Node* new_node =  
           (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)  = new_node; 
} 
  
/* Utility function to print a singly linked list */
void printList(struct Node *head) 
{ 
    struct Node *temp = head; 
    while (temp != NULL) 
    { 
        printf("%d ", temp->data); 
        temp = temp->next; 
    } 
    printf("\n"); 
}



// Driver program to test above functions 
void displayList(struct Node* node) 
{ 
    struct Node* start = node; 
  
    while (node->next != start) { 
        printf("%d ", node->data); 
        node = node->next; 
    } 
      
    // Display the last node of circular  
    // linked list. 
    printf("%d ", node->data); 
}
