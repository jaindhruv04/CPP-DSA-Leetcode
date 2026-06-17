#include <iostream>
using namespace std;

class node
{

public:
    int val;
    node *next;

    node(int x)
    {
        val = x;
        next = NULL;
    }
};