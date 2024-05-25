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
////////////////////////////////////////////////////////////////////
int stepen(double m, int n)
{int i; double c=1;
 for(i=0;i<n;i++){c=(c*m);}
 return c;
}
///////////////////////////
int funk(int *m,int n,double x,double *F,double *P)
{int i;
 *F=0;*P=0;
 for(i=0;i<n;i++)
 {*F+=( m[i]* stepen(x,i) );
  if(i>0) *P+=( i* m[i] * stepen(x,i-1) );
 }
return 0;
}
/////////////////////////////////////////
int funk1(int *m, int n, double x, double *F, double *P)
{int i;double f;
 *F=0;*P=0;f=1;
 for(i=0;i<n;i++)
 {
  if(i)f=f*x;*F+=m[i]*f;
  if(i>=1)*P+=i*m[i]*(f/x);
 }
return 0;
}
