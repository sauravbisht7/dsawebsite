#include <stdio.h>
int main() {
    int n, m;
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &n);
    printf("Enter %d elements into the first sorted array:\n", n);
    int firstArray[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &firstArray[i]);
    }
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &m);
    printf("Enter %d elements into the second sorted array:\n", m);
    int secondArray[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &secondArray[i]);
    }
    int mergedArray[n + m],i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (firstArray[i] <= secondArray[j]) {
            mergedArray[k] = firstArray[i];
            i++;
        } else {
            mergedArray[k] = secondArray[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        mergedArray[k] = firstArray[i];i++;k++;
    }
    while (j < m) {
        mergedArray[k] = secondArray[j];j++;k++;
    }
    printf("Merged sorted array: ");
    for (int l = 0; l < n + m; l++) {
        printf("%d ", mergedArray[l]);
    }
    return 0;
}
