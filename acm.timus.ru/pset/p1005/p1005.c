#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*!
 * Method №1, seems to be wrong
 */
int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

int sort_and_weigh(int *stones, int scount)
{
    int i, different = 0;

    qsort(stones, scount, sizeof(stones[0]), compare);

    for (i = 0; i < scount; i++)
        if (different <= 0)
            different += stones[i];
        else
            different -= stones[i];

    if (different < 0)
        different = -different;

    return different;
}

/*!
 * Method №2, fullsearch
 */
void fullsearch_rec(int *stones, int scount, int diff, int *mindiff)
{
    if (scount == 0)
    {
        if (diff < 0)
            diff = -diff;
        if (diff < *mindiff)
            *mindiff = diff;
        return;
    }

    fullsearch_rec(stones + 1, scount - 1, diff + stones[0], mindiff);
    fullsearch_rec(stones + 1, scount - 1, diff - stones[0], mindiff);
}

int fullsearch(int *stones, int scount)
{
    int different = INT_MAX;
    fullsearch_rec(stones, scount, 0, &different);
    return different;
}

int main()
{
    int K, i;
    int stones[20];
    int different = 0;

    scanf("%d", &K);
    for (i = 0; i < K; i++)
        scanf("%d ", &stones[i]);

    printf("%d\n", fullsearch(stones, K));

    return 0;
}
