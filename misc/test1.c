#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/resource.h>
void main(int argc,char **argv)
{
 char *a[]={"ls","-li",NULL};
printf("in main\n");
 execvp("ls",a);

   
}
  

