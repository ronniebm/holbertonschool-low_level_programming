#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of the file.
 * @text_content: content to be appended.
 * Return: returns 1 if success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, chars;

	fd = open(filename, O_RDWR | O_APPEND);
	/*if filename = NULL, then return -1.*/
	if (filename == NULL)
		return (-1);
	/*if there is error in file descriptor, return -1.*/
	if (fd == -1)
		return (-1);
	/*if content = NULL, return 1.*/
	if (text_content == NULL)
		return (1);
	i = 0;
	while (text_content[i] != '\0')
		i++;
	chars = write(fd, text_content, i);
	if (chars == -1)
		return (-1);
	return (1);
}
