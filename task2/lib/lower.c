#include "convert.h"
#include <ctype.h>

void lower(char *str)
{
    while(*str)
    {
        *str = tolower((unsigned char)*str);
        str++;
    }
}