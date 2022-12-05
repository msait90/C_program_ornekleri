#include <stdio.h>

int main(){
	
	int toplam = 0;
	int sayi;
	int i;
	
	for (i=0; i<=10 ; i++){
		printf("Sayi degerinin giriniz: ");
		scanf("%d",&sayi);
		
		if (sayi%2 == 1)
			continue;
		toplam += sayi;
		
		
}
	printf("Toplam = %d",toplam);
	
	
	return 0; 
}
