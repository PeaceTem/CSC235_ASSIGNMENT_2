#include <stdio.h>
#include <string.h>

int gcdFunction(int , int );

struct gcdFormulae
{
    /* data */
    int a, b ,q , r;
};
struct gcdFormulae formula[100];

void print_gcdFormulae(struct gcdFormulae);

int main(int argc, char *argv[])
{
    int first = 218; int second = 30;
    gcdFunction(first, second);
    return 0;
}

int gcdFunction(int a, int b)
{
    int counter = 0;
    int c = 0;
    int q = 0;
    struct gcdFormulae form;

    while(b != 0)
    {
        counter++;
        c = a%b;
        q = a/b;
        form.a = a;
        form.q = q;
        form.b = b;
        form.r = c;
        a = b;
        b = c;
        print_gcdFormulae(form);
        formula[counter] = form;
    }
    printf("The gcd = %d", a);
    for(int i =0; i<= counter; i++)
    {
        print_gcdFormulae(formula[i]);
    }
}

void print_gcdFormulae(struct gcdFormulae formulae)
{
    printf("%d = %d(%d) + %d\n", formulae.a, formulae.q, formulae.b, formulae.r);
}
