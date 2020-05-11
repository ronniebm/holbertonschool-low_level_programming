#include "holberton.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of file.
 * @text_content: text to be saved.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, chars;

	/*if buffer or filename = NULL, then return 0.*/
	if (filename == NULL)
		return (-1);
	/*if file doesn't exit in directory, then create it.*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	/*if there is error in file descriptor, return 0*/
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	/*if content = NULL, create empty file, else write content*/
	if (text_content == NULL)
		return (1);
	while (text_content[i] != '\0')
		i++;
	chars = write(fd, text_content, i);
	close(fd);
	if (chars == -1)
		return (-1);
	return (1);
}
