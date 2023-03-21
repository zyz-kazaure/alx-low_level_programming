#include "main.h"

/**
 *_isalpha - check if a character is lower caser
 *@c : character to check the case
 *Return: throws 1 else throws 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : (c >= 'A' && c <= 'Z') ? 1 : 0);
}
