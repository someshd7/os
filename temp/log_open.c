#include"myhdr.h"
void log_open()
{
        int fd,ch;
	fd=open("log.txt",O_CREAT|O_APPEND|O_WRONLY);
        mytimer();
        dprintf(fd,"enter into log_open function\n");
	int fd1,size;
	char *buf;
	fd1=open("log.txt",O_CREAT|O_APPEND|O_RDONLY);
	if(fd1==-1)
	{
		perror("open:");
		return;
	}
	size=lseek(fd1,0,SEEK_END);
	lseek(fd1,0,SEEK_SET);
	buf=(char *)calloc(size,sizeof(char *));
	read(fd1,buf,size);
      while(1)
       {
          printf("***menu***\n");
          printf("1.display log\n2.delete log\n3.quit\n");
          scanf("%d",&ch);
        mytimer();
        dprintf(fd,"select %d option in log_open function\n",ch);
       switch(ch)
           {
             case 1:
                     mytimer();
                     dprintf(fd,"display contents of log.txt file\n");
	             puts(buf);
                     break;
             case 2:
                     mytimer();
                     dprintf(fd,"remove log.txt file\n");
                     system("rm log.txt");
                    break;
             case 3:
                   return;
             default:printf("invalid entry\n");
           }
        getchar();
      }
	close(fd1);
	free(buf);
        mytimer();
        dprintf(fd,"returning from log_open function\n");
}

