/*
 * add_product.c
 * Contains the addProduct() function
 * Allows shop owner to add a new product to inventory
 */

#include <stdio.h>
#include <string.h>
#include "product.h"

void addProduct() {
    struct Product products[MAX_PRODUCTS];
    int count = loadProducts(products);

    if (count >= MAX_PRODUCTS) {
        printf("\nInventory is full! Cannot add more products.\n");
        return;
    }

    struct Product newProduct;

    printf("\n--- ADD NEW PRODUCT ---\n");
    printf("Enter Product ID   : ");
    scanf("%d", &newProduct.id);

    /* Check if ID already exists */
    for (int i = 0; i < count; i++) {
        if (products[i].id == newProduct.id) {
            printf("Product with this ID already exists!\n");
            return;
        }
    }

    printf("Enter Product Name : ");
    scanf(" %[^\n]", newProduct.name);

    printf("Enter Quantity     : ");
    scanf("%d", &newProduct.quantity);

    printf("Enter Price (Rs.)  : ");
    scanf("%f", &newProduct.price);

    products[count] = newProduct;
    count++;

    saveProducts(products, count);

    printf("\nProduct added successfully!\n");
}
