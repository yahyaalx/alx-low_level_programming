#include "hash_table.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: Hash table to add or update the key/value to
 * @key:  is the key. key can not be an empty string
 * @value: is the value associated with key
 *
 * Return: 1 on success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newNode, *currentNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[idx];
	while (currentNode)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			if (currentNode->value == NULL)
				return (0);
			return (1);
		}
		currentNode = currentNode->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
