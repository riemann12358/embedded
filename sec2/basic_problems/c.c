#include <stdio.h>
#define LIMIT 3000
int fre[LIMIT + 1];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        fre[tmp]++;
    }
    int res = LIMIT + 1;
    for(int i = 1 ; i <= LIMIT; i++)
    {
        if(fre[i] == 0)
        {
            res = i;
            break;
        }
    }
    printf("%d\n", res);
}