#include <stdio.h>
int main()
{
    int N, S, sign;

    scanf("%d", &N);

    sign = 1;
    if (N <= 0)
    {
        N    = -N;
        sign = -1;
    }

    S = (1 + N) * N / 2;

    if (sign < 0)
        S = -S + 1;

    printf("%d\n", S);

    return 0;
}
