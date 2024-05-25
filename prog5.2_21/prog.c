#include<stdlib.h>
#include<stdio.h> 
#include "fun.h"
 int main(void)
{
 int err,n,i;double *m;
 err= Input5("KEK.txt",&m,&n);
 if(err)printf("%d\n",err);
 else
 {for(i=0;i<n;i++)printf("%.0lf ",m[i]);
  printf("\n");err= vozractanie(&m,n);
  for(i=0;i<n;i++)printf("%.2lf ",m[i]);
  printf("\n");free(m);m=NULL;
 }
return 0;
}
