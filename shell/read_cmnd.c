#include"myhdr.h"
void main()
{
	char buf[100];
	char ch;
	int i=0;
	do{
		ch=getchar();
		if(ch!='\n')
		{
			buf[i++]=ch;
		}
	}while(ch!='\n');
	buf[i]='\0';
	printf("%s\n",buf);
}


