#include<dirent.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
void main(int argc,char **argv)
{
   struct dirent **namelist;
   int i,n,file_num,num_dir=0;
   struct stat v;
   n=scandir(argv[1],&namelist,0,alphasort);
   file_num=n;
   if(n<0)
     {
       perror("scandir");
       return;
     }
     
   else
     while(n--)
        {
             printf("%s\n",namelist[n]->d_name);
             stat(namelist[n]->d_name,&v);
             if(S_ISDIR(v.st_mode))
                 num_dir++;
             free(namelist[n]);
        }
     printf("number of directory are:%d\n",num_dir);
     printf("number of files are:%d\n",file_num-num_dir);
      free(namelist);
}
