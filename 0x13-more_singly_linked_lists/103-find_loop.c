#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hippo, *elephant;

	hippo = elephant = head;
	while (hippo && elephant && elephant->next)
	{
		hippo = hippo->next;
		elephant = elephant->next->next;
		if (hippo == elephant)
		{
			hippo = head;
			break;
		}
	}
	if (!hippo || !elephant || !elephant->next)
		return (NULL);
	while (hippo != elephant)
	{
		hippo = hippo->next;
		elephant = elephant->next;
	}
	return (elephant);
}
