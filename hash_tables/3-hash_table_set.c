#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

hash_node_t *create_node(const char *key, const char *value)
{
    hash_node_t *node = malloc(sizeof(hash_node_t));

    if (node == NULL)
        return (NULL);

    node->key = strdup(key);
    node->value = strdup(value);
    node->next = NULL;

    if (node->key == NULL || node->value == NULL)
    {
        free(node->key);
        free(node->value);
        free(node);
        return (NULL);
    }

    return (node);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *node, *temp;

    if (!ht || !key || *key == '\0' || !value)
        return (0);

    idx = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[idx];

    /* Update existing key */
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            return (1);
        }
        temp = temp->next;
    }

    /* Insert new node at head */
    node = create_node(key, value);
    if (node == NULL)
        return (0);

    node->next = ht->array[idx];
    ht->array[idx] = node;

    return (1);
}
