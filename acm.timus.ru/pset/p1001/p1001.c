#include <stdio.h>
#include <math.h>

int main()
{
    double iarray[256*1024 / 2];
    int    icount = 0, i;

    while(!feof(stdin))
        if (fscanf(stdin, "%lf", &iarray[icount]) == 1)
            icount++;

    for (i = icount-1; i >= 0; i--)
        printf("%.4lf\n", sqrt(iarray[i]));

    return 0;
}
