#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strtow(char *str) {
    if (str == NULL || str[0] == '\0') {
        return NULL;
    }

    
    int word_count = 0;
    char *token = strtok(str, " ");
    while (token) {
        word_count++;
        token = strtok(NULL, " ");
    }

    
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL; 
    }

    char *word = strtok(str, " ");
    int i = 0;
    while (word) {
        words[i] = (char *)malloc(strlen(word) + 1);
        if (words[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(words[j]);
            }
            free(words);
            return (NULL);
        }
        strcpy(words[i], word);
        i++;
        word = strtok(NULL, " ");
    }

    words[i] = NULL;
    return (words);
}
