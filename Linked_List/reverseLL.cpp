#include <iostream>
#include <node.h>
using namespace std;

node *reverseList(node *head)
{

    node *prev = NULL;
    node *curr = head;

    while (curr != NULL)
    {

        node *next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;
    }

    return prev;
}