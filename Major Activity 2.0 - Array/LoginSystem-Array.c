#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main() {
    char username[10], password[10];
    bool userFound = false, wrongPassword = false, userDoesNotExist = false;

    char userData[3][10] = {
        "bogart",
        "bogs",
        "bart"
    };

    char passwordData[3][10] = {
        "123",
        "123456",
        "456"
    };

    printf("Enter your username:\n");
    fgets(username, sizeof(username), stdin);

    //remove the newline character from the username
    int newline = strlen(username) - 1;
    if (username[newline] == '\n') {
        username[newline] = '\0';
    }

    printf("Enter your password:\n");
    fgets(password, sizeof(password), stdin);

    //remove the newline from the password
    newline = strlen(password) - 1;
    if (password[newline] == '\n') {
        password[newline] = '\0';
    }

    for (int x = 0; x < 3; x++) {
        if (strcmp(username, userData[x]) == 0) {
            userFound = true;
            if (strcmp(password, passwordData[x]) == 0) {
                wrongPassword = false;
                userDoesNotExist = false;
                break;
            } else {
                wrongPassword = true;
            }
        } else {
            userDoesNotExist = true;
        }
    }

    if (userFound && !wrongPassword) {
        printf("\nLogin Success! Welcome sayu l0ds.");
    }

    if (wrongPassword && userFound) {
        printf("\nWrong password krazy.");
    }

    if (userDoesNotExist && !userFound) {
        printf("\nUser doesn't exist");
    }

    return 0;
}
