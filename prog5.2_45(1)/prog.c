#include<stdio.h>
#include<stdlib.h>
#include "fun.h"
 int main(void)
{int err,*m=NULL,n;double x,fx,fp;
 err=Input("KEK.txt",&m,&n);
 if(err)printf("%d\n",err);
 else
 {err=1;
  printf("x="); scanf("%lf",&x); printf("\n");
  err= funk1(m,n,x,&fx,&fp);
  if(err)printf("Error\n");
  else printf("f(x)=%.2lf  f'(x)=%.2lf\n",fx,fp);
 }
 free(m);m=NULL;
return 0;
}





