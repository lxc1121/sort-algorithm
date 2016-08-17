#include <stdio.h>

/*insert arr[j] at position i;
 * */
void insert(int arr[50],int i,int j)
{
	int temp = arr[j];
	while(k>j)
	{
		arr[k] = arr[k-1];
		k--;
	}
	arr[k] = temp;
}

void merge(int arr[50], int l, int h)
{
	int mid =(l+h)/2;
	int i=l,j=mid+1;
	while(i <= mid && j <= h)
	{
		if (arr[i] > arr[j])
		{
			insert(arr,i,j)
			mid += 1;
			j++;
		}
		i++;

	}
}
void mergesort(int arr[50], int l, int h)
{
	int mid = (l+h)/2;
	if (l < h)
	{
		mergesort(arr, l, mid);
		mergesort(arr, mid+1, h);
		merge(arr, l, h);
	}
}
void main()
{
	int i;
	int test[11] = {1,12,10,3,9,5,7,2,4,6,8};
	mergesort(test,0,10);
//	merge(test,0,7);
	for (i = 0; i < 11; i++)
		printf("%d  ",test[i]);
	printf("\n");
}
