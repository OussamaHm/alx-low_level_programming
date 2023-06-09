#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first n
 *
 * Return: Number of ns
*/

size_t print_list(const list_t *h)
{
	size_t n_c = 1;

	/*return 0 as number of ns*/
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
		/*count number of ns*/
		n_c += 1;
	}

	/*print for the last n*/
	printf("[%d] %s\n", h->len, h->str);

	return (n_c);
}
