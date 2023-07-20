#include "main.h"

/**
 * more_numbers - prints 10 times the number
 * s, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
    int i = 1;
    while (i <= 10)
    {
        int j = 0;
        while (j <= 14)
        {
            if (j >= 10)
                _putchar('1');
            _putchar(j % 10 + '0');
            j++;
        }
        _putchar('\n');
        i++;
    }
}
