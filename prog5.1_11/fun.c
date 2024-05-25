#include<stdio.h>
#include<math.h>
#include"fun.h"
int search(const char *fn,int *x)
{
 int s,nc,b,err=0;FILE *f;
 f=fopen(fn,"r");
 if(f!=NULL)
 {
  if(fscanf(f,"%d",&s)!=1)
  {
   err=-2;
  }
  else
  {
   b=0;
   nc=1;
   if(s==(*x))
   {
    b=nc;
    ++nc;
   }
   else
   {
    while(fscanf(f,"%d",&s)==1)
     if(s==(*x))
     {
      ++nc;
      b=nc;
     }
     else
     {
     ++nc;
     }
    if(b!=0)
     {
      *x=b;
     }
    else
      err =-3;
   }
  }
 fclose(f);
 }
 else
 err=-1;
return err;
}
