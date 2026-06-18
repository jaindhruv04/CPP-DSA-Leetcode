#include <iostream>
#include <node.h>
#include <reverseLL.cpp>
using namespace std;

bool checkPalindrome(node *head)
{
    node *fast = head;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != NULL)
    {
        slow = slow->next;
    }

    node *first = head;

    node *second = reverseList(slow);

    while (second != NULL)
    {
        if (first->val != second->val)
        {
            return false;
        }

        else
        {
            first = first->next;
            second = second->next;
        }
    }
    return true;
}

int main()
{

    return 0;
}