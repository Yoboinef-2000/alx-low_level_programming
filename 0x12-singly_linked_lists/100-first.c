#include <stdio.h>

/**
 * before_main - this function executes whatever
 * is inside it, in this case, a simple print command,
 * before the main function is executed.
 *
 * Description: The above explanation should suffice.
 *
 * Return - None
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must ");
	printf("allow,\nI bore my house upon my back!\n");
}
