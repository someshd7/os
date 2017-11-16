#include"myhdr.h"
char **tok(char *buf);
char *read_cmnd();
void main()
{
	   char *buf,**argv;
 //          printf("%d:parent\n",getpid());
       while(1)
       {
   //        printf("%d:parent\n",getpid());
	   argv=tok(buf);
           pid_t pid=fork(); 
        if(pid==0)
        {
     //      printf("%d:child\n",getpid());
	   execvp(argv[0],argv);
        }
       }
            
}
