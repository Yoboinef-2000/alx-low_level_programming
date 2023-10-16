#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
	char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index;

		index = rand() % (sizeof(valid_chars) - 1);
		password[i] = valid_chars[index];
	}

	password[PASSWORD_LENGTH] = '\0';
	printf("Generated Password: %s\n", password);

	return (0);
}

