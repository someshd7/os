#include<stdio.h>
#include<stdlib.h>
#include<sys/resource.h>
void main()
{
  struct rlimit v;
  if(getrlimit(RLIMIT_STACK,&v)==1)

       perror("getrlimit");
  else
    printf("soft limit=%u\nhard limit=%u\n",(unsigned int)v.rlim_cur,(unsigned int)v.rlim_max);
v.rlim_cur*=3;
  setrlimit(RLIMIT_STACK,&v);
    printf("soft limit=%u\nhard limit=%u\n",(unsigned int)v.rlim_cur,(unsigned int)v.rlim_max);
}
