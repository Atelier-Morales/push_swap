#include <stdio.h>
#include <stdlib.h>

void merge(int *list, int *l, int left, int *r, int right)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while (i < left && j < right)
	{
		if (l[i] < r[j])
			list[k++] = l[i++];
		else
			list[k++] = r[j++];
	}
	while (i < left)
		list[k++] = l[i++];
	while (j < right)
		list[k++] = r[j++];
}

//recursive function to sort array of ints
void merge_sort(int *list, int n)
{
	int mid;
	int i;
	int *l;
	int *r;

	if (n < 2)
		return ;
	
	mid = n/2; //find the mid index

	//create left and right subarrays
	//first mid elements are part of left sub-array
	//last mid elements are part of right sub-array
	
	l = (int *)malloc(sizeof(int) * mid);

	r = (int *)malloc(sizeof(int) * (n -mid));
	
	for (i = 0; i < mid; ++i)
		l[i] = list[i];

	for (i = mid; i < n; ++i)
		r[i - mid] = list[i];

	merge_sort(l, mid);
	merge_sort(r, n - mid);
	merge(list, l, mid, r, n - mid);
	free(l);
	free(r);
}

int	main(int ac, char **av)
{
	int *list;
	int i;
	int len;

	if (ac > 1)
	{
		len = ac - 1;
		list = (int *)malloc(sizeof(int) * (ac - 1));
		for (i = 0; i < len; ++i) 
		{
			list[i] = atoi(av[i + 1]);
			printf("av[%d] = %d\n", i, list[i]);
		}
		printf("number of elements = %d\n", len);
		merge_sort(list, len);
		printf("sorted array :\n");
		for (i = 0; i < len; ++i)
			printf("%d ", list[i]);
		printf("\n");
	}
	return (0);
}
