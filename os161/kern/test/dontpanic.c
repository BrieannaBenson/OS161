#include <types.h>
#include <lib.h>
#include <test.h>

/* Text command test program */

int
dontpanic(int nargs, char **args)
{
        (void)nargs;
        (void)args;

        kprintf("Don't Panic!  Always bring your towel.\n");
        return 0;
}

