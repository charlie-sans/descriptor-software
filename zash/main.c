printf("\033[H\033[J");

#include "main.h"

#define MAX_COMMAND_LENGTH 100

int main() {
    char command[MAX_COMMAND_LENGTH];

    while (1) {
                printf("MyShell> ");

                fgets(command, MAX_COMMAND_LENGTH, stdin);

                command[strcspn(command, "\n")] = '\0';

                if (strcmp(command, "exit") == 0) {
            printf("Exiting the shell...\n");
            break;
        }

                if (strcmp(command, "hello") == 0) {
            printf("Hello, World!\n");
        } else if (strcmp(command, "date") == 0) {
            system("date");
        } else {
            printf("Command not found: %s\n", command);
        }
    }

    return 0;
}

