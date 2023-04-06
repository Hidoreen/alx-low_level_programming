#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temporary;

	if (head != NULL)
	{
		/*set head addr to current*/
		current = *head;

		/*iterate through the whole list*/
		/*while setting the current node to temp*/
		while ((temporary = current) != NULL)
		{
			/*set next node to curretnt*/
			current = current->next;
			/*free temp, that is the current node*/
			free(temporary);
		}

		*head = NULL;
	}
}
