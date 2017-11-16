#include"myhdr.h"
void main()
{
        char buf[100];
	char *token;
	gets(buf);
	token=strtok(buf," \r\b");
	while(token!=NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL,"-");
	}
}
