#include<stdio.h>
#include<stdlib.h>
#include "fun.h"
int Input5(const char *sf,double **m, int *n)
{FILE *f;int i;
 f=fopen(sf,"r");
 if(f==NULL)return -1;
 if(fscanf(f,"%d",n)!=1){fclose(f); return -2;}
  *m=(double*)malloc(*n*sizeof(double));
  if(*m==NULL){fclose(f);return -3;}
  for(i=0;i<*n;i++)
   if(fscanf(f,"%lf",(*m)+i)!=1) {fclose(f);free(*m);*m=NULL;return -4;}
  fclose(f);
return 0;
}
//////////////////////////////////////////////////////////////////////
// PROVERKA
int vozractanie(double **m, int n)
{int i=0,k,z,sum=0,d;double b;
 for(k=i;i<n;i++)
 {sum+=(*m)[i];
  if( (i+1<n) && ( (*m)[i]<(*m)[i+1]) );
  else if (i+1<n)
   {
    z = i-k+1;b=(sum*(1.0)/z);
    if((b>=(*m)[i+1])&&(z!=1))
    {for(d=k;d<=i;d++)(*m)[d]=b;sum=0;k=i+1; }
    else {sum=0;k=i+1;}
   }
  else if( (i+1) == n)
   {z=i-k+1;b=(sum*(1.0)/z);
    for(d=k;d<=i;d++)(*m)[d]=b;sum=0;k=0;
   }
 }
return 0;
}
////////////////////////////////////////////////////////////






int check(int *m, int n, int *q, int p)
{
 int I,i,k,z,s,t,cnt,v,res;
 for (I=0;I<2;I++)
 {
  if (I==1){v=n;n=p;p=v; v=m;m=q;q=v;res=cnt;}
  for(i=0;i<n;i++)
  {
   for(z=0,t=0;z<n;z++) {if(m[i]==m[z]) t++;}
   for(k=0,s=0;k<p;k++) {if(m[i]==q[k]) s++;}
   if (t>s) break;
  }
  if(i==(n-1)) cnt=1;
  if(i!=(n-1)) cnt=0;
 }
 v=10*res+cnt;
return v;
}
