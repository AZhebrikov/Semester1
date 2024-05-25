#include<stdio.h>
#include<math.h>
#include"fun.h"
int main(void)
{
 int x,err;
 printf("x=");scanf("%d",&x,&err);
 err=search("KEK.txt",&x);
 if(err!=0)                           /* -1 - Can't open file */
 printf("Number error %d \n",err);    /* -2 - File is empty   */
 else                                 /* -3 - Not such number */
 printf("Number=%d",x);
 return err;
}
