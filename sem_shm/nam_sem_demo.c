#include<sys/resource.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<semaphore.h>
#define MAX 128


void main()
{
	int count=0;
	int fd;
	sem_t *sem1,*sem2;
	sem1=sem_open("/sem_1",O_CREAT,0600,1);
	sem2=sem_open("/sem_2",O_CREAT,0600,0);
	//fd=shm_open("shrdcount",O_CREAT|O_RDWR,0600);
	//ftruncate(fd,MAX);
	//count=mmap(NULL,MAX,PROT_WRITE|PROT_READ,MAP_SHARED,fd,0);
        if(fork())
	{
		printf("%d:in parent before lock\n",getpid());
		sem_wait(sem1);
		printf("%d:in parent before lock:before +10 count\n",getpid());
		printf("parent count=%d\n",count);
		count+=10;
		printf("parent count=%d\n",count);
		printf("%d:in parent after lock:before +10 count\n",getpid());
                sem_post(sem2);
		printf("%d:in parent aftre lock\n",getpid());
	}
	else
	{
		 printf("%d:in child before lock\n",getpid());
		 sem_wait(sem2);
		 printf("%d:in child before lock:before +10 count\n",getpid());
		 printf("child count=%d\n",count);
		 count+=100;
		 printf("child count=%d\n",count);
 	  	 printf("%d:in child after lock:before +10 count\n",getpid());
		 sem_post(sem1);
              	 printf("%d:in child aftre lock\n",getpid());
	}
}


		



