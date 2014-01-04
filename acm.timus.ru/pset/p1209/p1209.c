#include <stdio.h>
#include <math.h>

int main()
{
    int N, i;
    double k, n, intpart;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%lf", &k);
        n = ((-1 + sqrt(1 + 8*(k-1))) / 2);
        printf("%d ", modf(n, &intpart) == 0.0);
    }

    return 0;
}
