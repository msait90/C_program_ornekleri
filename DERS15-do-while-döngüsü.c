#include <stdio.h>

int main(){
	// 1234 sayýsýn rakamlarý toplamý ve basamak sayýsý
	int n ,hane=0 ,toplam=0;
	
	printf("n degerini giriniz: ");
	scanf("%d",&n);
	do {
		
		toplam += (n%10);
		
		hane++;
		
		n = n/10;
		
	} 
	while (n>0);
	printf("rakamlarin toplami : %d ve %d hanelidir.",toplam,hane);
	
	return 0;	
}
