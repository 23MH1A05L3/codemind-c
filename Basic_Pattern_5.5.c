#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        for(k=n-j+1;k<=n;k++)
        {
        for(;j<=n;j++)
        {
            printf("%d",k);
        }
        }
        printf("
");
    }
}