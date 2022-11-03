#include <stdio.h>

main()
{
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler\n1.Para cekme: \n2.Para yatirma: \n3.Para gonder: \n4.Bakiye sorgulama: \n5.Kart iade  \n\n\n");
	
	printf("Islemi seciniz: ");
	scanf("%d",&islem);	
	
	switch (islem) {
//kullanýcýdan bir sayý girmesini istedik verilen sayýya göre switch hangi durumu saðlýyorsa onu bize verecek
	
		case 1:
			printf("Bakiyeniz: %d \n",bakiye);
			printf("Cekilecek olan para miktari: ");
			scanf("%d",&tutar);
			if ( bakiye >= tutar){
				printf("Isleminiz basarili bir sekilde gerceklesti! \n");
				printf("Kalan son bakiyeniz: %d \n",bakiye-tutar);
				printf("IYI GUNLER DILERIZ. BIZI TERCIH ETTIGINIZ ICIN TESEKKURLER. YINE BEKLERIZ");
			}
			else{
				printf("YETERSIZ BAKIYE! \n");
				printf("Lutfen para yatiriniz yada daha kucuk tutar cekiniz. ");
			}
			break;
		
		case 2:
			printf("Bakiyeniz: %d \n",bakiye);
			printf("Yatirilacak olan para miktari: ");
			scanf("%d",&tutar);
			printf("Isleminiz basarili bir sekilde gerceklesti! \n");
			printf("Kalan son bakiyeniz: %d \n",bakiye+tutar);
			printf("IYI GUNLER DILERIZ. BIZI TERCIH ETTIGINIZ ICIN TESEKKURLER. YINE BEKLERIZ");
			break;
		
		case 3:
			printf("Bakiyeniz: %d \n",bakiye);
			printf("Gonderilecek olan para miktari: ");
			scanf("%d",&tutar);
			if ( bakiye >= tutar){
				printf("Isleminiz basarili bir sekilde gerceklesti! \n");
				printf("Kalan son bakiyeniz: %d \n",bakiye-tutar);
				printf("IYI GUNLER DILERIZ. BIZI TERCIH ETTIGINIZ ICIN TESEKKURLER. YINE BEKLERIZ");
			}
			else{
				printf("YETERSIZ BAKIYE! \n");
				printf("Lutfen para yatiriniz yada daha kucuk tutar gonderiniz. ");
			}
			break;
		
		case 4:
			printf("BAKIYENIZ: %d \n",bakiye);
			printf("IYI GUNLER DILERIZ. BIZI TERCIH ETTIGINIZ ICIN TESEKKURLER. YINE BEKLERIZ");
			break;
		
		case 5:
			printf("Kart iade edildi! \n ");
			printf("IYI GUNLER DILERIZ. BIZI TERCIH ETTIGINIZ ICIN TESEKKURLER. YINE BEKLERIZ");
			break;
			
		default:
			printf("Lutfen belirlenen islemleri yapiniz.");
	return 0;
	}
}
