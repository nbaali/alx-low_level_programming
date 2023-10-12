#include "main.h"

/**
 *  * _isupper - Check if a character is an uppercase letter
 *   * @c: Character to check
 *    *
 *     * Return: 1 if it's an uppercase letter, 0 otherwise
 *      */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
