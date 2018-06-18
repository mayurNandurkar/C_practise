#include<stdio.h>

void A()
{
printf("I am a function \n");
}

void B (void (*ptr)())
{
    (*ptr)();
}

int main(int argc, char const *argv[])
{
    void (*ptr)();
    ptr=&A;

    B(ptr);

    /* code */
    return 0;
}

// Output: 
// I am a function