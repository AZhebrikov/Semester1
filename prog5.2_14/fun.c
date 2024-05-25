#include<stdio.h>
#include<stdlib.h>
#include "fun.h"
int Input(const char *sf, int**m, int *n)
{FILE *f;int i;
 f=fopen(sf,"r");
 if(f==NULL)return -1;// file can't open
 if(fscanf(f,"%d",n)!=1) {fclose(f); return -2;}// file is empty
  *m=(int*)malloc(*n*sizeof(int));
  if(*m==NULL) {fclose(f);return -3;}// memory allocation error
  for(i=0;i<*n;i++)
   if(fscanf(f,"%d",(*m)+i)!=1) {fclose(f);free(*m);*m=NULL;return -4;}// Can't cope
  fclose(f);
return 0;
}
//////////////////////////////////////////////////////////////////////////////

int vikchet(int **m, int *n) // iscluchenie chetnih chisel //
{int i,ic;
 for(i=0;i<*n;i++)
 {
  if(( (*m)[i]%2)==0){for(ic=i;i<*n;i++) (*m)[i]=(*m)[i+1];(*n)--;i=(--ic);}
 }
 return 0;
}
