#include "main.h"
/**
 * strtow - This is a function that splits a string into words.
 * @str:pointer to string
 * Return:pointer to an array of string
 */
char **strtow(char *str)
{
	int i, j, k;
	int num_space = 0;
	int num_words, word_start, word_count, word_len;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			num_space++;
	}
	num_words = num_space + 1;

	s = (char **)malloc((num_words + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	word_start = 0;
	word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (i > word_start)
			{
				word_len = i - word_start;
				s[word_count] = (char *)malloc((word_len + 1)
						* sizeof(char));
				if (s[word_count] == NULL)
				{
					for (j = 0; j < word_count; j++)
						free(s[j]);
					free(s);
					return (NULL);
				}

				for (k = 0; k < word_len; k++)
					s[word_count][k] = str[word_start + k];
				s[word_count][k] = '\0';

				word_count++;
			}
			word_start = i + 1;
		}
	}
	if (i > word_start)
	{
		word_len = i - word_start;
		s[word_count] = (char *)malloc((word_len + 1)
				* sizeof(char));
		if (s[word_count] == NULL)
		{
			for (j = 0; j < word_count; j++)
				free(s[j]);
			free(s);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			s[word_count][k] = str[word_start + k];
		s[word_count][k] = '\0';

		word_count++;
	}
	s[word_count] = NULL;

			return (s);
}
