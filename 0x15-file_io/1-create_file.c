#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: name of file
 * @text_content:write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int letters = 0;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[letters])
	{
		;
		letters++;
	}
	bytes_written = write(fp, text_content, letters);
	if (bytes_written == -1)
		return (-1);
	close(fp);
	return (1);
}
