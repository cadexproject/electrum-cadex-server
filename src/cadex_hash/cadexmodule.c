#include <Python.h>

#include "cadex.h"

static PyObject *cadex_getpowhash(PyObject *self, PyObject *args)
{
    char *output;
    PyObject *value;
#if PY_MAJOR_VERSION >= 3
    PyBytesObject *input;
#else
    PyStringObject *input;
#endif
    if (!PyArg_ParseTuple(args, "S", &input))
        return NULL;
    Py_INCREF(input);
    output = PyMem_Malloc(32);

#if PY_MAJOR_VERSION >= 3
    cadex_hash((char *)PyBytes_AsString((PyObject*) input), output);
#else
    cadex_hash((char *)PyString_AsString((PyObject*) input), output);
#endif
    Py_DECREF(input);
#if PY_MAJOR_VERSION >= 3
    value = Py_BuildValue("y#", output, 32);
#else
    value = Py_BuildValue("s#", output, 32);
#endif
    PyMem_Free(output);
    return value;
}

static PyMethodDef CadexMethods[] = {
    { "getPoWHash", cadex_getpowhash, METH_VARARGS, "Returns the proof of work hash using cadex hash" },
    { NULL, NULL, 0, NULL }
};

#if PY_MAJOR_VERSION >= 3
static struct PyModuleDef CadexModule = {
    PyModuleDef_HEAD_INIT,
    "cadex_hash",
    "...",
    -1,
    CadexMethods
};

PyMODINIT_FUNC PyInit_cadex_hash(void) {
    return PyModule_Create(&CadexModule);
}

#else

PyMODINIT_FUNC initcadex_hash(void) {
    (void) Py_InitModule("cadex_hash", CadexMethods);
}
#endif
