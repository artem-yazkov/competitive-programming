#include <stdio.h>

int main()
{
    int       side, diag, cnum, x0, y0, x, y;
    int       cells[100][100];

    scanf("%d", &side);

    x0 = side; y0 = 1;
    cnum = 1;
    for (diag = 1; diag <= side + side - 1; diag++)
    {
        for (x = x0, y = y0; (x <= side) && (y <= side); x++, y++)
            cells[x-1][y-1] = cnum++;

        (x0 > 1) ? x0-- : y0++;
    }


    for (y = 0; y < side; y++)
    {
        for (x = 0; x < side; x++)
            printf("%d ", cells[x][y]);

        printf("\n");
    }

    return 0;
}
