#include<stdio.h>
#include<string.h>
int main()
{
   char a[]="password";
   char result[100];
   int i,key=0;
   for(i=0;i<strlen(a);i++)
    key ^=((2*(a[i])+3)&0xff);
   for(i=0;i<3;i++)
   {
       int f=a[i]^key;
    result[i]=f;
   }
   for(i=0;i<3;i++)
    printf("%c",result[i]);
    return 0;
}
