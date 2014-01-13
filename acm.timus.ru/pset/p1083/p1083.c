#include <stdio.h>

int main()
{
    int N, K = 0, C;
    long int result;

    scanf("%d", &N);
    getchar();
    while (getchar() == '!')
        K++;

    result = 1;
    for (; N > 0; N -= K)
        result *= N;

    printf("%lld\n", result);

    return 0;
}
