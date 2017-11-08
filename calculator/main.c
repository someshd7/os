#include<stdio.h>
#include"calculator.h"
int main()
{ 
   int x,y,choice;
   
  while(1)
{ 
   printf("**********calculator**********\n");
   printf("enter the values for x and y\n");
   scanf("%d%d",&x,&y);
   printf("1.addition\n2.substraction\n3.multiplication\n4.division\n5.modulus\n6.factorial\n7.square\n8.cube\n9.expo\n"); 
  printf("enter the choice:");
  scanf("%d",&choice);
 
   switch(choice)
   {
     case 1: printf("addition is %d\n",add(x,y));
     break;
     
     case 2:printf("sub is %d\n",sub(x,y));
     break;
     
     case 3:printf("mul is %d\n",mul(x,y));
     break;
     
     case 4:printf("div is %d\n",div(x,y));
     break;
     
     case 5:printf("mod is %d\n",mod(x,y));
     break;
     
     case 6:printf("factorial is %d\n",fact(x,y));
     break;
     
     case 7:printf("square is %d\n",squ(x));
     break;
     
     case 8:printf("cube is %d\n",cub(x));
     break;
     
     case 9:printf("expo is %d\n",expo(x,y));
     break;
     
     default:printf("galat choice re baba\n");
    }
  getchar();
     
}     
}   
