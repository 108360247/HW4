#include <stdio.h>
#include <stdlib.h>

#define SIZE 100



int linearSearch(const int array[], int key, int size);

void main()
{
	int a[SIZE];
	int x, key, em;
	for (x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}
	printf("Enter integer search key:");
	scanf_s("%d",&key);
	em = linearSearch(a, key, SIZE);
	if (em != -1)
	{
		printf("Found value in element");
	}
	else
	{
		printf("Value not found");
	}
	system("pause");
}

int linearSearch(const int arr[], int key, int size)
{
	int n;
	for (n = 0; n < size; ++n)
	{
		if (arr[n] == key)
		{
			return n;
		}
	}
	return -1;
}