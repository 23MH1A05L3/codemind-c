#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	scanf("%[^
]s",s1);
	strcpy(s2,s1);
	int l=strlen(s1);
    int i=0,j=l-1,temp;
    while(i<=j)
    {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
        i++;
        j--;
    }
    if(strcmp(s1,s2)==0)
    {
    	printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}