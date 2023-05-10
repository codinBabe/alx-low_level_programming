#include "main.h"
/**
 * main - This function copy content of a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int fd, dest_fd, bytes, src_fd, close_dest;
	char buffer[BUFSIZ];

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
	while ((bytes = read(fd, buffer, BUFSIZ)) > 0)
	{
		if (dest_fd < 0 || write(dest_fd, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	src_fd = close(fd);
	close_dest = close(dest_fd);
	if (src_fd < 0 || close_dest < 0)
	{
		if (src_fd < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		if (close_dest < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}
