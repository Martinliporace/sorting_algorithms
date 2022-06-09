#include "sort.h"

/**
* Description -  sorts an array of integers in ascending order using the
* Bubble sort algorithm
* @array: list of elements to be sort
* @size: length of array
* Return: Always 0
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *head, *i, *j, *temp;

    i = malloc(sizeof(*list));

    if(i == NULL)
        return;

    head = malloc(sizeof(*list));

    if(head == NULL)
        return;
    
    head->prev = NULL;

    for(i = head; i->next != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            temp = j;
            j = i;
            i = temp;
        }
        print_list(*list);
    }
}