#include <stdio.h>
#include <cs50.h>

void selection_sort(int arr[], int n);

int main() {
    
    int array[] = {64, 25, 12, 22, 11};
    
    int n = sizeof(array) / sizeof(array[0]);
    
    selection_sort(array, n);
    
    printf("Array ordenado: ");
    
    for (int i = 0; i < n; i++) {
        
        printf("%d ", array[i]);
        
    }
    
    printf("\n");
    
    return 0;
}

void selection_sort(int array[], int n) {
    
    int i, j, min_idx;
    
    for (i = 0; i < n-1; i++) {
        
        min_idx = i;
        
        for (j = i+1; j < n; j++) {
            
            if (array[j] < array[min_idx]) {
                
                min_idx = j;
                
            }
            
        }
        
        int temp = arr[min_idx];
        
        arr[min_idx] = arr[i];
        
        arr[i] = temp;
        
    }
}