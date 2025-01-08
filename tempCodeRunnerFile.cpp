if ((*walk)->next != NULL)
    {
        *walk = (*walk)->next; // point to next node
    }
    else
    {
        *walk = NULL; // point to NULL
    }