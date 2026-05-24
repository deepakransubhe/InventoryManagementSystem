/*
 * product.h
 * Header file for Inventory Management System
 * Contains structure definition and function declarations
 */

#ifndef PRODUCT_H
#define PRODUCT_H

#define MAX_PRODUCTS 100
#define FILENAME "products.txt"

/* Structure to store product details */
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

/* Function declarations */
void addProduct();
void displayProducts();
void searchProduct();
void updateProduct();
void deleteProduct();
int loadProducts(struct Product products[]);
void saveProducts(struct Product products[], int count);

#endif
