#include <stdio.h>
#include <stdlib.h>

int birthday(int* s, int n, int d, int m) {
    int count = 0;

    for (int i = 0; i <= n - m; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }
        if (sum == d) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int* s = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    int d, m;
    scanf("%d %d", &d, &m);

    int result = birthday(s, n, d, m);
    printf("%d\n", result);

    free(s);
    return 0;
}
