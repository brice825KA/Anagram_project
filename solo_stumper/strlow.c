
#include "./mys.h"
#include <string.h>

int strlow(char *string)
{
    int count = 0;
    int low = 32;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z')
            count = string[i] + low + count;
        else
            count += string[i];
    }
    return count;
}
