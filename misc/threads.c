#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

int a,b;

void *getdata(void *data)
{
   printf("enter the two numbers\n");
   scanf("%d%d",&a,&b);
 }
 
 void *calvalue(void *data)
 {
   
    int sum;
    sum=a+b;
    printf("sum is %d\n",sum);
  }
  
  
 void main()
 {
   pthread_t data,cal;
   pthread_create(&data,NULL,getdata,NULL);
   pthread_create(&cal,NULL,calvalue,NULL);
   pthread_join(data,NULL);
   pthread_join(cal,NULL);
   pthread_destroy(data);
   pthread_destroy(cal);
   return 0;
 }
        
