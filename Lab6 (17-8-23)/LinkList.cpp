#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *nextpt;
};

int main()
{
    struct node *head;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *fourth=NULL;
    struct node *zero=NULL;
    struct node *fifth=NULL;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    zero = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));

    first -> value=10;
    second -> value=20;
    third -> value=30;
    fourth -> value=40;
    fifth -> value=50;
    zero -> value=0;

    first -> nextpt = second;
    second -> nextpt = third;
    third -> nextpt = fourth;
    fourth -> nextpt = fifth;
    fifth -> nextpt = NULL;
    zero -> nextpt = first;

    head = zero;

    while (head!=NULL)
    {
        cout << head -> value;
        head = head -> nextpt;
        cout << " ";
    }
    return 0;
}


