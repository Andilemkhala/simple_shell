#include "andyschool"

/**
 * tokenizer string
 * @str: user input
 * Return: pointer to array of tokens
 */
char **tokenizer(char *str)
{
	char **tokens;
	char *token;
	unsigned int andy;

	tokens = malloc(sizeof(char) * BUFFER);
	if (tokens == NULL)
	{
		errors(3);
		exit(EXIT_FAILURE);
	}

	token = strtok(str, "\n\t\r ");

	andy = 0;
	while (token != NULL)
	{
		tokens[andy] = token;
		token = strtok(NULL, "\n\t\r ");
		andy++;
	}

	tokens[i] = NULL;

	return (tokens);
}
