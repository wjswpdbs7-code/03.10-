#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("char_bit : %d\n", CHAR_BIT);
    printf("char_min : %d\n", CHAR_MIN);
    printf("char_max : %d\n", CHAR_MAX);
    printf("int_min : %d \t int_max : %d\n", INT_MIN, INT_MAX);
    printf("long_min : %ld \t long_max : %ld\n", LONG_MIN, LONG_MAX);
    printf("long_long_min : %lld \t long_long_max : %lld\n", LLONG_MIN, LLONG_MAX);
    printf("END_HELLO\n");
    return 0;
}