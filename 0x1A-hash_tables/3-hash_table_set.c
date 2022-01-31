#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table.
* @ht:is the hash table you want to add
* @key: is the key
* @value: is the value associated with the key
* Return: the index
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];

	while (new_node)
	{
		if (strcmp(key, new_node->key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			return (1);
		}
		new_node = new_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}
