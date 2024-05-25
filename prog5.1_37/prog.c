#include<stdio.h>
#include<math.h>
#include "fun.h"
int main(void)
{
 float x; int err;
 err=despish("KEK.txt",&x);                  /* -1 - Can't open file */
 if(err!=0)                                  /* -2 - File is empty   */
 printf("Number error %d\n",err);
 else
 printf("D=%.3f",x);
return err;
}
