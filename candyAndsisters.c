#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        // Calculate the number of pairs
        int pairs = (n - 1) / 2;
        printf("%d\n", pairs);
    }

    return 0;
}


