#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx;

	hash_table_t *hash =  malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		hash->array[idx] = NULL;

	return (hash);
}
