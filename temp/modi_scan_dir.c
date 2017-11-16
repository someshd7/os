#include"myhdr.h"
void scan_dir()
{
   int fd,dummy;
   fd=open("log.txt",O_CREAT|O_APPEND|O_WRONLY);
   struct dirent **namelist;
   int i,n,num_file=0,num_dir=0,num_fifo=0,num_sock=0;
   char dir[30];
   struct stat v;
   printf("enter the directory name:");
   scanf("%s",dir);
   mytimer();
   dprintf(fd,"enter directory name as '%s' in 'scan_dir' function\n",dir);
   n=scandir(dir,&namelist,0,alphasort);
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
             else if(S_ISREG(v.st_mode))
                 num_file++;

          //   else if(S_ISCHR(v.st_mode))
            //     num_chr++;
            // else if(S_ISBLK(v.st_mode))
              //   num_blk++;
             else if(S_ISFIFO(v.st_mode))
                 num_fifo++;
             else if(S_ISSOCK(v.st_mode))
                 num_sock++;
             else
                 dummy=0;
          
             free(namelist[n]);
        }
     printf("number of directory are : %d\n",num_dir);
   mytimer();
     dprintf(fd,"number of directory are:%d\n",num_dir);
     printf("number of regular files are : %d\n",num_file);
   mytimer();
     dprintf(fd,"print number of files are : %d\n",num_file);
     printf("number of FIFO are : %d\n",num_fifo);
   mytimer();
     dprintf(fd,"print number of FIFO are : %d\n",num_fifo);
     printf("number of SOCKET are : %d\n",num_sock);
   mytimer();
     dprintf(fd,"print number of SOCKET are : %d\n",num_sock);
      free(namelist);
}
