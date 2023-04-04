#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node of the list
 * Return: the data (n) of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    if (*head == NULL) {  /* check if the list is empty */
        return 0;
    }

    temp = *head;  /* store a reference to the head node */
    data = temp->n;  /* get the data of the head node */
    *head = temp->next;  /* update the head node to the next node */
    free(temp);  /* free the memory of the deleted head node */
    return data;
}

