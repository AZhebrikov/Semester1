#include<stdio.h>
#include<math.h>
#include "fun.h"
int summer(const char*fn,float *x)
{
 int z,s,nc,err=0;FILE *f;
 f=fopen(fn,"r");
 if(f!=NULL)
 {
  if(fscanf(f,"%d",&s)!=1)
  {
   printf("File is empty");
  }
  else
  {
   nc=1;
   while(fscanf(f,"%d",&z)==1)
   {
    s+=z;
    ++nc;
   }
   *x=(s*1.0/nc);
  }
  fclose(f);
 }
 else
 {
 err=-1;
 }
 return err;
}
