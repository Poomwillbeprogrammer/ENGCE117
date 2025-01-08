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

void saveNode(struct studentNode *child, const char n[], int a, char s, float g);
void GoNext2(struct studentNode **walk);

int main()
{
    struct studentNode *start, *now1, **now2;
    start = new struct studentNode;
    saveNode(start, "one", 6, 'M', 3.11f); 
    start->next = new struct studentNode;
    saveNode(start->next, "two", 8, 'F', 3.22f); 
    start->next->next = new struct studentNode;
    saveNode(start->next->next, "three", 10, 'M', 3.33f); 
    start->next->next->next = new struct studentNode;
    saveNode(start->next->next->next, "four", 12, 'F', 3.44f); 
    
    start->next->next->next->next = NULL;

    now1 = start;
    now2 = &start;

    GoNext2(now2);
    printf("%s ", (*now2)->name);

    return 0;
} // end function

void saveNode(struct studentNode *child, const char n[], int a, char s, float g)
{
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
    child->next = NULL;
} // end function

void GoNext2(struct studentNode **walk)
{
    if ((*walk)->next != NULL)
    {
        *walk = (*walk)->next; // point to next node
    }
    else
    {
        *walk = NULL; // point to NULL
    }
} // end function