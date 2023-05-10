#include "main.h"
/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename:name of file
 * @text_content:content to append in file
 * Return:1 on success and -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int bytes_length = 0;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	if (access(filename, W_OK) == -1)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}
	while (text_content[bytes_length])
	{
		;
		bytes_length++;
	}
	bytes_written = write(fp, text_content, bytes_length);

	if (bytes_written == -1)
		return (-1);

	close(fp);
	return (1);
}
