#include <stdio.h>
int count = 0;
int search(int array[], int n, int x) {
  
  // Going through array sequencially
  count++;
  for (int i = 0; i < n; i++)
  {
      count++;
      count++;
      if (array[i] == x)
      {
           return i;
      }
     count++;
  }
    count++;
  return -1;
}

int main() {
  int array[] = {2, 4, 0, 1, 9,10,15,23,41,21,19,24,99,51};
  count++;
  int x = 99;
  count++;
  int n = sizeof(array) / sizeof(array[0]);
  count++;

  int result = search(array, n, x);
  count++;
    count++;
  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
  printf("\n%d",count);
}
