#include <stdio.h>
#include <stdlib.h>


void main()
{
	char arr[5];
	printf("    arr = %p\n&arr[0] = %p\n   &arr = %p\n", arr, &arr[0], &arr);
	system("pause");
}