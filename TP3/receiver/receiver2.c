#include "../serial.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    puts("Opening.\n");
    int fd = llopen(COM2, RECEIVER);

    char buf[1024];
    puts("Starting reading.\n");
    int nr = llread(fd, buf);

    buf[nr] = 0;

    printf("\nFull message:\n%s\n", buf);

    return 0;
}