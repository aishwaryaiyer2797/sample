#include<stdio.h>
#include <stddef.h>

#include<cheat.h>

CHEAT_DECLARE(
char* cipher(char s[])
{	
	int i;
	while(s[i]!='\0')
	{
		s[i]=s[i]+1;
		i++;
	}
	return s;
}

)


CHEAT_TEST(cipher_test, 
cheat_assert_string(cipher("abc")=="bcd");
cheat_assert_not_string(cipher("abc")=="bcd");
)
