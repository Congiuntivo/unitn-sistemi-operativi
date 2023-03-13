#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if (argc >= 2)
    {
        /*
        int i = 0;
        while (argv[1][i] != '\0')
        {
            i++;
        }
        printf("%d\n", i);
        */

        printf("%ld\n", strlen(argv[1]));
    }

    return 0;
}
