#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counts: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counts)
{
	stack_t *aux;
	int sus, node;

	aux = *head;
	node = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		node++;
	}
	if (!(node >= 2))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counts);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
