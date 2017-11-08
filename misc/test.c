#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<semaphore.h>
#include<pthread.h>
#include<wait.h>
sem_t sem;
pthread_t tid1,tid2;
int cnt;
void *f1(void *p)
{
  
  printf("%s is entering in f1\n",(char *)p); 
  sem_wait(&sem);
  cnt++;
  //sleep(2);
  sem_post(&sem);
  printf("%s is exiting\n",(char *)p);
  printf("cnt=%d\n",cnt);
  pthread_exit(p);
}
void main()
{
 printf("in main:\n");
 sem_init(&sem,0,1);
 pthread_create(&tid1,NULL,f1,"thread1");
 pthread_create(&tid2,NULL,f1,"thread2");
 sleep(2);
 pthread_join(tid1,0);
 pthread_join(tid1,0);
 sem_destroy(&sem);
}
 
 
  
