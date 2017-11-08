#include<stdio.h>
void main()
{
 int *a,b[5]={0,1,2,3,4};
 int i;
 a=b;
 for(i=0;i<5;i++)
    printf("%u\t",(a+i));
 printf("\n");
for(i=0;i<5;i++)

    printf("%u",&a[i]);
    printf("%u",&a);
}


