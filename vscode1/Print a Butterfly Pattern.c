#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int spaces;
    for (int i = 1; i <= n; i++) {
        int stars = (i <= (n + 1) / 2) ? i : (n - i + 1);
        spaces = (i <= (n + 1) / 2) ? (n - 2 * i + 1) : (2 * i - n - 1);
        if (spaces < 0) spaces = 0;

        for (int j = 1; j <= stars; j++) printf("*");
        for (int j = 1; j <= spaces; j++) printf(" ");
        for (int j = 1; j <= stars; j++) {
            if (i == (n + 1) / 2 && j == stars && n % 2 != 0) continue;
            printf("*");
        }
        printf("\n");
    }
    return 0;
}