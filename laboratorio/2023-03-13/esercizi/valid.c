#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N_VALIDI 3

void validate_args(int argc, char const *argv[], char const *validi[], size_t n_validi);
bool is_valid(char const *arg, char const *validi[], size_t n_validi);

int main(int argc, char const *argv[])
{
    const char *validi[] = {"ciao", "hello", "salut"};
    validate_args(argc, argv, validi, N_VALIDI);
    return 0;
}

void validate_args(int argc, char const *argv[], char const *validi[], size_t n_validi)
{
    for (int i = 1; i < argc; i++)
    {
        if (!is_valid(argv[i], validi, n_validi))
            exit(1);
    }
}

bool is_valid(char const *arg, char const *validi[], size_t n_validi)
{
    for (int i = 0; i < n_validi; i++)
    {
        if (strcmp(arg, validi[i]) == 0)
            return true;
    }
    return false;
}