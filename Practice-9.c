#include <stdio.h>
void meow(int n);
int main(void)
{
    int n;
    do
    {
        printf("How many times do you want me to meow? ");
    } while (n < 0)
        meow(n);
}
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}