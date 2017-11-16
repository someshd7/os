#include"myhdr.h"
void find_string()
{
	FILE *fp;
	int fd,count=0,i,size,line=0;
	
	fd=open("log.txt",O_CREAT|O_APPEND|O_WRONLY);
	
	char buf[100],*ptr,*lptr,filename[SIZE],str[SIZE];
	printf("enter file name:");
	scanf("%s",filename);
	
	mytimer();
	dprintf(fd,"enter file name as '%s' in option 3(find_string) \n",filename);
	
	printf("enter string:");
	scanf("%s",str);
	
	mytimer();
	dprintf(fd,"enter string to search as '%s' in option 3(find_string) \n",str);
	
	fp=fopen(filename,"r");
	//fd=open(filename,O_RDONLY);
	if(!fp)
	{
		perror("open:");
		mytimer();
		system("&>> log.txt");
		return; 
	}
	/*size=lseek(fd,0,SEEK_END);
	lseek(fd,0,SEEK_SET);
	buf=(char *)calloc(size,sizeof(char));
	read(fd,buf,size);
	//puts(buf);*/
	
	//ptr=buf;
	//lptr=buf;
	while(fgets(buf,100,fp))
	{
	    ptr=buf;
	    line++;
		while(ptr=strstr(ptr,str))
               {
 	   		printf("line=%d\n",line);
			
			mytimer();
			dprintf(fd,"given string '%s' is occured at line number %d in '%s' file\n",str,line,filename);
			count++;
			ptr+=strlen(str);
		
		}
	}
	printf("count=%d\n",count);
	mytimer();
	dprintf(fd,"'%s' string in '%s' file occured %d times\n",str,filename,count);


	fclose(fp);
	close(fd);
	mytimer();
	dprintf(fd,"returning.....from function 'find_string'\n");
}


