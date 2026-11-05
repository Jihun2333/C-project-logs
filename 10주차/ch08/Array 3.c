#include <stdio.h>

int main(void)
{
    int a[10];
    int i;
    int odd = 0, even = 0;

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0)
            odd += a[i];
        else
            even += a[i];
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}
