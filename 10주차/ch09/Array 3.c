#include <stdio.h>

int main(void)
{
    int a[10];
    int i;

    scanf("%d %d", &a[0], &a[1]);

    for (i = 2; i < 10; i++)
        a[i] = (a[i - 2] + a[i - 1]) % 10;

    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
