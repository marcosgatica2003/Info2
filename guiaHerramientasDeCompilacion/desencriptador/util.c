#include "util.h"

void intercambiarBit4porBit2 (unsigned char* a) {
    unsigned char bit4 = ((*a) << 3) & 1;
    unsigned char bit2 = ((*a) << 1) & 1;

    if (bit2 != bit4) {
        (*a) ^= (1 << 3);
        (*a) ^= (1 << 1);
   }

}
