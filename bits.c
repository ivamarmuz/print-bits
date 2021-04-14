#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    unsigned int c, mask;
    int i;

    if (argc < 2) {
        printf("Usage: %s <nubmer>\n", argv[0]);
        exit(1);
    }

    c = atoi(argv[1]);
    mask = 1 << (sizeof(c) * 8 - 1);

    printf("Number: %d\nBits: ", c);

    for (i = 0; i < sizeof(c) * 8; i++) {
        c & mask ? putchar('1') : putchar('0');
        mask >>= 1;

        if (!((i+1) % 8))
            putchar(' ');
    }

    putchar('\n');

    return 0;
}