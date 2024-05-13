#define cls "\033[H\033[J"

#include "main.h"
#include "commands.c"
#define MAX_COMMAND_LENGTH 100
#define version "\e[1;36m 0.1.0 \n \e[0m"
int main() {
    char command[MAX_COMMAND_LENGTH];

    while (1) {
                printf("MyShell> ");

                fgets(command, MAX_COMMAND_LENGTH, stdin);

                command[strcspn(command, "\n")] = '\0';

                if (strcmp(command, "exit") == 0) {
            printf(" \e[0;32m Exiting zash...\n \e[0m thank you for using \e[1;35m zash \e[0m version ");
	    printf(version);
	    printf("\n");
	    printf("hope to see you again soon \n");
            break;
            }
                if (strcmp(command, "hello") == 0) {
            printf("Hello, World!\n");
        } else if (strcmp(command, "ls") == 0){
            ls("./");
        } else {
            printf("Command not found: %s\n", command);
        }
    }

    return 0;
}

