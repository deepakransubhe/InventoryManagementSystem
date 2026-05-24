/*
 * delete_product.c
 * Contains the deleteProduct() function
 * Removes a product from inventory permanently
 */

#include <stdio.h>
#include "product.h"

void deleteProduct() {
    struct Product products[MAX_PRODUCTS];
    int count = loadProducts(products);
    int deleteId;
    int found = 0;
    char confirm;

    printf("\n--- DELETE PRODUCT ---\n");
    printf("Enter Product ID to delete: ");
    scanf("%d", &deleteId);

    for (int i = 0; i < count; i++) {
        if (products[i].id == deleteId) {
            printf("\nProduct Found:\n");
            printf("ID: %d | Name: %s | Qty: %d | Price: Rs.%.2f\n",
                   products[i].id, products[i].name,
                   products[i].quantity, products[i].price);

            printf("Are you sure you want to delete? (y/n): ");
            scanf(" %c", &confirm);

            if (confirm == 'y' || confirm == 'Y') {
                /* Shift all elements left to fill the gap */
                for (int j = i; j < count - 1; j++) {
                    products[j] = products[j + 1];
                }
                count--;
                saveProducts(products, count);
                printf("\nProduct deleted successfully!\n");
            } else {
                printf("\nDeletion cancelled.\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nProduct with ID %d not found!\n", deleteId);
    }
}
