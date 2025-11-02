#include <stdio.h>

int main() {
    int i;
    unsigned int ui;
    short int si;
    unsigned short int usi;
    long int li;
    unsigned long int uli;
    float f;
    double d;
    long double ld;
    char c;
    unsigned char uc;

    // Integer Types
    printf("Enter int: ");
    scanf("%d", &i);
    printf("You entered int: %d\n", i);

    printf("Enter unsigned int: ");
    scanf("%u", &ui);
    printf("You entered unsigned int: %u\n", ui);

    printf("Enter short int: ");
    scanf("%hd", &si);
    printf("You entered short int: %hd\n", si);

    printf("Enter unsigned short int: ");
    scanf("%hu", &usi);
    printf("You entered unsigned short int: %hu\n", usi);

    printf("Enter long int: ");
    scanf("%ld", &li);
    printf("You entered long int: %ld\n", li);

    printf("Enter unsigned long int: ");
    scanf("%lu", &uli);
    printf("You entered unsigned long int: %lu\n", uli);

    // Floating Point Types
    printf("Enter float: ");
    scanf("%f", &f);
    printf("You entered float: %f\n", f);

    printf("Enter double: ");
    scanf("%lf", &d);
    printf("You entered double: %lf\n", d);

    printf("Enter long double: ");
    scanf("%Lf", &ld);
    printf("You entered long double: %Lf\n", ld);

    // Character Types
    printf("Enter char: ");
    scanf(" %c", &c); // Space before %c to skip whitespace
    printf("You entered char: %c\n", c);

    printf("Enter unsigned char: ");
    scanf(" %c", &uc); // Works same as char for input
    printf("You entered unsigned char: %c\n", uc);

    return 0;
}
