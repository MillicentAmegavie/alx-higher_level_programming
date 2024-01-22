#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - the entry point.
 * Description - Prints bytes information.
 * @p: Python Object.
 * Return: .
 */

void print_python_bytes(PyObject *p)
{
	char *str;
	long int size, m, l;

	setbuf(stdout, NULL);

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		setbuf(stdout, NULL);
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	str = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", str);

	if (size >= 10)
		l = 10;
	else
		l = size + 1;

	printf("  first %ld bytes:", l);

	for (m = 0; m < l; m++)
		if (str[m] >= 0)
			printf(" %02x", str[m]);
		else
			printf(" %02x", 256 + str[m]);

	printf("\n");
	setbuf(stdout, NULL);
}

/**
 * print_python_float - the entry point.
 * Description - Prints float information.
 * @p: Python Object.
 * Return: .
 */

void print_python_float(PyObject *p)
{
	double val;
	char *m;

	setbuf(stdout, NULL);
	printf("[.] float object info\n");

	if (!PyFloat_Check(p))
	{
		printf("  [ERROR] Invalid Float Object\n");
		setbuf(stdout, NULL);
		return;
	}

	val = ((PyFloatObject *)(p))->ob_fval;
	m = PyOS_double_to_string(val, 'r', 0, Py_DTSF_ADD_DOT_0, Py_DTST_FINITE);

	printf("  value: %s\n", m);
	setbuf(stdout, NULL);
}

/**
 * print_python_list - the entry point.
 * Description - Prints list information.
 * @p: Python Object.
 * Return: .
 */

void print_python_list(PyObject *p)
{
	long int s, m;
	PyListObject *l;
	PyObject *o;

	setbuf(stdout, NULL);
	printf("[*] Python list info\n");

	if (!PyList_Check(p))
	{
		printf("  [ERROR] Invalid List Object\n");
		setbuf(stdout, NULL);
		return;
	}

	s = ((PyVarObject *)(p))->ob_size;
	l = (PyListObject *)p;

	printf("[*] Size of the Python List = %ld\n", s);
	printf("[*] Allocated = %ld\n", l->allocated);

	for (m = 0; m < size; m++)
	{
		o = l->ob_item[m];
		printf("Element %ld: %s\n", m, ((o)->ob_type)->tp_name);

		if (PyBytes_Check(o))
			print_python_bytes(o);
		if (PyFloat_Check(o))
			print_python_float(o);
	}
	setbuf(stdout, NULL);
}
