/*
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void sayi_tahmin_oyunu();

void devam_mi()
{	
	int devamMi;

	printf("Devam Et (1) - Çýk (0): ");
	scanf_s("%d", &devamMi);

	if (devamMi == 1)
		sayi_tahmin_oyunu();
	else
		printf("Çýkýþ yapýldý.");
}

void sayi_tahmin_oyunu()
{
	int cevap, sayi = -1;

	srand(time(NULL));
	cevap = rand() % 100;

	while (sayi != cevap)
	{
		printf("Tamininizi giriniz: ");
		scanf_s("%d", &sayi);

		if (sayi == cevap)
		{
			printf("Tebrikler, bulunacak sayý %d idi. \n", cevap);
			devam_mi();
		}
		else if (sayi > cevap)
			printf("Sayýnýzý azaltýnýz! ");
		else
			printf("Sayýnýzý artýrýnýz! ");
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	printf("0 - 100 arasýndaki sayýyý tahmin et. \n");
	sayi_tahmin_oyunu();

	return 0;
}
*/
