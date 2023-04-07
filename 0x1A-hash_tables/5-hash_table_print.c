#include "hash_tables.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	bool comma;

	if (!ht)
		return;

	comma = 0;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (comma)
				printf(", ");
			else
				comma = 1;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	putchar('}'), putchar('\n');
}
