/*
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int cevap = 87, sayi = -1, devamMi;

	printf("0 - 100 aras�ndaki say�y� tahmin et. \n");

	while (sayi != cevap)
	{
		printf("Tamininizi giriniz: ");
		scanf_s("%d", &sayi);

		if (sayi == cevap)
		{
			printf("Tebrikler, bulunacak say� %d idi. \n", cevap);

			printf("Devam Et (1) - ��k (0): ");
			scanf_s("%d", &devamMi);

			if (devamMi == 1)
			{
				sayi = -1;
			}
			else
			{
				printf("��k�� yap�ld�.");
				break;
			}
		}
		else if (sayi > cevap)
			printf("Say�n�z� azalt�n�z! ");
		else
			printf("Say�n�z� art�r�n�z! ");
	}
	
	return 0;
}
*/
