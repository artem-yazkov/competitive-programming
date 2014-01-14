#include <stdio.h>
#include <math.h>

int main()
{
    int primes[15000], pcount;
    int K, N, i;
    
    primes[0] = 2;
    for (N = 3, pcount = 1; pcount < 15000; N += 2)
    {
        int sroot = sqrt(N);
        for (i = 3; (i <= sroot) && ((N % i) != 0); i += 2);
        if (i > sroot)
            primes[pcount++] = N;
    }

    scanf("%d", &K);
    for (i = 0; i < K; i++)
    {
        scanf("%d", &N);
        printf("%d\n", primes[N-1]);
    }

    return 0;
}
