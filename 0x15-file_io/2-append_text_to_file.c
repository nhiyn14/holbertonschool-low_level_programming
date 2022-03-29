#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
  * append_text_to_file - function that appends text at the end of a file
  * @filename: the name of the file
  * @text_content: a string to add to the end of file.
  * Return: 1 on success, -1 on failure
  * DO NOT create a new file if it does not exist
  * -1 if filename ==  NULL or do not have permission to write
  * if text_content == NULL, do not add anything.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cnt;

	if (filename == NULL)
		return (-1);

	/*Open filename file*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)/* open() return -1 == error/no permission */
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
