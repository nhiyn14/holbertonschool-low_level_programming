#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
  * read_textfile - function reads a text file and prints to the POSIX stdout
  * @filename: file to be read
  * @letters: number of letters it should read and print
  * Return:  actual number of letters it could read and print
  * 0 if file can not be opened or read
  * 0 if filename ==  NULL
  * 0 if write fails or does not write the expected amount of bytes
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, cnt;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(*buf) * letters);
	if (!buf)
	{
		free(buf);
		return(-1);
	}
	cnt = read(fd,buf,letters);
	write(STDOUT_FILENO, buf, cnt);

	free(buf);
	return (cnt);
}
