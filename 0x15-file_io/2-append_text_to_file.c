#include "main.h"
/**
 * append_text_to_file - my function
 * @filename: var
 * @text_content: var
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(f, text_content, strlen(text_content));
		if (w == -1)
		{
			close(f);
			return (-1);
		}
		close(f);
		return (1);
	}
	else
	{
		close(f);
		return (1);
	}
}
