#include"myhdr.h"
void find_dup()
{
 int fd;
 fd=open("log.txt",O_CREAT|O_APPEND|O_WRONLY); 
 int choice;
while(1)
{
  printf("1.show duplicate file\n2.recursive search\n3.delete duplicate files\ni4.recursive delete\n5.quit\n");
  printf("enter your choice:");
  scanf("%d",&choice);
  mytimer();
  dprintf(fd,"enter choice as %d in 'fdupes' function\n",choice);
  switch(choice)
    {
      case 1: 
	      mytimer();
	      system("fdupes ./");break;
      case 2: 
	      mytimer();
	      system("fdupes -r ./");break;
      case 3: 
	      mytimer();
	      system("fdupes -d ./");break;
      case 4: 
	      mytimer();
	      system("fdupes -rd ./");break;
      case 5:
	      mytimer();
	      return;
      default:
	      mytimer();
	      printf("invalid entry\n");
     }
getchar();
}
  }  
