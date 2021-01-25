//Buoi14_BTVN4: nhap 3 so, tim so lon nhat//
#include<stdio.h>
int ham_timmax2so(int a, int b)
{
return(a>b? a :b);
}
int ham_timmax3so( int a, int b, int c)
{
return ham_timmax2so(ham_timmax2so(a,b), c );
}
int main()
{
	int a,b,c;
	printf("\nNhap a:"); scanf("%d", &a);
	printf("\nNhap b:"); scanf("%d", &b);
	printf("\nNhap c:"); scanf("%d", &c);
	printf("\nMax la : %d", ham_timmax3so(a,b,c));
}
