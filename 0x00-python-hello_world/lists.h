#ifndef LISTS_H
#define LISTS_H

#include<stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n:integer
 * @next:points to the next node
 *
 * Description:singly linked list noddee structure 
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct litint_s*next;
}listint_s
size_t print_listint(const listint_t*h);
listint_t*add_nodeint(listint_t**head);
int check_cycle(listint_t*list);
#endif/*LISTS_H*/
