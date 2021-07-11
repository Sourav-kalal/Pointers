#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = a; // Equivalent to - int *p = &a[0];
    // printf("The value of a[0] = %d\n", a[0]);
    // printf("The value of a[0] = %d\n", p[0]);
    // printf("The value of a[0] = %d\n", *a);
    // printf("The value of a[0] = %d\n\n", *p);
    printf("a++ = %d", a++);

    //Let's print all array values
    for (int i = 0; i < 5; i++)
    {
        printf("The value of a[%d] = %d\n", i, a[i]);
        printf("The value of a[%d] = %d\n", i, p[i]);
        printf("The value of a[%d] = %d\n", i, *(a + i));
        printf("The value of a[%d] = %d\n\n", i, *(p + i));
    }

    //it may seems that arrays 'a' is pointer like 'p' but it's not the same
    //for more info http://c-faq.com/aryptr/index.html
}