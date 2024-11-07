#include <stdio.h>

void array_difference(int p[], int p_size, int q[], int q_size, int result[], int *result_size) {
    *result_size = 0;

    for (int i = 0; i < p_size; i++) {
        int found = 0;
        for (int j = 0; j < q_size; j++) {
            if (p[i] == q[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[*result_size] = p[i];
            (*result_size)++;
        }
    }
}

int main() {
    int p[] = {1, 2, 3, 4};
    int q[] = {2, 4, 5, 6};
    int p_size = sizeof(p) / sizeof(p[0]);
    int q_size = sizeof(q) / sizeof(q[0]);
    int result[100];
    int result_size;

    array_difference(p, p_size, q, q_size, result, &result_size);

    printf("Difference between arrays p and q (p - q): ");
    for (int i = 0; i < result_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
