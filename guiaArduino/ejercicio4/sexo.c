#include <stdio.h>
int ejemplo = 0;
void funcion (void);

int main () {
    funcion();
    printf("%d\n", ejemplo);
    funcion();
    printf("%d\n", ejemplo);
    return 0;
}

void funcion (void) {
    int n = 1;
    ejemplo += n;
}
