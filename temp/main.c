#include"myhdr.h"
void main()
{
	int fd;
	mytimer();
	fd=open("log.txt",O_CREAT|O_APPEND|O_WRONLY);
	dprintf(fd,"enter into main function\n");
	int ch;
	while(1)
	{
		printf("***menu***\n");
		printf("1.directory information\n2.list of contents\n3.find string\n4.find duplicate\n5.open log file\n6.quit\n");
		scanf("%d",&ch);
	        mytimer();
		dprintf(fd,"select option %d\n",ch);

		switch(ch)
		{
			case 1:
				mytimer();
				dprintf(fd,"enter into to 'scan_dir' function\n");
				scan_dir();
			       break;
			case 2:
		         	mytimer();
				dprintf(fd,"enter into to 'list' function\n");
			       list();
			       break;       
			case 3:
				mytimer();
				dprintf(fd,"enter into to 'find_string' function\n");
			       find_string();
			       break;
                        case 4:
				mytimer();
				dprintf(fd,"enter into to 'find_dup' function\n");
			       find_dup();
                               break;
			case 5:
			        mytimer();
			        dprintf(fd,"open logger file\n");
			        log_open();
			        break;	
			case 6:
				mytimer();
				dprintf(fd,"quiting.....\n");
			       return ;

			default:
				mytimer();
				dprintf(fd,"enter invalid option\n");
			       printf("invalid entry\n");       

		}
	 getchar();
	}
}	
