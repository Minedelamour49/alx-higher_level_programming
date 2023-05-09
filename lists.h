#ifndef LISTS_H
#define LISTS_H

#include<stdlib.h>


/**
 * struct listint_s - sigly linked list
 * @n: integer
 * @next: point to the next node 
 *
 * Description: singly linked note structure 
 * for Holberton project
 */
typedef struct listint_s
{
int n;
struct litint_s*next;
}
litint_t;
size_t print listint(const listint*h);
listint_t*add_nodeint(listint_t**head, const int n);
void free-listin(listin_t*head);
int check_cycle(listint_t*list);

#endif/*LISTS_H*/
