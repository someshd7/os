#include"myhdr.h"
void find_dup()
{
      
 int choice;
  printf("1.show duplicate file\n2.recursive search\n3.delete duplicate files\n4.quit\n");
  printf("enter your choice:");
  scanf("%d",&choice);
  switch(choice)
    {
      case 1: system("fdupes ./");break;
      case 2: system("fdupes -r ./");break;
      case 3: system("fdupes -d ./");break;
      case 4: system("fdupes -rd ./");break;
      case 5:return;
      default:printf("invalid entry\n");
     }
     
  }  
