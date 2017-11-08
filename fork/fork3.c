#include<stdio.h>
#include<stdlib.h>
#include<sys/resource.h>
#include<unistd.h>
void main()
{
   int v=0;
   if(fork())
    {
      printf("%d:in parent\t v=%d\n",getpid(),v);
      sleep(2);
      v++;
      printf("%d:in parent\t v=%d\n",getpid(),v);
      sleep(2);
      v++;
      printf("%d:in parent\t v=%d\n",getpid(),v);
      sleep(2);
      exit(0);
    }
   else
    {
      printf("%d:parent\t v=%d\n",getppid(),v);
      printf("%d:in child\t v=%d\n",getpid(),v);
      v+=100;
      sleep(2);
      printf("%d:parent\t v=%d\n",getppid(),v);
      printf("%d:in child\t v=%d\n",getpid(),v);
    }
}
      
  

      
  
