#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char x[100], a;
	scanf("%s", x);
	a = x[0];
	printf("%c", a);
	for (int i = 1; x[i] != '\0'; i++)
	{
		if (x[i] != a) {
			a = x[i];
			printf("%c", a);

		}

	}
	return 0;
}