#include<stdio.h>
main(void)
{
 int a,b,c,nc;FILE *f;
 f=fopen("KEK.txt","r");
 if(f!=NULL)
 {
  if(fscanf(f,"%d",&a)!=1)
  {
   printf("File is empty");
  }
  else
  {
   if(fscanf(f,"%d",&b)!=1)
   {
    printf("file is empty");
   }
   else
   {
    nc=0;
    if(a!=b)
     while(fscanf(f,"%d",&c)==1)
     {
      if(a < c )
      {
       if(c < b)
       nc++;
      }
      else if(b < c)
      {
       if(c < a)
       nc++;
      }
     }
    else
    {
    printf("No items found");
    }
    if(nc!=0)
    printf("%d",nc);
   }
  }
 }
 else
 printf("Can't open file");
}
