/*
 * main.c
 * Main file for Inventory Management System
 * Contains the main menu and program entry point
 * Author: Deepak Ransubhe – SCFU225050
 */

#include <stdio.h>
#include "product.h"

int main() {
    int choice;

    printf("\n========================================\n");
    printf("  INVENTORY MANAGEMENT SYSTEM\n");
    printf("  Small Shop Edition\n");
    printf("========================================\n");

    do {
        printf("\n--- MAIN MENU ---\n");
        printf("1. Add Product\n");
        printf("2. Display All Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addProduct();    break;
            case 2: displayProducts(); break;
            case 3: searchProduct(); break;
            case 4: updateProduct(); break;
            case 5: deleteProduct(); break;
            case 6: printf("\nThank you for using Inventory System. Goodbye!\n\n"); break;
            default: printf("\nInvalid choice! Please enter 1-6.\n");
        }

    } while (choice != 6);

    return 0;
}
