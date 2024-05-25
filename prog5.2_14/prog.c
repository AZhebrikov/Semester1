#include<stdio.h>
#include<stdlib.h>
#include "fun.h"
 int main(void)
{int err,*m=NULL,n;
 err=Input("KEK.txt",&m,&n);
 if(err)printf("%d",err);
 else
 {err= vikchet(&m,&n);
  if(err)printf("%d",err);
  else printf("%d",n);
 }
 free(m);m=NULL;
return 0;
}
