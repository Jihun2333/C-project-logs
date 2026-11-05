#include <stdio.h>

int main(void)
{
    int a[5][5] = {0};
    int i, j;

    a[0][0] = a[0][2] = a[0][4] = 1;

    for (i = 1; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int left  = (j > 0) ? a[i - 1][j - 1] : 0;
            int right = (j < 4) ? a[i - 1][j + 1] : 0;
            a[i][j] = left + right;
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
