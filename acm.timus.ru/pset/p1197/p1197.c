#include <stdio.h>

int main()
{
    int N, i;
    
    scanf("%d\n", &N);
    
    for (i = 0; i < N; i++)
    {
        char coord[2];
        int  x, y;
        int  result = 8;

        scanf("%c%c\n", &coord[0], &coord[1]);
        x = 1 + coord[0] - 'a';
        y = 1 + coord[1] - '1';

        if ((x > 7) || (y >= 7))
            result--;
        if ((x >= 7) || (y > 7))
            result--;
            
        if ((x >= 7) || (y < 2))
            result--;
        if ((x > 7) || (y <= 2))
            result--;

        if ((x < 2) || (y <= 2))
            result--;
        if ((x <= 2) || (y < 2))
            result--;

        if ((x <= 2) || (y > 7))
            result--;
        if ((x < 2) || (y >= 7))
            result--;

        printf("%d\n", result);

    }

    return 0;
}
