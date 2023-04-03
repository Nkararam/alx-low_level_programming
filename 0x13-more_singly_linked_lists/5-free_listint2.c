#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t linked list and sets the head to NULL
 * @head: pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{

listint_t *newNode;
if (head == NULL)
return;
while (*head != NULL)
{
newNode = *head;
*head = (*head)->next;
free(newNode);
}
*head = NULL;
}
