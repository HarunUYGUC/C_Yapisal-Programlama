/*
#include <stdio.h>
#include <locale.h>

void gunSayisi(int ayNu)
{
	if (ayNu == 2)
	{
		printf("%d. ay 28 g�nd�r.", ayNu);
	}
	else if (ayNu == 4 || ayNu == 6 || ayNu == 9 || ayNu == 11)
	{
		printf("%d. ay 30 g�nd�r.", ayNu);
	}
	else
	{
		printf("%d. ay 31 g�nd�r.", ayNu);
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	int ayNo = 0;

	printf("Hangi ay�n ka� g�n oldu�unu merak ediyorsan�z ilgili ay numaras�n� giriniz. \n");

	while (ayNo < 1 || ayNo > 12)
	{
		printf("Ay No: ");
		scanf_s("%d", &ayNo);

		if (ayNo < 1 || ayNo > 12)
			printf("%d => Hatal� ay numaras�! Tekrar deneyiniz. \n******** \n", ayNo);
		else
			gunSayisi(ayNo);
	}

	return 0;
}
*/

/*
28 g�n s�ren aylar: �ubat (2)
30 g�n s�ren aylar: Nisan (4), Haziran (6), Eyl�l (9), Kas�m (11)
31 g�n s�ren aylar: Ocak (1), Mart (3), May�s (5), Temmuz (7), A�ustos (8), Ekim (10), Aral�k (12)
*/
