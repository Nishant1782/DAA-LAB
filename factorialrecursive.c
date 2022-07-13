#include<stdio.h>
#include<stdlib.h>
int count = 0;
int factorialRecursive(int n)
{
    int fact = 1;
    count++;
    // fact init
    count++;
    // if condition check
    if(n == 1)
    {
        count++; // return
        return 1;
    }
    else
    {
        count++;// multiplication
        count++;// function call
        count++;// return
        return (n*factorialRecursive(n-1));
    }


}

int main()
{
    printf("Enter value of N: ");
    int n;
    scanf("%d",&n);
    int x = factorialRecursive(n); 
    count++;// x assign
    printf("%d\n",x);
    printf("%d\n",count);
}