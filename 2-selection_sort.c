#include "sort.h"

/**
* selection_sort -  sorts an array of integers in ascending order using the
* Selection sort algorithm
* @array: list of elements to be sort
* @size: length of array
* Return: Always 0
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, position = 0;
int aux = 0;

for (i = 0; i < size - 1; i++)
	{
	j = i + 1;
	aux = array[i];
	position = i;
	while (j < size)
		{
		if (array[j] < aux)
			{
			aux = array[j];
			position = j;
			}
		j++;
		}
	array[position] = array[i];
	array[i] = aux;
	if (aux != array[position])
		print_array(array, size);
	}
}
