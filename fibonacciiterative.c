#include<stdio.h>    
int count = 0;
int main()    
{    
 int n1=0,n2=1,n3,i,number;
 count++;// two inits
 count++;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1  
 count++; // init i  
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  count++;//condition
  count++; // assignment n3  
  n3=n1+n2;    
  printf(" %d",n3);  
  count++; //n1
  count++; //n3   
  n1=n2;    
  n2=n3;    
 }  
 count++; // false condition
 printf("\n%d",count);
  return 0;  
 } 