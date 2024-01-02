#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    int hl=23-h;
    printf("%d",hl*60+(60-m));
}