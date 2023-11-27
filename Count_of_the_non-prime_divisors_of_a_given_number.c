#include<stdio.h>
int main()
{
    int n,n1,n2,i,r,c1,c2,c3,j;
    scanf("%d",&n);
    n1=n;
    n2=n;
    c1=0;
    c3=0;
    for(i=1;i<=n;i++)
    {
        c2=0;
        if(n%i==0)
        {
            c1=c1+1;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c2=c2+1;
                    
                }
            }
        }
        if(c2==2)
            {
                c3=c3+1;
            }
     }
    printf("%d",c1-c3);
}