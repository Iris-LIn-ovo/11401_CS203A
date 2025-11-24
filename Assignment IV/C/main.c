// main.c
#include <stdio.h>
#include "hash_fn.h"

int main() {
    int m_values[] = {10, 11, 37};
    int num_m = 3;

    int int_keys[] = {21,22,23,24,25,26,27,28,29,30,
                      51,52,53,54,55,56,57,58,59,60};
    int num_int = 20;

    const char *str_keys[] = {
        "cat","dog","bat","cow","ant",
        "owl","bee","hen","pig","fox"
    };
    int num_str = 10;

    printf("=== Hash Function Observation (C Version) ===\n\n");

    // ---- Integer Tests ----
    for (int mi = 0; mi < num_m; mi++) {
        int m = m_values[mi];
        printf("=== Integer Hash (m = %d) ===\n", m);
        printf("Key\tIndex\n-------------------\n");

        for (int i = 0; i < num_int; i++) {
            int idx = hash_int(int_keys[i], m);
            printf("%d\t%d\n", int_keys[i], idx);
        }
        printf("\n");
    }

    // ---- String Tests ----
    for (int mi = 0; mi < num_m; mi++) {
        int m = m_values[mi];
        printf("=== String Hash (m = %d) ===\n", m);
        printf("Key\tIndex\n-------------------\n");

        for (int i = 0; i < num_str; i++) {
            int idx = hash_string(str_keys[i], m);
            printf("%s\t%d\n", str_keys[i], idx);
        }
        printf("\n");
    }

    return 0;
}
