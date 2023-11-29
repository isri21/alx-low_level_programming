#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
void open_file_from(const char *filename, int flags, int *fd);
void open_file_to(const char *filename, int flags, int *fd, int *ff_fd);
void close_file(int *fd);
#endif
