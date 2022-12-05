#include <stdio.h>

int main() {
	
	int ilk_sayi=1 ;
	int ikinci_sayi=1 ;
	int i;
	
	printf("%d\n%d\n ",ilk_sayi,ikinci_sayi);
	
	for (i=0 ; i<8 ; i++){
		
		int temp = ikinci_sayi;
		ikinci_sayi  += ilk_sayi;
		ilk_sayi = temp;
		
		printf("%d \n%d\n",ikinci_sayi);
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
