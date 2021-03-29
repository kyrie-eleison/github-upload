#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    int i;

    if (n <= 1) {
        return false;
    }

    for (i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(void) {

    int n;
    scanf("%d", &n);

    if (is_prime(n)){
        printf("true");
    } else {
        printf("false");
    }
    
    return 0;
}