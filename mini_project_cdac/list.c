#include"myhdr.h"
int isdir1(const char *dir,const char *next)
{
   struct stat v;
   char path[MAX];
   if(!strcmp(next,".")||!strcmp(next,".."))
      return 0;

   sprintf(path,"%s/%s",dir,next);
   stat(path,&v);
   return (S_ISDIR(v.st_mode));
}
   
void search(const char *dir)
{
   DIR *dp;
   struct dirent *ptr;
   dp=opendir(dir);
   while(ptr=readdir(dp))
    {
       printf("%s\t",ptr->d_name);
       if(isdir1(dir,ptr->d_name))
       {
          char next[MAX];
          sprintf(next,"%s/%s",dir,ptr->d_name);
          search(next);
       }
          
    }
   closedir(dp);
}
void list()
{
   char dir_name[SIZE];
   printf("in list:enter directory name:");
   scanf("%s",dir_name);

  search(dir_name);
  printf("\n");
}
