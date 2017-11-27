/*
Lab 7 - CSC3320
Description: Scanning and printing a phone number
Author: Harnoor Singh
Date: 10/25/2017
*/
#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;

    printf("Enter phone number [(999)999-9999]: ");
    scanf("(%3d)%3d-%4d", &a, &b, &c);
    printf("you entered %d-%d-%d", a, b, c);
    return 0;
}