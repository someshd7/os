#include"myhdr.h"
int flag=0;
int isdir(const char *dir,const char *next)
{
   struct stat v;
   char path[50];
   if(!strcmp(next,".")||!strcmp(next,".."))
      return 0;

   sprintf(path,"%s/%s",dir,next);
   stat(path,&v);
   return (S_ISDIR(v.st_mode));
}
   
void list(const char *file,const char *dir)
{
   DIR *dp;
   struct dirent *ptr;
   dp=opendir(dir);
   while(ptr=readdir(dp))
    {
       if(!strcmp(ptr->d_name,file))
       {
         printf("file is found\n%s\n",ptr->d_name);
         flag=1;
       }
       if(isdir(dir,ptr->d_name))
       {
          char next[50];
          sprintf(next,"%s/%s",dir,ptr->d_name);
          list(file,next);
       }
          
    }
   closedir(dp);
}
void main(int argc,char **argv)
{
  list(argv[1],argv[2]);
  if(flag==0)
  printf("\nfile is not found\n");
  printf("\n");
}
