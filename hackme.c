#include <stdio.h>
#include <string.h>

char *password = "super-secret-password";

void security_critical_function() {
    printf("launching nukes!!\n");
}

void preprocess_input(char *string) {
    char local_buffer[16];
    strcpy(local_buffer, string); // Oopsie!

    /* work on local buffer ... */
    return;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("usage: %s <password>\n", argv[0]);
        return -1;
    }

    preprocess_input(argv[1]);

    if(!strncmp(password, argv[1], strlen(password)))
        security_critical_function();
    else
        printf("Unauthorized user!\n");


    return 0;
}
