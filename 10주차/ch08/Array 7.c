#include <stdio.h>

int main(void)
{
    int a[100];
    int n = 0;
    int i, x;

    while (n < 100) {
        scanf("%d", &x);
        if (x == 0)
            break;
        a[n++] = x;
    }

    printf("%d\n", n);

    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0)
            printf("%d ", a[i] * 2);
        else
            printf("%d ", a[i] / 2);
    }
    printf("\n");

    return 0;
}
