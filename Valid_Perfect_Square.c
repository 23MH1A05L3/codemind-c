#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,sr;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        sr=sqrt(n);
        if(sr*sr==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}