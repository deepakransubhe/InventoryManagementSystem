/*
 * search_product.c
 * Contains the searchProduct() function
 * Allows searching for a product by its ID
 */

#include <stdio.h>
#include "product.h"

void searchProduct() {
    struct Product products[MAX_PRODUCTS];
    int count = loadProducts(products);
    int searchId;
    int found = 0;

    printf("\n--- SEARCH PRODUCT ---\n");
    printf("Enter Product ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < count; i++) {
        if (products[i].id == searchId) {
            printf("\nProduct Found!\n");
            printf("-----------------------------\n");
            printf("ID       : %d\n", products[i].id);
            printf("Name     : %s\n", products[i].name);
            printf("Quantity : %d\n", products[i].quantity);
            printf("Price    : Rs. %.2f\n", products[i].price);
            printf("-----------------------------\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nProduct with ID %d not found!\n", searchId);
    }
}
