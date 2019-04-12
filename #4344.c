#include <stdio.h>

int main(void)
{
    int testCase;

    scanf("%d", &testCase);

    double rvg[testCase];

    for (int i = 0; i < testCase; ++i)
    {
        int N, nCounter = 0, sum = 0, nAvg;
        scanf("%d", &N);
        int score[N];
        for (int j = 0; j < N; ++j)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        nAvg = sum / N;

        for (int j = 0; j < N; ++j)
        {
            if (nAvg < score[j])
                nCounter++;
        }
        rvg[i] = (double)nCounter / N * 100;
    }

    for (int i = 0; i < testCase; ++i)
    {
        printf("%.3lf%%\n", rvg[i]);
    }

    return 0;
}