#include "hash_tables.h"
/**
 * hash_table_get - Retrieves value associated with a key.
 * @ht: Hash table you want to look into
 * @key: It is the key you are looking for
 * Return: Returns the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;
	const unsigned char *u_key;

	if (!ht || !key)
		return (NULL);
	u_key = (const unsigned char *)key;
	i = key_index(u_key, ht->size);
	tmp = ht->array[i];

	while (!tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
