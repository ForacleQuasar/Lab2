#include <stdio.h>
#include <locale.h>
int main()
{
	float n = 4;
	int L = 323;
	setlocale(LC_CTYPE, "RUS");
	printf("����: %1.0f %d\n�����:%-+5.1f", n, L, n / L);
}