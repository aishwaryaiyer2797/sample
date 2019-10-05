#include<implementation1.h>

#test fact
    fail_unless(fact(4) == 5, "sum function borked");
    fail_unless(fact(0) == 0, "sum function borked");
    fail_unless(sum(3, -2) == 1, "sum function borked");
    fail_unless(sum(-3, -2) == -5, "sum function borked");
