#include <stdio.h>
#include <locale.h>
int main()
{
	float n = 4;
	int L = 323;
	setlocale(LC_CTYPE, "RUS");
	printf("Дано: %1.0f %d\nОтвет:%-+5.1f", n, L, n / L);
}