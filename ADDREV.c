#include<stdio.h>
int reverve(int a)
{
    int r=0,d;
   while(a!=0)
   {
       d=a%10;
       r=(r*10)+d;
       a=a/10;
   }
   return r;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n0,n1;
        scanf("%d%d",&n0,&n1);
        int rev=reverve(n0);
        int rev1=reverve(n1);
        int s=rev+rev1;
        int rev2=reverve(s);
        printf("%d\n",rev2);

    }
    return 0;
}

