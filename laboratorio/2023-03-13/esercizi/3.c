#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *stringrev(const char *str);
int stringpos(const char *str, char chr);

int main(int argc, char const *argv[])
{
    if (argc >= 2)
    {
        printf("%s\n", stringrev(argv[1]));
        printf("%d\n", stringpos(argv[1], 'a'));
    }
    return 0;
}

char *stringrev(const char *str)
{
    int len = strlen(str);
    char *to_return = (char *)malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++)
    {
        to_return[i] = str[len - i - 1];
    }
    to_return[len] = '\0';
    return to_return;
}

int stringpos(const char *str, char chr)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if( str[i] == chr )
            return i;
    }
    return -1;
}