#include <stdio.h>

main()
{
	float vize1,vize2,final;
	float ders_ort;
	float ortalama;
	
	printf("1.vize notunuzu giriniz: ");
	scanf("%f",&vize1);
	printf("2.vize notunuzu giriniz ");
	scanf("%f",&vize2);
	printf("Final notunuzu giriniz: ");
	scanf("%f",&final);

	
	ders_ort = ((vize1+vize2)*0.25 )+ (final*0.5);
	
	if ( ders_ort >= 70 )
	{
		printf("Dersten gectiniz.");
	}
	
	else if (ders_ort >= 50){
		printf("Butunlemeye kaldiniz.\n");
		printf("Ortalama notunuzu giriniz: ");
		scanf("%f",&ortalama);
		
		if (ortalama < 2.5){
			printf("Doneminiz uzadi cunku ortalamaniz yetersiz");
		}
		else {
			printf("Bute girebilirsiniz");
		}
	}
	
	else
	{
		printf("Donem uzattýnýz.");
	}
	
	return 0;
}
