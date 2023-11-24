#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=n;j++)
            {
                printf("0 ");
            }
            printf("
");
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                printf("1 ");
            }
            printf("
");
        }
    }
}