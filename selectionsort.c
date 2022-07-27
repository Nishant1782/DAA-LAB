// C program for implementation of selection sort
#include <stdio.h>
int count = 0;
void swap(int *xp, int *yp)
{
	int temp = *xp;
	count++;
	*xp = *yp; count++;
	*yp = temp;count++;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	count++;
	for (i = 0; i < n-1; i++)
	{
	    count++;
		// Find the minimum element in unsorted array
		min_idx = i;
		count++;
		count++;
		for (j = i+1; j < n; j++)
		{
		    		count++;

		    if (arr[j] < arr[min_idx])
			min_idx = j;
					count++;

		}
				count++;

		

		// Swap the found minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
				count++;

	}
			count++;

}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int arr[] = {64, 25, 12, 22, 11,29,10,99,109};
			count++;

	int n = sizeof(arr)/sizeof(arr[0]);
			count++;

	selectionSort(arr, n);
			count++;

	printf("Sorted array: \n");
	printArray(arr, n);
		printf("%d",count);

	return 0;
}
