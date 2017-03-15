#include<stdio.h>
#include<math.h>
int main()
{
   int t,a,d,t1,r,i;
   long long  int  b,p;
 scanf("%d",&t);
   while(t--)
   {
     scanf("%d%lld",&a,&b);
     if(b==0)
        printf("1\n");
        else if(b%4==0)
        {
            p=pow(a,4);
            printf("%d\n",p%10);
        }
     else
     {
       r=b/4;
       t1=(4*r);
       d=b-t1;
       p=pow(a,d);
       i=p%10;
       printf("%d\n",i);
   }
   }
   return 0;
}
