#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers
 * @array: integer pointer
 * @size: list
 * Return: no return
 * **/

void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}

/*
 * qs - auxiliar function
 * @a: input array
 * @low: index for 1er element
 * @high: index for last element
 * @size: size of the array
 * Return: no return
 * **/

void qs(int *a, int low, int high, int size)
{
	int p, w, i;
	int tmp;

	if (low < high)
	{
		p = high;
		w = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[p])
			{
				if (i != w)
				{
					tmp = a[i];
					a[i] = a[w];
					a[w] = tmp;
					print_array(a, size);
				}
				w++;
			}
		}
		if (w != p && a[w] != a[p])
		{
			tmp = a[w];
			a[w] = a[p];
			a[p] = tmp;
			print_array(a, size);
		}
		qs(a, low, w - 1, size);
		qs(a, w + 1, high, size);
	}
}
