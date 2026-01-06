#include "./mys.h"
#include <inttypes.h>

int error(char *array)
{
    int count_nb = 0;
    for (int i = 0; array[i] != '\0'; i++){
        if (array[i] >= '0' && array[i] <= '9')
            count_nb++;
        else if (array[i] <= 'A' && array[i] >= 'Z')
            count_nb++;
        else if (array[i] <= 'a' && array[i] >= 'z')
            count_nb++;
    }
    return count_nb;
}
