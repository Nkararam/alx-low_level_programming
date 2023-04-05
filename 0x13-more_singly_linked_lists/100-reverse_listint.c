#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *nextnode;
listint_t *prevnode;
listint_t *currentnode;
prevnode = NULL;
currentnode = nextnode = *head;
while (nextnode != NULL)
{
nextnode = nextnode->next;
currentnode->next = prevnode;
prevnode = currentnode;
currentnode = nextnode;
}
*head = prevnode;
return (*head);
}
