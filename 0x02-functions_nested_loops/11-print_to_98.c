#include <stdio.h>
#include "main.h"

/**
 * print_t0_98 - prints numbers from n to 98
 *@n: intege value
 */

void print_to_98(int n)
{
	
    if (n <= 98) {
        for (int i = n; i <= 98; i++) {
            printf("%d", i);

            if (i < 98) {
                printf(", ");
            }
        }
    } else {
        for (int i = n; i >= 98; i--) {
            printf("%d", i);

            if (i > 98) {
                printf(", ");
            }
        }
    }

    printf("\n");
}
