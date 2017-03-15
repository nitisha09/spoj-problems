#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char a[200];
scanf("%d",&t);
while(t--)
{
    int i;
    scanf("%s",a);
    for(i=0;i<strlen(a)/2;i=i+2)
        printf("%c",a[i]);
        printf("\n");
}
return 0;

}
