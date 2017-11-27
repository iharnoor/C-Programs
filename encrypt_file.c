#include<stdio.h>
#include <process.h>
#include <mem.h>

void encrypt(char *message, int key);

int main() {
    char message[150], c, fileName[30];
    int key;
    printf("Enter name of file to be encrypted: ");
    scanf("%s", fileName);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &key);
    FILE *readPTR, *writePTR;
    readPTR = fopen(fileName, "r");
    writePTR = fopen(strcat(fileName, ".enc"), "w");
    if (readPTR == NULL)
        exit(-1);
    while (!feof(readPTR)) {
        fgets(message, 150, readPTR);
        printf("%s", message);
        encrypt(message, key);
        fprintf(writePTR, message);
        if ((c = fgetc(readPTR)) == EOF)
            break;
        ungetc(c, readPTR);
    }
    fclose(readPTR);
    fclose(writePTR);
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
