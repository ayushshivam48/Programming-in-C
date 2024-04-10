#include <stdio.h>
#include <string.h>
int main() {
    char firstString[20];
    char secondString[20];
    char resultString[40];
     printf("Enter the first string: ");
    scanf("%s", firstString);
    printf("Enter the second string: ");
    scanf("%s", secondString);
    int i = 0;
     while (firstString[i] != '\0') {
        resultString[i] = firstString[i];
        i++;}
    int j = 0;
    while (secondString[j] != '\0') {
        resultString[i + j] = secondString[j];
        j++;}
     resultString[i + j] = '\0';
    printf("Concatenated string: %s\n", resultString);
     return 0;}
