#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: points to the node of the list
 */
void free_listint(listint_t *head)
{
listint_t  *temp, *next;
temp = head;
while (temp != NULL)
{
next = temp->next;
free(temp);
temp = next;
}
}
