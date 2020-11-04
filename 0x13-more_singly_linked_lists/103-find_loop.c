#include "lists.h"



/**
* find_listint_loop - check if ther is a loop in a list
* @head: header pointer
*
* Return: pointer to the header
*/

listint_t *find_listint_loop(listint_t *head)
{

	listint_t *slower, *faster;

	slower = head;
	faster = head->next;

	if (!head)
		return (NULL);
	while (1)
	{
		if (!faster || !faster->next)
			return (NULL);
		else if (faster == slower || faster->next == slower)
			return (slower);
		slower = slower->next;
		faster = faster->next->next;
	}
}
