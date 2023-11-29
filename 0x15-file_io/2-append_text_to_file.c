#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append to
 * @text_content: text to append to file
 *
 * Return: 1 on success, and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_fd, write_ret;

	if (filename == NULL) /* check if the filename is NULL */
		return (-1);

	if (text_content == NULL) /* check if the text_content is NULL */
		return (1);

	/* open file in append mode */
	file_fd = open(filename, O_APPEND | O_WRONLY);
	if (file_fd == -1) /* check if open() failed */
		return (-1);

	/* write/append the text_content to the file */
	write_ret = write(file_fd, text_content, _strlen(text_content));
	if (write_ret == -1) /* check if write() failed */
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
