#include <stdio.h>

int main() {
    double no = 3.14;    // Consider address of no as 100
    double *a = &no;     // Consider address of a as 200
    double **b = &a;     // Consider address of b as 300
    double ***c = &b;    // Consider address of c as 400
    double ****d = &c;   // Consider address of d as 500

    printf("%d", &no);   // Output: 100
    printf("%d", a);     // Output: 100
    printf("%d", &c);    // Output: 400
    printf("%d", &d);    // Output: 500
    printf("%d", d);     // Output: 500
    printf("%d", *d);    // Output: 400
    printf("%d", **d);   // Output: 300
    printf("%d", ***d);  // Output: 200

    return 0;
}