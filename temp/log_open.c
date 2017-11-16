#include"myhdr.h"
void log_open()
{
	int fd1,size;
	char *buf;
	fd1=open("log.txt",O_CREAT|O_APPEND|O_WRONLY);
	if(fd1==-1)
	{
		perror("open:");
		return;
	}
	size=lseek(fd1,0,SEEK_END);
	lseek(fd1,0,SEEK_SET);
	buf=(char *)calloc(size,sizeof(char *));
	read(fd1,buf,size);
	puts(buf);
	close(fd1);
	free(buf);
}

