#include <stdio.h>

main()
{
	int vize1,vize2,final;
	float okul_ort;
	float ders_ort;
	
	printf("1.vize notunu giriniz:");
	scanf("%d",&vize1);
	printf("2.vize notunu giriniz:");
	scanf("%d",&vize2);
	printf("Final notunu giriniz:");
	scanf("%d",&final);
	printf("Okul ortalamanizi giriniz:");
	scanf("%f",&okul_ort);
	
	
	ders_ort = (vize1+vize2)*0.375 + final*0.25;
	printf("Ders ortalamaniz: %.2f\n",ders_ort);
	
	if (ders_ort >= 85){
		if (okul_ort >= 3.0){
			printf("TEBRIKLER! NOTUNUZ= AA");
		}
		else{
			printf("Tebrikler. NOTUNUZ= BA");
		}
	}
	
	else if (ders_ort >= 70){
		if(okul_ort<3.0){
			printf("Basarilar. NOTUNUZ= CB");
		}
		else{
			printf("BASARILAR! NOTUNUZ= BB");
		}
	}
	
	else if (ders_ort >= 60){
		if (okul_ort >= 3.0){
			printf("GECTINIZ. NOTUNUZ= CB");
		}
		else {
			printf("NOTUNUZ= CC,gectiniz.");
		}
	}
	
	else{
		printf("DERSTEN KALDINIZ LUTFEN DAHA COK CALISIN");
	}
	
	return 0;
}
