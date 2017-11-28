#include<stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

// Write the declaration of function split_time
int main() {
    long n;
    int hr, min, sec;
    printf("Enter seconds:");
    scanf("%li", &n);
/* Write the statement to call split_time */
    split_time(n, &hr, &min, &sec);
    printf("Converted format: %d hour %d mins %d secs", hr, min, sec); /* Write the
corresponding expressions */
    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
/* Write the statements to calculate hr, min and sec */
    if (*sec > 60)
        *min = total_sec / 60;
    if (*min > 60)
        *hr = total_sec / 3600;
    *sec = total_sec - (*hr * 3600 + *min * 60);
}   