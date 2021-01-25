//BTVN03_Buoi14: Tim BCNN cua 2 so nguyen duong//
#include<stdio.h>
void BCNN(int a, int b)
{
	int last;
	int i=1;
	while(i<=a*b)
	{
		if(i%a==0&&i%b==0)
		{
		printf("\nBCNN la he he :%d",i);
		break;
	    }
	    i++;
	}
}
int main()
{
	int a,b,min;
	printf("\nNhap a:"); scanf("%d", &a);
	printf("\nNhap b:"); scanf("%d", &b);
	BCNN(a,b);
}
