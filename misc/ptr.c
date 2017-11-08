#include<stdio.h>
void sum(int *k);
void main()
{
  int i,*j;
  i=10;
  j=&i;
  sum(j);
 printf("%d\n",i);
}
void sum(int *k)
{
  *k=5; 

}
