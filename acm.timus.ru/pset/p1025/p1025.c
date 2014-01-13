#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    int K, i;
    int groups[100];
    int result = 0;

    scanf("%d", &K);
    for (i = 0; i < K; i++)
        scanf("%d ", &groups[i]);

    qsort(groups, K, sizeof(groups[0]), compare);

    for (i = 0; i < K/2 + 1; i++)
        result += groups[i]/2 + 1;

    printf("%d\n", result);

    return 0;
}
