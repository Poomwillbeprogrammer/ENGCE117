#include <stdio.h>
#include <string.h>

struct studentNode
{
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

struct studentNode *AddNode(struct studentNode **walk, char n[], int a, char s, float g);
void InsNode(struct studentNode *Node, char n[], int a, char s, float g);
void ShowAll(struct studentNode *walk);
void DelNode(struct studentNode *Node);

int main()
{
    struct studentNode *start, *now;
    start = NULL;
    now = AddNode(&start, "one", 6, 'M', 3.11);
    ShowAll(start);
    now = AddNode(&start, "two", 8, 'F', 3.22);
    ShowAll(start);
    InsNode(now, "three", 10, 'M', 3.33);
    ShowAll(start);
    InsNode(now, "four", 12, 'F', 3.44);
    ShowAll(start);
    DelNode(now);
    ShowAll(start);
    return 0;
} // end function

void showAll(struct studentNode *walk)
{
    while (walk != NULL)
    {
        printf("%s ", walk->name);
        walk = walk->next;
    } // end while
    printf(" ");
} // end function

struct studentNode *AddNode(struct studentNode **walk, char n[], int a, char s, float g) {
    struct studentNode *Node;
    Node = new struct studentNode;
    strcpy(Node->name, n);
    Node->age = a;
    Node->sex = s;
    Node->gpa = g;
    Node->next = NULL;
    if(*walk == NULL) {
        *walk = Node;
    } else {
        (*walk)->next = Node;
        *walk = Node;
    } // end if
    return Node;
} // end function

void InsNode(struct studentNode *Node, char n[], int a, char s, float g) {
    struct studentNode *NewNode;
    NewNode = new struct studentNode;
    strcpy(NewNode->name, n);
    NewNode->age = a; 