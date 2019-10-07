#include <cheat.h>
#include <stddef.h>
#include<stdio.h>
#include<string.h>

CHEAT_DECLARE(
char cipher1(char a)
{

return (a+1);
}
)
CHEAT_TEST(Recursion_Works,
cheat_assert(cipher1('a')=='b');
)

CHEAT_TEST(Recursion_Works_1,
cheat_assert(cipher1('b')=='c');
)
