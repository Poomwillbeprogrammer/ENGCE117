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

void SaveNode(struct studentNode *child, const char n[], int a, char s, float g);
void GoNext1(struct studentNode **walk);

int main()
{
    struct studentNode *start, *now1, **now2;
    start = new struct studentNode;
    SaveNode(start, "one", 6, 'M', 3.11f);
    start->next = new struct studentNode;
    SaveNode(start->next, "two", 8, 'F', 3.22f);
    start->next->next = new struct studentNode;
    SaveNode(start->next->next, "three", 10, 'M', 3.33f);
    start->next->next->next = new struct studentNode;
    SaveNode(start->next->next->next, "four", 12, 'F', 3.44f);

    now1 = start;
    now2 = &start;

    GoNext1(&now1);
    if (now1 != NULL)
    {
        printf("Name: %s\n", now1->name);
        printf("Age: %d\n", now1->age);
        printf("sex: %c\n", now1->sex);
        printf("GPA: %.2f\n", now1->gpa);
    }
    else
    {
        printf("No next node\n");
    }

    return 0;
} // end function

void SaveNode(struct studentNode *child, const char n[], int a, char s, float g)
{
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
    child->next = NULL;
} // end function

void GoNext1(struct studentNode **walk)
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