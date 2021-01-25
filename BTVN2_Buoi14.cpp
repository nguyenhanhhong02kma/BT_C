//Viet ham tim UCLN//
#include<stdio.h>

void UCLN(int a, int b, int min) 
{
	if(a>b)
	{
		min=b;
	}
	else
	{
		min=a;
	}
	int i=1;
	int last;
while(i<=min)
{
if(a%i==0 && b%i==0)
{
	last = i;
}
i++;
}
printf("\nUCLN la %d", last);
}
int main()
{
	int a,b,min;
	printf("\nNhap a:"); scanf("%d", &a);
	printf("\nNhap b:"); scanf("%d", &b);
	UCLN(a,b,min);
}
