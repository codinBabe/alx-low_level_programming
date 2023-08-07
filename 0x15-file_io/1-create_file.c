#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename:pointer to name of file
 * @text_content:a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, O, W;

	if (filename == NULL)
		return (-1);

	O = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (O == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		W = write(O, text_content, i);
		if (W == -1)
		{
			close(O);
			return (-1);
		}
	}
	close(O);
	return (1);
}
