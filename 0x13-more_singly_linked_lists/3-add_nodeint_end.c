#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add new nodes to the end of the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *temp;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
return (*head);
}
temp = *head;
while (temp->next != 0)
{
temp = temp->next;
}
temp->next = newNode;
return (newNode);
}
