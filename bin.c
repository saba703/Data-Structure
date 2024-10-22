#include <stdio.h>

void main() {
    int list[20], i, item, n, mid, s, e;
    int found = 0;

  
    printf("Enter the length of the list (max 20): ");
    scanf("%d", &n);

   
    if (n <= 0 || n > 20) {
        printf("Invalid length. Please enter a number between 1 and 20.\n");
     
    }

    
    printf("Enter elements in non-decreasing order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    
    printf("Enter the item to search: ");
    scanf("%d", &item);

    
    s = 0;
    e = n - 1;

    
    while (s <= e) {
        mid = (s + e) / 2;

        if (list[mid] == item) {
            printf("Item present at index %d\n", mid);
            found = 1;
            break; 
        } else if (list[mid] < item) {
            s = mid + 1; 
        } else {
            e = mid - 1; 
        }
    }

    if (!found) {
        printf("Item not found\n");
    }
}

