#include<stdio.h>
int main()
{
    int l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    for(;n>0;n--)
    {
        scanf("%d%d",&w,&h);
        if(w<l||h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        if(w>=l&&h>=l)
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}