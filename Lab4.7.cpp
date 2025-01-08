#include <stdio.h>
#include <string.h>

struct studentNode
{
    char name[20];
    int age;
    float gpa;
    struct studentNode *next;
};

void saveNode(struct studentNode *child, const char n[], int a, float g);
void GoNext(struct studentNode **now);

int main()
{
    struct studentNode *start, *now;
    
    start = new struct studentNode;
    saveNode(start, "Alice", 20, 3.5f);

    start->next = new struct studentNode;
    saveNode(start->next, "Bob", 22, 3.8f);

    start->next->next = new struct studentNode;
    saveNode(start->next->next, "Charlie", 21, 3.7f);

    now = start;
    GoNext(&now);              // Move to next node and print
    GoNext(&now);              // Move to next node and print
    GoNext(&now);              // Move to next node and print
    GoNext(&now);              // Move to next node and print

    return 0;
}

void saveNode(struct studentNode *child, const char n[], int a, float g)
{
    strcpy(child->name, n);
    child->age = a;
    child->gpa = g;
    child->next = NULL;
}

void GoNext(struct studentNode **now) {
    if (*now != NULL)
    {
        printf("Name: %s\n", (*now)->name);
        *now = (*now)->next;
    }
    else
    {
        printf("End of List\n");
    }
}