#include <stdio.h>
#include <stdlip.h>
#include "fun.h"
int main(void)
{int err, *m=NULL,n,i;
 err=Input("x.txt",&m,&n);
 if(err)printf("Error\n");
 else
 {
  for(i=0;i<n;i++)printf("%d",m[i]);printf("\n");
  free(m);m=NULL;
 }
return 0;
}
