#include<stdio.h>
#include<math.h>
#include "fun.h"
int despish(const char *fn,float *x)
{
 int z,k,s,nc,err;
 FILE *f;
 f=fopen(fn,"r");
 if(f!=NULL)
 {
  if(fscanf(f,"%d",&s)!=1)
  {
   err=-2;
  }
  else
  {
   nc=1;k=(s*s);
   while(fscanf(f,"%d",&z)==1)
   {
    s+=z;k+=(z*z);nc++;
   }
   *x=((k-(s*s*1.0/nc))/nc);
   err=0;
  }
 fclose(f);
 }
 else
  err=-1;
return err;
}
