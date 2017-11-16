#include"myhdr.h"
int flag=0;
int isdir(const char *dir,const char *next)
{
   struct stat v;
   char path[MAX];
   if(!strcmp(next,".")||!strcmp(next,".."))
      return 0;

   sprintf(path,"%s/%s",dir,next);
   stat(path,&v);
   return (S_ISDIR(v.st_mode));
}
   
void list1(const char *dir)
{
   static int file_num=0,dir_num=0,temp=0;
   DIR *dp;
   struct dirent *ptr;
   dp=opendir(dir);
   while(ptr=readdir(dp))
    { 
	    if(!strcmp(ptr->d_name,dir))
	     {
	            printf("%s\t",ptr->d_name);
	            flag=1;
	     }

        temp++;
       //printf("%s\t",ptr->d_name);
       if(isdir(dir,ptr->d_name))
       {
          flag=1;
	  dir_num++;
          char next[MAX];
          sprintf(next,"%s/%s",dir,ptr->d_name);
          list1(next);
       }
          
    }
   file_num=temp-dir_num;
   printf("no. of file are = %d\n",file_num);
   printf("no. of directory are = %d\n",dir_num);
   closedir(dp);
}
void scan_dir()
{
	char dir_name[SIZE];
	printf("enter directory name:");
        scanf("%s",dir_name);
        
  list1(dir_name);
        if(flag==0)
	  printf("\nfile is not found\n");

  printf("\n");
}
