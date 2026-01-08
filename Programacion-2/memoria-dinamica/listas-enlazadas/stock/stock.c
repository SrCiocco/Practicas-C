/* Programa de gestión de stock. Listas enlazadas. */

#include <stdio.h>
#include <stdlib.h> /* malloc(), free() */
#include <string.h> /* strncpy(), strncmp */

#define TEXT_LENGTH 30

typedef struct product
{
	int id;
	int price;
	char name[TEXT_LENGTH];
	struct product *next;
} Product;

Product *create_product(int id, int price, const char *name);
void add_at_beginning(Product **head, int id, int price, const char *name);
void display_products(Product *head);

int main()
{
	Product *head = NULL;
	add_at_beginning(&head, 100, 500, "Fideos Marolio");
	add_at_beginning(&head, 200, 650000, "Ryzen 7 9700x");
	display_products(head);
	return 0;
}

Product *create_product(int id, int price, const char *name)
{
	Product *newNode = (Product *) malloc(sizeof(Product));
	if (!newNode) {
		fprintf(stderr, "ERROR: memory allocator failed!\n");
		return NULL;
	}

	newNode->id = id;
	newNode->price = price;
	strncpy(newNode->name, name, TEXT_LENGTH);
	newNode->name[TEXT_LENGTH - 1] = '\0';
	newNode->next = NULL;
	return newNode;
}

void add_at_beginning(Product **head, int id, int price, const char* name)
{
	Product *newNode = create_product(id, price, name);
	newNode->next = *head;
	*head = newNode;
}

void display_products(Product *head)
{
	if (head == NULL) fprintf(stderr, "ERROR: No hay productos cargados!\n");
	else printf("---------- Products ----------\n");

	while (head != NULL) {
		printf("> ID: %d\n> Price: $%d\n> Name: %s\n", head->id, head->price, head->name);
		if (head->next != NULL) printf("------------------------------\n");
		else printf("------------ END -------------\n");
		head = head->next;
	}
}
