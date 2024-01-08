#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - The entry point.
 * Description - Print list info about Python.
 * @p: The pyobjext pointer.
 * Return: .
 */

void print_python_list_info(PyObject *p)
{
	Py_ssize_t c;
	Py_ssize_t l = PyList_Size(p);
	PyListObject *pObj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", l);
	printf("[*] Allocated = %ld\n", pObj->allocated);

	for (c = 0; c < l; c++)
	{
		printf("Element %ld: %s\n", c, Py_TYPE(pObj->ob_item[c])->tp_name);
	}
}
