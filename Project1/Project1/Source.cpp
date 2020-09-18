#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char x[100];
    int n=0;
    scanf("%s",&x);
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 65 and x[i] <= 90)
        {
            n += 1;
        }
    }
    printf("%d",n);
    return 0;
}