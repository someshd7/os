#include"myhdr.h"
void main()
{
  printf("%d:process\n",getpid());
  execlp("ls","l",NULL);
  printf("%d:process\n",getpid());
  execlp("ls","l",NULL);
  printf("%d:process\n",getpid());
  execlp("ls","l",NULL);
  printf("%d:process\n",getpid());
}
