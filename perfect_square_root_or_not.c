#include<stdio.h>
#include<math.h>
int main()
{
    int n,sr;
    scanf("%d",&n);
    sr=sqrt(n);
    if(sr*sr==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}