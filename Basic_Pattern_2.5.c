#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=64+a;i>=65;i--)
    {
        for(j=64+a;j>=i;j--)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}