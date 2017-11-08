
#include"header.h"

unsigned char buffer[128];
int main(int argc,char **argv)
{
  int fd1[2],fd2[2],fd;
 unsigned long long a[2],res;
   pid_t id;
   pipe(fd1);
   pipe(fd2);
   char a1[2];
   
   id=fork();
   if(id)
    	{
    	         a[0]=atoll(argv[1]);
    	         a[1]=atoll(argv[2]);
    		//printf("enter two numbers a & b \n");
    		//scanf("%d %d",a,a+;
    		write(fd1[1],a,sizeof(a));
    		read(fd2[0],&res,sizeof(res));
                printf("result=%lld\n",res);
    	}
    else
       {
          read(fd1[0],a,sizeof(a));
          res=a[0]+a[1];
          write(fd2[1],&res,sizeof(res));
       }
}
		
