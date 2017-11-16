#include"myhdr.h"
#define SIZE1 10240
void main()
{
   char *str,ch;
   int i=0,fd;
   fd=open("log.txt",O_CREAT|O_RDWR,S_IRUSR|S_IWUSR);
   
   str=(char *)malloc(SIZE1);
   printf("enter log:");
   write(fd,str,strlen(str)+1);
   free(str);
}
       
      
