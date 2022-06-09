#include <stdio.h>
#include <unistd.h>


static void show(char *oOne, char *tTwo)
{
        fprintf(stderr, "%p:\t'%s'\n", oOne, oOne);
        fprintf(stderr, "%p:\t'%s'\n", tTwo, tTwo);
        fprintf(stderr, "[offset %i]\n", (int) (tTwo - oOne));
}


int main(int argc, char *argv[], char *envp[])
{
        if (argc == 3)
        {
        show(argv[1], argv[2]);
        return 0;
        }

        char  arg1[] = "12\00034\000hello";
        char *arg2   = arg1 + 6;

        show(arg1, arg2);

        char *new_argv[] = { argv[0], arg1, arg2, NULL };

        execve(argv[0], new_argv, envp);
        return 1;
}
