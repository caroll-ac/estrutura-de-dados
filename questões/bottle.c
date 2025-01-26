#include <stdio.h>

int conta_garrafa(int n) {
    int garrafa, sobra;
    if (n <= 1){
        return 0;
    }
    if (n == 2)
        return 1;
    
    garrafa = n /3;
    sobra = n % 3;
    
    return garrafa + conta_garrafa(garrafa + sobra);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n != 0){
        int resultado = conta_garrafa(n);
        printf("%d\n", resultado);
        scanf("%d", &n);
    }
    return 0;
}