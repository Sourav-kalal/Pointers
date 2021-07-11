#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    //printing address of a,p,q,r
    printf("The address of a = %d\n", &a);
    printf("The address of a = %d\n\n", p); //value of p is the address of a, because p is pointer to a

    printf("The address of p = %d\n", &p);
    printf("The address of p = %d\n\n", q); //value of q is the address of p, because q is pointer to p

    printf("The address of q = %d\n", &q);
    printf("The address of q = %d\n\n", r); //value of r is the address of q, because r is pointer to q

    //Printing value of a
    printf("The value of a = %d (Acessing through p)\n", *p);
    printf("The value of a = %d (Acessing through q)\n", **q);
    printf("The value of a = %d (Acessing through r)\n", ***r);
}