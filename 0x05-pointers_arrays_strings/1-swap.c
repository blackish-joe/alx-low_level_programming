#include "main.h"
void swap_int(int *a, int *b) {
    // Use a temporary variable to swap values
    int temp = *a;
    *a = *b;
    *b = temp;
}
