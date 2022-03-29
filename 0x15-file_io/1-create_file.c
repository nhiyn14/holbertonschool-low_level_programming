#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
  * create_file - function that creates a file.
  * @filename: the name of the file to create
  * @text_content: a string to write to the file.
  * Return: 1 on success, -1 on failure
  * created file must have those permissions: rw-------
  * if the file already exists, truncate it
  * -1 if filename ==  NULL
  * if text_content == NULL, create an empty file.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, cnt;

	if (filename == NULL)
		return (-1);

	/*Create a filename file with 600  permission*/
	/*Truncate if file already existed */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)/* open() return -1 == error */
		return (-1);

	if (text_content == NULL)
		text_content = "";
	cnt = 0;
	while (*(text_content + cnt) != '\0')
		cnt++;
	/*write text_content to fd currently open filename file */
	write(fd, text_content, cnt);
	close(fd);/*close fd after used*/
	return (1);
}
