#include"header.h"

unsigned char buffer[128];
	
int main()
{
	int fd;
	mkfifo("desd.txt",S_IRUSR | S_IWUSR);
	fd=open("desd.txt",O_RDONLY);
	perror("1");
	read(fd,buffer,128);
	printf("reader: %s sent by writer\n",buffer);
	close(fd);
	return 0;
}	
		
	
