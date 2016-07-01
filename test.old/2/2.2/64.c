/*
 *
 *
 *
 */

#include <stdio.h>

int main()
{
	int array[2][3] = {1,2,3,4,5,6};
	printf("%d\t%d\t%d\t%d\n", **array, *array, array, (*array) + 1);
	printf("%d\t%d\t%d\t%d\n", **(array + 1), *(array + 1), array + 1, *(*(array + 1) + 1));

}
