#include<stdio.h>
main(void)
{
 int a,b;FILE *f;
 f=fopen("KEK.txt","r");
 if(f!=NULL)
 {
  if(fscanf(f,"%d",&a)!=1)
  {
   printf("File is emrty");
  }
  else
  {
  }
 }
 else
 printf("Can't open file");
}

