#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include "main.h"
int ls(char *argv[50]) {
    DIR *dir;
    struct dirent *entry;

    // Open the current directory if no directory specified
    if (argv == NULL) {
        dir = opendir(".");
    } else {
        dir = opendir(argv[1]);
    }
    printf(dir);
}
