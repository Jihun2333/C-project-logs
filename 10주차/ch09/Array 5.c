#include <stdio.h>

int main(void)
{
    int a[4][3];
    int i, j;
    int rowSum, total = 0;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 4; i++) {
        rowSum = 0;
        for (j = 0; j < 3; j++)
            rowSum += a[i][j];
        printf("%d\n", rowSum);
        total += rowSum;
    }

    printf("%d\n", total);

    return 0;
}
