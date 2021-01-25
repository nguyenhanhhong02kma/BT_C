//BTVN5_Buoi14: viet ham giai ptb2//
#include<stdio.h>
#include<math.h>
void ham_GPT(int a, int b, int c)
{
	if(a==0)
	{
		printf("\nx=%.2f", -c/b );
	}
	else
	{
		float delta;
		delta= sqrt((b*b)-(4*a*c));
		if(delta==0)
		{
		printf("\nx=%.2f", -b/(2*a));
	}
	    	if(delta>0)
	    	{
	    	printf("\nx1=%.2f",(-b+sqrt(delta)/(2*a)));
	    	printf("\nx2=%.2f", (-b-sqrt(delta)/2*a));
	    }
	    	else
	    	{
	    		printf("\nPTVN");
			}
		}
	}

int main()
{
	int a,b,c;
	printf("\nGiai PT a*x^2+b^x+c=0");
	printf("\nNhap lan luot 3 so a,b,c"); scanf("\n\n%d\n%d\n%d", &a, &b,&c);
	ham_GPT(a,b,c);
}

