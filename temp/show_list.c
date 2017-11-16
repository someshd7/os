#include"myhdr.h"
void list()
{
   int fd;
   fd=open("log.txt",O_CREAT|O_APPEND|O_WRONLY);
   struct dirent **namelist;
   int n;
   char dir[30];
   struct stat v;
   printf("enter the directory name:");
   scanf("%s",dir);
   mytimer();
   dprintf(fd,"enter directory name as '%s' in function 'list'\n",dir);
   n=scandir(dir,&namelist,0,alphasort);
   if(n<0)
     {
       perror("scandir");
       return;
     }
     
   else
     while(n--)
        {
             printf("%s\t",namelist[n]->d_name);
   mytimer();
   dprintf(fd,"print file name as '%s'\n",namelist[n]->d_name);
             free(namelist[n]);
        }
      free(namelist);
   mytimer();
   dprintf(fd,"returning.....from function 'list'\n");
}
