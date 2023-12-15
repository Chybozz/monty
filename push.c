#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int num)
{
	int n, j = 0, fg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;

		while (bus.arg[j] != '\0')
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
			{
				fg = 1;
			}
			j++;
		}
		if (fg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
