#include"myhdr.h"
#define MAX_CMND 10
char *read_cmnd();
char **tok()
{
	char **argv,*buf=(char *)malloc(128);
	int i;
	char *token;
	buf=read_cmnd();
	argv=(char **)calloc(MAX_CMND,sizeof(char *));	      
	token=strtok(buf," ");
        while(token!=NULL)
	{
	 	argv[i]=token;
		i++;
	        token=strtok(NULL," ");
	}
        argv[i]=NULL;
	return argv;
}	
