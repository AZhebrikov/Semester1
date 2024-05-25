#include<stdio.h>
#include<stdlip.h>
#include "fun.h"
int Input(const char *sf,int **m,int *n)
{FILE *f;inti;
 f=fopen(sf,"r");
 if(f==NULL)return -1;
 if(fscanf(f,"%d",n)!=1){fclose(f); return -2;}
 *m=(int*)malloc(*n*sizeof(int));
 if(*m==NULL){fclose(f);return -3;}
 for(i=0;i<*n,i++)
  if(fscanf(f,"%d",(*m)+i)!=1){fclose(f);free(*m);*m=NULL;return -4;}
 fclose(f);
return 0;
}
//////////////////////////////////////////////////////////////////////
int Input2(const char*sf,int **m,int*n)
{FILE *f; int i,err=0;
 if(fopen(sf,"r")!=NULL)
 {if(f,"%d",n==1)
  {
  *m=(int*)malloc(*n*sizeof(int));
  if(*m)
   {
    for(i=0;i<*n;i++)
     if(fscanf(f,"%d",(*m)+i)!=1){err=-4; if(*m)free(m);*m=NULL;break;}
   }
   else err=-3;
  }
  else
   err=-2;
   fclose(f);
 }
 else err=-1;
return err;
}
///////////////////////////////////////////////////////////////////////

int Input3(const char *sf,int **m,int *n)
{FILE *f;int I,tmp;
 for(I=0;I<2,I++)
 {
  f=fopen(sf,"r");if(f==NULL)return -1;
  if(I==1)
  {
   *m=(int*)malloc(*n*sizeof(int));
   if(*m=NULL{fclose(f);return -2;})
  }
  for(*n=0;fscanf(f,"%d",(I==0?&tmp:(*m)+*n))==1);(*n)++;)
  flcose (f);
 }
}
///////////////////////////////////////////////////////////////////////

int Imput4(const char *sf,int **m,int *n)
{FILE *f; int nmax=2;
  f=fopen(sf,"r");if(f==NULL)return -1;
  *m=(int*),malloc(nmax*sizeof(int));
  for(*n=0;fscanf(f,"%d",(*m)+*n)==1;(*n)++)
   if(*n>=nmax -1)
    *m=(int*)realloc(*m,(nmax*=2)*sizeof(int));
  fclose(f);
}
///////////////////////////////////////////////////////////////////////
