#include <stdio.h>

void max_min_array(int *a, int dim, int *min, int *max);

int main(void) {
    int dim, min, max;
    int a[] = {};
    printf("Inserire il numero massimo di numeri da inserire: \n");
    scanf("%d", &dim);

    max_min_array(a, dim, &min, &max);

    printf("Numero massimo: [%d]\n Numero Minimo: [%d]\n" , max , min);

    return 0;
}

void max_min_array(int *a, int dim, int *min, int *max) {
    *max = 0;
    *min = 0;
    for (int i = 0; i < dim; i++) {
        printf("Inserire numero [%d]: \n", i);
        scanf("%d", &a[i]);

        if (a[i] > *max) {
            *max = a[i];
        }

        if (a[i] < *min) {
            *min = a[i];
        }
    }
}
