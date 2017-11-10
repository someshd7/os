#include<stdlib.h>
#include<stdio.h>
#include<sys/mman.h>
#include<pthread.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>

int *count;
int main()
{
  int fd;
  fd=shm_open("sharedcount",O_CREAT|O_RDWR,S_IRUSR|S_IWUSR);
  ftruncate(fd,sizeof(int *));
  count=mmap(NULL,sizeof(int *),PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
  *count=10;
  sleep(2);
  shm_unlink("sharedcount");
  return 0;
}

  
  
  
