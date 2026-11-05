#include <stdio.h>

int main(void)
{
    int a[100];
    int n = 0;
    int i, x;
    int max, min;

    while (n < 100) {
        scanf("%d", &x);
        if (x == 0)
            break;
        a[n++] = x;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    max = min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("%d\n", max + min);

    return 0;
}
