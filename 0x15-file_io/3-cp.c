#include "main.h"
/**
 * main - This function copy content of a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int fd, dest_fd, byr, src, close_dest;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((byr = read(fd, buff, BUFSIZ)) > 0)
	{
		if (dest_fd < 0 || write(dest_fd, buff, byr) != byr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd);
			exit(99);
		}
	}
	if (byr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	src = close(fd);
	close_dest = close(dest_fd);
	if (src < 0 || close_dest < 0)
	{
		if (src < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		if (close_dest < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}
