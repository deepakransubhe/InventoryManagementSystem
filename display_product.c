/* Contributor: [Rihan Choudhary] - [SCFU225041] */
/* Function implemented and tested by: [Rihan Choudhary]  */

/*
 * display_product.c
 * Contains the displayProducts() function
 * Shows all products currently in inventory
 */

#include <stdio.h>
#include "product.h"

void displayProducts() {
    struct Product products[MAX_PRODUCTS];
    int count = loadProducts(products);

    if (count == 0) {
        printf("\nNo products found in inventory!\n");
        return;
    }

    printf("\n--- ALL PRODUCTS ---\n");
    printf("%-6s %-20s %-10s %-10s\n", "ID", "Name", "Quantity", "Price(Rs)");
    printf("----------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-6d %-20s %-10d %-10.2f\n",
               products[i].id,
               products[i].name,
               products[i].quantity,
               products[i].price);
    }

    printf("----------------------------------------------------\n");
    printf("Total Products: %d\n", count);
}
