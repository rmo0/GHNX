#include <stdio.h>
#include "ghnx.h"

int main(int argc, char **argv) {
    if (argc == 1 || (argc == 2 && (argv[1] == "-h" || argv[1] == "--help"))) return printf(""); 
    return 0;
}