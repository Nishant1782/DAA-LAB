#include<stdio.h>
#include<stdlib.h>
int count = 0;

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(int arr[],int n)
{
    int i, j;
    count++; // i init
    for (i = 0; i < n - 1; i++)
    {
        count++; // condition check
        count++; // j init
        for (j = 0; j < n - i - 1; j++)
        {
            count++; // condition check
            count++; // if condition
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                count++; //funtion call
            }
            count++; // increment j
        }
        count++; // false condition
        count++; // increment i
    }
    count++; // false condition
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    printf("Enter number of elements to sort:");
    int n;
    scanf("%d",&n);
    int arr[50];
    printf("Enter %d elements to sort:",n);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr, n);
    count++; //function call
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("%d",count);
    return 0;
}
  
