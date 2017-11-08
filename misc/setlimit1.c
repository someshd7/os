#include<stdio.h>
#include<stdlib.h>
#include<sys/resource.h>
void main()
{
  struct rlimit v;
  if(getrlimit(RLIMIT_CPU,&v)==1)
    perror("getrlimit");
  else
    printf("soft limit:%u\nhard limit:%u\n",(unsigned int)v.rlim_cur,(unsigned int)v.rlim_max);
  v.rlim_cur=3;
  setrlimit(RLIMIT_CPU,&v);
    printf("soft limit:%u\nhard limit:%u\n",(unsigned int)v.rlim_cur,(unsigned int)v.rlim_max);
   printf("somesh\n");

   while(1){
   sleep(1);}
}
  
