#include <stdio.h>
#include <stdlib.h>

// Função auxiliar para encontrar combinações
void findCombinations(int* s, int n, int m, int d, int start, int currentSum, int currentCount, int* count) {
    if (currentCount == m) {
        if (currentSum == d) {
            (*count)++;
        }
        return;
    }
    for (int i = start; i < n; i++) {
        findCombinations(s, n, m, d, i + 1, currentSum + s[i], currentCount + 1, count);
    }
}

// Função principal
int birthdayNoOrder(int* s, int n, int d, int m) {
    int count = 0;
    findCombinations(s, n, m, d, 0, 0, 0, &count);
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

    int result = birthdayNoOrder(s, n, d, m);
    printf("%d\n", result);

    free(s);
    return 0;
}
