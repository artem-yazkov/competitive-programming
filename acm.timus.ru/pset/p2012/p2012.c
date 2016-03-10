#include <stdio.h>

int main()
{
    const int HOURS = 5, HMINUTES = 60;
    const int TASKS = 12, TTIME = 45;
    int       F;
    scanf("%d", &F);
    printf("%s\n", ((HOURS - 1) * HMINUTES - (TASKS - F) * TTIME >= 0) ? "YES" : "NO");
    return 0;
}
