#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_list -Reverse a linked list
 * @head: Double pointer to the head of the linked list
 * Return: Pointer to the new head of thr reversed list
 */
listint_t *reverse_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}


/**
 * is_palindrome -checks if a linked list is a palindrome
 * @head: Double pointer to the head of the linked list
 * Return: 1 if palindrome, 0 if not;
 */
int is_palindrome(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return 1;
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *prev_slow = *head;
	listint_t *second_half;
	int is_palindrome =1;

	while (fast != NULL &&fast-> != NULL)
	{
		fast = fast->next->next;
		prev_slow = slow;
		slow = slow->next;
	}

	if (fast != NULL)
	{
		second_half = slow->next;
	}
	else
	{
		second_half = slow;
		prev_slow->next != NULL;
	}
	second_half = reverse_list(&second_half);

	listint_t *temp1 = head;
	listint_t *temp2 = second_half;

	while(temp1 != NULL && temp2 != NULL)
	{
		if (temp1->n != temp2->n)
		{
			if (temp1-> != temp2->)
			{
				is_palindrome = 0;
				break;
			}
			temp1 = temp1->next;
			temp2 = temp2->next;		}
		second_half = reverse_list(&second_half);

		if (fast != 	NULL)
			prev_slow-next = slow;
		else
			prev_slow->next = second_half;
		return is_palindrome;
	}
}
