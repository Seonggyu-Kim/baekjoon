#include <stdio.h>

int main(void)
{
    int init_num, nCycle = 0, new_num = 0, temp = 0;

    scanf("%d", &init_num);

    if (init_num == 0)
    {
        printf("1\n");
        return 0;
    }

    temp = init_num;
    while (new_num != init_num)
    {
        int t, o;
        t = temp / 10;
        o = temp % 10;
        new_num = o * 10 + (o + t) % 10;
        temp = new_num;
        nCycle++;
    }

    printf("%d\n", nCycle);

    return 0;
}