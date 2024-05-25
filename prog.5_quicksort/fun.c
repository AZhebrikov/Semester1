#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

int sort(int i, int *m,int n)
{
 int k,d,e;
 for(e=0,k=i;k<n+i-1;k++)
 {
  if(m[k]<=m[n+i-1])
  {
   d=m[i+e];m[i+e]=m[k];m[k]=d;e++;
  }
 }
 d=m[i+e];m[i+e]=m[n+i-1];m[n+i-1]=d;
 if(e>1)sort(i,m,e);
 if(n-e-2>0)sort(i+e+1,m,n-1-e);
return 0;
}


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

int Puzrsort(int *m,int n)
{
 int i,k,d;
 for(i=0;i<n;i++)
   {
    for(k=1;k<n-i;k++){ 	if(m[k-1]>m[k]) {d=m[k-1];m[k-1]=m[k];m[k]=d;}		}
   }
return 0;
}

int sleinie(int i,int *m,int n,int q)
{int k
 
}
