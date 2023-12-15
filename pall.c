#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @num: not used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int num)
{
	stack_t *h;
	(void)num;

	h = *head;
	if (!h)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
