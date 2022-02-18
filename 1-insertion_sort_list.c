#include "sort.h"
/***
 *insertion_sort_list - function that sorts a doubly linked list of
 *integers in ascending order using the Insertion sort algorithm
 *@list: list to be sort
 *
 *Return: 0.
 */
void insertion_sort_list(listint_e **list)
{
    listint_e *head = NULL, *right = NULL, *left = NULL;
    listint_e *tmp1 = NULL, *tmp2 = NULL;

    if (!list || !(*list) || (!((*list)->prev)&& !((*list)->next)))

    return;

    head = *list;
    while (head)
    {
        tmp1 = head;
        tmp2 = head ->next;
        while (tmp1 && tmp1->x > tmp2->x)
        {
           right = tmp2->next;
           left = tmp1->prev;
           tmp1->next = right;
           if(right)
                right->prev = tmp1;
            tmp1->prev = tmp2;
            tmp2->prev = left;

            if(left)
                left->next = tmp2;
                else
                *list = tmp2;
            tmp2->next = tmp1;
            tmp1 = left;
            print_list(*list); 
        }
        head = tmp2;

    }
}