#include <stdio.h>
#include <string.h>

char *stringrev(const char *str);

int main(int argc, char const *argv[])
{
    if (argc >= 2)
    {
        printf("%s\n", stringrev(argv[1]));
    }
    return 0;
}

char *stringrev(const char *str)
{
    int len = strlen(str);
    char to_return[len + 1];
    for (int i = len - 1; i >= 0; i--)
    {
        to_return[i] = str[i];
    }
    to_return[len] = '\0';
    return to_return;
}
