#include<stdio.h>

int main() {

    int number;
    int tester = 1;
    printf(" Enter number: ");
    scanf_s("%d", &number);

    for (tester = 1; tester <= number; tester++) {
        if (number % tester == 0)
            printf("\n %d is factor of %d", tester, number);
    }
}
