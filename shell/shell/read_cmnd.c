:#include"myhdr.h"
#define NO_CMND 128
char *read_cmnd()
{
	char *buf,ch;
	int i=0;
	buf=(char *)calloc(NO_CMND,sizeof(char));
	do{
		ch=getchar();
		if(ch!='\n')
		{
			buf[i++]=ch;
		}
	}while(ch!='\n');
	buf[i]='\0';
	return buf;
}

