#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t linked list and sets the head to NULL
 * @head: pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{

listint_t *temp, *newNode;
if (head == NULL)
return;
newNode = *head;
while (newNode != NULL)
{
temp = newNode;
newNode = newNode->next;
free(temp);
}
*head = NULL;
}
