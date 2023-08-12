#include <stdio.h>

void findPythagoreanTriples(int limit) {
    for (int a = 1; a <= limit; a++) {
        for (int b = a; b <= limit; b++) {
            for (int c = b; c <= limit; c++) {
                if (a * a + b * b == c * c) {
                    printf("Cateto 1: %d, Cateto 2: %d, Hipotenusa: %d\n", a, b, c);
                }
            }
        }
    }
}

int main() {
    int limit;
    printf("Encontre todos os triplos pitagóricos com até qual valor? ");
    scanf("%d", &limit);

    printf("Triplos pitagóricos para catetos e hipotenusa até %d:\n", limit);
    findPythagoreanTriples(limit);

    return 0;
}
