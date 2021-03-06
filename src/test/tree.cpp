#include "test/tree.h"

Tree::Tree(int v) {
    val = v;
    left = nullptr;
    right = nullptr;
};

Tree::Tree(int v, Tree* l, Tree* r)
{
    val = v;
    left = l;
    right = r;
};

Tree::~Tree()
{};

void Tree::innerOrderScan(vector<int> *res)
{
    if (left != NULL)
    {
        left->innerOrderScan(res);
    }
    res->push_back(val);
    if (right != NULL)
    {
        right->innerOrderScan(res);
    }
}