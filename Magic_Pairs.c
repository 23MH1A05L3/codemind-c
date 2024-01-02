#include<stdio.h>
int main()
{
    int n,i,c=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if((i+j)%2!=0)
                {
                    c++;
                }
            }
        }
    }
    printf("%d",c);
}