#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @idx: index location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *newnode;
listint_t *temp = *head;
if (head == NULL)
return (NULL);
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (idx == 0)
{
newnode->next = *head;
*head = newnode;
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
newnode->next = temp->next;
temp->next = newnode;
return (newnode);
}
else
temp = temp->next;
}
return (NULL);
}
