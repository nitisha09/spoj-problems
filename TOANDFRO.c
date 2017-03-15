#include<stdio.h>
#include<string.h>
int  main()
{
    char a[100];
  int t;
  scanf("%d",&t);
    while(t!=0)
    {
        //scanf("%d",&t);
          scanf("%s",a);
          int t1=strlen(a)/t;
          char c[t1][t];

        int i,j,s1=0;
        int k=0;

            for(i=0;i<t1;i++)
            {
                if(k%2==0)
               for(j=0;j<3;j++)
                {
                c[i][j]=a[s1];
               s1++;
               }
               else
                for(j=2;j>=0;j--)
                {
                c[i][j]=a[s1];
               s1++;
                }

            }
            for(i=0;i<t1;i++)
                for(j=0;j<t;j++)
                printf("%c",c[i][j]);
            printf("\n");
            scanf("%d",&t);

    }
    return 0;
}
