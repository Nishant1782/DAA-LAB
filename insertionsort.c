// C program for insertion sort
#include <math.h>
#include <stdio.h>
int count = 0;
/* Function to sort an array
using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
  count++;
	for (i = 1; i < n; i++)
	{
    count++;
		key = arr[i];
    count++;
		j = i - 1;
    count++;

		/* Move elements of arr[0..i-1],
		that are greater than key,
		to one position ahead of
		their current position */
    count++;
		while (j >= 0 && arr[j] > key)
		{
      count++;
			arr[j + 1] = arr[j];
      count++;
			j = j - 1;
      count++;
      count++;
		}
    count++;
		arr[j + 1] = key;
    count++;
    count++;
	}
  count++;
}

// A utility function to print
// an array of size n
void printArray(int arr[], int n)
{
	int i;
  count++;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
  count++;
  count++;
  count++;
  count++;
  
}

// Driver code
int main()
{
	int arr[] = {12, 11, 13, 5, 6};
  count++;
	int n = sizeof(arr) / sizeof(arr[0]);
count++;
	insertionSort(arr, n);
  count++;
	printArray(arr, n);
  prinf("\n%d",count)

	return 0;
}
