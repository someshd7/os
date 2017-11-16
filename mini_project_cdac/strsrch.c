#include"myhdr.h"
void find_string()
{
	int fd,count=0,i,size;
	char *buf,*ptr,filename[SIZE],str[SIZE];
	printf("enter file name:");
	scanf("%s",filename);
	printf("enter string:");
	scanf("%s",str);
	fd=open(filename,O_RDONLY);
	if(fd==-1)
	{
		perror("open:");
		return; 
	}
	size=lseek(fd,0,SEEK_END);
	lseek(fd,0,SEEK_SET);
	buf=(char *)calloc(size,sizeof(char));
	read(fd,buf,size);
	//puts(buf);
	ptr=buf;
	while(ptr=strstr(ptr,str))
	{
	//printf("count=%d\n",count);
		count++;
		ptr+=strlen(str);
		
	}
	printf("count=%d\n",count);
}

