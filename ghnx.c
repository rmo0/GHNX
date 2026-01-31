#include <stdio.h>
#include "ghnx.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("引数が指定されていません。\n");
    } else if (argc > 1) {
        printf("引数が%dつ指定されています。\n", argc-=1);
        for (int i = 0; i < argc; i++) {
            printf("%s\n", argv[i + 1]);
        }
    }
    return 0;
}