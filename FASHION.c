#include<stdio.h>
void selection(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        int temp;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
    {int sum=0;
        int n,i;
        scanf("%d",&n);
       int m[n],w[n];
        for(i=0;i<n;i++)
            scanf("%d",&m[i]);
        for(i=0;i<n;i++)
            scanf("%d",&w[i]);
       selection(m,n);
       selection(w,n);
    for(i=n-1;i>=0;i--)
        sum=sum+(m[i]*w[i]);
    printf("%d\n",sum);
    }
    return 0;
}
