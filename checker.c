#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length, hasUpper = 0, hasLower = 0, hasDigit = 0;

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    // Remove newline character if present
    size_t ln = strlen(password) - 1;
    if (password[ln] == '\n') {
        password[ln] = '\0';
    }

    length = strlen(password);

    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
    }

    if (length >= 8 && hasUpper && hasLower && hasDigit) {
        printf("Password Strength: Strong\n");
    } else {
        printf("Password Strength: Weak\n");
    }

    return 0;
}
