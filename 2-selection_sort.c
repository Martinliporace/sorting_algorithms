#include "sort.h"

/**
* Description -  sorts an array of integers in ascending order using the
* Selection sort algorithm
* @array: list of elements to be sort
* @size: length of array
* Return: Always 0
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, position;
size_t aux = 0;

for(i = 0; i < size - 1; i++)
{
    position = i;
    for(j = i + 1; j < size; j++)
    {
        if(array[position] > array[j])
            position = j;
    }
    if(position != i)
    {
        aux = array[i];
        array[i] = array[position];
        array[position] = aux;
    }
    print_array(array, size);
}
}