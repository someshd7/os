#include"myhdr.h"
void main()
{
	int ch;
	while(1)
	{
		printf("***menu***\n");
		printf("1.directory information\n2.list of contents\n3.find string\n4.find duplicate\n6.quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:scan_dir();
			       break;
			case 2:list();
			       break;       
			case 3:find_string();
			       break;
                        case 4:find_dup();
                               break;
			case 6:return ;

			default:printf("invalid entry\n");       

		}
	 getchar();
	}
}	
