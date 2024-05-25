#include<stdio.h>
#include<stdlib.h>
#include "fun.h"
int main(void)
{int *m,*b,n,c,err,d,i;
 err= Input("KEK.txt",&m,&n);
 err= Input("KEK1.txt",&b,&c);
 if(err)printf("%d",err);
 else
 {
  for(i=0;i<n;i++)printf("%d ",m[i]);printf("\n");
  for(i=0;i<c;i++)printf("%d ",b[i]);printf("\n");
  d=check(m,n,b,c);
  if(d==0)printf("A!=B");
  else if(d==1)printf("BcA");
  else if(d==10)printf("AcB");
  else if(d==11)printf("A=B");
 }
free(m);free(b);b=NULL;m=NULL;
return 0;
}
