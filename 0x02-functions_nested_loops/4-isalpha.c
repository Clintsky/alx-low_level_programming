#include "main.h"

/**
 i* _isalpha - check the code for alphabetic character.
 *@c: letter being tested
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
