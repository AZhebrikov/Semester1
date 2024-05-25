#include <stdlib.h>
#include <stdio.h>
#include "fun.h"
#include <math.h>
int main(void)
{int i,c,b,sum,k,n,*m,err;
 err=Input("KEK.txt",&m,&n);
 /**/ for(i=0;i<n;i++){printf("%d ",m[i]);} printf("\n");
 for(i=1,b=1,sum=1;i<n;i++){b=(b<<1);sum+=b;}
 /**/ printf("%d\n",sum);
 printf("List of subsets:\nEmpty subset\n");
 for(b=1;b<=sum;b++)
   {for(i=0,k=1;i<n;i++) {c=(b&k);if(c){printf("%d ",m[i]);} k=(k<<1);  }
    printf("\n");
   }
return 0;
}
