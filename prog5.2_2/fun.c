#include<stdio.h>
#include<stdlib.h>
#include "fun.h"
int Input(const char *sf, int**m, int *n)
{FILE *f;int i;
 f=fopen(sf,"r");
 if(f==NULL)return -1;
 if(fscanf(f,"%d",n)!=1){fclose(f); return -2;}
  *m=(int*)malloc(*n*sizeof(int));
  if(*m==NULL){fclose(f);return -3;}
  for(i=0;i<*n;i++)
   if(fscanf(f,"%d",(*m)+i)!=1) {fclose(f);free(*m);*m=NULL;return -4;}
  fclose(f);
return 0;
}
/////////////////////////////////////////////////////////////////////////////
/* PROVERKA */
int zamena(int **m,int n)
{int i,ic;
 for(i=0;i<(n/2);i++){ic=(*m)[i];(*m)[i]=(*m)[n-i-1];(*m)[n-i-1]=ic;}
 return 0;
}
//////////////////////////////////////////////////////////////////////////
