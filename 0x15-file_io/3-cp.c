#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
  * main - function that make a copy of an existing file
  * @argc: argument count
  * @argv: pointer to pointer to argument.
  * Return: exit (97) if incorrect argc
  * truncate if argv2 already existed
  * exit(98) if argv1 does not exist/cannot read
  * exit(99) if cannot create/write to argv1 fail
  * exit(100) if cannot close the fd
  * permission of the argv2 file: rw-rw-r--
  */
int main(int argc, char **argv)
{
	int file_from, file_to, cnt = 1;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY); /* Open file_from */
	if (file_from == -1)/* if file_from does not exist/no read permisson */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)/*if cannot create of writw in file_to */
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (cnt != 0) /*While we're not the end of file (read() == 0)*/
	{
		cnt = read(file_from, buf, 1024);/* 1024 in file_from to buf */
		if (cnt == -1)
			exit(0);
		write(file_to, buf, cnt);/* copy content in buf to file_to */
	}
	/*after copying process done */
	if (close(file_from) == -1)/*cannot close file_from*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)/*cannot close file_to*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
	return (0);
}
