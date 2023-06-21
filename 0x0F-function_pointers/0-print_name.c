/**
 * print_name - print name
 * @name: given name
 * @f: pointer
 * Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
