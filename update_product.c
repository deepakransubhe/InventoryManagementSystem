/*
 * update_product.c
 * Contains the updateProduct() function
 * Allows updating product details (name, quantity, price)
 */

#include <stdio.h>
#include <string.h>
#include "product.h"

void updateProduct() {
    struct Product products[MAX_PRODUCTS];
    int count = loadProducts(products);
    int updateId;
    int found = 0;

    printf("\n--- UPDATE PRODUCT ---\n");
    printf("Enter Product ID to update: ");
    scanf("%d", &updateId);

    for (int i = 0; i < count; i++) {
        if (products[i].id == updateId) {
            printf("\nCurrent Details:\n");
            printf("Name     : %s\n", products[i].name);
            printf("Quantity : %d\n", products[i].quantity);
            printf("Price    : Rs. %.2f\n", products[i].price);

            printf("\nEnter New Name     : ");
            scanf(" %[^\n]", products[i].name);

            printf("Enter New Quantity : ");
            scanf("%d", &products[i].quantity);

            printf("Enter New Price    : ");
            scanf("%f", &products[i].price);

            saveProducts(products, count);
            printf("\nProduct updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nProduct with ID %d not found!\n", updateId);
    }
}
