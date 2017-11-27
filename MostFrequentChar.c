#include <stdio.h>
#include <assert.h>

typedef int Bool;


main() {
    Bool digit_seen[10] = {0};
    int digit;
    long int n;
    int SIZE = sizeof(digit_seen) / sizeof(digit_seen[0]);

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    for (int i = 0; i < SIZE; ++i) {
        printf("%d", digit_seen[i]);
    }
    printf("\nMax frequent number = %d", indexOf(digit_seen, SIZE, maxValue(digit_seen, SIZE)));
    return 0;
}

int maxValue(int myArray[], int size) {
    int i;
    int maxValue = myArray[0];

    for (i = 0; i < size; ++i) {
        if (myArray[i] > maxValue) {
            maxValue = myArray[i];
        }
    }
    return maxValue;
}

int indexOf(int a[], int size, int value) {
    int index = 0;
    while (index < size && a[index] != value) ++index;
    return (index == size ? -1 : index);
}

