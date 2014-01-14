#include <stdio.h>

int main()
{
    int  N, rcount = 0;
    char result[256];

    scanf("%d", &N);

    if (N == 0)
    {
        printf ("10\n");
        return 0;
    }
    if (N == 1)
    {
        printf ("1\n");
        return 0;
    }
        
    while (1)
    {
        int d;
        for (d = 9; d > 1; d--)
            if ( N % d == 0)
            {
                result[rcount++] = '0' + d;
                N /= d;
                break;
            }

        if (N == 1)
        {
            int i;
            for (i = rcount - 1; i >= 0; i--)
                printf("%c", result[i]);
            printf("\n");
            break;
        }
        if (d == 1)
        {
            printf("-1\n");
            break;
        }
    }

    return 0;
}
