/*
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int cevap = 87, sayi = -1, devamMi;

	printf("0 - 100 arasýndaki sayýyý tahmin et. \n");

	while (sayi != cevap)
	{
		printf("Tamininizi giriniz: ");
		scanf_s("%d", &sayi);

		if (sayi == cevap)
		{
			printf("Tebrikler, bulunacak sayý %d idi. \n", cevap);

			printf("Devam Et (1) - Çýk (0): ");
			scanf_s("%d", &devamMi);

			if (devamMi == 1)
			{
				sayi = -1;
			}
			else
			{
				printf("Çýkýþ yapýldý.");
				break;
			}
		}
		else if (sayi > cevap)
			printf("Sayýnýzý azaltýnýz! ");
		else
			printf("Sayýnýzý artýrýnýz! ");
	}
	
	return 0;
}
*/
