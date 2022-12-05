#include <stdio.h>

int main (){
	
	int n;
	int fac = 1;

	printf("Lutfen faktoriyelin n degerini giriniz: ");
	scanf("%d",&n);
	
	while (n != 0){
		
		fac = fac * n;
	
		n--;
	}
	printf("Faktoriyel = %d",fac);
	
	
	return 0;
}
