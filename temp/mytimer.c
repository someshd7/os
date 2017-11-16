#include"myhdr.h"
void mytimer()
{
        int fd;
	char buf[30];
	time_t timer;
	struct tm *tm_info;
        fd=open("log.txt",O_CREAT|O_WRONLY|O_APPEND,0777);
	time(&timer);
	tm_info=localtime(&timer);
	strftime(buf,30,"%Y-%m-%d %H:%M:%S : ",tm_info);
        write(fd,buf,strlen(buf));
      //  write(fd,msg,strlen(msg));
        close(fd);
}
    
