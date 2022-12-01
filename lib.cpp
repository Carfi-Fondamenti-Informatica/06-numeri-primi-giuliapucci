#include "lib.h"
int n_primo(int a, int b) {
    bool x=true;
    if (b!=1) {
        if ((a % b) != 0) {
            b--;
            x = n_primo(a, b);
        } else {
            x = false;
        }
    } else {
        x = true;
    }

    return x;
}
