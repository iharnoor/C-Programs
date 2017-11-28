#include<stdio.h>
#include <string.h>

#define MAX 21

int main() {
    char str[MAX];//Max length of word
    char smallest_word[MAX];
    char largest_word[MAX];
    printf("Enter word: ");
    scanf("%s", str);
    strcpy(smallest_word, str);
    strcpy(largest_word, str);
    while (strlen(str) != 4) {
        printf("Enter word: ");
        scanf("%s", str);
        if (strcmp(str, smallest_word) < 0)
            strcpy(smallest_word, str);
        if (strcmp(str, largest_word) > 0)
            strcpy(largest_word, str);
    }
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
}
