#if 0
exec ../c99sh "$0"
#endif

#pragma c99sh cflags -Werror

#include <stdio.h>

int main()
{
    printf("Hello, world!\n");
    return 0;
}
