#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char * token;
    char * path = getenv("PATH");

    printf("\npath before strtok: \n%s\n\n", path);
    printf("--------------------\n");

    token = strtok(path, ":");
    printf("path after strtok(path, \":\"): %s\n\n", path);
    printf("first token: %s\n", token);
    printf("--------------------\n");

    while (token = strtok(0, ":")) {
        printf("token: %s\n", token);
    }

    printf("--------------------\n");
    printf("\npath after all tokens have been processed: \n%s\n\n", path);
    printf("====================\n\n");


    return 0;
}