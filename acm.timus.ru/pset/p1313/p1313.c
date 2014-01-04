#include <stdio.h>

int main()
{
    int       N, d1, d2, x0, y0, x, y;
    int       pixels[100][100];

    scanf("%d", &N);

    for (y = 0; y < N; y++)
        for (x = 0; x < N; x++)
            scanf("%d", &pixels[x][y]);

    x0 = y0 = 1;
    for (d1 = 1; d1 <= N + N - 1; d1++)
    {
        for (x = x0, y = y0; (x <= N) && (y >= 1); x++, y--)
        {
            printf("%d ", pixels[x-1][y-1]);
        }
        (y0 < N) ? y0++ : x0++;
    }

    return 0;
}
