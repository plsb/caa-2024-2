#include <stdio.h>

void move_zeros_to_end(int arr[], int n) {
    int result[n];  // Lista auxiliar para armazenar os valores não zero
    int index = 0;

    // Copiar todos os elementos não zero para a lista auxiliar
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            result[index++] = arr[i];
        }
    }

    // Adicionar os zeros ao final do array auxiliar
    while (index < n) {
        result[index++] = 0;
    }

    // Copiar os valores de volta para o array original
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    move_zeros_to_end(arr, n);

    // Exibir o array resultante
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
