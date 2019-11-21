#include <stdio.h>
#include <stdlib.h>


void main()
{
	int a[10] = { 1,8,5,6,4,3,7,9,2,10 };
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] >= a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}

		printf("Step ");
		if (10 - i < 10)
		{
			printf(" ");
		}
		printf("%d:{", (10 - i));
		for (int i = 0; i < 10; i++)
		{
			printf("%d",a[i]);
			if (i < 9)
			{
				printf(",");
			}
		}
		printf( "}");
	}
	system("pause");
}