#include <stdio.h>

int main() {
    int i = -12345;
    unsigned int ui = 54321U;
    short int si = -100;
    unsigned short int usi = 200U;
    long int li = -1234567890L;
    unsigned long int uli = 3000000000UL;
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;
    char c = 'A';
    unsigned char uc = 200; // 200 will display as a character (non-printable), so for demo you may use 'B'

    // Integer Types
    printf("int: %d\n", i);
    printf("unsigned int: %u\n", ui);
    printf("short int: %hd\n", si);
    printf("unsigned short int: %hu\n", usi);
    printf("long int: %ld\n", li);
    printf("unsigned long int: %lu\n", uli);

    // Floating Point Types
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);

    // Character Types
    printf("char: %c\n", c);
    printf("unsigned char: %c\n", uc);

    return 0;
}
