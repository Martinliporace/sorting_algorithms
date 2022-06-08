#include "sort.h"

/**
* Description -  sorts an array of integers in ascending order using the
* Bubble sort algorithm
* @array: list of elements to be sort
* @size: length of array
* Return: Always 0
*/

void bubble_sort(int *array, size_t size)

{
size_t i, j;
size_t aux = 0;

for (i = 1; i < size; i++)
	{
	for (j = 0; j < size - i ; j++)
		{
		if (array[j] > array[j + 1])
		{
			aux = array[j];
			array[j] = array[j + 1];
			array[j + 1] = aux;
			print_array(array, size);
		}
	}
}
}
