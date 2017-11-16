#include"myhdr.h"
void scan_dir()
{
   int fd;
   fd=open("log.txt",O_CREAT|O_APPEND|O_WRONLY);
   struct dirent **namelist;
   int i,n,file_num,num_dir=0;
   char dir[30];
   struct stat v;
   printf("enter the directory name:");
   scanf("%s",dir);
   mytimer();
   dprintf(fd,"enter directory name as '%s' in 'scan_dir' function\n",dir);
   n=scandir(dir,&namelist,0,alphasort);
   file_num=n;
   if(n<0)
     {
       perror("scandir");

       return;
     }
     
   else
     while(n--)
        {
//             printf("%s\n",namelist[n]->d_name);
   mytimer();
   dprintf(fd,"print filename '%s' in directory '%s' in 'scan_dir' function\n",namelist[n]->d_name,dir);
             stat(namelist[n]->d_name,&v);
             if(S_ISDIR(v.st_mode))
                 num_dir++;
             free(namelist[n]);
        }
     printf("number of directory are : %d\n",num_dir);
   mytimer();
     dprintf(fd,"number of directory are:%d\n",num_dir);
     printf("number of files are : %d\n",file_num-num_dir);
   mytimer();
     dprintf(fd,"print number of files are : %d\n",file_num-num_dir);
      free(namelist);
}
