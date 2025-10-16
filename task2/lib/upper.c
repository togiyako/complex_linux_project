#include "convert.h"
#include <ctype.h>

void upper(char *str)
{
    while(*str)
    {
        *str = toupper((unsigned char)*str);
        str++;
    }
}