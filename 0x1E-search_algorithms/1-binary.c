#include "search_algos.h"
/**
* binary_search - Perform a binary search on a sorted array of integers.
*
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: The index where the value is located. If not present or if
*                the array is NULL, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}

	printf("Searching in array: ");
	for (i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; ++i)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
