# Inventory Management System for Small Shops

A menu-driven Inventory Management System built in C for small shop owners to efficiently manage their products.

## Features
- Add new products
- Display all products
- Search product by ID
- Update product details
- Delete products
- Data stored persistently in `products.txt`

## Technologies Used
- C Programming Language
- File Handling (txt)
- Structures, Arrays
- Modular Programming (multiple .c files)

## Folder Structure
```
InventoryManagementSystem/
├── main.c
├── product.h
├── add_product.c
├── display_product.c
├── search_product.c
├── update_product.c
├── delete_product.c
├── file_handler.c
├── products.txt
└── README.md
```

## How to Compile & Run
```bash
gcc main.c add_product.c display_product.c search_product.c update_product.c delete_product.c file_handler.c -o inventory
./inventory
```

## Team Members
- Deepak Ransubhe – SCFU225050 (Team Lead) — main.c, product.h, file_handler.c
- [Member 2 Name] – [Roll No] — add_product.c, update_product.c
- [Member 3 Name] – [Roll No] — display_product.c, search_product.c, delete_product.c

## Future Enhancements
- Add low stock alerts
- Add billing/invoice feature
- Add category-wise sorting
- Use linked list for dynamic memory
