#include "main.h"
/**
 * create_file - creates a file, and write into it
 * @filename: name of the file to create
 * @text_content: String to write into created file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_fd, write_ret;

	if (filename == NULL) /* Check if the file name is NULL */
		return (-1);

	/* Create file with perm 600, if exists delete it's contents */
	file_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_fd == -1) /* Check if open() failed */
		return (-1);

	/* Check if text_content is NULL, if it is just return */
	if (text_content == NULL)
		return (1);

	/* write to the file the text_content */
	write_ret = write(file_fd, text_content, _strlen(text_content));
	if (write_ret == -1) /* Check if write() failed */
		return (-1);

	return (1);
}
/**
* _strlen - returns the length of a string.
* @s: pointer to the string whose length is to be returned.
*
* Return: void
*/
int _strlen(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
		c += 1;

	return (c);
}
