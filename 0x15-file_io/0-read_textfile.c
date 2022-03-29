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

	fd = open(filename, O_RDONLY);/*open filename to fd*/
	if (fd == -1)/* open return -1 == error */
		return (0);

	buf = malloc(sizeof(char) * letters);/*create buffer*/
	if (buf == NULL)
		return (0);

	cnt = read(fd, buf, letters); /*'read' filename into buf*/
	write(STDOUT_FILENO, buf, cnt); /*'write' buf to stdout*/

	close(fd);/*close fd after used*/
	free(buf);
	return (cnt); /*numbers of letters it could read*/
}
