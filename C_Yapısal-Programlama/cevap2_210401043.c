/*
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void sayi_tahmin_oyunu();

void devam_mi()
{	
	int devamMi;

	printf("Devam Et (1) - ��k (0): ");
	scanf_s("%d", &devamMi);

	if (devamMi == 1)
		sayi_tahmin_oyunu();
	else
		printf("��k�� yap�ld�.");
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
			printf("Tebrikler, bulunacak say� %d idi. \n", cevap);
			devam_mi();
		}
		else if (sayi > cevap)
			printf("Say�n�z� azalt�n�z! ");
		else
			printf("Say�n�z� art�r�n�z! ");
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	printf("0 - 100 aras�ndaki say�y� tahmin et. \n");
	sayi_tahmin_oyunu();

	return 0;
}
*/
