#include<stdio.h>
#include"arith.h"
int main()
{
  int a,b;
   printf("enter the values for a and b:");
   scanf("%d%d",&a,&b); 
  printf("mul is %d\n",mul(a,b));
  printf("div is %f\n",div(a,b));
  return 0;
 }
 
 
  
