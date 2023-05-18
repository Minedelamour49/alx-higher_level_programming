#include <Python.h>
#include <stdio.h>

void print_python_bytes(PyObject *p) {
    printf("[.] bytes object info\n");
    if (!PyBytes_Check(p)) {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }
    Py_ssize_t size = PyBytes_Size(p);
    printf("  size: %ld\n", size);

    // Trying to convert bytes object to string
    PyObject *string_repr = PyObject_Repr(p);
    if (string_repr != NULL) {
        const char *str = PyUnicode_AsUTF8(string_repr);
        printf("  trying string: %s\n", str);
        Py_DECREF(string_repr);
    }

    printf("  first 10 bytes:");
    Py_ssize_t i;
    Py_ssize_t max_bytes = (size < 10) ? size : 10;
    for (i = 0; i < max_bytes; ++i) {
        printf(" %.2x", (unsigned char)PyBytes_AsString(p)[i]);
    }
    printf("\n");
}

void print_python_list(PyObject *p) {
    printf("[*] Python list info\n");
    if (!PyList_Check(p)) {
        printf("  [ERROR] Invalid Python List Object\n");
        return;
    }
    Py_ssize_t size = PyList_Size(p);
    printf("[*] Size of the Python List = %ld\n", size);

    Py_ssize_t allocated = ((PyListObject *)p)->allocated;
    printf("[*] Allocated = %ld\n", allocated);

    Py_ssize_t i;
    for (i = 0; i < size; ++i) {
        printf("Element %ld: ", i);
        PyObject *item = PyList_GetItem(p, i);
        if (PyBytes_Check(item)) {
            print_python_bytes(item);
        } else {
            printf("%s\n", Py_TYPE(item)->tp_name);
        }
    }
}
