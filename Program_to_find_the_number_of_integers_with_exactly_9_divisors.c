#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int c1=0;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
               c=c+1; 
            }
        }
        if(c==9)
        { 
            c1=c1+1;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",c1);
}