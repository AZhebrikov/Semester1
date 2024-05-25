#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
int main(void)
{int i,err,n,*m,*g;
 err = Input("KEK.txt",&m,&n);
 err = Input("KEK.txt",&g,&n);
 if(err)printf("%d",err);
 else
 {
  printf("Source sequence: ");
  for(i=0;i<n;i++){printf("%d ",m[i]);}printf("\n");
  for(i=0;i<n;i++){printf("%d ",g[i]);}
  printf("\n Final sequence 1 : ");
  sort(0,m,n);
  for(i=0;i<n;i++){printf("%d ",m[i]);}printf("\n");
  Puzrsort(g,n);printf("Final sequence 2 : ");
  for(i=0;i<n;i++){printf("%d ",g[i]);}printf("\n");
 }
return err;
}
