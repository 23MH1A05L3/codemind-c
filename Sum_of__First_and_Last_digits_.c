#include<stdio.h>
int main()
{
    int N,fd,ld,num;
    scanf("%d",&N);
    ld=N%10;
    fd=N;
    while (fd>=10)
    {
        fd=fd/10;
        
    }
    printf("%d",fd+ld);
}