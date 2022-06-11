#include "sort.h"

/**
* insertion_sort_list -  sorts an array of integers in ascending order using
* the insertion sort algorithm
* @list: list of elements to be sort
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (*list == NULL)
		return;

	j = *list;

	while (j)
	{
		i = j->next;
		while (j->prev && j->n < j->prev->n)
		{
			j->prev->next = j->next; /*i next a k*/
			if (j->next)
				j->next->prev = j->prev; /*k prev a i*/
			j->next = j->prev;/*j next a i*/
			j->prev = j->prev->prev; /*j prev a h*/
			if (j->prev)
				j->prev->next = j;/*h next a j*/
			j->next->prev = j; /*i prev a j*/

			if (!j->prev)
				*list = j;
			print_list(*list);
		}
		j = i;
	}
}
