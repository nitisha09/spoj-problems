#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,c,i,j;
        scanf("%d%d",&l,&c);
        for(i=1;i<=l;i++)
        {
            for(j=1;j<=c;j++)
            {
                if(i%2==1)
                {
                    if(j%2==1)
                        printf("*");
                    else
                        printf(".");
                }
                else
                {
                    if(j%2==1)
                        printf(".");
                    else
                        printf("*");
                }
            }
            printf("\n");

        }
    }
    return 0;

}
