#include "main.h"
int main(int argc, char *argv[])
{
	int fd, header;
	char *buffer;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file\n");
		exit(98);
	}
	buffer = malloc(64);
	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed\n");
		exit(98);
	}
	header = read(fd, buffer, 64);
	if (header != 64)
	{
		fprintf(stderr, "Error: Header is not valid\n");
		free(buffer);
		exit(98);
	}

	free(buffer);
	close(fd);

	return (0);
}
