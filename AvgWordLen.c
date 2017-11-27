#include <stdio.h>
int main() {
    int letters = 0;//changed
    int words;
    char character;
    printf("Enter a Sentence: ");
    int space=0;
    while((character= (char) getchar()) != '\n'){
        if(character != ' '){
            if(!space){
                words++;
                space=1;
            }
            letters++;
        }else {
            space = 0;
        }
    }
    printf("Average word length : %.1f \n", (letters*1.0)/words);
    return 0;
}
