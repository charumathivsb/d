#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,count=0,d;
	scanf("%s",a[i]);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		if((a[i]>=0)&&(a[i]<=9))
		count++;
		
	}
	if(count==d)
	printf("yes");
	else
	printf("no ");
	return 0;
}
