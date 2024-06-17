#include "calc.h"
#include <stddef.h>
/**
 * get_op_func - retrieves the function
 * @a: first operand
 * @b: second operand
 *
 * Return: function corresponding the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	 };
	int i;

	if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
		return (NULL);
	while (i < 6)
	{
		if (op[i][0] == s)
			break;
		i++;
	}
	return (op[i][1]);
}
