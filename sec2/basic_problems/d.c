#include <stdio.h>
#define LIM 100
int freG[LIM + 1], freH[LIM + 1];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int h, g;
        scanf("%d %d", &h, &g);
        freG[g]++; freH[h]++;
    }
    int res = 0;
    for(int i = 1; i<=LIM; i++)
    {
        res += freG[i] * freH[i];
    }

    printf("%d\n", res);

}