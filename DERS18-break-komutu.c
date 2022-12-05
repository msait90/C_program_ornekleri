#include <stdio.h>

int main() { 
	
	int toplam = 0;
	int sayi;
	int i;
	
	printf("Cikmak icin -1 degerini yazdiriniz.\n");

	for (i=0; i=1 ;i++){
			//true yazýnca kabul etmesi lazým ama onun yerine i=1 de true anlamýna geliyor !
		printf("Sayi degerini giriniz: ");
  		scanf("%d",&sayi);
		
		if (sayi == -1)
			break;
		toplam += sayi;
		
	}
	printf("Toplam = %d",toplam);

	return 0;
}
