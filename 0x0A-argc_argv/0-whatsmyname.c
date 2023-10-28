#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings containing command-line arguments.
 *
 * Return: Always returns 0 for success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    if (argc < 1)
    {
        fprintf(stderr, "Usage: %s [program_name]\n", argv[0]);
        return (1); // Return 1 to indicate an error
    }

    printf("Program name: %s\n", argv[0]);

    return (0); // Return 0 to indicate success
}
