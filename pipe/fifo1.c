#include"header.h"
int main()
{
   int fd;
   
   fd=open("desd.txt",O_WRONLY);
   perror("1");
   write(fd,"hello\n",6);
   close(fd);
   return 0;
 }
   
