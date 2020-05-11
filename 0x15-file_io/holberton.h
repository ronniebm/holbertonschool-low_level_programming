#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _copy(char *file_orig, char *file_dest);
void _exitprint(char *str, char *file, int code);
#endif
