#include <stdio.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][100];

    for(int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf(" %[^\n]", str[i]);
    }

    printf("\nStrings are:\n");

    for(int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}