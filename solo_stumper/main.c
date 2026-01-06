
#include "./mys.h"

int main(int argc, char **argv)
{
    int str_1 = 0;
    int str_2 = 0;
    int error_one = 0;
    int error_two = 0;
    int sum_error = 0;

    if (argc != 3) {
        printf("Error :not enough arguments\n");
        return 84;
    }
    else {
        str_1 = strlen(argv[1]);
        str_2 = strlen(argv[2]);
        if (str_1 != str_2) {
            printf("no anagram.\n");
        } else {
            error_one = error(argv[1]);
            error_two = error(argv[2]);
            sum_error = error_one + error_two;
            if (sum_error != 0)
                printf("no anagram.\n");
            else {
                int strlow_1 = strlow(argv[1]);
                int strlow_2 = strlow(argv[2]);
                if (strlow_1 != strlow_2)
                    printf("no anagram.\n");
                else
                    printf("anagram.\n");
            }
        }
        return 0;
    }
}
