#include <iostream>
#include <node.h>
using namespace std;

long long convertLLToNum(node *head)
{
    long long multiplier = 1;
    long long ans = 0;

    while (head != nullptr)
    {
        ans += head->val * multiplier;
        multiplier *= 10;
        head = head->next;
    }

    return ans;
}

node *convertNumToLL(long long num)
{
    node dummy(0);
    node *curr = &dummy;

    if (num == 0)
    {
        return new node(0);
    }

    while (num > 0)
    {
        int digit = num % 10;
        curr->next = new node(digit);
        curr = curr->next;
        num /= 10;
    }

    return dummy.next;
}

class Solution
{
public:
    node *addTwoNumbers(node *l1, node *l2)
    {
        long long a = convertLLToNum(l1);
        long long b = convertLLToNum(l2);

        long long c = a + b;

        return convertNumToLL(c);
    }
};


//digit by digit

class Solution {
public:
    node* addTwoNumbers(node* l1, node* l2) {
        node dummy(0);
        node* curr = &dummy;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            int sum = val1 + val2 + carry;

            int digit = sum % 10;
            carry = sum / 10;

            curr->next = new node(digit);
            curr = curr->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy.next;
    }
};