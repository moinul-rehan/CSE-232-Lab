#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node *preadd;
    struct node *nextadd;
};

int main()
{
    struct head *head=NULL;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;

    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    first->value=10;
    second->value=20;
    third->value=30;

    first->preadd=NULL;
    first->nextadd=second;
    second->preadd=first;
    second->nextadd=third;
    third->preadd=second;
    third->nextadd=NULL;

    head=first;

    while(head!=NULL)
    {
        cout<<"head value";
        head=head->nextadd;
    }

    return 0;
}

