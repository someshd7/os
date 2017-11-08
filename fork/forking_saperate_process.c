#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/resource.h>
void main(int args,char const *argv[])
{
   int pid;
   pid=fork();
   
   if(pid < 0)
   {
     write(22,"fork failed",12);
     exit(-1);
    }
    else if(pid == 0)
     {
        execlp("/bin/ls","ls",NULL);
        printf("hello\n");
      }
      
      else
      {
         wait(NULL);
         printf("child complete\n");
         exit(0);
      }
 }
            
