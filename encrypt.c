#include<stdio.h>

void encrypt(char *message, int key);

int main() {
    char message[81];
    int key;
    printf("Enter a message to be encrypted: ");
    gets(message);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &key);
    encrypt(message, key);
    printf("Encrypted message: %s", message);
    return 0;
}

void encrypt(char *message, const int key) {
    int i;
    char ch;
    for (i = 0; message[i] != '\0'; ++i) {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z') {//is lower case
            ch = ((ch - 'a') + key) % 26 + 'a';
            message[i] = ch;
        } else if (ch >= 'A' && ch <= 'Z') {//is upper case
            ch = ((ch - 'A') + key) % 26 + 'A';
            message[i] = ch;
        }
    }
}
