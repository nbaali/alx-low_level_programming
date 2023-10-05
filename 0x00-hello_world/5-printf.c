#include <unistd.h>

int main(void)
{
    char text[] = "with proper grammar, but the outcome is a piece of art,\n";
    ssize_t n = sizeof(text) - 1; // Length of the text excluding the null terminator
    
    // Write the text to standard output (stdout)
    write(STDOUT_FILENO, text, n);
    
    return (0);
}
