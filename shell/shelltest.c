#include"myhdr.h"
void main()
{
	int i=0;
        char buf[100];
	char *token,**str;
	str=(char **)malloc(10*sizeof(char *));
	gets(buf);
	token=strtok(buf," \r\b");
	while(token!=NULL)
	{
		str[i]=token;
		i++;
		token=strtok(NULL," \r\b");
	}
	str[i]=NULL;
	i=0;
	while(str[i])
	{
		printf("%s\n",str[i]);
		i++;
	}
	execvp(str[0],str);

}
