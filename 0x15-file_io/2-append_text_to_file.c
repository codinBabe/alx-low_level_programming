#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename:pointer to nme of file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, O, W;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	O = open(filename, O_WRONLY | O_APPEND);
	if (O == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;
	W = write(O, text_content, i);
	if (W == -1)
		return (-1);

	return (1);
}
