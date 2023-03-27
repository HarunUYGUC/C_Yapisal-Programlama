/*
#include <stdio.h>
#include <locale.h>

void gunSayisi(int ayNu)
{
	if (ayNu == 2)
	{
		printf("%d. ay 28 gündür.", ayNu);
	}
	else if (ayNu == 4 || ayNu == 6 || ayNu == 9 || ayNu == 11)
	{
		printf("%d. ay 30 gündür.", ayNu);
	}
	else
	{
		printf("%d. ay 31 gündür.", ayNu);
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	int ayNo = 0;

	printf("Hangi ayýn kaç gün olduðunu merak ediyorsanýz ilgili ay numarasýný giriniz. \n");

	while (ayNo < 1 || ayNo > 12)
	{
		printf("Ay No: ");
		scanf_s("%d", &ayNo);

		if (ayNo < 1 || ayNo > 12)
			printf("%d => Hatalý ay numarasý! Tekrar deneyiniz. \n******** \n", ayNo);
		else
			gunSayisi(ayNo);
	}

	return 0;
}
*/

/*
28 gün süren aylar: Þubat (2)
30 gün süren aylar: Nisan (4), Haziran (6), Eylül (9), Kasým (11)
31 gün süren aylar: Ocak (1), Mart (3), Mayýs (5), Temmuz (7), Aðustos (8), Ekim (10), Aralýk (12)
*/
