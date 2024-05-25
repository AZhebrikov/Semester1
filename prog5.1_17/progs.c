#include<stdio.h>
#include<math.h>
int main(void)
{
 int x,d,s,nc;FILE *f;
 f=fopen("KEK.txt","r");
 if(f!=NULL)
 {
  if(fscanf(f,"%d",&s)!=1)
  {
   printf("File is empty");
  }
  else
  {
   if(fscanf(f,"%d",&x)!=1)
   {
    printf("File is emrty");
   }
   else
   {
    d=x-s;
    s=x;
    nc=0;
    while(fscanf(f,"%d",&x)==1)
    {
     if(d==x-s)
     s=x;
     else
     nc++;
    }
    if(nc!=0)
    printf("The whole sequence is not arithmetic");
    else
    printf("The whole sequence is arithmetic");
   }
  }
 }
 else
 printf("Can't open file");
}

