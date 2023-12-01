#include<stdio.h>
int main()
{
    int n,r,i,j,c=0,c1;
    scanf("%d",&n);
    int c2=0;
    int c3=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        while(n!=0)
        {
            c1=0;
            r=n%10;
            for(j=1;j<=r;j++)
            {
                if(r%j==0)
                c1=c1+1;
            }
            if(c1==2)
            {
                c3=c3+1;
            }
            n=n/10;
            c2=c2+1;
        }
        if(c3==c2)
        {
           printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}