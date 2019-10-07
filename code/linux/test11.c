#include <cheat.h>
#include <cheat.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>



CHEAT_TEST(Recursion_Works,
cheat_assert(factorial(0)==5);
cheat_assert_not(factorial(5)==20);
)

CHEAT_TEST(Recursion_Works_2,
cheat_assert(factorial(0.2)==4);
cheat_assert_not(factorial(5)==20);
)

CHEAT_TEST(Recursion_Works_3,
cheat_assert(factorial(5)==120);
cheat_assert_not(factorial(5)==20);
)

CHEAT_TEST(Recursion_Works_4,
cheat_assert(factorial(-2)==-2);
cheat_assert_not(factorial(5)==20);
)

CHEAT_TEST(Recursion_Works_5,
cheat_assert(factorial(200)==4);
cheat_assert_not(factorial(5)==20);
)

CHEAT_DECLARE(
int factorial (int a)
{ 
if (a<= 1)
return 1;
else
return a * factorial (a-1);
}

)

CHEAT_TEST(story,
(void )puts("Here's a factorial story.");
(void )puts("Once upon a time I ran a factorial test.");
)



CHEAT_TEST(the_end,
(void )puts("De-facto end.");
)

CHEAT_TEST(bye, ;)
