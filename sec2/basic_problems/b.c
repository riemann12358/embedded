#include<stdio.h>
#define LIMIT 100
int main()
{
    char s[LIMIT + 1], output[2 *LIMIT + 1];
    scanf("%s", s);
    int ind = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i]>='A' && s[i] <= 'Z')
        {
            int diff = s[i] - 'A';
            s[i] = 'a' + diff;
        }
        if(!(s[i] == 'a' 
        || s[i] == 'o' 
        || s[i] == 'y' 
        || s[i] == 'e' 
        || s[i] == 'u'
        || s[i] == 'i'))
        {
            output[ind++] = '.';
            output[ind++] = s[i];
        }
    }
    output[ind] = '\0';
    printf("%s\n", output);
    return 0;
}