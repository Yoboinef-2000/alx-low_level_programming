#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    ht->shead = NULL;
    ht->stail = NULL;

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The hash table to add the element to
 * @key: The key of the element
 * @value: The value of the element
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *temp;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    temp = ht->array[index];
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

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    insert_sorted_node(ht, new_node);

    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key from a sorted hash table
 * @ht: The hash table to search
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *temp;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);

    temp = ht->array[index];
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
            return (temp->value);
        temp = temp->next;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *temp;

    if (ht == NULL)
        return;

    temp = ht->shead;
    while (temp)
    {
        printf("'%s': '%s'", temp->key, temp->value);
        if (temp->snext)
            printf(", ");
        temp = temp->snext;
    }
    printf("\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *temp;

    if (ht == NULL)
        return;

    temp = ht->stail;
    while (temp)
    {
        printf("'%s': '%s'", temp->key, temp->value);
        if (temp->sprev)
            printf(", ");
        temp = temp->sprev;
    }
    printf("\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current, *temp;

    if (ht == NULL)
        return;

    current = ht->shead;
    while (current)
    {
        temp = current;
        current = current->snext;
        free(temp->key);
        free(temp->value);
        free(temp);
    }

    free(ht->array);
    free(ht);
}

/**
 * insert_sorted_node - Inserts a node into the sorted linked list
 * @ht: The hash table containing the sorted list
 * @new_node: The node to insert
 */
void insert_sorted_node(shash_table_t *ht, shash_node_t *new_node)
{
    shash_node_t *current;

    if (ht->shead == NULL)
    {
        ht->shead = new_node;
        ht->stail = new_node;
        return;
    }

    current = ht->shead;
    while (current)
    {
        if (strcmp(new_node->key, current->key) <= 0)
        {
            if (current->sprev)
                current->sprev->snext = new_node;
            else
                ht->shead = new_node;

            new_node->sprev = current->sprev;
            new_node->snext = current;
            current->sprev = new_node;
            return;
        }

        if (current->snext == NULL)
            break;

        current = current->snext;
    }

    current->snext = new_node;
    new_node->sprev = current;
    new_node->snext = NULL;
    ht->stail = new_node;
}

