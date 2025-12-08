#include "hash_tables.h"
#include <string.h>

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int idx;
    hash_node_t *temp;

    if (!ht || !key || *key == '\0')
        return (NULL);

    idx = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[idx];

    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
            return (temp->value);
        temp = temp->next;
    }

    return (NULL);
}
