#include<stdio.h>
#include<stdlib.h>
#include"fun.h"
int main(void)
{int *m=NULL,n,i,err;
 err=Input("KEK.txt",&m,&n);
 if(err)printf("Error1\n");
 else
  {for(i=0;i<n;i++)printf("%d ",m[i]);
   printf("\n");
   err=zamena(&m,n);
   for(i=0;i<n;i++)printf("%d ",m[i]);printf("\n");
  }
 free(m);m=NULL;
return 0;
}
