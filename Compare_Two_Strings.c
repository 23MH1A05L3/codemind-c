#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i,len1=0,len2=0,c=0;
	scanf("%[^
]s",s1);
	scanf(" %[^
]s",s2);
	for(i=0;s1[i]!=NULL;i++)
	{
		len1++;
	}
	for(i=0;s2[i]!=NULL;i++)
	{
		len2++;
	}
	if(len1!=len2)
	{
		printf("Strings are not Equal");
	}
	else
	{
		for(i=0;s1[i]!=NULL;i++)
		{
			if(s1[i]==s2[i])
			{
				c++;
			}
		}
		if(c==len1)
		{
			printf("Strings are Equal");
		}
		else
		{
			printf("Strings are not Equal");
		}
	}
}