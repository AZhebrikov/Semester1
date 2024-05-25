#include<stdio.h>
#include<math.h>
#include"fun.h"
int main(void)
{
 int err=0;float x;
 err = summer("KEK.txt",&x);
 if(err!=0)
 printf("error");
 else
 printf("sred=%.3f",x);
 return err;
}

