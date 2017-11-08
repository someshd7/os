#include<stdio.h>
#include<stdlib.h>
#include<sys/resource.h>
#include<unistd.h>
void main()
{
     printf("%d:in main\n",getpid());
   if(fork()==0)
      {//exclusive code for parent
          printf("%d:in parent\n",getpid());
          printf("%d:in child\n",getpid());
 //         sleep(2);
          //exit(0);
      }
   else if(fork()==0)
      {//exclusive code for child
          printf("%d:in parent\n",getppid());
          printf("%d:in child\n",getpid());
      }
   else
      {
          printf("%d:in parent\n",getppid());
          //printf("%d:in child\n",getpid());
      }
sleep(2);
  exit(0);
}
  

  
            
  
