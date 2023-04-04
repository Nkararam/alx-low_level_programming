#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{

int i;

listint_t *temp, *newnode;

if (*head == NULL)
{
return (0);
}
temp = newnode = *head;
if (*head)
{
i = newnode->n;
*head = newnode->next;
free(temp);
}
return (i);
}
