#include <stdio.h>
#include <string.h>

#include "config.h"

int main(int argc, char **argv) {
    if (argc == 1 || (argc == 2 && (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0))) {
        return printf("usage: %s [-h | --help]\n", COMMAND_PREFIX);
    } else {
        return printf("%s: '%s' is not a ghnx command. See 'ghnx --help'.\n", COMMAND_PREFIX, argv[1]);
    } 
    return 0;
}