#include <stdio.h>

int main(void)
{
    int N, nCount = 0;

    scanf("%d", &N);

    if (N == 4 || N == 7) {
        printf("-1");
    } 
    else {
        if (N % 5 == 1 || N % 5 == 4) {
            nCount += N / 5;
            nCount--;
            N -= nCount * 5;
            nCount += N / 3;
        } 
        else if (N % 5 == 2) {
            nCount += N / 5;
            nCount -= 2;
            N -= nCount * 5;
            nCount += N / 3;
        }
        else {
            nCount += N / 5;
            N -= nCount * 5;
            nCount += N / 3;
        }
        printf("%d", nCount);
    }

    

    return 0;
}

