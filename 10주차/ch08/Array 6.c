#include <stdio.h>

int main(void)
{
    int a[100];
    int n = 0;
    int i, x;
    int cnt = 0, sum = 0;

    while (n < 100) {
        scanf("%d", &x);
        if (x == 0)
            break;
        a[n++] = x;
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            cnt++;
            sum += a[i];
        }
    }

    printf("Multiples of 5 : %d\n", cnt);
    printf("sum : %d\n", sum);
    if (cnt > 0)
        printf("avg : %.1f\n", (double)sum / cnt);
    else
        printf("avg : 0.0\n");

    return 0;
}
