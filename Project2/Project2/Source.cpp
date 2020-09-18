#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[100], b[100];
	int a1 = 0, b1 = 0;
	scanf("%s %s", a, b);
	for (int i = 0; a[i] != '\0'; i++)
	{
		a1 += 1;
	}
	for (int i = 0; b[i] != '\0'; i++)
	{
		b1 += 1;
	}
	if (a1 > b1) {
		printf("string A Longer than string B \n");
	}
	else printf("string B Longer than string A ");

	return 0;
}