#include"header.h"

int main()

{
   int fd[2];
   pid_t id;
   unsigned char buffer[128];
   pipe(fd);
   id=fork();
   if(0 == id)
    	{
    		close(fd[1]);
    		if(read(fd[0],buffer,128)==0)
    		  
    		    perror("read");
    		//if(buffer == 0)
    		  //  perror("error in reading file\n");
    		else
    		    printf("child writes: %s",buffer);
    	}
    	  
    else
    	{
    		close(fd[0]);
    		if(write(fd[1],"hello\n",7)==0)
    		perror("write");
    		close(fd[1]);
    	}
    	
    	return 0;
  }
    			  	
   
