#include<stdio.h>
#include<stdlib.h>
int count = 0;
int factorialIterative(int n)
{
    int fact = 1;
    count++; // fact initialization
    count++; // init i
    for(int i = 1;i<=n;i++)
    {
        count++; // condition check
        fact = fact * i;
        count++;// fact multiply
        count++; // increment

    }
    count++; //false condition check
    count++;// return
    return fact;
}

int main()
{
    printf("Enter value of N: ");
    int n;
    scanf("%d",&n);
    int x = factorialIterative(n); 
    count++;// x assign
    printf("%d\n",x);
    printf("%d\n",count);
}