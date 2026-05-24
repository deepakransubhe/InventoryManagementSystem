/*
 * file_handler.c
 * Contains file handling functions
 * loadProducts() - reads from products.txt
 * saveProducts() - writes to products.txt
 */

#include <stdio.h>
#include "product.h"

/* Load all products from file into array */
int loadProducts(struct Product products[]) {
    FILE *file = fopen(FILENAME, "r");
    int count = 0;

    if (file == NULL) {
        /* File doesn't exist yet, return 0 products */
        return 0;
    }

    while (fscanf(file, "%d %s %d %f",
                  &products[count].id,
                  products[count].name,
                  &products[count].quantity,
                  &products[count].price) == 4) {
        count++;
    }

    fclose(file);
    return count;
}

/* Save all products from array back to file */
void saveProducts(struct Product products[], int count) {
    FILE *file = fopen(FILENAME, "w");

    if (file == NULL) {
        printf("Error: Cannot open file for saving!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %d %.2f\n",
                products[i].id,
                products[i].name,
                products[i].quantity,
                products[i].price);
    }

    fclose(file);
}
