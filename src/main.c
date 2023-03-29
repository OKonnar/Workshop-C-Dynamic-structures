#include "header.h"

// EXERCISE 1

void exercise_one()
{
    ex1_t amogus = (ex1_t){.data = 6};

    printf("%d\n", amogus.data); // expected: 6;
}

// EXERCISE 2

void exercise_two()
{
    ex2_t amogus = (ex2_t){.data = strdup("Bababoyee")};

    printf("%s\n", amogus.data); // expected: Bababoyee;
    free(amogus.data); // expected: no SEGV;
}

// EXERCISE 3

void exercise_three()
{
    int i = 6;
    ex3_t amogus = (ex3_t){.data = &i};
    ex3_t amogus2 = (ex3_t){.data = strdup("Bababoyee")};

    printf("%d\n", *((int*)amogus.data)); // expected: 6;
    printf("%s\n", (char*)amogus2.data); // expected: Bababoyee;
    free(amogus2.data); // expected: no SEGV;
}

// EXERCISE 4

int ex4GetDataByName(char *name, ex4_t *amogusList)
{
    /* :) */
}

void ex4AddAmogusToList(char *name, int data, ex4_t **amogusList)
{
    /* come on ! the Amoguses wont add themselves ! */
}

void FreeTheAmogus(ex4_t *amogusList)
{
    /* #JusticeForAmogus */
}

void exercise_four()
{
    ex4_t *amogus = NULL;

    ex4AddAmogusToList(strdup("My"), 1, &amogus);
    ex4AddAmogusToList(strdup("Name's"), 2, &amogus);
    ex4AddAmogusToList(strdup("Jeff"), 3, &amogus);

    printf("%d - %d - %d\n", ex4GetDataByName("My", amogus), ex4GetDataByName("Name's", amogus), ex4GetDataByName("Jeff", amogus)); // expected: 1 - 2 - 3
    FreeTheAmogus(amogus);
}

// EXERCISE 5


void *ex5GetDataByName(char *name, ex5_t *amogusList)
{
    /* is it me or it feels like deja vu ? */
}

void ex5AddAmogusToList(char *name, void *data, ex5_t **amogusList)
{
    /* yup, it's deja vu */
}

void cantFreeTheAmogus(ex5_t *amogusList)
{
    /* sometimes, sacrifices has to be made ... */
}

void exercise_five()
{
    ex5_t *amogus = NULL;
    int i = 6;

    ex5AddAmogusToList(strdup("My"), "Oh yeah", &amogus);
    ex5AddAmogusToList(strdup("Name's"), &i, &amogus);
    ex5AddAmogusToList(strdup("Jeff"), "it works", &amogus);

    printf("%s - %d - %s\n", (char*)ex5GetDataByName("My", amogus), *((int*)ex5GetDataByName("Name's", amogus)), (char *)ex5GetDataByName("Jeff", amogus)); // expected: Oh yeah - 6 - it works
    cantFreeTheAmogus(amogus); // expected: sadge
}

int main()
{
    exercise_one();
    // exercise_two();
    // exercise_three();
    // exercise_four();
    // exercise_five();

    // expected: 0 error of 0 context... or else...
    return 0;
}
