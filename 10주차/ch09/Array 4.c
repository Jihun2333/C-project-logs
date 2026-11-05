#include <stdio.h>

int main(void)
{
    int a[20];
    int n, i, j, tmp;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
