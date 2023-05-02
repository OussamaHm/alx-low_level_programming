#include "lists.h"

/*
 * print_list - print elements in a linked list 
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node_cnt = 1;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*if str is NULL return len as 0 and str as (nil)*/
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*go to the next n*/
		h = h->next;

		/*cnt num of n*/
		node_cnt += 1;
	}

	/*print for the last n*/
	printf("[%d] %s\n", h->len, h->str);

	return (node_cnt);
}