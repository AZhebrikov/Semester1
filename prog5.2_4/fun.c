#include<stdio.h>
#include<stdlib.h>
#include"fun.h"
///////////////////////////////////////////////////////

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

// PROVERKA //  schitivanie 2 massivov
int In2put(const char *sf,int **m,int *n,int **b,int *c)
{FILE *f;int i;
 f=fopen(sf,"r");
 if(f==NULL)return -1;
 if(fscanf(f,"%d",n)!=1){fclose(f);return -2;}
 *m=(int*)malloc(*n*sizeof(int));
 if(*m==NULL){fclose(f); return -3;}
 for(i=0;i<*n;i++)if(fscanf(f,"%d",(*m)+i)!=1){fclose(f);free(*m);*m=NULL;return -4;}
 if(fscanf(f,"%d",c)!=1){fclose(f);return -5;}
 *b=(int*)malloc(*c*sizeof(int));
 if(*b==NULL){fclose(f);free(*m);*m=NULL;return -6;}
 for(i=0;i<*n;i++)if(fscanf(f,"%d",(*b)+i)!=1){fclose(f);free(*m);free(*b);*m=NULL;*b=NULL;return -7;}
 fclose(f);
return 0;
}
//////////////////////////////////////////////////////////////////////////////////
int prichesmass(int **m,int *n )
{int i,k,d;
 for(i=0;i<*n;i++)
 {for(k=i+1;k<*n;k++){  if((*m)[i]==(*m)[k]){ for(d=k;d<*n;d++){(*m)[d]=(*m)[d+1];}(*n)--;  }   }
 }
return 0;
}
//////////////////////////////////////////////////////////////////////////////////
// PROVERKA //
int sravnemass(int *m,int n,int *b,int c,int *d)
{int i,I,q=0,w=0,k;
  if(n<c)
  {for(i=0;i<n;i++){  for(k=0;k<c;k++){if(m[i]==b[k])q++;}   }
   if(q==n){q=2;w=1;}else if(q!=n){q=1;w=1;}
  }
  else if(c<n)
  {for(k=0;k<c;k++){  for(i=0;i<c;i++){if(b[k]==m[i])w++;}   }
   if(w==c){w=2;q=1;}else if(w!=c){q=1;w=1;}
  }
  else
  {for(I=0;I<2;I++)
   {if(I==0)
    {for(i=0;i<n;i++){ for(k=0;k<c;k++){if(m[i]==b[k])q++;} }
     if(q==n)q=2;else if(q!=n)q=1;
    }
    else if(I==1)
    {for(k=0;k<c;k++){ for(i=0;i<n;i++){if(b[k]==m[i])w++;} }
     if(w==c)w=2;else if(w!=c)w=1;
    }
   }
  }
 if((q==1)&&(w==1)) *d=111;
 else if((q==1)&&(w==2))*d=121;
 else if((q==2)&&(w==1))*d=211;
 else if((q==2)&&(w==2))*d=222;
return 0;
}


/////////////////

int check(int *m, int n, int *q, int p)
{
 int I,i,k,z,s,t,a,v,b,*y;
 for (I=0;I<2;I++)
 {
  if (I==1){v=n;n=p;p=v; y=m;m=q;q=y;b=a;}
  for(i=0;i<n;i++)
  {
   for(z=0,t=0;z<n;z++) {if(m[i]==m[z]) t++;}
   for(k=0,s=0;k<p;k++) {if(m[i]==q[k]) s++;}
   if (t>s) break;
  }
  if((i==n)&&( t>s)) a=0;
  if((i==n)&&(t<=s)) a=1;
  if(i!=n) a=0;
 }
 v=10*b+a;
return v;
}



