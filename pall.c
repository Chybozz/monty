#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @num: not used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int num)
{
	stack_t *hd;
	(void)num;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
