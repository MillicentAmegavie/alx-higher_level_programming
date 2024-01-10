#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - The entry point.
 * Description - prints the bytes information.
 * @p: The python object.
 * Return: .
 */

void print_python_bytes(PyObject *p)
{
	char *st;
	long int s, m, l;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	s = ((PyVarObject *)(p))->ob_size;
	st = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", s);
	printf("  trying string: %s\n", st);

	if (s >= 10)
		l = 10;
	else
		l = s + 1;

	printf("  first %ld bytes:", l);

	for (m = 0; m < l; m++)
		if (st[m] >= 0)
			printf(" %02x", st[m]);
		else
			printf(" %02x", 256 + st[m]);

	printf("\n");
}

/**
 * print_python_list - The entry point.
 * Decription - Prints the list information.
 * @p: the python object.
 * Return: .
 */

void print_python_list(PyObject *p)
{
	long int s, m;
	PyListObject *list;
	PyObject *obj;

	s = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", s);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (m = 0; m < s; m++)
	{
		obj = ((PyListObject *)p)->ob_item[m];
		printf("Element %ld: %s\n", m, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}
}
