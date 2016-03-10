#include <stdio.h>

int main()
{
    int nums[3];
    int result;

    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    if (nums[1] > 1)
        printf("%d\n", nums[0] - nums[1] * nums[2]);
    else
        printf("%d\n", nums[0] - nums[1] - nums[2]);

    return 0;
}
