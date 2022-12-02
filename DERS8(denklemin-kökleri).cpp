#include <stdio.h>
#include <math.h>

// kullanýcýdan 5 sayý alýp aritmetik ortalamasýný veriyor.

// kökleri buldurmaya yarýyor ax2+bx+c
main()
{
	int a;
	int b;
	int c;
	
	printf("x'in karesinin baskatsayisi: ");
	scanf("%d",&a);
	printf("x'in baskatsayisi: ");
	scanf("%d",&b);
	printf("sabit deger: ");
	scanf("%d",&c);
	
	int delta;
	delta = b*b-4*a*c;

	float x1;
	float x2;
	
	x1= (-b + (sqrt(delta))) / 2*a;
	x2= (-b - (sqrt(delta))) / 2*a;
	
	printf("\nDenklemin x1 koku: %.2f \nDenklemin x2 koku: %.2f",x1,x2);
	
	
	return 0;
}
