/* Generated code for Python module 'commctrl'
 * created by Nuitka version 0.6.19.6
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_commctrl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_commctrl;
PyDictObject *moduledict_commctrl;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[1742];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[1742];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("commctrl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 1742; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_commctrl(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 1742; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e9fa683eec1355242b055416205c91aa;
static PyCodeObject *codeobj_f6bf47f78669e5190147eeee5c3d0214;
static PyCodeObject *codeobj_12b48e3e93a561df9186bf56964552c8;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[1738]); CHECK_OBJECT(module_filename_obj);
    codeobj_e9fa683eec1355242b055416205c91aa = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[1739], NULL, NULL, 0, 0, 0);
    codeobj_f6bf47f78669e5190147eeee5c3d0214 = MAKE_CODEOBJECT(module_filename_obj, 1570, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1736], mod_consts[1740], NULL, 1, 0, 0);
    codeobj_12b48e3e93a561df9186bf56964552c8 = MAKE_CODEOBJECT(module_filename_obj, 1574, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1737], mod_consts[1740], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_commctrl$$$function__1_INDEXTOOVERLAYMASK();


static PyObject *MAKE_FUNCTION_commctrl$$$function__2_INDEXTOSTATEIMAGEMASK();


// The module function definitions.
static PyObject *impl_commctrl$$$function__1_INDEXTOOVERLAYMASK(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_f6bf47f78669e5190147eeee5c3d0214;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6bf47f78669e5190147eeee5c3d0214 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6bf47f78669e5190147eeee5c3d0214)) {
        Py_XDECREF(cache_frame_f6bf47f78669e5190147eeee5c3d0214);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6bf47f78669e5190147eeee5c3d0214 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6bf47f78669e5190147eeee5c3d0214 = MAKE_FUNCTION_FRAME(codeobj_f6bf47f78669e5190147eeee5c3d0214, module_commctrl, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f6bf47f78669e5190147eeee5c3d0214->m_type_description == NULL);
    frame_f6bf47f78669e5190147eeee5c3d0214 = cache_frame_f6bf47f78669e5190147eeee5c3d0214;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f6bf47f78669e5190147eeee5c3d0214);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f6bf47f78669e5190147eeee5c3d0214) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_i);
        tmp_left_value_1 = par_i;
        tmp_right_value_1 = mod_consts[0];
        tmp_return_value = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1571;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f6bf47f78669e5190147eeee5c3d0214);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f6bf47f78669e5190147eeee5c3d0214);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f6bf47f78669e5190147eeee5c3d0214);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6bf47f78669e5190147eeee5c3d0214, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6bf47f78669e5190147eeee5c3d0214->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6bf47f78669e5190147eeee5c3d0214, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6bf47f78669e5190147eeee5c3d0214,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_f6bf47f78669e5190147eeee5c3d0214 == cache_frame_f6bf47f78669e5190147eeee5c3d0214) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f6bf47f78669e5190147eeee5c3d0214);
        cache_frame_f6bf47f78669e5190147eeee5c3d0214 = NULL;
    }

    assertFrameObject(frame_f6bf47f78669e5190147eeee5c3d0214);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_commctrl$$$function__2_INDEXTOSTATEIMAGEMASK(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_12b48e3e93a561df9186bf56964552c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12b48e3e93a561df9186bf56964552c8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12b48e3e93a561df9186bf56964552c8)) {
        Py_XDECREF(cache_frame_12b48e3e93a561df9186bf56964552c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12b48e3e93a561df9186bf56964552c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12b48e3e93a561df9186bf56964552c8 = MAKE_FUNCTION_FRAME(codeobj_12b48e3e93a561df9186bf56964552c8, module_commctrl, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_12b48e3e93a561df9186bf56964552c8->m_type_description == NULL);
    frame_12b48e3e93a561df9186bf56964552c8 = cache_frame_12b48e3e93a561df9186bf56964552c8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_12b48e3e93a561df9186bf56964552c8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_12b48e3e93a561df9186bf56964552c8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_i);
        tmp_left_value_1 = par_i;
        tmp_right_value_1 = mod_consts[1];
        tmp_return_value = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1575;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12b48e3e93a561df9186bf56964552c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_12b48e3e93a561df9186bf56964552c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12b48e3e93a561df9186bf56964552c8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12b48e3e93a561df9186bf56964552c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12b48e3e93a561df9186bf56964552c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12b48e3e93a561df9186bf56964552c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12b48e3e93a561df9186bf56964552c8,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_12b48e3e93a561df9186bf56964552c8 == cache_frame_12b48e3e93a561df9186bf56964552c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_12b48e3e93a561df9186bf56964552c8);
        cache_frame_12b48e3e93a561df9186bf56964552c8 = NULL;
    }

    assertFrameObject(frame_12b48e3e93a561df9186bf56964552c8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_commctrl$$$function__1_INDEXTOOVERLAYMASK() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_commctrl$$$function__1_INDEXTOOVERLAYMASK,
        mod_consts[1736],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6bf47f78669e5190147eeee5c3d0214,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_commctrl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_commctrl$$$function__2_INDEXTOSTATEIMAGEMASK() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_commctrl$$$function__2_INDEXTOSTATEIMAGEMASK,
        mod_consts[1737],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_12b48e3e93a561df9186bf56964552c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_commctrl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_commctrl[] = {
    impl_commctrl$$$function__1_INDEXTOOVERLAYMASK,
    impl_commctrl$$$function__2_INDEXTOSTATEIMAGEMASK,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_commctrl;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_commctrl) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_commctrl[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_commctrl,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_commctrl(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("commctrl");

    // Store the module for future use.
    module_commctrl = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchBuiltinModule();
        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("commctrl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("commctrl: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("commctrl: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcommctrl\n");

    moduledict_commctrl = MODULE_DICT(module_commctrl);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_commctrl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_commctrl,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[1741]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_commctrl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_commctrl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_commctrl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_commctrl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_commctrl);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e9fa683eec1355242b055416205c91aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e9fa683eec1355242b055416205c91aa = MAKE_MODULE_FRAME(codeobj_e9fa683eec1355242b055416205c91aa, module_commctrl);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e9fa683eec1355242b055416205c91aa);
    assert(Py_REFCNT(frame_e9fa683eec1355242b055416205c91aa) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assign_source_24 == NULL)) {
            tmp_assign_source_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_assign_source_24 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_left_value_1 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_1 == NULL)) {
            tmp_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_1 == NULL));
        tmp_right_value_1 = mod_consts[47];
        tmp_assign_source_25 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_1, tmp_right_value_1);
        assert(!(tmp_assign_source_25 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        tmp_left_value_2 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_2 == NULL)) {
            tmp_left_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_2 == NULL));
        tmp_right_value_2 = mod_consts[38];
        tmp_assign_source_26 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_2, tmp_right_value_2);
        assert(!(tmp_assign_source_26 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        tmp_left_value_3 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_3 == NULL)) {
            tmp_left_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_3 == NULL));
        tmp_right_value_3 = mod_consts[50];
        tmp_assign_source_27 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_3, tmp_right_value_3);
        assert(!(tmp_assign_source_27 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        tmp_left_value_4 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_4 == NULL)) {
            tmp_left_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_4 == NULL));
        tmp_right_value_4 = mod_consts[52];
        tmp_assign_source_28 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_4, tmp_right_value_4);
        assert(!(tmp_assign_source_28 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        tmp_left_value_5 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_5 == NULL)) {
            tmp_left_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_5 == NULL));
        tmp_right_value_5 = mod_consts[54];
        tmp_assign_source_29 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_5, tmp_right_value_5);
        assert(!(tmp_assign_source_29 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        tmp_left_value_6 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_6 == NULL)) {
            tmp_left_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_6 == NULL));
        tmp_right_value_6 = mod_consts[56];
        tmp_assign_source_30 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_6, tmp_right_value_6);
        assert(!(tmp_assign_source_30 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        tmp_left_value_7 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_7 == NULL)) {
            tmp_left_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_7 == NULL));
        tmp_right_value_7 = mod_consts[58];
        tmp_assign_source_31 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_7, tmp_right_value_7);
        assert(!(tmp_assign_source_31 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        tmp_left_value_8 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_8 == NULL)) {
            tmp_left_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_8 == NULL));
        tmp_right_value_8 = mod_consts[60];
        tmp_assign_source_32 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_8, tmp_right_value_8);
        assert(!(tmp_assign_source_32 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        tmp_left_value_9 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_9 == NULL)) {
            tmp_left_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_9 == NULL));
        tmp_right_value_9 = mod_consts[62];
        tmp_assign_source_33 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_9, tmp_right_value_9);
        assert(!(tmp_assign_source_33 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        tmp_left_value_10 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_10 == NULL)) {
            tmp_left_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_10 == NULL));
        tmp_right_value_10 = mod_consts[64];
        tmp_assign_source_34 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_10, tmp_right_value_10);
        assert(!(tmp_assign_source_34 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        tmp_left_value_11 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_11 == NULL)) {
            tmp_left_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_11 == NULL));
        tmp_right_value_11 = mod_consts[66];
        tmp_assign_source_35 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_11, tmp_right_value_11);
        assert(!(tmp_assign_source_35 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        tmp_left_value_12 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_12 == NULL)) {
            tmp_left_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_12 == NULL));
        tmp_right_value_12 = mod_consts[68];
        tmp_assign_source_36 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_12, tmp_right_value_12);
        assert(!(tmp_assign_source_36 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_13;
        tmp_left_value_13 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_13 == NULL)) {
            tmp_left_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_13 == NULL));
        tmp_right_value_13 = mod_consts[70];
        tmp_assign_source_37 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_13, tmp_right_value_13);
        assert(!(tmp_assign_source_37 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_14;
        tmp_left_value_14 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_14 == NULL)) {
            tmp_left_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_14 == NULL));
        tmp_right_value_14 = mod_consts[72];
        tmp_assign_source_38 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_14, tmp_right_value_14);
        assert(!(tmp_assign_source_38 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_15;
        tmp_left_value_15 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_15 == NULL)) {
            tmp_left_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_15 == NULL));
        tmp_right_value_15 = mod_consts[74];
        tmp_assign_source_39 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_15, tmp_right_value_15);
        assert(!(tmp_assign_source_39 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_left_value_16;
        PyObject *tmp_right_value_16;
        tmp_left_value_16 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_16 == NULL)) {
            tmp_left_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_16 == NULL));
        tmp_right_value_16 = mod_consts[76];
        tmp_assign_source_40 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_16, tmp_right_value_16);
        assert(!(tmp_assign_source_40 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_left_value_17;
        PyObject *tmp_right_value_17;
        tmp_left_value_17 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_17 == NULL)) {
            tmp_left_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_17 == NULL));
        tmp_right_value_17 = mod_consts[78];
        tmp_assign_source_41 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_17, tmp_right_value_17);
        assert(!(tmp_assign_source_41 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_left_value_18;
        PyObject *tmp_right_value_18;
        tmp_left_value_18 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_18 == NULL)) {
            tmp_left_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_18 == NULL));
        tmp_right_value_18 = mod_consts[80];
        tmp_assign_source_42 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_18, tmp_right_value_18);
        assert(!(tmp_assign_source_42 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_left_value_19;
        PyObject *tmp_right_value_19;
        tmp_left_value_19 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_19 == NULL)) {
            tmp_left_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_19 == NULL));
        tmp_right_value_19 = mod_consts[82];
        tmp_assign_source_43 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_19, tmp_right_value_19);
        assert(!(tmp_assign_source_43 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_left_value_20;
        PyObject *tmp_right_value_20;
        tmp_left_value_20 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_20 == NULL)) {
            tmp_left_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_20 == NULL));
        tmp_right_value_20 = mod_consts[84];
        tmp_assign_source_44 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_20, tmp_right_value_20);
        assert(!(tmp_assign_source_44 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_left_value_21;
        PyObject *tmp_right_value_21;
        tmp_left_value_21 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_21 == NULL)) {
            tmp_left_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_21 == NULL));
        tmp_right_value_21 = mod_consts[86];
        tmp_assign_source_45 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_21, tmp_right_value_21);
        assert(!(tmp_assign_source_45 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_value_22;
        PyObject *tmp_right_value_22;
        tmp_left_value_22 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_22 == NULL)) {
            tmp_left_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_22 == NULL));
        tmp_right_value_22 = mod_consts[88];
        tmp_assign_source_46 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_22, tmp_right_value_22);
        assert(!(tmp_assign_source_46 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_left_value_23;
        PyObject *tmp_right_value_23;
        tmp_left_value_23 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_23 == NULL)) {
            tmp_left_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_23 == NULL));
        tmp_right_value_23 = mod_consts[90];
        tmp_assign_source_47 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_23, tmp_right_value_23);
        assert(!(tmp_assign_source_47 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_left_value_24;
        PyObject *tmp_right_value_24;
        tmp_left_value_24 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_24 == NULL)) {
            tmp_left_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_24 == NULL));
        tmp_right_value_24 = mod_consts[92];
        tmp_assign_source_48 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_24, tmp_right_value_24);
        assert(!(tmp_assign_source_48 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_left_value_25;
        PyObject *tmp_right_value_25;
        tmp_left_value_25 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_25 == NULL)) {
            tmp_left_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_25 == NULL));
        tmp_right_value_25 = mod_consts[94];
        tmp_assign_source_49 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_25, tmp_right_value_25);
        assert(!(tmp_assign_source_49 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_left_value_26;
        PyObject *tmp_right_value_26;
        tmp_left_value_26 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_26 == NULL)) {
            tmp_left_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_26 == NULL));
        tmp_right_value_26 = mod_consts[96];
        tmp_assign_source_50 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_26, tmp_right_value_26);
        assert(!(tmp_assign_source_50 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_left_value_27;
        PyObject *tmp_right_value_27;
        tmp_left_value_27 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_27 == NULL)) {
            tmp_left_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_27 == NULL));
        tmp_right_value_27 = mod_consts[98];
        tmp_assign_source_51 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_27, tmp_right_value_27);
        assert(!(tmp_assign_source_51 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_left_value_28;
        PyObject *tmp_right_value_28;
        tmp_left_value_28 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_28 == NULL)) {
            tmp_left_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_28 == NULL));
        tmp_right_value_28 = mod_consts[100];
        tmp_assign_source_52 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_28, tmp_right_value_28);
        assert(!(tmp_assign_source_52 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_left_value_29;
        PyObject *tmp_right_value_29;
        tmp_left_value_29 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_29 == NULL)) {
            tmp_left_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_29 == NULL));
        tmp_right_value_29 = mod_consts[102];
        tmp_assign_source_53 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_29, tmp_right_value_29);
        assert(!(tmp_assign_source_53 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_left_value_30;
        PyObject *tmp_right_value_30;
        tmp_left_value_30 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_30 == NULL)) {
            tmp_left_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_30 == NULL));
        tmp_right_value_30 = mod_consts[104];
        tmp_assign_source_54 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_30, tmp_right_value_30);
        assert(!(tmp_assign_source_54 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_left_value_31;
        PyObject *tmp_right_value_31;
        tmp_left_value_31 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_left_value_31 == NULL)) {
            tmp_left_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_left_value_31 == NULL));
        tmp_right_value_31 = mod_consts[106];
        tmp_assign_source_55 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_31, tmp_right_value_31);
        assert(!(tmp_assign_source_55 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_left_value_32;
        PyObject *tmp_right_value_32;
        tmp_left_value_32 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_left_value_32 == NULL)) {
            tmp_left_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_left_value_32 == NULL));
        tmp_right_value_32 = mod_consts[10];
        tmp_assign_source_62 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_32, tmp_right_value_32);
        assert(!(tmp_assign_source_62 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_left_value_33;
        PyObject *tmp_right_value_33;
        tmp_left_value_33 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_left_value_33 == NULL)) {
            tmp_left_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_left_value_33 == NULL));
        tmp_right_value_33 = mod_consts[12];
        tmp_assign_source_63 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_33, tmp_right_value_33);
        assert(!(tmp_assign_source_63 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_left_value_34;
        PyObject *tmp_right_value_34;
        tmp_left_value_34 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_left_value_34 == NULL)) {
            tmp_left_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_left_value_34 == NULL));
        tmp_right_value_34 = mod_consts[120];
        tmp_assign_source_64 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_34, tmp_right_value_34);
        assert(!(tmp_assign_source_64 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_left_value_35;
        PyObject *tmp_right_value_35;
        tmp_left_value_35 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_left_value_35 == NULL)) {
            tmp_left_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_left_value_35 == NULL));
        tmp_right_value_35 = mod_consts[14];
        tmp_assign_source_65 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_35, tmp_right_value_35);
        assert(!(tmp_assign_source_65 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_left_value_36;
        PyObject *tmp_right_value_36;
        tmp_left_value_36 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_left_value_36 == NULL)) {
            tmp_left_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_left_value_36 == NULL));
        tmp_right_value_36 = mod_consts[123];
        tmp_assign_source_66 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_36, tmp_right_value_36);
        assert(!(tmp_assign_source_66 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_left_value_37;
        PyObject *tmp_right_value_37;
        tmp_left_value_37 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_left_value_37 == NULL)) {
            tmp_left_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_left_value_37 == NULL));
        tmp_right_value_37 = mod_consts[125];
        tmp_assign_source_67 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_37, tmp_right_value_37);
        assert(!(tmp_assign_source_67 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_left_value_38;
        PyObject *tmp_right_value_38;
        tmp_left_value_38 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_38 == NULL)) {
            tmp_left_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_38 == NULL));
        tmp_right_value_38 = mod_consts[10];
        tmp_assign_source_69 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_38, tmp_right_value_38);
        assert(!(tmp_assign_source_69 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_left_value_39;
        PyObject *tmp_right_value_39;
        tmp_left_value_39 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_39 == NULL)) {
            tmp_left_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_39 == NULL));
        tmp_right_value_39 = mod_consts[12];
        tmp_assign_source_70 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_39, tmp_right_value_39);
        assert(!(tmp_assign_source_70 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_left_value_40;
        PyObject *tmp_right_value_40;
        tmp_left_value_40 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_40 == NULL)) {
            tmp_left_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_40 == NULL));
        tmp_right_value_40 = mod_consts[120];
        tmp_assign_source_71 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_40, tmp_right_value_40);
        assert(!(tmp_assign_source_71 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_left_value_41;
        PyObject *tmp_right_value_41;
        tmp_left_value_41 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_41 == NULL)) {
            tmp_left_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_41 == NULL));
        tmp_right_value_41 = mod_consts[14];
        tmp_assign_source_72 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_41, tmp_right_value_41);
        assert(!(tmp_assign_source_72 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_left_value_42;
        PyObject *tmp_right_value_42;
        tmp_left_value_42 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_42 == NULL)) {
            tmp_left_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_42 == NULL));
        tmp_right_value_42 = mod_consts[123];
        tmp_assign_source_73 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_42, tmp_right_value_42);
        assert(!(tmp_assign_source_73 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_left_value_43;
        PyObject *tmp_right_value_43;
        tmp_left_value_43 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_43 == NULL)) {
            tmp_left_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_43 == NULL));
        tmp_right_value_43 = mod_consts[125];
        tmp_assign_source_74 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_43, tmp_right_value_43);
        assert(!(tmp_assign_source_74 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_left_value_44;
        PyObject *tmp_right_value_44;
        tmp_left_value_44 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_44 == NULL)) {
            tmp_left_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_44 == NULL));
        tmp_right_value_44 = mod_consts[134];
        tmp_assign_source_75 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_44, tmp_right_value_44);
        assert(!(tmp_assign_source_75 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_left_value_45;
        PyObject *tmp_right_value_45;
        tmp_left_value_45 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_45 == NULL)) {
            tmp_left_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_45 == NULL));
        tmp_right_value_45 = mod_consts[0];
        tmp_assign_source_76 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_45, tmp_right_value_45);
        assert(!(tmp_assign_source_76 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_left_value_46;
        PyObject *tmp_right_value_46;
        tmp_left_value_46 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_46 == NULL)) {
            tmp_left_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_46 == NULL));
        tmp_right_value_46 = mod_consts[1];
        tmp_assign_source_77 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_46, tmp_right_value_46);
        assert(!(tmp_assign_source_77 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_left_value_47;
        PyObject *tmp_right_value_47;
        tmp_left_value_47 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_47 == NULL)) {
            tmp_left_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_47 == NULL));
        tmp_right_value_47 = mod_consts[138];
        tmp_assign_source_78 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_47, tmp_right_value_47);
        assert(!(tmp_assign_source_78 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_left_value_48;
        PyObject *tmp_right_value_48;
        tmp_left_value_48 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_48 == NULL)) {
            tmp_left_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_48 == NULL));
        tmp_right_value_48 = mod_consts[140];
        tmp_assign_source_79 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_48, tmp_right_value_48);
        assert(!(tmp_assign_source_79 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_left_value_49;
        PyObject *tmp_right_value_49;
        tmp_left_value_49 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_49 == NULL)) {
            tmp_left_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_49 == NULL));
        tmp_right_value_49 = mod_consts[142];
        tmp_assign_source_80 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_49, tmp_right_value_49);
        assert(!(tmp_assign_source_80 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_left_value_50;
        PyObject *tmp_right_value_50;
        tmp_left_value_50 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_50 == NULL)) {
            tmp_left_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_50 == NULL));
        tmp_right_value_50 = mod_consts[17];
        tmp_assign_source_81 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_50, tmp_right_value_50);
        assert(!(tmp_assign_source_81 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_left_value_51;
        PyObject *tmp_right_value_51;
        tmp_left_value_51 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_51 == NULL)) {
            tmp_left_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_51 == NULL));
        tmp_right_value_51 = mod_consts[145];
        tmp_assign_source_82 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_51, tmp_right_value_51);
        assert(!(tmp_assign_source_82 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_left_value_52;
        PyObject *tmp_right_value_52;
        tmp_left_value_52 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_left_value_52 == NULL)) {
            tmp_left_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_left_value_52 == NULL));
        tmp_right_value_52 = mod_consts[147];
        tmp_assign_source_83 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_52, tmp_right_value_52);
        assert(!(tmp_assign_source_83 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_left_value_53;
        PyObject *tmp_right_value_53;
        tmp_left_value_53 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_left_value_53 == NULL)) {
            tmp_left_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        assert(!(tmp_left_value_53 == NULL));
        tmp_right_value_53 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_right_value_53 == NULL)) {
            tmp_right_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        assert(!(tmp_right_value_53 == NULL));
        tmp_assign_source_100 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_53, tmp_right_value_53);
        assert(!(tmp_assign_source_100 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_left_value_54;
        PyObject *tmp_right_value_54;
        tmp_left_value_54 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_left_value_54 == NULL)) {
            tmp_left_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        assert(!(tmp_left_value_54 == NULL));
        tmp_right_value_54 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_right_value_54 == NULL)) {
            tmp_right_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        assert(!(tmp_right_value_54 == NULL));
        tmp_assign_source_101 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_54, tmp_right_value_54);
        assert(!(tmp_assign_source_101 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_left_value_55;
        PyObject *tmp_right_value_55;
        tmp_left_value_55 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_left_value_55 == NULL)) {
            tmp_left_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        assert(!(tmp_left_value_55 == NULL));
        tmp_right_value_55 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_right_value_55 == NULL)) {
            tmp_right_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        assert(!(tmp_right_value_55 == NULL));
        tmp_assign_source_102 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_55, tmp_right_value_55);
        assert(!(tmp_assign_source_102 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_left_value_56;
        PyObject *tmp_right_value_56;
        tmp_left_value_56 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_left_value_56 == NULL)) {
            tmp_left_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        assert(!(tmp_left_value_56 == NULL));
        tmp_right_value_56 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_right_value_56 == NULL)) {
            tmp_right_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        assert(!(tmp_right_value_56 == NULL));
        tmp_assign_source_103 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_56, tmp_right_value_56);
        assert(!(tmp_assign_source_103 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_assign_source_133 == NULL)) {
            tmp_assign_source_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        assert(!(tmp_assign_source_133 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assign_source_134 == NULL)) {
            tmp_assign_source_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        assert(!(tmp_assign_source_134 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_assign_source_135 == NULL)) {
            tmp_assign_source_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        assert(!(tmp_assign_source_135 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_assign_source_136 == NULL)) {
            tmp_assign_source_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        assert(!(tmp_assign_source_136 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_assign_source_140 == NULL)) {
            tmp_assign_source_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        assert(!(tmp_assign_source_140 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assign_source_148 == NULL)) {
            tmp_assign_source_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        assert(!(tmp_assign_source_148 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_left_value_57;
        PyObject *tmp_right_value_57;
        tmp_left_value_57 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_57 == NULL)) {
            tmp_left_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_57 == NULL));
        tmp_right_value_57 = mod_consts[44];
        tmp_assign_source_166 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_57, tmp_right_value_57);
        assert(!(tmp_assign_source_166 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_left_value_58;
        PyObject *tmp_right_value_58;
        tmp_left_value_58 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_58 == NULL)) {
            tmp_left_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_58 == NULL));
        tmp_right_value_58 = mod_consts[10];
        tmp_assign_source_167 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_58, tmp_right_value_58);
        assert(!(tmp_assign_source_167 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_left_value_59;
        PyObject *tmp_right_value_59;
        tmp_left_value_59 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_59 == NULL)) {
            tmp_left_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_59 == NULL));
        tmp_right_value_59 = mod_consts[247];
        tmp_assign_source_168 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_59, tmp_right_value_59);
        assert(!(tmp_assign_source_168 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_assign_source_169 == NULL)) {
            tmp_assign_source_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[246]);
        }

        assert(!(tmp_assign_source_169 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_left_value_60;
        PyObject *tmp_right_value_60;
        tmp_left_value_60 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_60 == NULL)) {
            tmp_left_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_60 == NULL));
        tmp_right_value_60 = mod_consts[12];
        tmp_assign_source_170 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_60, tmp_right_value_60);
        assert(!(tmp_assign_source_170 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_left_value_61;
        PyObject *tmp_right_value_61;
        tmp_left_value_61 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_61 == NULL)) {
            tmp_left_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_61 == NULL));
        tmp_right_value_61 = mod_consts[120];
        tmp_assign_source_171 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_61, tmp_right_value_61);
        assert(!(tmp_assign_source_171 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_left_value_62;
        PyObject *tmp_right_value_62;
        tmp_left_value_62 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_62 == NULL)) {
            tmp_left_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_62 == NULL));
        tmp_right_value_62 = mod_consts[252];
        tmp_assign_source_172 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_62, tmp_right_value_62);
        assert(!(tmp_assign_source_172 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assign_source_173 == NULL)) {
            tmp_assign_source_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[251]);
        }

        assert(!(tmp_assign_source_173 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_left_value_63;
        PyObject *tmp_right_value_63;
        tmp_left_value_63 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_63 == NULL)) {
            tmp_left_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_63 == NULL));
        tmp_right_value_63 = mod_consts[14];
        tmp_assign_source_174 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_63, tmp_right_value_63);
        assert(!(tmp_assign_source_174 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_left_value_64;
        PyObject *tmp_right_value_64;
        tmp_left_value_64 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_64 == NULL)) {
            tmp_left_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_64 == NULL));
        tmp_right_value_64 = mod_consts[1];
        tmp_assign_source_175 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_64, tmp_right_value_64);
        assert(!(tmp_assign_source_175 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[255]);

        if (unlikely(tmp_assign_source_176 == NULL)) {
            tmp_assign_source_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[255]);
        }

        assert(!(tmp_assign_source_176 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_left_value_65;
        PyObject *tmp_right_value_65;
        tmp_left_value_65 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_65 == NULL)) {
            tmp_left_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_65 == NULL));
        tmp_right_value_65 = mod_consts[123];
        tmp_assign_source_177 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_65, tmp_right_value_65);
        assert(!(tmp_assign_source_177 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_left_value_66;
        PyObject *tmp_right_value_66;
        tmp_left_value_66 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_66 == NULL)) {
            tmp_left_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_66 == NULL));
        tmp_right_value_66 = mod_consts[125];
        tmp_assign_source_186 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_66, tmp_right_value_66);
        assert(!(tmp_assign_source_186 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_left_value_67;
        PyObject *tmp_right_value_67;
        tmp_left_value_67 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_67 == NULL)) {
            tmp_left_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_67 == NULL));
        tmp_right_value_67 = mod_consts[134];
        tmp_assign_source_187 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_67, tmp_right_value_67);
        assert(!(tmp_assign_source_187 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_left_value_68;
        PyObject *tmp_right_value_68;
        tmp_left_value_68 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_68 == NULL)) {
            tmp_left_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_68 == NULL));
        tmp_right_value_68 = mod_consts[0];
        tmp_assign_source_188 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_68, tmp_right_value_68);
        assert(!(tmp_assign_source_188 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_left_value_69;
        PyObject *tmp_right_value_69;
        tmp_left_value_69 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_69 == NULL)) {
            tmp_left_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_69 == NULL));
        tmp_right_value_69 = mod_consts[270];
        tmp_assign_source_189 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_69, tmp_right_value_69);
        assert(!(tmp_assign_source_189 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_left_value_70;
        PyObject *tmp_right_value_70;
        tmp_left_value_70 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_70 == NULL)) {
            tmp_left_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_70 == NULL));
        tmp_right_value_70 = mod_consts[142];
        tmp_assign_source_190 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_70, tmp_right_value_70);
        assert(!(tmp_assign_source_190 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_left_value_71;
        PyObject *tmp_right_value_71;
        tmp_left_value_71 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_71 == NULL)) {
            tmp_left_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_71 == NULL));
        tmp_right_value_71 = mod_consts[17];
        tmp_assign_source_191 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_71, tmp_right_value_71);
        assert(!(tmp_assign_source_191 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_left_value_72;
        PyObject *tmp_right_value_72;
        tmp_left_value_72 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_72 == NULL)) {
            tmp_left_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_72 == NULL));
        tmp_right_value_72 = mod_consts[145];
        tmp_assign_source_192 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_72, tmp_right_value_72);
        assert(!(tmp_assign_source_192 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_left_value_73;
        PyObject *tmp_right_value_73;
        tmp_left_value_73 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_73 == NULL)) {
            tmp_left_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_73 == NULL));
        tmp_right_value_73 = mod_consts[147];
        tmp_assign_source_193 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_73, tmp_right_value_73);
        assert(!(tmp_assign_source_193 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_left_value_74;
        PyObject *tmp_right_value_74;
        tmp_left_value_74 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_left_value_74 == NULL)) {
            tmp_left_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_left_value_74 == NULL));
        tmp_right_value_74 = mod_consts[276];
        tmp_assign_source_194 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_74, tmp_right_value_74);
        assert(!(tmp_assign_source_194 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_195 == NULL)) {
            tmp_assign_source_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assign_source_195 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_196 == NULL)) {
            tmp_assign_source_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_assign_source_196 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_left_value_75;
        PyObject *tmp_right_value_75;
        tmp_left_value_75 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_75 == NULL)) {
            tmp_left_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_75 == NULL));
        tmp_right_value_75 = mod_consts[44];
        tmp_assign_source_197 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_75, tmp_right_value_75);
        assert(!(tmp_assign_source_197 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_left_value_76;
        PyObject *tmp_right_value_76;
        tmp_left_value_76 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_76 == NULL)) {
            tmp_left_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_76 == NULL));
        tmp_right_value_76 = mod_consts[281];
        tmp_assign_source_198 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_76, tmp_right_value_76);
        assert(!(tmp_assign_source_198 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_left_value_77;
        PyObject *tmp_right_value_77;
        tmp_left_value_77 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_77 == NULL)) {
            tmp_left_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_77 == NULL));
        tmp_right_value_77 = mod_consts[10];
        tmp_assign_source_199 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_77, tmp_right_value_77);
        assert(!(tmp_assign_source_199 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_left_value_78;
        PyObject *tmp_right_value_78;
        tmp_left_value_78 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_78 == NULL)) {
            tmp_left_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_78 == NULL));
        tmp_right_value_78 = mod_consts[284];
        tmp_assign_source_200 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_78, tmp_right_value_78);
        assert(!(tmp_assign_source_200 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_left_value_79;
        PyObject *tmp_right_value_79;
        tmp_left_value_79 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_79 == NULL)) {
            tmp_left_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_79 == NULL));
        tmp_right_value_79 = mod_consts[12];
        tmp_assign_source_201 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_79, tmp_right_value_79);
        assert(!(tmp_assign_source_201 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_left_value_80;
        PyObject *tmp_right_value_80;
        tmp_left_value_80 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_80 == NULL)) {
            tmp_left_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_80 == NULL));
        tmp_right_value_80 = mod_consts[287];
        tmp_assign_source_202 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_80, tmp_right_value_80);
        assert(!(tmp_assign_source_202 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_left_value_81;
        PyObject *tmp_right_value_81;
        tmp_left_value_81 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_81 == NULL)) {
            tmp_left_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_81 == NULL));
        tmp_right_value_81 = mod_consts[120];
        tmp_assign_source_203 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_81, tmp_right_value_81);
        assert(!(tmp_assign_source_203 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_left_value_82;
        PyObject *tmp_right_value_82;
        tmp_left_value_82 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_82 == NULL)) {
            tmp_left_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_82 == NULL));
        tmp_right_value_82 = mod_consts[290];
        tmp_assign_source_204 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_82, tmp_right_value_82);
        assert(!(tmp_assign_source_204 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_left_value_83;
        PyObject *tmp_right_value_83;
        tmp_left_value_83 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_83 == NULL)) {
            tmp_left_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_83 == NULL));
        tmp_right_value_83 = mod_consts[123];
        tmp_assign_source_205 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_83, tmp_right_value_83);
        assert(!(tmp_assign_source_205 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_left_value_84;
        PyObject *tmp_right_value_84;
        tmp_left_value_84 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_84 == NULL)) {
            tmp_left_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_84 == NULL));
        tmp_right_value_84 = mod_consts[293];
        tmp_assign_source_206 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_84, tmp_right_value_84);
        assert(!(tmp_assign_source_206 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_left_value_85;
        PyObject *tmp_right_value_85;
        tmp_left_value_85 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_85 == NULL)) {
            tmp_left_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_85 == NULL));
        tmp_right_value_85 = mod_consts[125];
        tmp_assign_source_207 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_85, tmp_right_value_85);
        assert(!(tmp_assign_source_207 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_left_value_86;
        PyObject *tmp_right_value_86;
        tmp_left_value_86 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_86 == NULL)) {
            tmp_left_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_86 == NULL));
        tmp_right_value_86 = mod_consts[296];
        tmp_assign_source_208 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_86, tmp_right_value_86);
        assert(!(tmp_assign_source_208 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_left_value_87;
        PyObject *tmp_right_value_87;
        tmp_left_value_87 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_87 == NULL)) {
            tmp_left_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_87 == NULL));
        tmp_right_value_87 = mod_consts[134];
        tmp_assign_source_209 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_87, tmp_right_value_87);
        assert(!(tmp_assign_source_209 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_left_value_88;
        PyObject *tmp_right_value_88;
        tmp_left_value_88 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_88 == NULL)) {
            tmp_left_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_88 == NULL));
        tmp_right_value_88 = mod_consts[299];
        tmp_assign_source_210 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_88, tmp_right_value_88);
        assert(!(tmp_assign_source_210 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_left_value_89;
        PyObject *tmp_right_value_89;
        tmp_left_value_89 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_89 == NULL)) {
            tmp_left_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_89 == NULL));
        tmp_right_value_89 = mod_consts[0];
        tmp_assign_source_211 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_89, tmp_right_value_89);
        assert(!(tmp_assign_source_211 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_left_value_90;
        PyObject *tmp_right_value_90;
        tmp_left_value_90 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_90 == NULL)) {
            tmp_left_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_90 == NULL));
        tmp_right_value_90 = mod_consts[302];
        tmp_assign_source_212 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_90, tmp_right_value_90);
        assert(!(tmp_assign_source_212 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_left_value_91;
        PyObject *tmp_right_value_91;
        tmp_left_value_91 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_91 == NULL)) {
            tmp_left_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_91 == NULL));
        tmp_right_value_91 = mod_consts[270];
        tmp_assign_source_213 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_91, tmp_right_value_91);
        assert(!(tmp_assign_source_213 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_left_value_92;
        PyObject *tmp_right_value_92;
        tmp_left_value_92 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_92 == NULL)) {
            tmp_left_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_92 == NULL));
        tmp_right_value_92 = mod_consts[305];
        tmp_assign_source_214 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_92, tmp_right_value_92);
        assert(!(tmp_assign_source_214 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_left_value_93;
        PyObject *tmp_right_value_93;
        tmp_left_value_93 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_93 == NULL)) {
            tmp_left_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_93 == NULL));
        tmp_right_value_93 = mod_consts[247];
        tmp_assign_source_215 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_93, tmp_right_value_93);
        assert(!(tmp_assign_source_215 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_left_value_94;
        PyObject *tmp_right_value_94;
        tmp_left_value_94 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_left_value_94 == NULL)) {
            tmp_left_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_left_value_94 == NULL));
        tmp_right_value_94 = mod_consts[252];
        tmp_assign_source_216 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_94, tmp_right_value_94);
        assert(!(tmp_assign_source_216 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[280]);

        if (unlikely(tmp_assign_source_217 == NULL)) {
            tmp_assign_source_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[280]);
        }

        assert(!(tmp_assign_source_217 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_assign_source_218 == NULL)) {
            tmp_assign_source_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[283]);
        }

        assert(!(tmp_assign_source_218 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[286]);

        if (unlikely(tmp_assign_source_219 == NULL)) {
            tmp_assign_source_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[286]);
        }

        assert(!(tmp_assign_source_219 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[289]);

        if (unlikely(tmp_assign_source_220 == NULL)) {
            tmp_assign_source_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[289]);
        }

        assert(!(tmp_assign_source_220 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[292]);

        if (unlikely(tmp_assign_source_221 == NULL)) {
            tmp_assign_source_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[292]);
        }

        assert(!(tmp_assign_source_221 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[295]);

        if (unlikely(tmp_assign_source_222 == NULL)) {
            tmp_assign_source_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[295]);
        }

        assert(!(tmp_assign_source_222 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[298]);

        if (unlikely(tmp_assign_source_223 == NULL)) {
            tmp_assign_source_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[298]);
        }

        assert(!(tmp_assign_source_223 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_assign_source_224 == NULL)) {
            tmp_assign_source_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[301]);
        }

        assert(!(tmp_assign_source_224 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[304]);

        if (unlikely(tmp_assign_source_225 == NULL)) {
            tmp_assign_source_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[304]);
        }

        assert(!(tmp_assign_source_225 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[319]);

        if (unlikely(tmp_assign_source_227 == NULL)) {
            tmp_assign_source_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[319]);
        }

        assert(!(tmp_assign_source_227 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_left_value_95;
        PyObject *tmp_right_value_95;
        tmp_left_value_95 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[333]);

        if (unlikely(tmp_left_value_95 == NULL)) {
            tmp_left_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[333]);
        }

        assert(!(tmp_left_value_95 == NULL));
        tmp_right_value_95 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[332]);

        if (unlikely(tmp_right_value_95 == NULL)) {
            tmp_right_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[332]);
        }

        assert(!(tmp_right_value_95 == NULL));
        tmp_assign_source_241 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_95, tmp_right_value_95);
        assert(!(tmp_assign_source_241 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[330]);

        if (unlikely(tmp_assign_source_254 == NULL)) {
            tmp_assign_source_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[330]);
        }

        assert(!(tmp_assign_source_254 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[331]);

        if (unlikely(tmp_assign_source_255 == NULL)) {
            tmp_assign_source_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[331]);
        }

        assert(!(tmp_assign_source_255 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[332]);

        if (unlikely(tmp_assign_source_256 == NULL)) {
            tmp_assign_source_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[332]);
        }

        assert(!(tmp_assign_source_256 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[333]);

        if (unlikely(tmp_assign_source_257 == NULL)) {
            tmp_assign_source_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[333]);
        }

        assert(!(tmp_assign_source_257 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[334]);

        if (unlikely(tmp_assign_source_258 == NULL)) {
            tmp_assign_source_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[334]);
        }

        assert(!(tmp_assign_source_258 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[335]);

        if (unlikely(tmp_assign_source_259 == NULL)) {
            tmp_assign_source_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[335]);
        }

        assert(!(tmp_assign_source_259 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[336]);

        if (unlikely(tmp_assign_source_260 == NULL)) {
            tmp_assign_source_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[336]);
        }

        assert(!(tmp_assign_source_260 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[337]);

        if (unlikely(tmp_assign_source_261 == NULL)) {
            tmp_assign_source_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[337]);
        }

        assert(!(tmp_assign_source_261 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_left_value_96;
        PyObject *tmp_right_value_96;
        tmp_left_value_96 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_96 == NULL)) {
            tmp_left_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_96 == NULL));
        tmp_right_value_96 = mod_consts[10];
        tmp_assign_source_269 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_96, tmp_right_value_96);
        assert(!(tmp_assign_source_269 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_left_value_97;
        PyObject *tmp_right_value_97;
        tmp_left_value_97 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_97 == NULL)) {
            tmp_left_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_97 == NULL));
        tmp_right_value_97 = mod_consts[12];
        tmp_assign_source_270 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_97, tmp_right_value_97);
        assert(!(tmp_assign_source_270 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_left_value_98;
        PyObject *tmp_right_value_98;
        tmp_left_value_98 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_98 == NULL)) {
            tmp_left_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_98 == NULL));
        tmp_right_value_98 = mod_consts[120];
        tmp_assign_source_271 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_98, tmp_right_value_98);
        assert(!(tmp_assign_source_271 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_left_value_99;
        PyObject *tmp_right_value_99;
        tmp_left_value_99 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_99 == NULL)) {
            tmp_left_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_99 == NULL));
        tmp_right_value_99 = mod_consts[14];
        tmp_assign_source_272 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_99, tmp_right_value_99);
        assert(!(tmp_assign_source_272 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_left_value_100;
        PyObject *tmp_right_value_100;
        tmp_left_value_100 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_100 == NULL)) {
            tmp_left_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_100 == NULL));
        tmp_right_value_100 = mod_consts[123];
        tmp_assign_source_273 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_100, tmp_right_value_100);
        assert(!(tmp_assign_source_273 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_left_value_101;
        PyObject *tmp_right_value_101;
        tmp_left_value_101 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_101 == NULL)) {
            tmp_left_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_101 == NULL));
        tmp_right_value_101 = mod_consts[125];
        tmp_assign_source_274 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_101, tmp_right_value_101);
        assert(!(tmp_assign_source_274 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_left_value_102;
        PyObject *tmp_right_value_102;
        tmp_left_value_102 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_102 == NULL)) {
            tmp_left_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_102 == NULL));
        tmp_right_value_102 = mod_consts[270];
        tmp_assign_source_275 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_102, tmp_right_value_102);
        assert(!(tmp_assign_source_275 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_left_value_103;
        PyObject *tmp_right_value_103;
        tmp_left_value_103 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_103 == NULL)) {
            tmp_left_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_103 == NULL));
        tmp_right_value_103 = mod_consts[247];
        tmp_assign_source_276 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_103, tmp_right_value_103);
        assert(!(tmp_assign_source_276 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_left_value_104;
        PyObject *tmp_right_value_104;
        tmp_left_value_104 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_104 == NULL)) {
            tmp_left_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_104 == NULL));
        tmp_right_value_104 = mod_consts[252];
        tmp_assign_source_277 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_104, tmp_right_value_104);
        assert(!(tmp_assign_source_277 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_left_value_105;
        PyObject *tmp_right_value_105;
        tmp_left_value_105 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_105 == NULL)) {
            tmp_left_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_105 == NULL));
        tmp_right_value_105 = mod_consts[1];
        tmp_assign_source_278 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_105, tmp_right_value_105);
        assert(!(tmp_assign_source_278 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_left_value_106;
        PyObject *tmp_right_value_106;
        tmp_left_value_106 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_106 == NULL)) {
            tmp_left_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_106 == NULL));
        tmp_right_value_106 = mod_consts[138];
        tmp_assign_source_279 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_106, tmp_right_value_106);
        assert(!(tmp_assign_source_279 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_left_value_107;
        PyObject *tmp_right_value_107;
        tmp_left_value_107 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_107 == NULL)) {
            tmp_left_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_107 == NULL));
        tmp_right_value_107 = mod_consts[140];
        tmp_assign_source_280 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_107, tmp_right_value_107);
        assert(!(tmp_assign_source_280 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_left_value_108;
        PyObject *tmp_right_value_108;
        tmp_left_value_108 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_108 == NULL)) {
            tmp_left_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_108 == NULL));
        tmp_right_value_108 = mod_consts[145];
        tmp_assign_source_281 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_108, tmp_right_value_108);
        assert(!(tmp_assign_source_281 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_left_value_109;
        PyObject *tmp_right_value_109;
        tmp_left_value_109 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_109 == NULL)) {
            tmp_left_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_109 == NULL));
        tmp_right_value_109 = mod_consts[147];
        tmp_assign_source_282 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_109, tmp_right_value_109);
        assert(!(tmp_assign_source_282 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        PyObject *tmp_left_value_110;
        PyObject *tmp_right_value_110;
        tmp_left_value_110 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_110 == NULL)) {
            tmp_left_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_110 == NULL));
        tmp_right_value_110 = mod_consts[276];
        tmp_assign_source_283 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_110, tmp_right_value_110);
        assert(!(tmp_assign_source_283 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        tmp_assign_source_284 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        tmp_assign_source_285 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        tmp_assign_source_287 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        tmp_assign_source_288 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        tmp_assign_source_289 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        PyObject *tmp_left_value_111;
        PyObject *tmp_right_value_111;
        tmp_left_value_111 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_111 == NULL)) {
            tmp_left_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_111 == NULL));
        tmp_right_value_111 = mod_consts[281];
        tmp_assign_source_324 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_111, tmp_right_value_111);
        assert(!(tmp_assign_source_324 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        PyObject *tmp_left_value_112;
        PyObject *tmp_right_value_112;
        tmp_left_value_112 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_112 == NULL)) {
            tmp_left_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_112 == NULL));
        tmp_right_value_112 = mod_consts[284];
        tmp_assign_source_325 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_112, tmp_right_value_112);
        assert(!(tmp_assign_source_325 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        PyObject *tmp_left_value_113;
        PyObject *tmp_right_value_113;
        tmp_left_value_113 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_113 == NULL)) {
            tmp_left_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_113 == NULL));
        tmp_right_value_113 = mod_consts[281];
        tmp_assign_source_326 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_113, tmp_right_value_113);
        assert(!(tmp_assign_source_326 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        PyObject *tmp_left_value_114;
        PyObject *tmp_right_value_114;
        tmp_left_value_114 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_114 == NULL)) {
            tmp_left_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_114 == NULL));
        tmp_right_value_114 = mod_consts[284];
        tmp_assign_source_327 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_114, tmp_right_value_114);
        assert(!(tmp_assign_source_327 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        PyObject *tmp_left_value_115;
        PyObject *tmp_right_value_115;
        tmp_left_value_115 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_115 == NULL)) {
            tmp_left_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_115 == NULL));
        tmp_right_value_115 = mod_consts[287];
        tmp_assign_source_328 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_115, tmp_right_value_115);
        assert(!(tmp_assign_source_328 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        PyObject *tmp_left_value_116;
        PyObject *tmp_right_value_116;
        tmp_left_value_116 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_116 == NULL)) {
            tmp_left_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_116 == NULL));
        tmp_right_value_116 = mod_consts[290];
        tmp_assign_source_329 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_116, tmp_right_value_116);
        assert(!(tmp_assign_source_329 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        PyObject *tmp_left_value_117;
        PyObject *tmp_right_value_117;
        tmp_left_value_117 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_117 == NULL)) {
            tmp_left_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_117 == NULL));
        tmp_right_value_117 = mod_consts[196];
        tmp_assign_source_330 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_117, tmp_right_value_117);
        assert(!(tmp_assign_source_330 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        PyObject *tmp_left_value_118;
        PyObject *tmp_right_value_118;
        tmp_left_value_118 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_118 == NULL)) {
            tmp_left_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_118 == NULL));
        tmp_right_value_118 = mod_consts[293];
        tmp_assign_source_331 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_118, tmp_right_value_118);
        assert(!(tmp_assign_source_331 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        PyObject *tmp_left_value_119;
        PyObject *tmp_right_value_119;
        tmp_left_value_119 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_119 == NULL)) {
            tmp_left_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_119 == NULL));
        tmp_right_value_119 = mod_consts[296];
        tmp_assign_source_332 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_119, tmp_right_value_119);
        assert(!(tmp_assign_source_332 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        PyObject *tmp_left_value_120;
        PyObject *tmp_right_value_120;
        tmp_left_value_120 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_120 == NULL)) {
            tmp_left_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_120 == NULL));
        tmp_right_value_120 = mod_consts[429];
        tmp_assign_source_333 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_120, tmp_right_value_120);
        assert(!(tmp_assign_source_333 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        PyObject *tmp_left_value_121;
        PyObject *tmp_right_value_121;
        tmp_left_value_121 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_121 == NULL)) {
            tmp_left_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_121 == NULL));
        tmp_right_value_121 = mod_consts[299];
        tmp_assign_source_334 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_121, tmp_right_value_121);
        assert(!(tmp_assign_source_334 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        PyObject *tmp_left_value_122;
        PyObject *tmp_right_value_122;
        tmp_left_value_122 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_122 == NULL)) {
            tmp_left_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_122 == NULL));
        tmp_right_value_122 = mod_consts[302];
        tmp_assign_source_335 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_122, tmp_right_value_122);
        assert(!(tmp_assign_source_335 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        PyObject *tmp_left_value_123;
        PyObject *tmp_right_value_123;
        tmp_left_value_123 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_123 == NULL)) {
            tmp_left_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_123 == NULL));
        tmp_right_value_123 = mod_consts[433];
        tmp_assign_source_336 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_123, tmp_right_value_123);
        assert(!(tmp_assign_source_336 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        PyObject *tmp_left_value_124;
        PyObject *tmp_right_value_124;
        tmp_left_value_124 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_124 == NULL)) {
            tmp_left_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_124 == NULL));
        tmp_right_value_124 = mod_consts[305];
        tmp_assign_source_337 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_124, tmp_right_value_124);
        assert(!(tmp_assign_source_337 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        PyObject *tmp_left_value_125;
        PyObject *tmp_right_value_125;
        tmp_left_value_125 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_125 == NULL)) {
            tmp_left_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_125 == NULL));
        tmp_right_value_125 = mod_consts[436];
        tmp_assign_source_338 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_125, tmp_right_value_125);
        assert(!(tmp_assign_source_338 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        PyObject *tmp_left_value_126;
        PyObject *tmp_right_value_126;
        tmp_left_value_126 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_126 == NULL)) {
            tmp_left_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_126 == NULL));
        tmp_right_value_126 = mod_consts[438];
        tmp_assign_source_339 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_126, tmp_right_value_126);
        assert(!(tmp_assign_source_339 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        PyObject *tmp_left_value_127;
        PyObject *tmp_right_value_127;
        tmp_left_value_127 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_127 == NULL)) {
            tmp_left_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_127 == NULL));
        tmp_right_value_127 = mod_consts[19];
        tmp_assign_source_340 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_127, tmp_right_value_127);
        assert(!(tmp_assign_source_340 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        PyObject *tmp_left_value_128;
        PyObject *tmp_right_value_128;
        tmp_left_value_128 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_128 == NULL)) {
            tmp_left_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_128 == NULL));
        tmp_right_value_128 = mod_consts[441];
        tmp_assign_source_341 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_128, tmp_right_value_128);
        assert(!(tmp_assign_source_341 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        PyObject *tmp_left_value_129;
        PyObject *tmp_right_value_129;
        tmp_left_value_129 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_129 == NULL)) {
            tmp_left_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_129 == NULL));
        tmp_right_value_129 = mod_consts[443];
        tmp_assign_source_342 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_129, tmp_right_value_129);
        assert(!(tmp_assign_source_342 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        PyObject *tmp_left_value_130;
        PyObject *tmp_right_value_130;
        tmp_left_value_130 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_130 == NULL)) {
            tmp_left_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_130 == NULL));
        tmp_right_value_130 = mod_consts[445];
        tmp_assign_source_343 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_130, tmp_right_value_130);
        assert(!(tmp_assign_source_343 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        PyObject *tmp_left_value_131;
        PyObject *tmp_right_value_131;
        tmp_left_value_131 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_131 == NULL)) {
            tmp_left_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_131 == NULL));
        tmp_right_value_131 = mod_consts[447];
        tmp_assign_source_344 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_131, tmp_right_value_131);
        assert(!(tmp_assign_source_344 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;
        PyObject *tmp_left_value_132;
        PyObject *tmp_right_value_132;
        tmp_left_value_132 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_132 == NULL)) {
            tmp_left_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_132 == NULL));
        tmp_right_value_132 = mod_consts[449];
        tmp_assign_source_345 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_132, tmp_right_value_132);
        assert(!(tmp_assign_source_345 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        PyObject *tmp_left_value_133;
        PyObject *tmp_right_value_133;
        tmp_left_value_133 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_133 == NULL)) {
            tmp_left_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_133 == NULL));
        tmp_right_value_133 = mod_consts[451];
        tmp_assign_source_346 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_133, tmp_right_value_133);
        assert(!(tmp_assign_source_346 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_346);
    }
    {
        PyObject *tmp_assign_source_347;
        PyObject *tmp_left_value_134;
        PyObject *tmp_right_value_134;
        tmp_left_value_134 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_134 == NULL)) {
            tmp_left_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_134 == NULL));
        tmp_right_value_134 = mod_consts[453];
        tmp_assign_source_347 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_134, tmp_right_value_134);
        assert(!(tmp_assign_source_347 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        PyObject *tmp_left_value_135;
        PyObject *tmp_right_value_135;
        tmp_left_value_135 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_135 == NULL)) {
            tmp_left_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_135 == NULL));
        tmp_right_value_135 = mod_consts[455];
        tmp_assign_source_348 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_135, tmp_right_value_135);
        assert(!(tmp_assign_source_348 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[456], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        PyObject *tmp_left_value_136;
        PyObject *tmp_right_value_136;
        tmp_left_value_136 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_136 == NULL)) {
            tmp_left_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_136 == NULL));
        tmp_right_value_136 = mod_consts[457];
        tmp_assign_source_349 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_136, tmp_right_value_136);
        assert(!(tmp_assign_source_349 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_349);
    }
    {
        PyObject *tmp_assign_source_350;
        PyObject *tmp_left_value_137;
        PyObject *tmp_right_value_137;
        tmp_left_value_137 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_137 == NULL)) {
            tmp_left_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_137 == NULL));
        tmp_right_value_137 = mod_consts[459];
        tmp_assign_source_350 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_137, tmp_right_value_137);
        assert(!(tmp_assign_source_350 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[460], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        PyObject *tmp_left_value_138;
        PyObject *tmp_right_value_138;
        tmp_left_value_138 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_138 == NULL)) {
            tmp_left_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_138 == NULL));
        tmp_right_value_138 = mod_consts[461];
        tmp_assign_source_351 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_138, tmp_right_value_138);
        assert(!(tmp_assign_source_351 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        PyObject *tmp_left_value_139;
        PyObject *tmp_right_value_139;
        tmp_left_value_139 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_139 == NULL)) {
            tmp_left_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_139 == NULL));
        tmp_right_value_139 = mod_consts[463];
        tmp_assign_source_352 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_139, tmp_right_value_139);
        assert(!(tmp_assign_source_352 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[464], tmp_assign_source_352);
    }
    {
        PyObject *tmp_assign_source_353;
        PyObject *tmp_left_value_140;
        PyObject *tmp_right_value_140;
        tmp_left_value_140 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_140 == NULL)) {
            tmp_left_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_140 == NULL));
        tmp_right_value_140 = mod_consts[465];
        tmp_assign_source_353 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_140, tmp_right_value_140);
        assert(!(tmp_assign_source_353 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[466], tmp_assign_source_353);
    }
    {
        PyObject *tmp_assign_source_354;
        PyObject *tmp_left_value_141;
        PyObject *tmp_right_value_141;
        tmp_left_value_141 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_141 == NULL)) {
            tmp_left_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_141 == NULL));
        tmp_right_value_141 = mod_consts[467];
        tmp_assign_source_354 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_141, tmp_right_value_141);
        assert(!(tmp_assign_source_354 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[468], tmp_assign_source_354);
    }
    {
        PyObject *tmp_assign_source_355;
        PyObject *tmp_left_value_142;
        PyObject *tmp_right_value_142;
        tmp_left_value_142 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_142 == NULL)) {
            tmp_left_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_142 == NULL));
        tmp_right_value_142 = mod_consts[469];
        tmp_assign_source_355 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_142, tmp_right_value_142);
        assert(!(tmp_assign_source_355 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_355);
    }
    {
        PyObject *tmp_assign_source_356;
        PyObject *tmp_left_value_143;
        PyObject *tmp_right_value_143;
        tmp_left_value_143 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_143 == NULL)) {
            tmp_left_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_143 == NULL));
        tmp_right_value_143 = mod_consts[471];
        tmp_assign_source_356 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_143, tmp_right_value_143);
        assert(!(tmp_assign_source_356 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[472], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        PyObject *tmp_left_value_144;
        PyObject *tmp_right_value_144;
        tmp_left_value_144 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_144 == NULL)) {
            tmp_left_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_144 == NULL));
        tmp_right_value_144 = mod_consts[473];
        tmp_assign_source_357 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_144, tmp_right_value_144);
        assert(!(tmp_assign_source_357 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[474], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        PyObject *tmp_left_value_145;
        PyObject *tmp_right_value_145;
        tmp_left_value_145 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_145 == NULL)) {
            tmp_left_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_145 == NULL));
        tmp_right_value_145 = mod_consts[475];
        tmp_assign_source_358 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_145, tmp_right_value_145);
        assert(!(tmp_assign_source_358 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[476], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        PyObject *tmp_left_value_146;
        PyObject *tmp_right_value_146;
        tmp_left_value_146 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_146 == NULL)) {
            tmp_left_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_146 == NULL));
        tmp_right_value_146 = mod_consts[477];
        tmp_assign_source_359 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_146, tmp_right_value_146);
        assert(!(tmp_assign_source_359 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        PyObject *tmp_left_value_147;
        PyObject *tmp_right_value_147;
        tmp_left_value_147 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_147 == NULL)) {
            tmp_left_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_147 == NULL));
        tmp_right_value_147 = mod_consts[479];
        tmp_assign_source_360 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_147, tmp_right_value_147);
        assert(!(tmp_assign_source_360 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        PyObject *tmp_left_value_148;
        PyObject *tmp_right_value_148;
        tmp_left_value_148 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_148 == NULL)) {
            tmp_left_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_148 == NULL));
        tmp_right_value_148 = mod_consts[481];
        tmp_assign_source_361 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_148, tmp_right_value_148);
        assert(!(tmp_assign_source_361 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[482], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        PyObject *tmp_left_value_149;
        PyObject *tmp_right_value_149;
        tmp_left_value_149 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_149 == NULL)) {
            tmp_left_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_149 == NULL));
        tmp_right_value_149 = mod_consts[483];
        tmp_assign_source_362 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_149, tmp_right_value_149);
        assert(!(tmp_assign_source_362 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[484], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        PyObject *tmp_left_value_150;
        PyObject *tmp_right_value_150;
        tmp_left_value_150 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_150 == NULL)) {
            tmp_left_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_150 == NULL));
        tmp_right_value_150 = mod_consts[485];
        tmp_assign_source_363 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_150, tmp_right_value_150);
        assert(!(tmp_assign_source_363 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[486], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        PyObject *tmp_left_value_151;
        PyObject *tmp_right_value_151;
        tmp_left_value_151 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_151 == NULL)) {
            tmp_left_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_151 == NULL));
        tmp_right_value_151 = mod_consts[487];
        tmp_assign_source_364 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_151, tmp_right_value_151);
        assert(!(tmp_assign_source_364 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        PyObject *tmp_left_value_152;
        PyObject *tmp_right_value_152;
        tmp_left_value_152 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_152 == NULL)) {
            tmp_left_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_152 == NULL));
        tmp_right_value_152 = mod_consts[489];
        tmp_assign_source_365 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_152, tmp_right_value_152);
        assert(!(tmp_assign_source_365 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[490], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        PyObject *tmp_left_value_153;
        PyObject *tmp_right_value_153;
        tmp_left_value_153 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_153 == NULL)) {
            tmp_left_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_153 == NULL));
        tmp_right_value_153 = mod_consts[491];
        tmp_assign_source_366 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_153, tmp_right_value_153);
        assert(!(tmp_assign_source_366 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        PyObject *tmp_left_value_154;
        PyObject *tmp_right_value_154;
        tmp_left_value_154 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_154 == NULL)) {
            tmp_left_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_154 == NULL));
        tmp_right_value_154 = mod_consts[493];
        tmp_assign_source_367 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_154, tmp_right_value_154);
        assert(!(tmp_assign_source_367 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[494], tmp_assign_source_367);
    }
    {
        PyObject *tmp_assign_source_368;
        tmp_assign_source_368 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[462]);

        if (unlikely(tmp_assign_source_368 == NULL)) {
            tmp_assign_source_368 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[462]);
        }

        assert(!(tmp_assign_source_368 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[495], tmp_assign_source_368);
    }
    {
        PyObject *tmp_assign_source_369;
        tmp_assign_source_369 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[430]);

        if (unlikely(tmp_assign_source_369 == NULL)) {
            tmp_assign_source_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[430]);
        }

        assert(!(tmp_assign_source_369 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        tmp_assign_source_370 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[434]);

        if (unlikely(tmp_assign_source_370 == NULL)) {
            tmp_assign_source_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[434]);
        }

        assert(!(tmp_assign_source_370 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[497], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        tmp_assign_source_371 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[460]);

        if (unlikely(tmp_assign_source_371 == NULL)) {
            tmp_assign_source_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[460]);
        }

        assert(!(tmp_assign_source_371 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[495], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        tmp_assign_source_372 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[428]);

        if (unlikely(tmp_assign_source_372 == NULL)) {
            tmp_assign_source_372 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[428]);
        }

        assert(!(tmp_assign_source_372 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        tmp_assign_source_373 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[432]);

        if (unlikely(tmp_assign_source_373 == NULL)) {
            tmp_assign_source_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[432]);
        }

        assert(!(tmp_assign_source_373 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[497], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        PyObject *tmp_left_value_155;
        PyObject *tmp_right_value_155;
        tmp_left_value_155 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_155 == NULL)) {
            tmp_left_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_155 == NULL));
        tmp_right_value_155 = mod_consts[498];
        tmp_assign_source_374 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_155, tmp_right_value_155);
        assert(!(tmp_assign_source_374 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        PyObject *tmp_left_value_156;
        PyObject *tmp_right_value_156;
        tmp_left_value_156 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_156 == NULL)) {
            tmp_left_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_156 == NULL));
        tmp_right_value_156 = mod_consts[500];
        tmp_assign_source_375 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_156, tmp_right_value_156);
        assert(!(tmp_assign_source_375 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        PyObject *tmp_left_value_157;
        PyObject *tmp_right_value_157;
        tmp_left_value_157 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_157 == NULL)) {
            tmp_left_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_157 == NULL));
        tmp_right_value_157 = mod_consts[502];
        tmp_assign_source_376 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_157, tmp_right_value_157);
        assert(!(tmp_assign_source_376 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[503], tmp_assign_source_376);
    }
    {
        PyObject *tmp_assign_source_377;
        PyObject *tmp_left_value_158;
        PyObject *tmp_right_value_158;
        tmp_left_value_158 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_158 == NULL)) {
            tmp_left_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_158 == NULL));
        tmp_right_value_158 = mod_consts[504];
        tmp_assign_source_377 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_158, tmp_right_value_158);
        assert(!(tmp_assign_source_377 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[505], tmp_assign_source_377);
    }
    {
        PyObject *tmp_assign_source_378;
        PyObject *tmp_left_value_159;
        PyObject *tmp_right_value_159;
        tmp_left_value_159 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_159 == NULL)) {
            tmp_left_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_159 == NULL));
        tmp_right_value_159 = mod_consts[506];
        tmp_assign_source_378 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_159, tmp_right_value_159);
        assert(!(tmp_assign_source_378 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[507], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        PyObject *tmp_left_value_160;
        PyObject *tmp_right_value_160;
        tmp_left_value_160 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_160 == NULL)) {
            tmp_left_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_160 == NULL));
        tmp_right_value_160 = mod_consts[508];
        tmp_assign_source_379 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_160, tmp_right_value_160);
        assert(!(tmp_assign_source_379 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[509], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        tmp_assign_source_380 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[510], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        tmp_assign_source_381 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[511], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        PyObject *tmp_left_value_161;
        PyObject *tmp_right_value_161;
        tmp_left_value_161 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_161 == NULL)) {
            tmp_left_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_161 == NULL));
        tmp_right_value_161 = mod_consts[512];
        tmp_assign_source_382 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_161, tmp_right_value_161);
        assert(!(tmp_assign_source_382 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[513], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        PyObject *tmp_left_value_162;
        PyObject *tmp_right_value_162;
        tmp_left_value_162 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_162 == NULL)) {
            tmp_left_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_162 == NULL));
        tmp_right_value_162 = mod_consts[514];
        tmp_assign_source_383 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_162, tmp_right_value_162);
        assert(!(tmp_assign_source_383 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[515], tmp_assign_source_383);
    }
    {
        PyObject *tmp_assign_source_384;
        PyObject *tmp_left_value_163;
        PyObject *tmp_right_value_163;
        tmp_left_value_163 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_163 == NULL)) {
            tmp_left_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_163 == NULL));
        tmp_right_value_163 = mod_consts[516];
        tmp_assign_source_384 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_163, tmp_right_value_163);
        assert(!(tmp_assign_source_384 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[517], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        PyObject *tmp_left_value_164;
        PyObject *tmp_right_value_164;
        tmp_left_value_164 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_164 == NULL)) {
            tmp_left_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_164 == NULL));
        tmp_right_value_164 = mod_consts[518];
        tmp_assign_source_385 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_164, tmp_right_value_164);
        assert(!(tmp_assign_source_385 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[519], tmp_assign_source_385);
    }
    {
        PyObject *tmp_assign_source_386;
        PyObject *tmp_left_value_165;
        PyObject *tmp_right_value_165;
        tmp_left_value_165 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_165 == NULL)) {
            tmp_left_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_165 == NULL));
        tmp_right_value_165 = mod_consts[520];
        tmp_assign_source_386 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_165, tmp_right_value_165);
        assert(!(tmp_assign_source_386 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[521], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        PyObject *tmp_left_value_166;
        PyObject *tmp_right_value_166;
        tmp_left_value_166 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_166 == NULL)) {
            tmp_left_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_166 == NULL));
        tmp_right_value_166 = mod_consts[522];
        tmp_assign_source_387 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_166, tmp_right_value_166);
        assert(!(tmp_assign_source_387 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        PyObject *tmp_left_value_167;
        PyObject *tmp_right_value_167;
        tmp_left_value_167 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_167 == NULL)) {
            tmp_left_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_167 == NULL));
        tmp_right_value_167 = mod_consts[524];
        tmp_assign_source_388 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_167, tmp_right_value_167);
        assert(!(tmp_assign_source_388 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[525], tmp_assign_source_388);
    }
    {
        PyObject *tmp_assign_source_389;
        PyObject *tmp_left_value_168;
        PyObject *tmp_right_value_168;
        tmp_left_value_168 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_168 == NULL)) {
            tmp_left_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_168 == NULL));
        tmp_right_value_168 = mod_consts[526];
        tmp_assign_source_389 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_168, tmp_right_value_168);
        assert(!(tmp_assign_source_389 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[527], tmp_assign_source_389);
    }
    {
        PyObject *tmp_assign_source_390;
        PyObject *tmp_left_value_169;
        PyObject *tmp_right_value_169;
        tmp_left_value_169 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_169 == NULL)) {
            tmp_left_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_169 == NULL));
        tmp_right_value_169 = mod_consts[528];
        tmp_assign_source_390 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_169, tmp_right_value_169);
        assert(!(tmp_assign_source_390 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[529], tmp_assign_source_390);
    }
    {
        PyObject *tmp_assign_source_391;
        PyObject *tmp_left_value_170;
        PyObject *tmp_right_value_170;
        tmp_left_value_170 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_170 == NULL)) {
            tmp_left_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_170 == NULL));
        tmp_right_value_170 = mod_consts[530];
        tmp_assign_source_391 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_170, tmp_right_value_170);
        assert(!(tmp_assign_source_391 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[531], tmp_assign_source_391);
    }
    {
        PyObject *tmp_assign_source_392;
        PyObject *tmp_left_value_171;
        PyObject *tmp_right_value_171;
        tmp_left_value_171 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_171 == NULL)) {
            tmp_left_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_171 == NULL));
        tmp_right_value_171 = mod_consts[532];
        tmp_assign_source_392 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_171, tmp_right_value_171);
        assert(!(tmp_assign_source_392 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[533], tmp_assign_source_392);
    }
    {
        PyObject *tmp_assign_source_393;
        tmp_assign_source_393 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assign_source_393 == NULL)) {
            tmp_assign_source_393 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_assign_source_393 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[534], tmp_assign_source_393);
    }
    {
        PyObject *tmp_assign_source_394;
        tmp_assign_source_394 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assign_source_394 == NULL)) {
            tmp_assign_source_394 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        assert(!(tmp_assign_source_394 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[535], tmp_assign_source_394);
    }
    {
        PyObject *tmp_assign_source_395;
        tmp_assign_source_395 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_395 == NULL)) {
            tmp_assign_source_395 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assign_source_395 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[536], tmp_assign_source_395);
    }
    {
        PyObject *tmp_assign_source_396;
        tmp_assign_source_396 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_396 == NULL)) {
            tmp_assign_source_396 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_assign_source_396 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_396);
    }
    {
        PyObject *tmp_assign_source_397;
        PyObject *tmp_left_value_172;
        PyObject *tmp_right_value_172;
        tmp_left_value_172 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_172 == NULL)) {
            tmp_left_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_172 == NULL));
        tmp_right_value_172 = mod_consts[538];
        tmp_assign_source_397 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_172, tmp_right_value_172);
        assert(!(tmp_assign_source_397 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[539], tmp_assign_source_397);
    }
    {
        PyObject *tmp_assign_source_398;
        tmp_assign_source_398 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[539]);

        if (unlikely(tmp_assign_source_398 == NULL)) {
            tmp_assign_source_398 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[539]);
        }

        assert(!(tmp_assign_source_398 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_398);
    }
    {
        PyObject *tmp_assign_source_399;
        tmp_assign_source_399 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[509]);

        if (unlikely(tmp_assign_source_399 == NULL)) {
            tmp_assign_source_399 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[509]);
        }

        assert(!(tmp_assign_source_399 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_399);
    }
    {
        PyObject *tmp_assign_source_400;
        tmp_assign_source_400 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[541], tmp_assign_source_400);
    }
    {
        PyObject *tmp_assign_source_401;
        PyObject *tmp_left_value_173;
        PyObject *tmp_right_value_173;
        tmp_left_value_173 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_173 == NULL)) {
            tmp_left_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_173 == NULL));
        tmp_right_value_173 = mod_consts[542];
        tmp_assign_source_401 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_173, tmp_right_value_173);
        assert(!(tmp_assign_source_401 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[543], tmp_assign_source_401);
    }
    {
        PyObject *tmp_assign_source_402;
        tmp_assign_source_402 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[544], tmp_assign_source_402);
    }
    {
        PyObject *tmp_assign_source_403;
        tmp_assign_source_403 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_403);
    }
    {
        PyObject *tmp_assign_source_404;
        tmp_assign_source_404 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[546], tmp_assign_source_404);
    }
    {
        PyObject *tmp_assign_source_405;
        tmp_assign_source_405 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[547], tmp_assign_source_405);
    }
    {
        PyObject *tmp_assign_source_406;
        tmp_assign_source_406 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[548], tmp_assign_source_406);
    }
    {
        PyObject *tmp_assign_source_407;
        tmp_assign_source_407 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[549], tmp_assign_source_407);
    }
    {
        PyObject *tmp_assign_source_408;
        tmp_assign_source_408 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[550], tmp_assign_source_408);
    }
    {
        PyObject *tmp_assign_source_409;
        PyObject *tmp_left_value_174;
        PyObject *tmp_right_value_174;
        tmp_left_value_174 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_174 == NULL)) {
            tmp_left_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_174 == NULL));
        tmp_right_value_174 = mod_consts[551];
        tmp_assign_source_409 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_174, tmp_right_value_174);
        assert(!(tmp_assign_source_409 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[552], tmp_assign_source_409);
    }
    {
        PyObject *tmp_assign_source_410;
        PyObject *tmp_left_value_175;
        PyObject *tmp_right_value_175;
        tmp_left_value_175 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_175 == NULL)) {
            tmp_left_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_175 == NULL));
        tmp_right_value_175 = mod_consts[21];
        tmp_assign_source_410 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_175, tmp_right_value_175);
        assert(!(tmp_assign_source_410 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[553], tmp_assign_source_410);
    }
    {
        PyObject *tmp_assign_source_411;
        PyObject *tmp_left_value_176;
        PyObject *tmp_right_value_176;
        tmp_left_value_176 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_176 == NULL)) {
            tmp_left_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_176 == NULL));
        tmp_right_value_176 = mod_consts[554];
        tmp_assign_source_411 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_176, tmp_right_value_176);
        assert(!(tmp_assign_source_411 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[555], tmp_assign_source_411);
    }
    {
        PyObject *tmp_assign_source_412;
        PyObject *tmp_left_value_177;
        PyObject *tmp_right_value_177;
        tmp_left_value_177 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_177 == NULL)) {
            tmp_left_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_177 == NULL));
        tmp_right_value_177 = mod_consts[556];
        tmp_assign_source_412 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_177, tmp_right_value_177);
        assert(!(tmp_assign_source_412 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[557], tmp_assign_source_412);
    }
    {
        PyObject *tmp_assign_source_413;
        PyObject *tmp_left_value_178;
        PyObject *tmp_right_value_178;
        tmp_left_value_178 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_178 == NULL)) {
            tmp_left_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_178 == NULL));
        tmp_right_value_178 = mod_consts[558];
        tmp_assign_source_413 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_178, tmp_right_value_178);
        assert(!(tmp_assign_source_413 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[559], tmp_assign_source_413);
    }
    {
        PyObject *tmp_assign_source_414;
        PyObject *tmp_left_value_179;
        PyObject *tmp_right_value_179;
        tmp_left_value_179 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_179 == NULL)) {
            tmp_left_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_179 == NULL));
        tmp_right_value_179 = mod_consts[560];
        tmp_assign_source_414 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_179, tmp_right_value_179);
        assert(!(tmp_assign_source_414 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[561], tmp_assign_source_414);
    }
    {
        PyObject *tmp_assign_source_415;
        PyObject *tmp_left_value_180;
        PyObject *tmp_right_value_180;
        tmp_left_value_180 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_180 == NULL)) {
            tmp_left_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_180 == NULL));
        tmp_right_value_180 = mod_consts[562];
        tmp_assign_source_415 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_180, tmp_right_value_180);
        assert(!(tmp_assign_source_415 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_415);
    }
    {
        PyObject *tmp_assign_source_416;
        PyObject *tmp_left_value_181;
        PyObject *tmp_right_value_181;
        tmp_left_value_181 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_181 == NULL)) {
            tmp_left_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_181 == NULL));
        tmp_right_value_181 = mod_consts[564];
        tmp_assign_source_416 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_181, tmp_right_value_181);
        assert(!(tmp_assign_source_416 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_416);
    }
    {
        PyObject *tmp_assign_source_417;
        PyObject *tmp_left_value_182;
        PyObject *tmp_right_value_182;
        tmp_left_value_182 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_182 == NULL)) {
            tmp_left_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_182 == NULL));
        tmp_right_value_182 = mod_consts[44];
        tmp_assign_source_417 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_182, tmp_right_value_182);
        assert(!(tmp_assign_source_417 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[566], tmp_assign_source_417);
    }
    {
        PyObject *tmp_assign_source_418;
        PyObject *tmp_left_value_183;
        PyObject *tmp_right_value_183;
        tmp_left_value_183 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_183 == NULL)) {
            tmp_left_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_183 == NULL));
        tmp_right_value_183 = mod_consts[281];
        tmp_assign_source_418 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_183, tmp_right_value_183);
        assert(!(tmp_assign_source_418 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_418);
    }
    {
        PyObject *tmp_assign_source_419;
        PyObject *tmp_left_value_184;
        PyObject *tmp_right_value_184;
        tmp_left_value_184 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_184 == NULL)) {
            tmp_left_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_184 == NULL));
        tmp_right_value_184 = mod_consts[10];
        tmp_assign_source_419 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_184, tmp_right_value_184);
        assert(!(tmp_assign_source_419 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[568], tmp_assign_source_419);
    }
    {
        PyObject *tmp_assign_source_420;
        PyObject *tmp_left_value_185;
        PyObject *tmp_right_value_185;
        tmp_left_value_185 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_185 == NULL)) {
            tmp_left_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_185 == NULL));
        tmp_right_value_185 = mod_consts[12];
        tmp_assign_source_420 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_185, tmp_right_value_185);
        assert(!(tmp_assign_source_420 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[569], tmp_assign_source_420);
    }
    {
        PyObject *tmp_assign_source_421;
        PyObject *tmp_left_value_186;
        PyObject *tmp_right_value_186;
        tmp_left_value_186 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_186 == NULL)) {
            tmp_left_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_186 == NULL));
        tmp_right_value_186 = mod_consts[120];
        tmp_assign_source_421 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_186, tmp_right_value_186);
        assert(!(tmp_assign_source_421 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[570], tmp_assign_source_421);
    }
    {
        PyObject *tmp_assign_source_422;
        PyObject *tmp_left_value_187;
        PyObject *tmp_right_value_187;
        tmp_left_value_187 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_187 == NULL)) {
            tmp_left_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_187 == NULL));
        tmp_right_value_187 = mod_consts[14];
        tmp_assign_source_422 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_187, tmp_right_value_187);
        assert(!(tmp_assign_source_422 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[571], tmp_assign_source_422);
    }
    {
        PyObject *tmp_assign_source_423;
        PyObject *tmp_left_value_188;
        PyObject *tmp_right_value_188;
        tmp_left_value_188 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_188 == NULL)) {
            tmp_left_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_188 == NULL));
        tmp_right_value_188 = mod_consts[123];
        tmp_assign_source_423 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_188, tmp_right_value_188);
        assert(!(tmp_assign_source_423 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[572], tmp_assign_source_423);
    }
    {
        PyObject *tmp_assign_source_424;
        PyObject *tmp_left_value_189;
        PyObject *tmp_right_value_189;
        tmp_left_value_189 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_189 == NULL)) {
            tmp_left_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_189 == NULL));
        tmp_right_value_189 = mod_consts[125];
        tmp_assign_source_424 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_189, tmp_right_value_189);
        assert(!(tmp_assign_source_424 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[573], tmp_assign_source_424);
    }
    {
        PyObject *tmp_assign_source_425;
        PyObject *tmp_left_value_190;
        PyObject *tmp_right_value_190;
        tmp_left_value_190 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_190 == NULL)) {
            tmp_left_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_190 == NULL));
        tmp_right_value_190 = mod_consts[134];
        tmp_assign_source_425 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_190, tmp_right_value_190);
        assert(!(tmp_assign_source_425 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[574], tmp_assign_source_425);
    }
    {
        PyObject *tmp_assign_source_426;
        PyObject *tmp_left_value_191;
        PyObject *tmp_right_value_191;
        tmp_left_value_191 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_191 == NULL)) {
            tmp_left_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_191 == NULL));
        tmp_right_value_191 = mod_consts[0];
        tmp_assign_source_426 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_191, tmp_right_value_191);
        assert(!(tmp_assign_source_426 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[575], tmp_assign_source_426);
    }
    {
        PyObject *tmp_assign_source_427;
        PyObject *tmp_left_value_192;
        PyObject *tmp_right_value_192;
        tmp_left_value_192 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_192 == NULL)) {
            tmp_left_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_192 == NULL));
        tmp_right_value_192 = mod_consts[270];
        tmp_assign_source_427 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_192, tmp_right_value_192);
        assert(!(tmp_assign_source_427 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[576], tmp_assign_source_427);
    }
    {
        PyObject *tmp_assign_source_428;
        PyObject *tmp_left_value_193;
        PyObject *tmp_right_value_193;
        tmp_left_value_193 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_193 == NULL)) {
            tmp_left_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_193 == NULL));
        tmp_right_value_193 = mod_consts[247];
        tmp_assign_source_428 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_193, tmp_right_value_193);
        assert(!(tmp_assign_source_428 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[577], tmp_assign_source_428);
    }
    {
        PyObject *tmp_assign_source_429;
        PyObject *tmp_left_value_194;
        PyObject *tmp_right_value_194;
        tmp_left_value_194 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_194 == NULL)) {
            tmp_left_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_194 == NULL));
        tmp_right_value_194 = mod_consts[1];
        tmp_assign_source_429 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_194, tmp_right_value_194);
        assert(!(tmp_assign_source_429 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[578], tmp_assign_source_429);
    }
    {
        PyObject *tmp_assign_source_430;
        tmp_assign_source_430 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[579], tmp_assign_source_430);
    }
    {
        PyObject *tmp_assign_source_431;
        tmp_assign_source_431 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[580], tmp_assign_source_431);
    }
    {
        PyObject *tmp_assign_source_432;
        tmp_assign_source_432 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[581], tmp_assign_source_432);
    }
    {
        PyObject *tmp_assign_source_433;
        tmp_assign_source_433 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[582], tmp_assign_source_433);
    }
    {
        PyObject *tmp_assign_source_434;
        tmp_assign_source_434 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[583], tmp_assign_source_434);
    }
    {
        PyObject *tmp_assign_source_435;
        tmp_assign_source_435 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[584], tmp_assign_source_435);
    }
    {
        PyObject *tmp_assign_source_436;
        tmp_assign_source_436 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[585], tmp_assign_source_436);
    }
    {
        PyObject *tmp_assign_source_437;
        tmp_assign_source_437 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[586], tmp_assign_source_437);
    }
    {
        PyObject *tmp_assign_source_438;
        PyObject *tmp_left_value_195;
        PyObject *tmp_right_value_195;
        tmp_left_value_195 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_195 == NULL)) {
            tmp_left_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_195 == NULL));
        tmp_right_value_195 = mod_consts[138];
        tmp_assign_source_438 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_195, tmp_right_value_195);
        assert(!(tmp_assign_source_438 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[587], tmp_assign_source_438);
    }
    {
        PyObject *tmp_assign_source_439;
        PyObject *tmp_left_value_196;
        PyObject *tmp_right_value_196;
        tmp_left_value_196 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_196 == NULL)) {
            tmp_left_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_196 == NULL));
        tmp_right_value_196 = mod_consts[140];
        tmp_assign_source_439 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_196, tmp_right_value_196);
        assert(!(tmp_assign_source_439 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[588], tmp_assign_source_439);
    }
    {
        PyObject *tmp_assign_source_440;
        PyObject *tmp_left_value_197;
        PyObject *tmp_right_value_197;
        tmp_left_value_197 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_197 == NULL)) {
            tmp_left_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_197 == NULL));
        tmp_right_value_197 = mod_consts[142];
        tmp_assign_source_440 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_197, tmp_right_value_197);
        assert(!(tmp_assign_source_440 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[589], tmp_assign_source_440);
    }
    {
        PyObject *tmp_assign_source_441;
        PyObject *tmp_left_value_198;
        PyObject *tmp_right_value_198;
        tmp_left_value_198 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_198 == NULL)) {
            tmp_left_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_198 == NULL));
        tmp_right_value_198 = mod_consts[17];
        tmp_assign_source_441 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_198, tmp_right_value_198);
        assert(!(tmp_assign_source_441 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[590], tmp_assign_source_441);
    }
    {
        PyObject *tmp_assign_source_442;
        PyObject *tmp_left_value_199;
        PyObject *tmp_right_value_199;
        tmp_left_value_199 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_199 == NULL)) {
            tmp_left_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_199 == NULL));
        tmp_right_value_199 = mod_consts[145];
        tmp_assign_source_442 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_199, tmp_right_value_199);
        assert(!(tmp_assign_source_442 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[591], tmp_assign_source_442);
    }
    {
        PyObject *tmp_assign_source_443;
        PyObject *tmp_left_value_200;
        PyObject *tmp_right_value_200;
        tmp_left_value_200 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_200 == NULL)) {
            tmp_left_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_200 == NULL));
        tmp_right_value_200 = mod_consts[147];
        tmp_assign_source_443 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_200, tmp_right_value_200);
        assert(!(tmp_assign_source_443 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[592], tmp_assign_source_443);
    }
    {
        PyObject *tmp_assign_source_444;
        PyObject *tmp_left_value_201;
        PyObject *tmp_right_value_201;
        tmp_left_value_201 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_left_value_201 == NULL)) {
            tmp_left_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_left_value_201 == NULL));
        tmp_right_value_201 = mod_consts[276];
        tmp_assign_source_444 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_201, tmp_right_value_201);
        assert(!(tmp_assign_source_444 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[593], tmp_assign_source_444);
    }
    {
        PyObject *tmp_assign_source_445;
        tmp_assign_source_445 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[592]);

        if (unlikely(tmp_assign_source_445 == NULL)) {
            tmp_assign_source_445 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[592]);
        }

        assert(!(tmp_assign_source_445 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[594], tmp_assign_source_445);
    }
    {
        PyObject *tmp_assign_source_446;
        tmp_assign_source_446 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[595], tmp_assign_source_446);
    }
    {
        PyObject *tmp_assign_source_447;
        tmp_assign_source_447 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[596], tmp_assign_source_447);
    }
    {
        PyObject *tmp_assign_source_448;
        tmp_assign_source_448 = mod_consts[597];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[598], tmp_assign_source_448);
    }
    {
        PyObject *tmp_assign_source_449;
        tmp_assign_source_449 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[590]);

        if (unlikely(tmp_assign_source_449 == NULL)) {
            tmp_assign_source_449 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[590]);
        }

        assert(!(tmp_assign_source_449 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[599], tmp_assign_source_449);
    }
    {
        PyObject *tmp_assign_source_450;
        tmp_assign_source_450 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[600], tmp_assign_source_450);
    }
    {
        PyObject *tmp_assign_source_451;
        tmp_assign_source_451 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[601], tmp_assign_source_451);
    }
    {
        PyObject *tmp_assign_source_452;
        tmp_assign_source_452 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[602], tmp_assign_source_452);
    }
    {
        PyObject *tmp_assign_source_453;
        tmp_assign_source_453 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[566]);

        if (unlikely(tmp_assign_source_453 == NULL)) {
            tmp_assign_source_453 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[566]);
        }

        assert(!(tmp_assign_source_453 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[603], tmp_assign_source_453);
    }
    {
        PyObject *tmp_assign_source_454;
        tmp_assign_source_454 = mod_consts[604];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[605], tmp_assign_source_454);
    }
    {
        PyObject *tmp_assign_source_455;
        tmp_assign_source_455 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[605]);

        if (unlikely(tmp_assign_source_455 == NULL)) {
            tmp_assign_source_455 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[605]);
        }

        assert(!(tmp_assign_source_455 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[606], tmp_assign_source_455);
    }
    {
        PyObject *tmp_assign_source_456;
        tmp_assign_source_456 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[607], tmp_assign_source_456);
    }
    {
        PyObject *tmp_assign_source_457;
        tmp_assign_source_457 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[608], tmp_assign_source_457);
    }
    {
        PyObject *tmp_assign_source_458;
        tmp_assign_source_458 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_458);
    }
    {
        PyObject *tmp_assign_source_459;
        tmp_assign_source_459 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[610], tmp_assign_source_459);
    }
    {
        PyObject *tmp_assign_source_460;
        tmp_assign_source_460 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_460);
    }
    {
        PyObject *tmp_assign_source_461;
        tmp_assign_source_461 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[612], tmp_assign_source_461);
    }
    {
        PyObject *tmp_assign_source_462;
        tmp_assign_source_462 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[613], tmp_assign_source_462);
    }
    {
        PyObject *tmp_assign_source_463;
        tmp_assign_source_463 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[614], tmp_assign_source_463);
    }
    {
        PyObject *tmp_assign_source_464;
        tmp_assign_source_464 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[615], tmp_assign_source_464);
    }
    {
        PyObject *tmp_assign_source_465;
        tmp_assign_source_465 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[608], tmp_assign_source_465);
    }
    {
        PyObject *tmp_assign_source_466;
        tmp_assign_source_466 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_466);
    }
    {
        PyObject *tmp_assign_source_467;
        tmp_assign_source_467 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[610], tmp_assign_source_467);
    }
    {
        PyObject *tmp_assign_source_468;
        tmp_assign_source_468 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_468);
    }
    {
        PyObject *tmp_assign_source_469;
        tmp_assign_source_469 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[616], tmp_assign_source_469);
    }
    {
        PyObject *tmp_assign_source_470;
        tmp_assign_source_470 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[617], tmp_assign_source_470);
    }
    {
        PyObject *tmp_assign_source_471;
        tmp_assign_source_471 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[618], tmp_assign_source_471);
    }
    {
        PyObject *tmp_assign_source_472;
        tmp_assign_source_472 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[619], tmp_assign_source_472);
    }
    {
        PyObject *tmp_assign_source_473;
        tmp_assign_source_473 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[620], tmp_assign_source_473);
    }
    {
        PyObject *tmp_assign_source_474;
        tmp_assign_source_474 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[621], tmp_assign_source_474);
    }
    {
        PyObject *tmp_assign_source_475;
        tmp_assign_source_475 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[622], tmp_assign_source_475);
    }
    {
        PyObject *tmp_assign_source_476;
        tmp_assign_source_476 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[623], tmp_assign_source_476);
    }
    {
        PyObject *tmp_assign_source_477;
        tmp_assign_source_477 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[624], tmp_assign_source_477);
    }
    {
        PyObject *tmp_assign_source_478;
        tmp_assign_source_478 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[625], tmp_assign_source_478);
    }
    {
        PyObject *tmp_assign_source_479;
        tmp_assign_source_479 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[626], tmp_assign_source_479);
    }
    {
        PyObject *tmp_assign_source_480;
        tmp_assign_source_480 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[627], tmp_assign_source_480);
    }
    {
        PyObject *tmp_assign_source_481;
        tmp_assign_source_481 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[628], tmp_assign_source_481);
    }
    {
        PyObject *tmp_assign_source_482;
        tmp_assign_source_482 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[629], tmp_assign_source_482);
    }
    {
        PyObject *tmp_assign_source_483;
        tmp_assign_source_483 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[630], tmp_assign_source_483);
    }
    {
        PyObject *tmp_assign_source_484;
        tmp_assign_source_484 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[631], tmp_assign_source_484);
    }
    {
        PyObject *tmp_assign_source_485;
        tmp_assign_source_485 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[632], tmp_assign_source_485);
    }
    {
        PyObject *tmp_assign_source_486;
        tmp_assign_source_486 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[633], tmp_assign_source_486);
    }
    {
        PyObject *tmp_assign_source_487;
        tmp_assign_source_487 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[634], tmp_assign_source_487);
    }
    {
        PyObject *tmp_assign_source_488;
        tmp_assign_source_488 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[635], tmp_assign_source_488);
    }
    {
        PyObject *tmp_assign_source_489;
        PyObject *tmp_left_value_202;
        PyObject *tmp_right_value_202;
        tmp_left_value_202 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_202 == NULL)) {
            tmp_left_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_202 == NULL));
        tmp_right_value_202 = mod_consts[10];
        tmp_assign_source_489 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_202, tmp_right_value_202);
        assert(!(tmp_assign_source_489 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[636], tmp_assign_source_489);
    }
    {
        PyObject *tmp_assign_source_490;
        PyObject *tmp_left_value_203;
        PyObject *tmp_right_value_203;
        tmp_left_value_203 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_203 == NULL)) {
            tmp_left_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_203 == NULL));
        tmp_right_value_203 = mod_consts[12];
        tmp_assign_source_490 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_203, tmp_right_value_203);
        assert(!(tmp_assign_source_490 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[637], tmp_assign_source_490);
    }
    {
        PyObject *tmp_assign_source_491;
        PyObject *tmp_left_value_204;
        PyObject *tmp_right_value_204;
        tmp_left_value_204 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_204 == NULL)) {
            tmp_left_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_204 == NULL));
        tmp_right_value_204 = mod_consts[120];
        tmp_assign_source_491 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_204, tmp_right_value_204);
        assert(!(tmp_assign_source_491 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[638], tmp_assign_source_491);
    }
    {
        PyObject *tmp_assign_source_492;
        PyObject *tmp_left_value_205;
        PyObject *tmp_right_value_205;
        tmp_left_value_205 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_205 == NULL)) {
            tmp_left_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_205 == NULL));
        tmp_right_value_205 = mod_consts[14];
        tmp_assign_source_492 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_205, tmp_right_value_205);
        assert(!(tmp_assign_source_492 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[639], tmp_assign_source_492);
    }
    {
        PyObject *tmp_assign_source_493;
        PyObject *tmp_left_value_206;
        PyObject *tmp_right_value_206;
        tmp_left_value_206 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_206 == NULL)) {
            tmp_left_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_206 == NULL));
        tmp_right_value_206 = mod_consts[123];
        tmp_assign_source_493 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_206, tmp_right_value_206);
        assert(!(tmp_assign_source_493 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[640], tmp_assign_source_493);
    }
    {
        PyObject *tmp_assign_source_494;
        PyObject *tmp_left_value_207;
        PyObject *tmp_right_value_207;
        tmp_left_value_207 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_207 == NULL)) {
            tmp_left_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_207 == NULL));
        tmp_right_value_207 = mod_consts[125];
        tmp_assign_source_494 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_207, tmp_right_value_207);
        assert(!(tmp_assign_source_494 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[641], tmp_assign_source_494);
    }
    {
        PyObject *tmp_assign_source_495;
        PyObject *tmp_left_value_208;
        PyObject *tmp_right_value_208;
        tmp_left_value_208 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_208 == NULL)) {
            tmp_left_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_208 == NULL));
        tmp_right_value_208 = mod_consts[134];
        tmp_assign_source_495 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_208, tmp_right_value_208);
        assert(!(tmp_assign_source_495 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[642], tmp_assign_source_495);
    }
    {
        PyObject *tmp_assign_source_496;
        PyObject *tmp_left_value_209;
        PyObject *tmp_right_value_209;
        tmp_left_value_209 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_209 == NULL)) {
            tmp_left_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_209 == NULL));
        tmp_right_value_209 = mod_consts[0];
        tmp_assign_source_496 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_209, tmp_right_value_209);
        assert(!(tmp_assign_source_496 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[643], tmp_assign_source_496);
    }
    {
        PyObject *tmp_assign_source_497;
        PyObject *tmp_left_value_210;
        PyObject *tmp_right_value_210;
        tmp_left_value_210 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_210 == NULL)) {
            tmp_left_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_210 == NULL));
        tmp_right_value_210 = mod_consts[270];
        tmp_assign_source_497 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_210, tmp_right_value_210);
        assert(!(tmp_assign_source_497 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[644], tmp_assign_source_497);
    }
    {
        PyObject *tmp_assign_source_498;
        PyObject *tmp_left_value_211;
        PyObject *tmp_right_value_211;
        tmp_left_value_211 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_211 == NULL)) {
            tmp_left_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_211 == NULL));
        tmp_right_value_211 = mod_consts[247];
        tmp_assign_source_498 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_211, tmp_right_value_211);
        assert(!(tmp_assign_source_498 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[645], tmp_assign_source_498);
    }
    {
        PyObject *tmp_assign_source_499;
        PyObject *tmp_left_value_212;
        PyObject *tmp_right_value_212;
        tmp_left_value_212 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_212 == NULL)) {
            tmp_left_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_212 == NULL));
        tmp_right_value_212 = mod_consts[252];
        tmp_assign_source_499 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_212, tmp_right_value_212);
        assert(!(tmp_assign_source_499 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[646], tmp_assign_source_499);
    }
    {
        PyObject *tmp_assign_source_500;
        PyObject *tmp_left_value_213;
        PyObject *tmp_right_value_213;
        tmp_left_value_213 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_213 == NULL)) {
            tmp_left_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_213 == NULL));
        tmp_right_value_213 = mod_consts[1];
        tmp_assign_source_500 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_213, tmp_right_value_213);
        assert(!(tmp_assign_source_500 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[647], tmp_assign_source_500);
    }
    {
        PyObject *tmp_assign_source_501;
        PyObject *tmp_left_value_214;
        PyObject *tmp_right_value_214;
        tmp_left_value_214 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_214 == NULL)) {
            tmp_left_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_214 == NULL));
        tmp_right_value_214 = mod_consts[138];
        tmp_assign_source_501 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_214, tmp_right_value_214);
        assert(!(tmp_assign_source_501 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[648], tmp_assign_source_501);
    }
    {
        PyObject *tmp_assign_source_502;
        PyObject *tmp_left_value_215;
        PyObject *tmp_right_value_215;
        tmp_left_value_215 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_215 == NULL)) {
            tmp_left_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_215 == NULL));
        tmp_right_value_215 = mod_consts[140];
        tmp_assign_source_502 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_215, tmp_right_value_215);
        assert(!(tmp_assign_source_502 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[649], tmp_assign_source_502);
    }
    {
        PyObject *tmp_assign_source_503;
        PyObject *tmp_left_value_216;
        PyObject *tmp_right_value_216;
        tmp_left_value_216 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_216 == NULL)) {
            tmp_left_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_216 == NULL));
        tmp_right_value_216 = mod_consts[17];
        tmp_assign_source_503 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_216, tmp_right_value_216);
        assert(!(tmp_assign_source_503 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[650], tmp_assign_source_503);
    }
    {
        PyObject *tmp_assign_source_504;
        PyObject *tmp_left_value_217;
        PyObject *tmp_right_value_217;
        tmp_left_value_217 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_217 == NULL)) {
            tmp_left_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_217 == NULL));
        tmp_right_value_217 = mod_consts[145];
        tmp_assign_source_504 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_217, tmp_right_value_217);
        assert(!(tmp_assign_source_504 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[651], tmp_assign_source_504);
    }
    {
        PyObject *tmp_assign_source_505;
        PyObject *tmp_left_value_218;
        PyObject *tmp_right_value_218;
        tmp_left_value_218 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_218 == NULL)) {
            tmp_left_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_218 == NULL));
        tmp_right_value_218 = mod_consts[147];
        tmp_assign_source_505 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_218, tmp_right_value_218);
        assert(!(tmp_assign_source_505 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[652], tmp_assign_source_505);
    }
    {
        PyObject *tmp_assign_source_506;
        PyObject *tmp_left_value_219;
        PyObject *tmp_right_value_219;
        tmp_left_value_219 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_219 == NULL)) {
            tmp_left_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_219 == NULL));
        tmp_right_value_219 = mod_consts[276];
        tmp_assign_source_506 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_219, tmp_right_value_219);
        assert(!(tmp_assign_source_506 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[653], tmp_assign_source_506);
    }
    {
        PyObject *tmp_assign_source_507;
        PyObject *tmp_left_value_220;
        PyObject *tmp_right_value_220;
        tmp_left_value_220 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_220 == NULL)) {
            tmp_left_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_220 == NULL));
        tmp_right_value_220 = mod_consts[281];
        tmp_assign_source_507 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_220, tmp_right_value_220);
        assert(!(tmp_assign_source_507 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[654], tmp_assign_source_507);
    }
    {
        PyObject *tmp_assign_source_508;
        PyObject *tmp_left_value_221;
        PyObject *tmp_right_value_221;
        tmp_left_value_221 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_221 == NULL)) {
            tmp_left_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_221 == NULL));
        tmp_right_value_221 = mod_consts[284];
        tmp_assign_source_508 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_221, tmp_right_value_221);
        assert(!(tmp_assign_source_508 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[655], tmp_assign_source_508);
    }
    {
        PyObject *tmp_assign_source_509;
        PyObject *tmp_left_value_222;
        PyObject *tmp_right_value_222;
        tmp_left_value_222 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_222 == NULL)) {
            tmp_left_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_222 == NULL));
        tmp_right_value_222 = mod_consts[287];
        tmp_assign_source_509 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_222, tmp_right_value_222);
        assert(!(tmp_assign_source_509 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[656], tmp_assign_source_509);
    }
    {
        PyObject *tmp_assign_source_510;
        PyObject *tmp_left_value_223;
        PyObject *tmp_right_value_223;
        tmp_left_value_223 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_223 == NULL)) {
            tmp_left_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_223 == NULL));
        tmp_right_value_223 = mod_consts[290];
        tmp_assign_source_510 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_223, tmp_right_value_223);
        assert(!(tmp_assign_source_510 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[657], tmp_assign_source_510);
    }
    {
        PyObject *tmp_assign_source_511;
        tmp_assign_source_511 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assign_source_511 == NULL)) {
            tmp_assign_source_511 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_assign_source_511 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[658], tmp_assign_source_511);
    }
    {
        PyObject *tmp_assign_source_512;
        tmp_assign_source_512 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assign_source_512 == NULL)) {
            tmp_assign_source_512 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        assert(!(tmp_assign_source_512 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[659], tmp_assign_source_512);
    }
    {
        PyObject *tmp_assign_source_513;
        tmp_assign_source_513 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[636]);

        if (unlikely(tmp_assign_source_513 == NULL)) {
            tmp_assign_source_513 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[636]);
        }

        assert(!(tmp_assign_source_513 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[660], tmp_assign_source_513);
    }
    {
        PyObject *tmp_assign_source_514;
        tmp_assign_source_514 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[641]);

        if (unlikely(tmp_assign_source_514 == NULL)) {
            tmp_assign_source_514 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[641]);
        }

        assert(!(tmp_assign_source_514 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[661], tmp_assign_source_514);
    }
    {
        PyObject *tmp_assign_source_515;
        PyObject *tmp_left_value_224;
        PyObject *tmp_right_value_224;
        tmp_left_value_224 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_224 == NULL)) {
            tmp_left_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_224 == NULL));
        tmp_right_value_224 = mod_consts[196];
        tmp_assign_source_515 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_224, tmp_right_value_224);
        assert(!(tmp_assign_source_515 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[662], tmp_assign_source_515);
    }
    {
        PyObject *tmp_assign_source_516;
        PyObject *tmp_left_value_225;
        PyObject *tmp_right_value_225;
        tmp_left_value_225 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_225 == NULL)) {
            tmp_left_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_225 == NULL));
        tmp_right_value_225 = mod_consts[293];
        tmp_assign_source_516 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_225, tmp_right_value_225);
        assert(!(tmp_assign_source_516 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[663], tmp_assign_source_516);
    }
    {
        PyObject *tmp_assign_source_517;
        PyObject *tmp_left_value_226;
        PyObject *tmp_right_value_226;
        tmp_left_value_226 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_226 == NULL)) {
            tmp_left_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_226 == NULL));
        tmp_right_value_226 = mod_consts[296];
        tmp_assign_source_517 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_226, tmp_right_value_226);
        assert(!(tmp_assign_source_517 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[664], tmp_assign_source_517);
    }
    {
        PyObject *tmp_assign_source_518;
        PyObject *tmp_left_value_227;
        PyObject *tmp_right_value_227;
        tmp_left_value_227 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_227 == NULL)) {
            tmp_left_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_227 == NULL));
        tmp_right_value_227 = mod_consts[299];
        tmp_assign_source_518 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_227, tmp_right_value_227);
        assert(!(tmp_assign_source_518 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[665], tmp_assign_source_518);
    }
    {
        PyObject *tmp_assign_source_519;
        PyObject *tmp_left_value_228;
        PyObject *tmp_right_value_228;
        tmp_left_value_228 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_228 == NULL)) {
            tmp_left_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_228 == NULL));
        tmp_right_value_228 = mod_consts[302];
        tmp_assign_source_519 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_228, tmp_right_value_228);
        assert(!(tmp_assign_source_519 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[666], tmp_assign_source_519);
    }
    {
        PyObject *tmp_assign_source_520;
        PyObject *tmp_left_value_229;
        PyObject *tmp_right_value_229;
        tmp_left_value_229 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_229 == NULL)) {
            tmp_left_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_229 == NULL));
        tmp_right_value_229 = mod_consts[305];
        tmp_assign_source_520 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_229, tmp_right_value_229);
        assert(!(tmp_assign_source_520 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[667], tmp_assign_source_520);
    }
    {
        PyObject *tmp_assign_source_521;
        tmp_assign_source_521 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[667]);

        if (unlikely(tmp_assign_source_521 == NULL)) {
            tmp_assign_source_521 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[667]);
        }

        assert(!(tmp_assign_source_521 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[640], tmp_assign_source_521);
    }
    {
        PyObject *tmp_assign_source_522;
        PyObject *tmp_left_value_230;
        PyObject *tmp_right_value_230;
        tmp_left_value_230 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_230 == NULL)) {
            tmp_left_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_230 == NULL));
        tmp_right_value_230 = mod_consts[436];
        tmp_assign_source_522 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_230, tmp_right_value_230);
        assert(!(tmp_assign_source_522 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[668], tmp_assign_source_522);
    }
    {
        PyObject *tmp_assign_source_523;
        PyObject *tmp_left_value_231;
        PyObject *tmp_right_value_231;
        tmp_left_value_231 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_231 == NULL)) {
            tmp_left_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_231 == NULL));
        tmp_right_value_231 = mod_consts[438];
        tmp_assign_source_523 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_231, tmp_right_value_231);
        assert(!(tmp_assign_source_523 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[669], tmp_assign_source_523);
    }
    {
        PyObject *tmp_assign_source_524;
        tmp_assign_source_524 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assign_source_524 == NULL)) {
            tmp_assign_source_524 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        assert(!(tmp_assign_source_524 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[670], tmp_assign_source_524);
    }
    {
        PyObject *tmp_assign_source_525;
        PyObject *tmp_left_value_232;
        PyObject *tmp_right_value_232;
        tmp_left_value_232 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_232 == NULL)) {
            tmp_left_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_232 == NULL));
        tmp_right_value_232 = mod_consts[671];
        tmp_assign_source_525 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_232, tmp_right_value_232);
        assert(!(tmp_assign_source_525 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[672], tmp_assign_source_525);
    }
    {
        PyObject *tmp_assign_source_526;
        PyObject *tmp_left_value_233;
        PyObject *tmp_right_value_233;
        tmp_left_value_233 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_233 == NULL)) {
            tmp_left_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_233 == NULL));
        tmp_right_value_233 = mod_consts[443];
        tmp_assign_source_526 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_233, tmp_right_value_233);
        assert(!(tmp_assign_source_526 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[673], tmp_assign_source_526);
    }
    {
        PyObject *tmp_assign_source_527;
        PyObject *tmp_left_value_234;
        PyObject *tmp_right_value_234;
        tmp_left_value_234 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_234 == NULL)) {
            tmp_left_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_234 == NULL));
        tmp_right_value_234 = mod_consts[447];
        tmp_assign_source_527 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_234, tmp_right_value_234);
        assert(!(tmp_assign_source_527 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[674], tmp_assign_source_527);
    }
    {
        PyObject *tmp_assign_source_528;
        PyObject *tmp_left_value_235;
        PyObject *tmp_right_value_235;
        tmp_left_value_235 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_235 == NULL)) {
            tmp_left_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_235 == NULL));
        tmp_right_value_235 = mod_consts[675];
        tmp_assign_source_528 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_235, tmp_right_value_235);
        assert(!(tmp_assign_source_528 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[676], tmp_assign_source_528);
    }
    {
        PyObject *tmp_assign_source_529;
        PyObject *tmp_left_value_236;
        PyObject *tmp_right_value_236;
        tmp_left_value_236 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_236 == NULL)) {
            tmp_left_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_236 == NULL));
        tmp_right_value_236 = mod_consts[449];
        tmp_assign_source_529 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_236, tmp_right_value_236);
        assert(!(tmp_assign_source_529 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[677], tmp_assign_source_529);
    }
    {
        PyObject *tmp_assign_source_530;
        tmp_assign_source_530 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_530 == NULL)) {
            tmp_assign_source_530 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assign_source_530 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[678], tmp_assign_source_530);
    }
    {
        PyObject *tmp_assign_source_531;
        tmp_assign_source_531 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_531 == NULL)) {
            tmp_assign_source_531 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_assign_source_531 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[679], tmp_assign_source_531);
    }
    {
        PyObject *tmp_assign_source_532;
        PyObject *tmp_left_value_237;
        PyObject *tmp_right_value_237;
        tmp_left_value_237 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_237 == NULL)) {
            tmp_left_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_237 == NULL));
        tmp_right_value_237 = mod_consts[44];
        tmp_assign_source_532 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_237, tmp_right_value_237);
        assert(!(tmp_assign_source_532 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[680], tmp_assign_source_532);
    }
    {
        PyObject *tmp_assign_source_533;
        PyObject *tmp_left_value_238;
        PyObject *tmp_right_value_238;
        tmp_left_value_238 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_238 == NULL)) {
            tmp_left_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_238 == NULL));
        tmp_right_value_238 = mod_consts[10];
        tmp_assign_source_533 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_238, tmp_right_value_238);
        assert(!(tmp_assign_source_533 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[681], tmp_assign_source_533);
    }
    {
        PyObject *tmp_assign_source_534;
        PyObject *tmp_left_value_239;
        PyObject *tmp_right_value_239;
        tmp_left_value_239 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_239 == NULL)) {
            tmp_left_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_239 == NULL));
        tmp_right_value_239 = mod_consts[12];
        tmp_assign_source_534 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_239, tmp_right_value_239);
        assert(!(tmp_assign_source_534 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[682], tmp_assign_source_534);
    }
    {
        PyObject *tmp_assign_source_535;
        PyObject *tmp_left_value_240;
        PyObject *tmp_right_value_240;
        tmp_left_value_240 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_240 == NULL)) {
            tmp_left_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_240 == NULL));
        tmp_right_value_240 = mod_consts[120];
        tmp_assign_source_535 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_240, tmp_right_value_240);
        assert(!(tmp_assign_source_535 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[683], tmp_assign_source_535);
    }
    {
        PyObject *tmp_assign_source_536;
        PyObject *tmp_left_value_241;
        PyObject *tmp_right_value_241;
        tmp_left_value_241 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_241 == NULL)) {
            tmp_left_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_241 == NULL));
        tmp_right_value_241 = mod_consts[14];
        tmp_assign_source_536 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_241, tmp_right_value_241);
        assert(!(tmp_assign_source_536 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[684], tmp_assign_source_536);
    }
    {
        PyObject *tmp_assign_source_537;
        PyObject *tmp_left_value_242;
        PyObject *tmp_right_value_242;
        tmp_left_value_242 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_242 == NULL)) {
            tmp_left_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_242 == NULL));
        tmp_right_value_242 = mod_consts[123];
        tmp_assign_source_537 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_242, tmp_right_value_242);
        assert(!(tmp_assign_source_537 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[685], tmp_assign_source_537);
    }
    {
        PyObject *tmp_assign_source_538;
        PyObject *tmp_left_value_243;
        PyObject *tmp_right_value_243;
        tmp_left_value_243 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_243 == NULL)) {
            tmp_left_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_243 == NULL));
        tmp_right_value_243 = mod_consts[125];
        tmp_assign_source_538 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_243, tmp_right_value_243);
        assert(!(tmp_assign_source_538 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[686], tmp_assign_source_538);
    }
    {
        PyObject *tmp_assign_source_539;
        PyObject *tmp_left_value_244;
        PyObject *tmp_right_value_244;
        tmp_left_value_244 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_244 == NULL)) {
            tmp_left_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_244 == NULL));
        tmp_right_value_244 = mod_consts[134];
        tmp_assign_source_539 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_244, tmp_right_value_244);
        assert(!(tmp_assign_source_539 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[687], tmp_assign_source_539);
    }
    {
        PyObject *tmp_assign_source_540;
        PyObject *tmp_left_value_245;
        PyObject *tmp_right_value_245;
        tmp_left_value_245 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_left_value_245 == NULL)) {
            tmp_left_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_left_value_245 == NULL));
        tmp_right_value_245 = mod_consts[0];
        tmp_assign_source_540 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_245, tmp_right_value_245);
        assert(!(tmp_assign_source_540 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[688], tmp_assign_source_540);
    }
    {
        PyObject *tmp_assign_source_541;
        tmp_assign_source_541 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[689], tmp_assign_source_541);
    }
    {
        PyObject *tmp_assign_source_542;
        tmp_assign_source_542 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[690], tmp_assign_source_542);
    }
    {
        PyObject *tmp_assign_source_543;
        tmp_assign_source_543 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[691], tmp_assign_source_543);
    }
    {
        PyObject *tmp_assign_source_544;
        tmp_assign_source_544 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[692], tmp_assign_source_544);
    }
    {
        PyObject *tmp_assign_source_545;
        tmp_assign_source_545 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[693], tmp_assign_source_545);
    }
    {
        PyObject *tmp_assign_source_546;
        tmp_assign_source_546 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[694], tmp_assign_source_546);
    }
    {
        PyObject *tmp_assign_source_547;
        tmp_assign_source_547 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[695], tmp_assign_source_547);
    }
    {
        PyObject *tmp_assign_source_548;
        tmp_assign_source_548 = mod_consts[696];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[697], tmp_assign_source_548);
    }
    {
        PyObject *tmp_assign_source_549;
        tmp_assign_source_549 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[697]);

        if (unlikely(tmp_assign_source_549 == NULL)) {
            tmp_assign_source_549 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[697]);
        }

        assert(!(tmp_assign_source_549 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[698], tmp_assign_source_549);
    }
    {
        PyObject *tmp_assign_source_550;
        tmp_assign_source_550 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[699], tmp_assign_source_550);
    }
    {
        PyObject *tmp_assign_source_551;
        tmp_assign_source_551 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[700], tmp_assign_source_551);
    }
    {
        PyObject *tmp_assign_source_552;
        tmp_assign_source_552 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[701], tmp_assign_source_552);
    }
    {
        PyObject *tmp_assign_source_553;
        tmp_assign_source_553 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[702], tmp_assign_source_553);
    }
    {
        PyObject *tmp_assign_source_554;
        tmp_assign_source_554 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[703], tmp_assign_source_554);
    }
    {
        PyObject *tmp_assign_source_555;
        tmp_assign_source_555 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[704], tmp_assign_source_555);
    }
    {
        PyObject *tmp_assign_source_556;
        tmp_assign_source_556 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[705], tmp_assign_source_556);
    }
    {
        PyObject *tmp_assign_source_557;
        tmp_assign_source_557 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[706], tmp_assign_source_557);
    }
    {
        PyObject *tmp_assign_source_558;
        tmp_assign_source_558 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[707], tmp_assign_source_558);
    }
    {
        PyObject *tmp_assign_source_559;
        tmp_assign_source_559 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[708], tmp_assign_source_559);
    }
    {
        PyObject *tmp_assign_source_560;
        tmp_assign_source_560 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[709], tmp_assign_source_560);
    }
    {
        PyObject *tmp_assign_source_561;
        tmp_assign_source_561 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[710], tmp_assign_source_561);
    }
    {
        PyObject *tmp_assign_source_562;
        tmp_assign_source_562 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[711], tmp_assign_source_562);
    }
    {
        PyObject *tmp_assign_source_563;
        tmp_assign_source_563 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[712], tmp_assign_source_563);
    }
    {
        PyObject *tmp_assign_source_564;
        PyObject *tmp_left_value_246;
        PyObject *tmp_right_value_246;
        tmp_left_value_246 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_246 == NULL)) {
            tmp_left_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_246 == NULL));
        tmp_right_value_246 = mod_consts[10];
        tmp_assign_source_564 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_246, tmp_right_value_246);
        assert(!(tmp_assign_source_564 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[713], tmp_assign_source_564);
    }
    {
        PyObject *tmp_assign_source_565;
        PyObject *tmp_left_value_247;
        PyObject *tmp_right_value_247;
        tmp_left_value_247 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_247 == NULL)) {
            tmp_left_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_247 == NULL));
        tmp_right_value_247 = mod_consts[120];
        tmp_assign_source_565 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_247, tmp_right_value_247);
        assert(!(tmp_assign_source_565 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[714], tmp_assign_source_565);
    }
    {
        PyObject *tmp_assign_source_566;
        PyObject *tmp_left_value_248;
        PyObject *tmp_right_value_248;
        tmp_left_value_248 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_248 == NULL)) {
            tmp_left_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_248 == NULL));
        tmp_right_value_248 = mod_consts[14];
        tmp_assign_source_566 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_248, tmp_right_value_248);
        assert(!(tmp_assign_source_566 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[715], tmp_assign_source_566);
    }
    {
        PyObject *tmp_assign_source_567;
        PyObject *tmp_left_value_249;
        PyObject *tmp_right_value_249;
        tmp_left_value_249 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_249 == NULL)) {
            tmp_left_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_249 == NULL));
        tmp_right_value_249 = mod_consts[471];
        tmp_assign_source_567 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_249, tmp_right_value_249);
        assert(!(tmp_assign_source_567 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[716], tmp_assign_source_567);
    }
    {
        PyObject *tmp_assign_source_568;
        PyObject *tmp_left_value_250;
        PyObject *tmp_right_value_250;
        tmp_left_value_250 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_250 == NULL)) {
            tmp_left_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_250 == NULL));
        tmp_right_value_250 = mod_consts[123];
        tmp_assign_source_568 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_250, tmp_right_value_250);
        assert(!(tmp_assign_source_568 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[717], tmp_assign_source_568);
    }
    {
        PyObject *tmp_assign_source_569;
        PyObject *tmp_left_value_251;
        PyObject *tmp_right_value_251;
        tmp_left_value_251 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_251 == NULL)) {
            tmp_left_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_251 == NULL));
        tmp_right_value_251 = mod_consts[473];
        tmp_assign_source_569 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_251, tmp_right_value_251);
        assert(!(tmp_assign_source_569 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[718], tmp_assign_source_569);
    }
    {
        PyObject *tmp_assign_source_570;
        PyObject *tmp_left_value_252;
        PyObject *tmp_right_value_252;
        tmp_left_value_252 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_252 == NULL)) {
            tmp_left_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_252 == NULL));
        tmp_right_value_252 = mod_consts[125];
        tmp_assign_source_570 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_252, tmp_right_value_252);
        assert(!(tmp_assign_source_570 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[719], tmp_assign_source_570);
    }
    {
        PyObject *tmp_assign_source_571;
        PyObject *tmp_left_value_253;
        PyObject *tmp_right_value_253;
        tmp_left_value_253 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_253 == NULL)) {
            tmp_left_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_253 == NULL));
        tmp_right_value_253 = mod_consts[475];
        tmp_assign_source_571 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_253, tmp_right_value_253);
        assert(!(tmp_assign_source_571 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[720], tmp_assign_source_571);
    }
    {
        PyObject *tmp_assign_source_572;
        PyObject *tmp_left_value_254;
        PyObject *tmp_right_value_254;
        tmp_left_value_254 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_254 == NULL)) {
            tmp_left_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_254 == NULL));
        tmp_right_value_254 = mod_consts[134];
        tmp_assign_source_572 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_254, tmp_right_value_254);
        assert(!(tmp_assign_source_572 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[721], tmp_assign_source_572);
    }
    {
        PyObject *tmp_assign_source_573;
        PyObject *tmp_left_value_255;
        PyObject *tmp_right_value_255;
        tmp_left_value_255 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_255 == NULL)) {
            tmp_left_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_255 == NULL));
        tmp_right_value_255 = mod_consts[0];
        tmp_assign_source_573 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_255, tmp_right_value_255);
        assert(!(tmp_assign_source_573 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[722], tmp_assign_source_573);
    }
    {
        PyObject *tmp_assign_source_574;
        PyObject *tmp_left_value_256;
        PyObject *tmp_right_value_256;
        tmp_left_value_256 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_256 == NULL)) {
            tmp_left_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_256 == NULL));
        tmp_right_value_256 = mod_consts[477];
        tmp_assign_source_574 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_256, tmp_right_value_256);
        assert(!(tmp_assign_source_574 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[723], tmp_assign_source_574);
    }
    {
        PyObject *tmp_assign_source_575;
        PyObject *tmp_left_value_257;
        PyObject *tmp_right_value_257;
        tmp_left_value_257 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_257 == NULL)) {
            tmp_left_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_257 == NULL));
        tmp_right_value_257 = mod_consts[270];
        tmp_assign_source_575 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_257, tmp_right_value_257);
        assert(!(tmp_assign_source_575 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[724], tmp_assign_source_575);
    }
    {
        PyObject *tmp_assign_source_576;
        PyObject *tmp_left_value_258;
        PyObject *tmp_right_value_258;
        tmp_left_value_258 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_258 == NULL)) {
            tmp_left_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_258 == NULL));
        tmp_right_value_258 = mod_consts[479];
        tmp_assign_source_576 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_258, tmp_right_value_258);
        assert(!(tmp_assign_source_576 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[725], tmp_assign_source_576);
    }
    {
        PyObject *tmp_assign_source_577;
        PyObject *tmp_left_value_259;
        PyObject *tmp_right_value_259;
        tmp_left_value_259 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_259 == NULL)) {
            tmp_left_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_259 == NULL));
        tmp_right_value_259 = mod_consts[247];
        tmp_assign_source_577 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_259, tmp_right_value_259);
        assert(!(tmp_assign_source_577 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[726], tmp_assign_source_577);
    }
    {
        PyObject *tmp_assign_source_578;
        PyObject *tmp_left_value_260;
        PyObject *tmp_right_value_260;
        tmp_left_value_260 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_260 == NULL)) {
            tmp_left_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_260 == NULL));
        tmp_right_value_260 = mod_consts[481];
        tmp_assign_source_578 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_260, tmp_right_value_260);
        assert(!(tmp_assign_source_578 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[727], tmp_assign_source_578);
    }
    {
        PyObject *tmp_assign_source_579;
        PyObject *tmp_left_value_261;
        PyObject *tmp_right_value_261;
        tmp_left_value_261 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_261 == NULL)) {
            tmp_left_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_261 == NULL));
        tmp_right_value_261 = mod_consts[252];
        tmp_assign_source_579 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_261, tmp_right_value_261);
        assert(!(tmp_assign_source_579 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[728], tmp_assign_source_579);
    }
    {
        PyObject *tmp_assign_source_580;
        PyObject *tmp_left_value_262;
        PyObject *tmp_right_value_262;
        tmp_left_value_262 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_262 == NULL)) {
            tmp_left_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_262 == NULL));
        tmp_right_value_262 = mod_consts[483];
        tmp_assign_source_580 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_262, tmp_right_value_262);
        assert(!(tmp_assign_source_580 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[729], tmp_assign_source_580);
    }
    {
        PyObject *tmp_assign_source_581;
        PyObject *tmp_left_value_263;
        PyObject *tmp_right_value_263;
        tmp_left_value_263 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_263 == NULL)) {
            tmp_left_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_263 == NULL));
        tmp_right_value_263 = mod_consts[1];
        tmp_assign_source_581 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_263, tmp_right_value_263);
        assert(!(tmp_assign_source_581 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[730], tmp_assign_source_581);
    }
    {
        PyObject *tmp_assign_source_582;
        PyObject *tmp_left_value_264;
        PyObject *tmp_right_value_264;
        tmp_left_value_264 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_264 == NULL)) {
            tmp_left_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_264 == NULL));
        tmp_right_value_264 = mod_consts[485];
        tmp_assign_source_582 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_264, tmp_right_value_264);
        assert(!(tmp_assign_source_582 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[731], tmp_assign_source_582);
    }
    {
        PyObject *tmp_assign_source_583;
        PyObject *tmp_left_value_265;
        PyObject *tmp_right_value_265;
        tmp_left_value_265 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_265 == NULL)) {
            tmp_left_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_265 == NULL));
        tmp_right_value_265 = mod_consts[138];
        tmp_assign_source_583 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_265, tmp_right_value_265);
        assert(!(tmp_assign_source_583 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[732], tmp_assign_source_583);
    }
    {
        PyObject *tmp_assign_source_584;
        PyObject *tmp_left_value_266;
        PyObject *tmp_right_value_266;
        tmp_left_value_266 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_266 == NULL)) {
            tmp_left_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_266 == NULL));
        tmp_right_value_266 = mod_consts[140];
        tmp_assign_source_584 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_266, tmp_right_value_266);
        assert(!(tmp_assign_source_584 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[733], tmp_assign_source_584);
    }
    {
        PyObject *tmp_assign_source_585;
        PyObject *tmp_left_value_267;
        PyObject *tmp_right_value_267;
        tmp_left_value_267 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_267 == NULL)) {
            tmp_left_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_267 == NULL));
        tmp_right_value_267 = mod_consts[487];
        tmp_assign_source_585 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_267, tmp_right_value_267);
        assert(!(tmp_assign_source_585 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[734], tmp_assign_source_585);
    }
    {
        PyObject *tmp_assign_source_586;
        PyObject *tmp_left_value_268;
        PyObject *tmp_right_value_268;
        tmp_left_value_268 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_268 == NULL)) {
            tmp_left_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_268 == NULL));
        tmp_right_value_268 = mod_consts[142];
        tmp_assign_source_586 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_268, tmp_right_value_268);
        assert(!(tmp_assign_source_586 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[735], tmp_assign_source_586);
    }
    {
        PyObject *tmp_assign_source_587;
        PyObject *tmp_left_value_269;
        PyObject *tmp_right_value_269;
        tmp_left_value_269 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_269 == NULL)) {
            tmp_left_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_269 == NULL));
        tmp_right_value_269 = mod_consts[489];
        tmp_assign_source_587 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_269, tmp_right_value_269);
        assert(!(tmp_assign_source_587 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[736], tmp_assign_source_587);
    }
    {
        PyObject *tmp_assign_source_588;
        PyObject *tmp_left_value_270;
        PyObject *tmp_right_value_270;
        tmp_left_value_270 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_270 == NULL)) {
            tmp_left_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_270 == NULL));
        tmp_right_value_270 = mod_consts[17];
        tmp_assign_source_588 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_270, tmp_right_value_270);
        assert(!(tmp_assign_source_588 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[737], tmp_assign_source_588);
    }
    {
        PyObject *tmp_assign_source_589;
        PyObject *tmp_left_value_271;
        PyObject *tmp_right_value_271;
        tmp_left_value_271 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_271 == NULL)) {
            tmp_left_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_271 == NULL));
        tmp_right_value_271 = mod_consts[145];
        tmp_assign_source_589 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_271, tmp_right_value_271);
        assert(!(tmp_assign_source_589 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[738], tmp_assign_source_589);
    }
    {
        PyObject *tmp_assign_source_590;
        PyObject *tmp_left_value_272;
        PyObject *tmp_right_value_272;
        tmp_left_value_272 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_272 == NULL)) {
            tmp_left_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_272 == NULL));
        tmp_right_value_272 = mod_consts[147];
        tmp_assign_source_590 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_272, tmp_right_value_272);
        assert(!(tmp_assign_source_590 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[739], tmp_assign_source_590);
    }
    {
        PyObject *tmp_assign_source_591;
        PyObject *tmp_left_value_273;
        PyObject *tmp_right_value_273;
        tmp_left_value_273 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_273 == NULL)) {
            tmp_left_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_273 == NULL));
        tmp_right_value_273 = mod_consts[276];
        tmp_assign_source_591 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_273, tmp_right_value_273);
        assert(!(tmp_assign_source_591 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[740], tmp_assign_source_591);
    }
    {
        PyObject *tmp_assign_source_592;
        PyObject *tmp_left_value_274;
        PyObject *tmp_right_value_274;
        tmp_left_value_274 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_274 == NULL)) {
            tmp_left_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_274 == NULL));
        tmp_right_value_274 = mod_consts[281];
        tmp_assign_source_592 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_274, tmp_right_value_274);
        assert(!(tmp_assign_source_592 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[741], tmp_assign_source_592);
    }
    {
        PyObject *tmp_assign_source_593;
        PyObject *tmp_left_value_275;
        PyObject *tmp_right_value_275;
        tmp_left_value_275 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_275 == NULL)) {
            tmp_left_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_275 == NULL));
        tmp_right_value_275 = mod_consts[284];
        tmp_assign_source_593 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_275, tmp_right_value_275);
        assert(!(tmp_assign_source_593 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[742], tmp_assign_source_593);
    }
    {
        PyObject *tmp_assign_source_594;
        PyObject *tmp_left_value_276;
        PyObject *tmp_right_value_276;
        tmp_left_value_276 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_276 == NULL)) {
            tmp_left_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_276 == NULL));
        tmp_right_value_276 = mod_consts[287];
        tmp_assign_source_594 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_276, tmp_right_value_276);
        assert(!(tmp_assign_source_594 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[743], tmp_assign_source_594);
    }
    {
        PyObject *tmp_assign_source_595;
        PyObject *tmp_left_value_277;
        PyObject *tmp_right_value_277;
        tmp_left_value_277 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_277 == NULL)) {
            tmp_left_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_277 == NULL));
        tmp_right_value_277 = mod_consts[290];
        tmp_assign_source_595 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_277, tmp_right_value_277);
        assert(!(tmp_assign_source_595 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[744], tmp_assign_source_595);
    }
    {
        PyObject *tmp_assign_source_596;
        PyObject *tmp_left_value_278;
        PyObject *tmp_right_value_278;
        tmp_left_value_278 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_278 == NULL)) {
            tmp_left_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_278 == NULL));
        tmp_right_value_278 = mod_consts[196];
        tmp_assign_source_596 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_278, tmp_right_value_278);
        assert(!(tmp_assign_source_596 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[745], tmp_assign_source_596);
    }
    {
        PyObject *tmp_assign_source_597;
        PyObject *tmp_left_value_279;
        PyObject *tmp_right_value_279;
        tmp_left_value_279 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_279 == NULL)) {
            tmp_left_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_279 == NULL));
        tmp_right_value_279 = mod_consts[293];
        tmp_assign_source_597 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_279, tmp_right_value_279);
        assert(!(tmp_assign_source_597 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[746], tmp_assign_source_597);
    }
    {
        PyObject *tmp_assign_source_598;
        PyObject *tmp_left_value_280;
        PyObject *tmp_right_value_280;
        tmp_left_value_280 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_280 == NULL)) {
            tmp_left_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_280 == NULL));
        tmp_right_value_280 = mod_consts[296];
        tmp_assign_source_598 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_280, tmp_right_value_280);
        assert(!(tmp_assign_source_598 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[747], tmp_assign_source_598);
    }
    {
        PyObject *tmp_assign_source_599;
        PyObject *tmp_left_value_281;
        PyObject *tmp_right_value_281;
        tmp_left_value_281 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_281 == NULL)) {
            tmp_left_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_281 == NULL));
        tmp_right_value_281 = mod_consts[299];
        tmp_assign_source_599 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_281, tmp_right_value_281);
        assert(!(tmp_assign_source_599 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[748], tmp_assign_source_599);
    }
    {
        PyObject *tmp_assign_source_600;
        PyObject *tmp_left_value_282;
        PyObject *tmp_right_value_282;
        tmp_left_value_282 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_282 == NULL)) {
            tmp_left_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_282 == NULL));
        tmp_right_value_282 = mod_consts[302];
        tmp_assign_source_600 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_282, tmp_right_value_282);
        assert(!(tmp_assign_source_600 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[749], tmp_assign_source_600);
    }
    {
        PyObject *tmp_assign_source_601;
        PyObject *tmp_left_value_283;
        PyObject *tmp_right_value_283;
        tmp_left_value_283 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_283 == NULL)) {
            tmp_left_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_283 == NULL));
        tmp_right_value_283 = mod_consts[305];
        tmp_assign_source_601 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_283, tmp_right_value_283);
        assert(!(tmp_assign_source_601 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[750], tmp_assign_source_601);
    }
    {
        PyObject *tmp_assign_source_602;
        tmp_assign_source_602 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[715]);

        if (unlikely(tmp_assign_source_602 == NULL)) {
            tmp_assign_source_602 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[715]);
        }

        assert(!(tmp_assign_source_602 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[751], tmp_assign_source_602);
    }
    {
        PyObject *tmp_assign_source_603;
        tmp_assign_source_603 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[717]);

        if (unlikely(tmp_assign_source_603 == NULL)) {
            tmp_assign_source_603 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[717]);
        }

        assert(!(tmp_assign_source_603 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[752], tmp_assign_source_603);
    }
    {
        PyObject *tmp_assign_source_604;
        tmp_assign_source_604 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[719]);

        if (unlikely(tmp_assign_source_604 == NULL)) {
            tmp_assign_source_604 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[719]);
        }

        assert(!(tmp_assign_source_604 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[753], tmp_assign_source_604);
    }
    {
        PyObject *tmp_assign_source_605;
        tmp_assign_source_605 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[722]);

        if (unlikely(tmp_assign_source_605 == NULL)) {
            tmp_assign_source_605 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[722]);
        }

        assert(!(tmp_assign_source_605 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[754], tmp_assign_source_605);
    }
    {
        PyObject *tmp_assign_source_606;
        tmp_assign_source_606 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[724]);

        if (unlikely(tmp_assign_source_606 == NULL)) {
            tmp_assign_source_606 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[724]);
        }

        assert(!(tmp_assign_source_606 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[755], tmp_assign_source_606);
    }
    {
        PyObject *tmp_assign_source_607;
        tmp_assign_source_607 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[726]);

        if (unlikely(tmp_assign_source_607 == NULL)) {
            tmp_assign_source_607 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[726]);
        }

        assert(!(tmp_assign_source_607 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[756], tmp_assign_source_607);
    }
    {
        PyObject *tmp_assign_source_608;
        tmp_assign_source_608 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[728]);

        if (unlikely(tmp_assign_source_608 == NULL)) {
            tmp_assign_source_608 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[728]);
        }

        assert(!(tmp_assign_source_608 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[757], tmp_assign_source_608);
    }
    {
        PyObject *tmp_assign_source_609;
        tmp_assign_source_609 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[730]);

        if (unlikely(tmp_assign_source_609 == NULL)) {
            tmp_assign_source_609 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[730]);
        }

        assert(!(tmp_assign_source_609 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[758], tmp_assign_source_609);
    }
    {
        PyObject *tmp_assign_source_610;
        tmp_assign_source_610 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[733]);

        if (unlikely(tmp_assign_source_610 == NULL)) {
            tmp_assign_source_610 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[733]);
        }

        assert(!(tmp_assign_source_610 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[759], tmp_assign_source_610);
    }
    {
        PyObject *tmp_assign_source_611;
        tmp_assign_source_611 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[735]);

        if (unlikely(tmp_assign_source_611 == NULL)) {
            tmp_assign_source_611 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[735]);
        }

        assert(!(tmp_assign_source_611 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[760], tmp_assign_source_611);
    }
    {
        PyObject *tmp_assign_source_612;
        PyObject *tmp_left_value_284;
        PyObject *tmp_right_value_284;
        tmp_left_value_284 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_left_value_284 == NULL)) {
            tmp_left_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_left_value_284 == NULL));
        tmp_right_value_284 = mod_consts[44];
        tmp_assign_source_612 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_284, tmp_right_value_284);
        assert(!(tmp_assign_source_612 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[761], tmp_assign_source_612);
    }
    {
        PyObject *tmp_assign_source_613;
        PyObject *tmp_left_value_285;
        PyObject *tmp_right_value_285;
        tmp_left_value_285 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_left_value_285 == NULL)) {
            tmp_left_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_left_value_285 == NULL));
        tmp_right_value_285 = mod_consts[247];
        tmp_assign_source_613 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_285, tmp_right_value_285);
        assert(!(tmp_assign_source_613 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[762], tmp_assign_source_613);
    }
    {
        PyObject *tmp_assign_source_614;
        PyObject *tmp_left_value_286;
        PyObject *tmp_right_value_286;
        tmp_left_value_286 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_left_value_286 == NULL)) {
            tmp_left_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_left_value_286 == NULL));
        tmp_right_value_286 = mod_consts[10];
        tmp_assign_source_614 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_286, tmp_right_value_286);
        assert(!(tmp_assign_source_614 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[763], tmp_assign_source_614);
    }
    {
        PyObject *tmp_assign_source_615;
        PyObject *tmp_left_value_287;
        PyObject *tmp_right_value_287;
        tmp_left_value_287 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_left_value_287 == NULL)) {
            tmp_left_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_left_value_287 == NULL));
        tmp_right_value_287 = mod_consts[12];
        tmp_assign_source_615 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_287, tmp_right_value_287);
        assert(!(tmp_assign_source_615 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[764], tmp_assign_source_615);
    }
    {
        PyObject *tmp_assign_source_616;
        tmp_assign_source_616 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[761]);

        if (unlikely(tmp_assign_source_616 == NULL)) {
            tmp_assign_source_616 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[761]);
        }

        assert(!(tmp_assign_source_616 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[765], tmp_assign_source_616);
    }
    {
        PyObject *tmp_assign_source_617;
        tmp_assign_source_617 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[765]);

        if (unlikely(tmp_assign_source_617 == NULL)) {
            tmp_assign_source_617 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[765]);
        }

        assert(!(tmp_assign_source_617 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[766], tmp_assign_source_617);
    }
    {
        PyObject *tmp_assign_source_618;
        tmp_assign_source_618 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[761]);

        if (unlikely(tmp_assign_source_618 == NULL)) {
            tmp_assign_source_618 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[761]);
        }

        assert(!(tmp_assign_source_618 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[767], tmp_assign_source_618);
    }
    {
        PyObject *tmp_assign_source_619;
        tmp_assign_source_619 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[762]);

        if (unlikely(tmp_assign_source_619 == NULL)) {
            tmp_assign_source_619 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[762]);
        }

        assert(!(tmp_assign_source_619 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[768], tmp_assign_source_619);
    }
    {
        PyObject *tmp_assign_source_620;
        tmp_assign_source_620 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[769], tmp_assign_source_620);
    }
    {
        PyObject *tmp_assign_source_621;
        tmp_assign_source_621 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[770], tmp_assign_source_621);
    }
    {
        PyObject *tmp_assign_source_622;
        tmp_assign_source_622 = mod_consts[771];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[772], tmp_assign_source_622);
    }
    {
        PyObject *tmp_assign_source_623;
        tmp_assign_source_623 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[772]);

        if (unlikely(tmp_assign_source_623 == NULL)) {
            tmp_assign_source_623 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[772]);
        }

        assert(!(tmp_assign_source_623 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[773], tmp_assign_source_623);
    }
    {
        PyObject *tmp_assign_source_624;
        PyObject *tmp_left_value_288;
        PyObject *tmp_right_value_288;
        tmp_left_value_288 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_288 == NULL)) {
            tmp_left_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_288 == NULL));
        tmp_right_value_288 = mod_consts[10];
        tmp_assign_source_624 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_288, tmp_right_value_288);
        assert(!(tmp_assign_source_624 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[774], tmp_assign_source_624);
    }
    {
        PyObject *tmp_assign_source_625;
        PyObject *tmp_left_value_289;
        PyObject *tmp_right_value_289;
        tmp_left_value_289 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_289 == NULL)) {
            tmp_left_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_289 == NULL));
        tmp_right_value_289 = mod_consts[252];
        tmp_assign_source_625 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_289, tmp_right_value_289);
        assert(!(tmp_assign_source_625 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[775], tmp_assign_source_625);
    }
    {
        PyObject *tmp_assign_source_626;
        PyObject *tmp_left_value_290;
        PyObject *tmp_right_value_290;
        tmp_left_value_290 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_290 == NULL)) {
            tmp_left_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_290 == NULL));
        tmp_right_value_290 = mod_consts[12];
        tmp_assign_source_626 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_290, tmp_right_value_290);
        assert(!(tmp_assign_source_626 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[776], tmp_assign_source_626);
    }
    {
        PyObject *tmp_assign_source_627;
        PyObject *tmp_left_value_291;
        PyObject *tmp_right_value_291;
        tmp_left_value_291 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_291 == NULL)) {
            tmp_left_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_291 == NULL));
        tmp_right_value_291 = mod_consts[138];
        tmp_assign_source_627 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_291, tmp_right_value_291);
        assert(!(tmp_assign_source_627 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[777], tmp_assign_source_627);
    }
    {
        PyObject *tmp_assign_source_628;
        PyObject *tmp_left_value_292;
        PyObject *tmp_right_value_292;
        tmp_left_value_292 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_292 == NULL)) {
            tmp_left_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_292 == NULL));
        tmp_right_value_292 = mod_consts[120];
        tmp_assign_source_628 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_292, tmp_right_value_292);
        assert(!(tmp_assign_source_628 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[778], tmp_assign_source_628);
    }
    {
        PyObject *tmp_assign_source_629;
        PyObject *tmp_left_value_293;
        PyObject *tmp_right_value_293;
        tmp_left_value_293 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_293 == NULL)) {
            tmp_left_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_293 == NULL));
        tmp_right_value_293 = mod_consts[1];
        tmp_assign_source_629 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_293, tmp_right_value_293);
        assert(!(tmp_assign_source_629 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[779], tmp_assign_source_629);
    }
    {
        PyObject *tmp_assign_source_630;
        tmp_assign_source_630 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[776]);

        if (unlikely(tmp_assign_source_630 == NULL)) {
            tmp_assign_source_630 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[776]);
        }

        assert(!(tmp_assign_source_630 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[780], tmp_assign_source_630);
    }
    {
        PyObject *tmp_assign_source_631;
        tmp_assign_source_631 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[774]);

        if (unlikely(tmp_assign_source_631 == NULL)) {
            tmp_assign_source_631 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[774]);
        }

        assert(!(tmp_assign_source_631 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[781], tmp_assign_source_631);
    }
    {
        PyObject *tmp_assign_source_632;
        tmp_assign_source_632 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[778]);

        if (unlikely(tmp_assign_source_632 == NULL)) {
            tmp_assign_source_632 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[778]);
        }

        assert(!(tmp_assign_source_632 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[782], tmp_assign_source_632);
    }
    {
        PyObject *tmp_assign_source_633;
        PyObject *tmp_left_value_294;
        PyObject *tmp_right_value_294;
        tmp_left_value_294 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_294 == NULL)) {
            tmp_left_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_294 == NULL));
        tmp_right_value_294 = mod_consts[14];
        tmp_assign_source_633 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_294, tmp_right_value_294);
        assert(!(tmp_assign_source_633 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[783], tmp_assign_source_633);
    }
    {
        PyObject *tmp_assign_source_634;
        PyObject *tmp_left_value_295;
        PyObject *tmp_right_value_295;
        tmp_left_value_295 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_295 == NULL)) {
            tmp_left_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_295 == NULL));
        tmp_right_value_295 = mod_consts[125];
        tmp_assign_source_634 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_295, tmp_right_value_295);
        assert(!(tmp_assign_source_634 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[784], tmp_assign_source_634);
    }
    {
        PyObject *tmp_assign_source_635;
        PyObject *tmp_left_value_296;
        PyObject *tmp_right_value_296;
        tmp_left_value_296 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_296 == NULL)) {
            tmp_left_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_296 == NULL));
        tmp_right_value_296 = mod_consts[134];
        tmp_assign_source_635 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_296, tmp_right_value_296);
        assert(!(tmp_assign_source_635 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[785], tmp_assign_source_635);
    }
    {
        PyObject *tmp_assign_source_636;
        PyObject *tmp_left_value_297;
        PyObject *tmp_right_value_297;
        tmp_left_value_297 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_297 == NULL)) {
            tmp_left_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_297 == NULL));
        tmp_right_value_297 = mod_consts[0];
        tmp_assign_source_636 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_297, tmp_right_value_297);
        assert(!(tmp_assign_source_636 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[786], tmp_assign_source_636);
    }
    {
        PyObject *tmp_assign_source_637;
        PyObject *tmp_left_value_298;
        PyObject *tmp_right_value_298;
        tmp_left_value_298 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_298 == NULL)) {
            tmp_left_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_298 == NULL));
        tmp_right_value_298 = mod_consts[270];
        tmp_assign_source_637 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_298, tmp_right_value_298);
        assert(!(tmp_assign_source_637 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[787], tmp_assign_source_637);
    }
    {
        PyObject *tmp_assign_source_638;
        PyObject *tmp_left_value_299;
        PyObject *tmp_right_value_299;
        tmp_left_value_299 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_299 == NULL)) {
            tmp_left_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_299 == NULL));
        tmp_right_value_299 = mod_consts[247];
        tmp_assign_source_638 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_299, tmp_right_value_299);
        assert(!(tmp_assign_source_638 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[788], tmp_assign_source_638);
    }
    {
        PyObject *tmp_assign_source_639;
        PyObject *tmp_left_value_300;
        PyObject *tmp_right_value_300;
        tmp_left_value_300 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_300 == NULL)) {
            tmp_left_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_300 == NULL));
        tmp_right_value_300 = mod_consts[140];
        tmp_assign_source_639 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_300, tmp_right_value_300);
        assert(!(tmp_assign_source_639 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[789], tmp_assign_source_639);
    }
    {
        PyObject *tmp_assign_source_640;
        PyObject *tmp_left_value_301;
        PyObject *tmp_right_value_301;
        tmp_left_value_301 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_301 == NULL)) {
            tmp_left_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_301 == NULL));
        tmp_right_value_301 = mod_consts[142];
        tmp_assign_source_640 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_301, tmp_right_value_301);
        assert(!(tmp_assign_source_640 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[790], tmp_assign_source_640);
    }
    {
        PyObject *tmp_assign_source_641;
        PyObject *tmp_left_value_302;
        PyObject *tmp_right_value_302;
        tmp_left_value_302 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_302 == NULL)) {
            tmp_left_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_302 == NULL));
        tmp_right_value_302 = mod_consts[17];
        tmp_assign_source_641 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_302, tmp_right_value_302);
        assert(!(tmp_assign_source_641 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[791], tmp_assign_source_641);
    }
    {
        PyObject *tmp_assign_source_642;
        PyObject *tmp_left_value_303;
        PyObject *tmp_right_value_303;
        tmp_left_value_303 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_303 == NULL)) {
            tmp_left_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_303 == NULL));
        tmp_right_value_303 = mod_consts[145];
        tmp_assign_source_642 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_303, tmp_right_value_303);
        assert(!(tmp_assign_source_642 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[792], tmp_assign_source_642);
    }
    {
        PyObject *tmp_assign_source_643;
        PyObject *tmp_left_value_304;
        PyObject *tmp_right_value_304;
        tmp_left_value_304 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_304 == NULL)) {
            tmp_left_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_304 == NULL));
        tmp_right_value_304 = mod_consts[147];
        tmp_assign_source_643 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_304, tmp_right_value_304);
        assert(!(tmp_assign_source_643 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[793], tmp_assign_source_643);
    }
    {
        PyObject *tmp_assign_source_644;
        PyObject *tmp_left_value_305;
        PyObject *tmp_right_value_305;
        tmp_left_value_305 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_305 == NULL)) {
            tmp_left_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_305 == NULL));
        tmp_right_value_305 = mod_consts[276];
        tmp_assign_source_644 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_305, tmp_right_value_305);
        assert(!(tmp_assign_source_644 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[794], tmp_assign_source_644);
    }
    {
        PyObject *tmp_assign_source_645;
        PyObject *tmp_left_value_306;
        PyObject *tmp_right_value_306;
        tmp_left_value_306 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_306 == NULL)) {
            tmp_left_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_306 == NULL));
        tmp_right_value_306 = mod_consts[281];
        tmp_assign_source_645 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_306, tmp_right_value_306);
        assert(!(tmp_assign_source_645 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[795], tmp_assign_source_645);
    }
    {
        PyObject *tmp_assign_source_646;
        tmp_assign_source_646 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[791]);

        if (unlikely(tmp_assign_source_646 == NULL)) {
            tmp_assign_source_646 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[791]);
        }

        assert(!(tmp_assign_source_646 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[796], tmp_assign_source_646);
    }
    {
        PyObject *tmp_assign_source_647;
        tmp_assign_source_647 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[793]);

        if (unlikely(tmp_assign_source_647 == NULL)) {
            tmp_assign_source_647 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[793]);
        }

        assert(!(tmp_assign_source_647 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[797], tmp_assign_source_647);
    }
    {
        PyObject *tmp_assign_source_648;
        tmp_assign_source_648 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_648 == NULL)) {
            tmp_assign_source_648 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assign_source_648 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[798], tmp_assign_source_648);
    }
    {
        PyObject *tmp_assign_source_649;
        tmp_assign_source_649 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_649 == NULL)) {
            tmp_assign_source_649 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_assign_source_649 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[799], tmp_assign_source_649);
    }
    {
        PyObject *tmp_assign_source_650;
        tmp_assign_source_650 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[800], tmp_assign_source_650);
    }
    {
        PyObject *tmp_assign_source_651;
        tmp_assign_source_651 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[801], tmp_assign_source_651);
    }
    {
        PyObject *tmp_assign_source_652;
        tmp_assign_source_652 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[802], tmp_assign_source_652);
    }
    {
        PyObject *tmp_assign_source_653;
        tmp_assign_source_653 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[803], tmp_assign_source_653);
    }
    {
        PyObject *tmp_assign_source_654;
        tmp_assign_source_654 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[804], tmp_assign_source_654);
    }
    {
        PyObject *tmp_assign_source_655;
        tmp_assign_source_655 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[805], tmp_assign_source_655);
    }
    {
        PyObject *tmp_assign_source_656;
        tmp_assign_source_656 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assign_source_656 == NULL)) {
            tmp_assign_source_656 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        assert(!(tmp_assign_source_656 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[806], tmp_assign_source_656);
    }
    {
        PyObject *tmp_assign_source_657;
        PyObject *tmp_left_value_307;
        PyObject *tmp_right_value_307;
        tmp_left_value_307 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_left_value_307 == NULL)) {
            tmp_left_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        assert(!(tmp_left_value_307 == NULL));
        tmp_right_value_307 = mod_consts[44];
        tmp_assign_source_657 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_307, tmp_right_value_307);
        assert(!(tmp_assign_source_657 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[807], tmp_assign_source_657);
    }
    {
        PyObject *tmp_assign_source_658;
        tmp_assign_source_658 = mod_consts[808];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[809], tmp_assign_source_658);
    }
    {
        PyObject *tmp_assign_source_659;
        tmp_assign_source_659 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[809]);

        if (unlikely(tmp_assign_source_659 == NULL)) {
            tmp_assign_source_659 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[809]);
        }

        assert(!(tmp_assign_source_659 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[810], tmp_assign_source_659);
    }
    {
        PyObject *tmp_assign_source_660;
        tmp_assign_source_660 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[811], tmp_assign_source_660);
    }
    {
        PyObject *tmp_assign_source_661;
        tmp_assign_source_661 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[812], tmp_assign_source_661);
    }
    {
        PyObject *tmp_assign_source_662;
        tmp_assign_source_662 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[813], tmp_assign_source_662);
    }
    {
        PyObject *tmp_assign_source_663;
        tmp_assign_source_663 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[814], tmp_assign_source_663);
    }
    {
        PyObject *tmp_assign_source_664;
        tmp_assign_source_664 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[815], tmp_assign_source_664);
    }
    {
        PyObject *tmp_assign_source_665;
        tmp_assign_source_665 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[816], tmp_assign_source_665);
    }
    {
        PyObject *tmp_assign_source_666;
        tmp_assign_source_666 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[817], tmp_assign_source_666);
    }
    {
        PyObject *tmp_assign_source_667;
        tmp_assign_source_667 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[818], tmp_assign_source_667);
    }
    {
        PyObject *tmp_assign_source_668;
        tmp_assign_source_668 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[819], tmp_assign_source_668);
    }
    {
        PyObject *tmp_assign_source_669;
        tmp_assign_source_669 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[820], tmp_assign_source_669);
    }
    {
        PyObject *tmp_assign_source_670;
        tmp_assign_source_670 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[821], tmp_assign_source_670);
    }
    {
        PyObject *tmp_assign_source_671;
        tmp_assign_source_671 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[822], tmp_assign_source_671);
    }
    {
        PyObject *tmp_assign_source_672;
        tmp_assign_source_672 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[823], tmp_assign_source_672);
    }
    {
        PyObject *tmp_assign_source_673;
        tmp_assign_source_673 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assign_source_673 == NULL)) {
            tmp_assign_source_673 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_assign_source_673 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[824], tmp_assign_source_673);
    }
    {
        PyObject *tmp_assign_source_674;
        PyObject *tmp_left_value_308;
        PyObject *tmp_right_value_308;
        tmp_left_value_308 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_308 == NULL)) {
            tmp_left_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_308 == NULL));
        tmp_right_value_308 = mod_consts[10];
        tmp_assign_source_674 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_308, tmp_right_value_308);
        assert(!(tmp_assign_source_674 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[825], tmp_assign_source_674);
    }
    {
        PyObject *tmp_assign_source_675;
        PyObject *tmp_left_value_309;
        PyObject *tmp_right_value_309;
        tmp_left_value_309 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_309 == NULL)) {
            tmp_left_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_309 == NULL));
        tmp_right_value_309 = mod_consts[12];
        tmp_assign_source_675 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_309, tmp_right_value_309);
        assert(!(tmp_assign_source_675 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[826], tmp_assign_source_675);
    }
    {
        PyObject *tmp_assign_source_676;
        PyObject *tmp_left_value_310;
        PyObject *tmp_right_value_310;
        tmp_left_value_310 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_310 == NULL)) {
            tmp_left_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_310 == NULL));
        tmp_right_value_310 = mod_consts[120];
        tmp_assign_source_676 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_310, tmp_right_value_310);
        assert(!(tmp_assign_source_676 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[827], tmp_assign_source_676);
    }
    {
        PyObject *tmp_assign_source_677;
        PyObject *tmp_left_value_311;
        PyObject *tmp_right_value_311;
        tmp_left_value_311 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_311 == NULL)) {
            tmp_left_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_311 == NULL));
        tmp_right_value_311 = mod_consts[14];
        tmp_assign_source_677 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_311, tmp_right_value_311);
        assert(!(tmp_assign_source_677 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[828], tmp_assign_source_677);
    }
    {
        PyObject *tmp_assign_source_678;
        PyObject *tmp_left_value_312;
        PyObject *tmp_right_value_312;
        tmp_left_value_312 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_312 == NULL)) {
            tmp_left_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_312 == NULL));
        tmp_right_value_312 = mod_consts[123];
        tmp_assign_source_678 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_312, tmp_right_value_312);
        assert(!(tmp_assign_source_678 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[829], tmp_assign_source_678);
    }
    {
        PyObject *tmp_assign_source_679;
        PyObject *tmp_left_value_313;
        PyObject *tmp_right_value_313;
        tmp_left_value_313 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_313 == NULL)) {
            tmp_left_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_313 == NULL));
        tmp_right_value_313 = mod_consts[125];
        tmp_assign_source_679 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_313, tmp_right_value_313);
        assert(!(tmp_assign_source_679 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[830], tmp_assign_source_679);
    }
    {
        PyObject *tmp_assign_source_680;
        PyObject *tmp_left_value_314;
        PyObject *tmp_right_value_314;
        tmp_left_value_314 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_314 == NULL)) {
            tmp_left_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_314 == NULL));
        tmp_right_value_314 = mod_consts[134];
        tmp_assign_source_680 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_314, tmp_right_value_314);
        assert(!(tmp_assign_source_680 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[831], tmp_assign_source_680);
    }
    {
        PyObject *tmp_assign_source_681;
        PyObject *tmp_left_value_315;
        PyObject *tmp_right_value_315;
        tmp_left_value_315 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_315 == NULL)) {
            tmp_left_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_315 == NULL));
        tmp_right_value_315 = mod_consts[0];
        tmp_assign_source_681 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_315, tmp_right_value_315);
        assert(!(tmp_assign_source_681 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[832], tmp_assign_source_681);
    }
    {
        PyObject *tmp_assign_source_682;
        PyObject *tmp_left_value_316;
        PyObject *tmp_right_value_316;
        tmp_left_value_316 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_316 == NULL)) {
            tmp_left_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_316 == NULL));
        tmp_right_value_316 = mod_consts[270];
        tmp_assign_source_682 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_316, tmp_right_value_316);
        assert(!(tmp_assign_source_682 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[833], tmp_assign_source_682);
    }
    {
        PyObject *tmp_assign_source_683;
        PyObject *tmp_left_value_317;
        PyObject *tmp_right_value_317;
        tmp_left_value_317 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_317 == NULL)) {
            tmp_left_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_317 == NULL));
        tmp_right_value_317 = mod_consts[247];
        tmp_assign_source_683 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_317, tmp_right_value_317);
        assert(!(tmp_assign_source_683 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[834], tmp_assign_source_683);
    }
    {
        PyObject *tmp_assign_source_684;
        PyObject *tmp_left_value_318;
        PyObject *tmp_right_value_318;
        tmp_left_value_318 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_318 == NULL)) {
            tmp_left_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_318 == NULL));
        tmp_right_value_318 = mod_consts[252];
        tmp_assign_source_684 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_318, tmp_right_value_318);
        assert(!(tmp_assign_source_684 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[835], tmp_assign_source_684);
    }
    {
        PyObject *tmp_assign_source_685;
        PyObject *tmp_left_value_319;
        PyObject *tmp_right_value_319;
        tmp_left_value_319 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_319 == NULL)) {
            tmp_left_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_319 == NULL));
        tmp_right_value_319 = mod_consts[1];
        tmp_assign_source_685 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_319, tmp_right_value_319);
        assert(!(tmp_assign_source_685 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[836], tmp_assign_source_685);
    }
    {
        PyObject *tmp_assign_source_686;
        PyObject *tmp_left_value_320;
        PyObject *tmp_right_value_320;
        tmp_left_value_320 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_320 == NULL)) {
            tmp_left_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_320 == NULL));
        tmp_right_value_320 = mod_consts[140];
        tmp_assign_source_686 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_320, tmp_right_value_320);
        assert(!(tmp_assign_source_686 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[837], tmp_assign_source_686);
    }
    {
        PyObject *tmp_assign_source_687;
        PyObject *tmp_left_value_321;
        PyObject *tmp_right_value_321;
        tmp_left_value_321 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_321 == NULL)) {
            tmp_left_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_321 == NULL));
        tmp_right_value_321 = mod_consts[142];
        tmp_assign_source_687 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_321, tmp_right_value_321);
        assert(!(tmp_assign_source_687 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[838], tmp_assign_source_687);
    }
    {
        PyObject *tmp_assign_source_688;
        PyObject *tmp_left_value_322;
        PyObject *tmp_right_value_322;
        tmp_left_value_322 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_322 == NULL)) {
            tmp_left_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_322 == NULL));
        tmp_right_value_322 = mod_consts[17];
        tmp_assign_source_688 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_322, tmp_right_value_322);
        assert(!(tmp_assign_source_688 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[839], tmp_assign_source_688);
    }
    {
        PyObject *tmp_assign_source_689;
        PyObject *tmp_left_value_323;
        PyObject *tmp_right_value_323;
        tmp_left_value_323 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_323 == NULL)) {
            tmp_left_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_323 == NULL));
        tmp_right_value_323 = mod_consts[145];
        tmp_assign_source_689 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_323, tmp_right_value_323);
        assert(!(tmp_assign_source_689 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[840], tmp_assign_source_689);
    }
    {
        PyObject *tmp_assign_source_690;
        PyObject *tmp_left_value_324;
        PyObject *tmp_right_value_324;
        tmp_left_value_324 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_324 == NULL)) {
            tmp_left_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_324 == NULL));
        tmp_right_value_324 = mod_consts[147];
        tmp_assign_source_690 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_324, tmp_right_value_324);
        assert(!(tmp_assign_source_690 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[841], tmp_assign_source_690);
    }
    {
        PyObject *tmp_assign_source_691;
        PyObject *tmp_left_value_325;
        PyObject *tmp_right_value_325;
        tmp_left_value_325 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_325 == NULL)) {
            tmp_left_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_325 == NULL));
        tmp_right_value_325 = mod_consts[276];
        tmp_assign_source_691 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_325, tmp_right_value_325);
        assert(!(tmp_assign_source_691 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[842], tmp_assign_source_691);
    }
    {
        PyObject *tmp_assign_source_692;
        PyObject *tmp_left_value_326;
        PyObject *tmp_right_value_326;
        tmp_left_value_326 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_326 == NULL)) {
            tmp_left_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_326 == NULL));
        tmp_right_value_326 = mod_consts[281];
        tmp_assign_source_692 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_326, tmp_right_value_326);
        assert(!(tmp_assign_source_692 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[843], tmp_assign_source_692);
    }
    {
        PyObject *tmp_assign_source_693;
        PyObject *tmp_left_value_327;
        PyObject *tmp_right_value_327;
        tmp_left_value_327 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_327 == NULL)) {
            tmp_left_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_327 == NULL));
        tmp_right_value_327 = mod_consts[284];
        tmp_assign_source_693 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_327, tmp_right_value_327);
        assert(!(tmp_assign_source_693 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[844], tmp_assign_source_693);
    }
    {
        PyObject *tmp_assign_source_694;
        PyObject *tmp_left_value_328;
        PyObject *tmp_right_value_328;
        tmp_left_value_328 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_328 == NULL)) {
            tmp_left_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_328 == NULL));
        tmp_right_value_328 = mod_consts[287];
        tmp_assign_source_694 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_328, tmp_right_value_328);
        assert(!(tmp_assign_source_694 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[845], tmp_assign_source_694);
    }
    {
        PyObject *tmp_assign_source_695;
        PyObject *tmp_left_value_329;
        PyObject *tmp_right_value_329;
        tmp_left_value_329 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_329 == NULL)) {
            tmp_left_value_329 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_329 == NULL));
        tmp_right_value_329 = mod_consts[290];
        tmp_assign_source_695 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_329, tmp_right_value_329);
        assert(!(tmp_assign_source_695 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[846], tmp_assign_source_695);
    }
    {
        PyObject *tmp_assign_source_696;
        PyObject *tmp_left_value_330;
        PyObject *tmp_right_value_330;
        tmp_left_value_330 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_330 == NULL)) {
            tmp_left_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_330 == NULL));
        tmp_right_value_330 = mod_consts[196];
        tmp_assign_source_696 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_330, tmp_right_value_330);
        assert(!(tmp_assign_source_696 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[847], tmp_assign_source_696);
    }
    {
        PyObject *tmp_assign_source_697;
        PyObject *tmp_left_value_331;
        PyObject *tmp_right_value_331;
        tmp_left_value_331 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_331 == NULL)) {
            tmp_left_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_331 == NULL));
        tmp_right_value_331 = mod_consts[293];
        tmp_assign_source_697 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_331, tmp_right_value_331);
        assert(!(tmp_assign_source_697 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[848], tmp_assign_source_697);
    }
    {
        PyObject *tmp_assign_source_698;
        PyObject *tmp_left_value_332;
        PyObject *tmp_right_value_332;
        tmp_left_value_332 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_332 == NULL)) {
            tmp_left_value_332 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_332 == NULL));
        tmp_right_value_332 = mod_consts[296];
        tmp_assign_source_698 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_332, tmp_right_value_332);
        assert(!(tmp_assign_source_698 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[849], tmp_assign_source_698);
    }
    {
        PyObject *tmp_assign_source_699;
        PyObject *tmp_left_value_333;
        PyObject *tmp_right_value_333;
        tmp_left_value_333 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_333 == NULL)) {
            tmp_left_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_333 == NULL));
        tmp_right_value_333 = mod_consts[299];
        tmp_assign_source_699 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_333, tmp_right_value_333);
        assert(!(tmp_assign_source_699 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[850], tmp_assign_source_699);
    }
    {
        PyObject *tmp_assign_source_700;
        PyObject *tmp_left_value_334;
        PyObject *tmp_right_value_334;
        tmp_left_value_334 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_334 == NULL)) {
            tmp_left_value_334 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_334 == NULL));
        tmp_right_value_334 = mod_consts[302];
        tmp_assign_source_700 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_334, tmp_right_value_334);
        assert(!(tmp_assign_source_700 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[851], tmp_assign_source_700);
    }
    {
        PyObject *tmp_assign_source_701;
        PyObject *tmp_left_value_335;
        PyObject *tmp_right_value_335;
        tmp_left_value_335 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_335 == NULL)) {
            tmp_left_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_335 == NULL));
        tmp_right_value_335 = mod_consts[305];
        tmp_assign_source_701 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_335, tmp_right_value_335);
        assert(!(tmp_assign_source_701 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[852], tmp_assign_source_701);
    }
    {
        PyObject *tmp_assign_source_702;
        PyObject *tmp_left_value_336;
        PyObject *tmp_right_value_336;
        tmp_left_value_336 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_336 == NULL)) {
            tmp_left_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_336 == NULL));
        tmp_right_value_336 = mod_consts[436];
        tmp_assign_source_702 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_336, tmp_right_value_336);
        assert(!(tmp_assign_source_702 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[853], tmp_assign_source_702);
    }
    {
        PyObject *tmp_assign_source_703;
        PyObject *tmp_left_value_337;
        PyObject *tmp_right_value_337;
        tmp_left_value_337 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_337 == NULL)) {
            tmp_left_value_337 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_337 == NULL));
        tmp_right_value_337 = mod_consts[438];
        tmp_assign_source_703 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_337, tmp_right_value_337);
        assert(!(tmp_assign_source_703 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[854], tmp_assign_source_703);
    }
    {
        PyObject *tmp_assign_source_704;
        tmp_assign_source_704 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[855], tmp_assign_source_704);
    }
    {
        PyObject *tmp_assign_source_705;
        tmp_assign_source_705 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[856], tmp_assign_source_705);
    }
    {
        PyObject *tmp_assign_source_706;
        tmp_assign_source_706 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[857], tmp_assign_source_706);
    }
    {
        PyObject *tmp_assign_source_707;
        tmp_assign_source_707 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[858], tmp_assign_source_707);
    }
    {
        PyObject *tmp_assign_source_708;
        PyObject *tmp_left_value_338;
        PyObject *tmp_right_value_338;
        tmp_left_value_338 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_338 == NULL)) {
            tmp_left_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_338 == NULL));
        tmp_right_value_338 = mod_consts[19];
        tmp_assign_source_708 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_338, tmp_right_value_338);
        assert(!(tmp_assign_source_708 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[859], tmp_assign_source_708);
    }
    {
        PyObject *tmp_assign_source_709;
        PyObject *tmp_left_value_339;
        PyObject *tmp_right_value_339;
        tmp_left_value_339 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_339 == NULL)) {
            tmp_left_value_339 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_339 == NULL));
        tmp_right_value_339 = mod_consts[441];
        tmp_assign_source_709 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_339, tmp_right_value_339);
        assert(!(tmp_assign_source_709 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[860], tmp_assign_source_709);
    }
    {
        PyObject *tmp_assign_source_710;
        tmp_assign_source_710 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_710 == NULL)) {
            tmp_assign_source_710 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assign_source_710 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[861], tmp_assign_source_710);
    }
    {
        PyObject *tmp_assign_source_711;
        tmp_assign_source_711 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_711 == NULL)) {
            tmp_assign_source_711 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_assign_source_711 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[862], tmp_assign_source_711);
    }
    {
        PyObject *tmp_assign_source_712;
        tmp_assign_source_712 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[863], tmp_assign_source_712);
    }
    {
        PyObject *tmp_assign_source_713;
        tmp_assign_source_713 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[864], tmp_assign_source_713);
    }
    {
        PyObject *tmp_assign_source_714;
        tmp_assign_source_714 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[865], tmp_assign_source_714);
    }
    {
        PyObject *tmp_assign_source_715;
        tmp_assign_source_715 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[866], tmp_assign_source_715);
    }
    {
        PyObject *tmp_assign_source_716;
        tmp_assign_source_716 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[867], tmp_assign_source_716);
    }
    {
        PyObject *tmp_assign_source_717;
        tmp_assign_source_717 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[868], tmp_assign_source_717);
    }
    {
        PyObject *tmp_assign_source_718;
        tmp_assign_source_718 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[869], tmp_assign_source_718);
    }
    {
        PyObject *tmp_assign_source_719;
        tmp_assign_source_719 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[870], tmp_assign_source_719);
    }
    {
        PyObject *tmp_assign_source_720;
        tmp_assign_source_720 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[871], tmp_assign_source_720);
    }
    {
        PyObject *tmp_assign_source_721;
        tmp_assign_source_721 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[872], tmp_assign_source_721);
    }
    {
        PyObject *tmp_assign_source_722;
        tmp_assign_source_722 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[873], tmp_assign_source_722);
    }
    {
        PyObject *tmp_assign_source_723;
        tmp_assign_source_723 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[874], tmp_assign_source_723);
    }
    {
        PyObject *tmp_assign_source_724;
        PyObject *tmp_left_value_340;
        PyObject *tmp_right_value_340;
        tmp_left_value_340 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_340 == NULL)) {
            tmp_left_value_340 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_340 == NULL));
        tmp_right_value_340 = mod_consts[875];
        tmp_assign_source_724 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_340, tmp_right_value_340);
        assert(!(tmp_assign_source_724 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[876], tmp_assign_source_724);
    }
    {
        PyObject *tmp_assign_source_725;
        PyObject *tmp_left_value_341;
        PyObject *tmp_right_value_341;
        tmp_left_value_341 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_341 == NULL)) {
            tmp_left_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_341 == NULL));
        tmp_right_value_341 = mod_consts[877];
        tmp_assign_source_725 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_341, tmp_right_value_341);
        assert(!(tmp_assign_source_725 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[878], tmp_assign_source_725);
    }
    {
        PyObject *tmp_assign_source_726;
        PyObject *tmp_left_value_342;
        PyObject *tmp_right_value_342;
        tmp_left_value_342 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_342 == NULL)) {
            tmp_left_value_342 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_342 == NULL));
        tmp_right_value_342 = mod_consts[879];
        tmp_assign_source_726 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_342, tmp_right_value_342);
        assert(!(tmp_assign_source_726 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[880], tmp_assign_source_726);
    }
    {
        PyObject *tmp_assign_source_727;
        PyObject *tmp_left_value_343;
        PyObject *tmp_right_value_343;
        tmp_left_value_343 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_343 == NULL)) {
            tmp_left_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_left_value_343 == NULL));
        tmp_right_value_343 = mod_consts[881];
        tmp_assign_source_727 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_343, tmp_right_value_343);
        assert(!(tmp_assign_source_727 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[882], tmp_assign_source_727);
    }
    {
        PyObject *tmp_assign_source_728;
        tmp_assign_source_728 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[883], tmp_assign_source_728);
    }
    {
        PyObject *tmp_assign_source_729;
        tmp_assign_source_729 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[884], tmp_assign_source_729);
    }
    {
        PyObject *tmp_assign_source_730;
        tmp_assign_source_730 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[885], tmp_assign_source_730);
    }
    {
        PyObject *tmp_assign_source_731;
        tmp_assign_source_731 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[886], tmp_assign_source_731);
    }
    {
        PyObject *tmp_assign_source_732;
        tmp_assign_source_732 = mod_consts[887];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[888], tmp_assign_source_732);
    }
    {
        PyObject *tmp_assign_source_733;
        tmp_assign_source_733 = mod_consts[889];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[890], tmp_assign_source_733);
    }
    {
        PyObject *tmp_assign_source_734;
        tmp_assign_source_734 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[890]);

        if (unlikely(tmp_assign_source_734 == NULL)) {
            tmp_assign_source_734 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[890]);
        }

        assert(!(tmp_assign_source_734 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[891], tmp_assign_source_734);
    }
    {
        PyObject *tmp_assign_source_735;
        tmp_assign_source_735 = mod_consts[892];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[893], tmp_assign_source_735);
    }
    {
        PyObject *tmp_assign_source_736;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[893]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[893]);
        }

        assert(!(tmp_operand_value_1 == NULL));
        tmp_assign_source_736 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_assign_source_736 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 750;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[894], tmp_assign_source_736);
    }
    {
        PyObject *tmp_assign_source_737;
        tmp_assign_source_737 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[895], tmp_assign_source_737);
    }
    {
        PyObject *tmp_assign_source_738;
        tmp_assign_source_738 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[896], tmp_assign_source_738);
    }
    {
        PyObject *tmp_assign_source_739;
        tmp_assign_source_739 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[897], tmp_assign_source_739);
    }
    {
        PyObject *tmp_assign_source_740;
        tmp_assign_source_740 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[898], tmp_assign_source_740);
    }
    {
        PyObject *tmp_assign_source_741;
        tmp_assign_source_741 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[899], tmp_assign_source_741);
    }
    {
        PyObject *tmp_assign_source_742;
        tmp_assign_source_742 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[900], tmp_assign_source_742);
    }
    {
        PyObject *tmp_assign_source_743;
        tmp_assign_source_743 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[901], tmp_assign_source_743);
    }
    {
        PyObject *tmp_assign_source_744;
        tmp_assign_source_744 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[902], tmp_assign_source_744);
    }
    {
        PyObject *tmp_assign_source_745;
        tmp_assign_source_745 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[903], tmp_assign_source_745);
    }
    {
        PyObject *tmp_assign_source_746;
        PyObject *tmp_left_value_344;
        PyObject *tmp_right_value_344;
        tmp_left_value_344 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_344 == NULL)) {
            tmp_left_value_344 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;

            goto frame_exception_exit_1;
        }
        tmp_right_value_344 = mod_consts[40];
        tmp_assign_source_746 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_344, tmp_right_value_344);
        if (tmp_assign_source_746 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[904], tmp_assign_source_746);
    }
    {
        PyObject *tmp_assign_source_747;
        PyObject *tmp_left_value_345;
        PyObject *tmp_right_value_345;
        tmp_left_value_345 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_345 == NULL)) {
            tmp_left_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;

            goto frame_exception_exit_1;
        }
        tmp_right_value_345 = mod_consts[42];
        tmp_assign_source_747 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_345, tmp_right_value_345);
        if (tmp_assign_source_747 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 761;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[905], tmp_assign_source_747);
    }
    {
        PyObject *tmp_assign_source_748;
        PyObject *tmp_left_value_346;
        PyObject *tmp_right_value_346;
        tmp_left_value_346 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_346 == NULL)) {
            tmp_left_value_346 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;

            goto frame_exception_exit_1;
        }
        tmp_right_value_346 = mod_consts[906];
        tmp_assign_source_748 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_346, tmp_right_value_346);
        if (tmp_assign_source_748 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[907], tmp_assign_source_748);
    }
    {
        PyObject *tmp_assign_source_749;
        PyObject *tmp_left_value_347;
        PyObject *tmp_right_value_347;
        tmp_left_value_347 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_347 == NULL)) {
            tmp_left_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;

            goto frame_exception_exit_1;
        }
        tmp_right_value_347 = mod_consts[908];
        tmp_assign_source_749 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_347, tmp_right_value_347);
        if (tmp_assign_source_749 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 763;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[909], tmp_assign_source_749);
    }
    {
        PyObject *tmp_assign_source_750;
        PyObject *tmp_left_value_348;
        PyObject *tmp_right_value_348;
        tmp_left_value_348 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_348 == NULL)) {
            tmp_left_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;

            goto frame_exception_exit_1;
        }
        tmp_right_value_348 = mod_consts[910];
        tmp_assign_source_750 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_348, tmp_right_value_348);
        if (tmp_assign_source_750 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 764;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[911], tmp_assign_source_750);
    }
    {
        PyObject *tmp_assign_source_751;
        PyObject *tmp_left_value_349;
        PyObject *tmp_right_value_349;
        tmp_left_value_349 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_349 == NULL)) {
            tmp_left_value_349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        tmp_right_value_349 = mod_consts[912];
        tmp_assign_source_751 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_349, tmp_right_value_349);
        if (tmp_assign_source_751 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[913], tmp_assign_source_751);
    }
    {
        PyObject *tmp_assign_source_752;
        PyObject *tmp_left_value_350;
        PyObject *tmp_right_value_350;
        tmp_left_value_350 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_350 == NULL)) {
            tmp_left_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;

            goto frame_exception_exit_1;
        }
        tmp_right_value_350 = mod_consts[914];
        tmp_assign_source_752 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_350, tmp_right_value_350);
        if (tmp_assign_source_752 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 766;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[915], tmp_assign_source_752);
    }
    {
        PyObject *tmp_assign_source_753;
        PyObject *tmp_left_value_351;
        PyObject *tmp_right_value_351;
        tmp_left_value_351 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_351 == NULL)) {
            tmp_left_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        tmp_right_value_351 = mod_consts[916];
        tmp_assign_source_753 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_351, tmp_right_value_351);
        if (tmp_assign_source_753 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[917], tmp_assign_source_753);
    }
    {
        PyObject *tmp_assign_source_754;
        PyObject *tmp_left_value_352;
        PyObject *tmp_right_value_352;
        tmp_left_value_352 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_352 == NULL)) {
            tmp_left_value_352 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 768;

            goto frame_exception_exit_1;
        }
        tmp_right_value_352 = mod_consts[918];
        tmp_assign_source_754 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_352, tmp_right_value_352);
        if (tmp_assign_source_754 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 768;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[919], tmp_assign_source_754);
    }
    {
        PyObject *tmp_assign_source_755;
        PyObject *tmp_left_value_353;
        PyObject *tmp_right_value_353;
        tmp_left_value_353 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_353 == NULL)) {
            tmp_left_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;

            goto frame_exception_exit_1;
        }
        tmp_right_value_353 = mod_consts[920];
        tmp_assign_source_755 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_353, tmp_right_value_353);
        if (tmp_assign_source_755 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[921], tmp_assign_source_755);
    }
    {
        PyObject *tmp_assign_source_756;
        PyObject *tmp_left_value_354;
        PyObject *tmp_right_value_354;
        tmp_left_value_354 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_354 == NULL)) {
            tmp_left_value_354 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;

            goto frame_exception_exit_1;
        }
        tmp_right_value_354 = mod_consts[922];
        tmp_assign_source_756 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_354, tmp_right_value_354);
        if (tmp_assign_source_756 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[923], tmp_assign_source_756);
    }
    {
        PyObject *tmp_assign_source_757;
        PyObject *tmp_left_value_355;
        PyObject *tmp_right_value_355;
        tmp_left_value_355 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_355 == NULL)) {
            tmp_left_value_355 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;

            goto frame_exception_exit_1;
        }
        tmp_right_value_355 = mod_consts[924];
        tmp_assign_source_757 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_355, tmp_right_value_355);
        if (tmp_assign_source_757 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 771;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[925], tmp_assign_source_757);
    }
    {
        PyObject *tmp_assign_source_758;
        tmp_assign_source_758 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_758 == NULL)) {
            tmp_assign_source_758 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_assign_source_758 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[926], tmp_assign_source_758);
    }
    {
        PyObject *tmp_assign_source_759;
        tmp_assign_source_759 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_759 == NULL)) {
            tmp_assign_source_759 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_assign_source_759 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[927], tmp_assign_source_759);
    }
    {
        PyObject *tmp_assign_source_760;
        PyObject *tmp_left_value_356;
        PyObject *tmp_right_value_356;
        tmp_left_value_356 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_left_value_356 == NULL)) {
            tmp_left_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_left_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;

            goto frame_exception_exit_1;
        }
        tmp_right_value_356 = mod_consts[10];
        tmp_assign_source_760 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_356, tmp_right_value_356);
        if (tmp_assign_source_760 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[928], tmp_assign_source_760);
    }
    {
        PyObject *tmp_assign_source_761;
        tmp_assign_source_761 = mod_consts[929];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[930], tmp_assign_source_761);
    }
    {
        PyObject *tmp_assign_source_762;
        tmp_assign_source_762 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[930]);

        if (unlikely(tmp_assign_source_762 == NULL)) {
            tmp_assign_source_762 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[930]);
        }

        assert(!(tmp_assign_source_762 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[931], tmp_assign_source_762);
    }
    {
        PyObject *tmp_assign_source_763;
        tmp_assign_source_763 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[932], tmp_assign_source_763);
    }
    {
        PyObject *tmp_assign_source_764;
        tmp_assign_source_764 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[933], tmp_assign_source_764);
    }
    {
        PyObject *tmp_assign_source_765;
        PyObject *tmp_left_value_357;
        PyObject *tmp_right_value_357;
        tmp_left_value_357 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_357 == NULL)) {
            tmp_left_value_357 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 779;

            goto frame_exception_exit_1;
        }
        tmp_right_value_357 = mod_consts[10];
        tmp_assign_source_765 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_357, tmp_right_value_357);
        if (tmp_assign_source_765 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 779;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[934], tmp_assign_source_765);
    }
    {
        PyObject *tmp_assign_source_766;
        PyObject *tmp_left_value_358;
        PyObject *tmp_right_value_358;
        tmp_left_value_358 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_358 == NULL)) {
            tmp_left_value_358 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;

            goto frame_exception_exit_1;
        }
        tmp_right_value_358 = mod_consts[12];
        tmp_assign_source_766 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_358, tmp_right_value_358);
        if (tmp_assign_source_766 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[935], tmp_assign_source_766);
    }
    {
        PyObject *tmp_assign_source_767;
        PyObject *tmp_left_value_359;
        PyObject *tmp_right_value_359;
        tmp_left_value_359 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_359 == NULL)) {
            tmp_left_value_359 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        tmp_right_value_359 = mod_consts[120];
        tmp_assign_source_767 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_359, tmp_right_value_359);
        if (tmp_assign_source_767 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[936], tmp_assign_source_767);
    }
    {
        PyObject *tmp_assign_source_768;
        PyObject *tmp_left_value_360;
        PyObject *tmp_right_value_360;
        tmp_left_value_360 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_360 == NULL)) {
            tmp_left_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        tmp_right_value_360 = mod_consts[14];
        tmp_assign_source_768 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_360, tmp_right_value_360);
        if (tmp_assign_source_768 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[937], tmp_assign_source_768);
    }
    {
        PyObject *tmp_assign_source_769;
        PyObject *tmp_left_value_361;
        PyObject *tmp_right_value_361;
        tmp_left_value_361 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_361 == NULL)) {
            tmp_left_value_361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto frame_exception_exit_1;
        }
        tmp_right_value_361 = mod_consts[123];
        tmp_assign_source_769 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_361, tmp_right_value_361);
        if (tmp_assign_source_769 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[938], tmp_assign_source_769);
    }
    {
        PyObject *tmp_assign_source_770;
        PyObject *tmp_left_value_362;
        PyObject *tmp_right_value_362;
        tmp_left_value_362 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_362 == NULL)) {
            tmp_left_value_362 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        tmp_right_value_362 = mod_consts[125];
        tmp_assign_source_770 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_362, tmp_right_value_362);
        if (tmp_assign_source_770 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[939], tmp_assign_source_770);
    }
    {
        PyObject *tmp_assign_source_771;
        PyObject *tmp_left_value_363;
        PyObject *tmp_right_value_363;
        tmp_left_value_363 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_363 == NULL)) {
            tmp_left_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        tmp_right_value_363 = mod_consts[134];
        tmp_assign_source_771 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_363, tmp_right_value_363);
        if (tmp_assign_source_771 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[940], tmp_assign_source_771);
    }
    {
        PyObject *tmp_assign_source_772;
        PyObject *tmp_left_value_364;
        PyObject *tmp_right_value_364;
        tmp_left_value_364 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_364 == NULL)) {
            tmp_left_value_364 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_364 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        tmp_right_value_364 = mod_consts[0];
        tmp_assign_source_772 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_364, tmp_right_value_364);
        if (tmp_assign_source_772 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[941], tmp_assign_source_772);
    }
    {
        PyObject *tmp_assign_source_773;
        PyObject *tmp_left_value_365;
        PyObject *tmp_right_value_365;
        tmp_left_value_365 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_365 == NULL)) {
            tmp_left_value_365 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;

            goto frame_exception_exit_1;
        }
        tmp_right_value_365 = mod_consts[270];
        tmp_assign_source_773 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_365, tmp_right_value_365);
        if (tmp_assign_source_773 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[942], tmp_assign_source_773);
    }
    {
        PyObject *tmp_assign_source_774;
        tmp_assign_source_774 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assign_source_774 == NULL)) {
            tmp_assign_source_774 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_assign_source_774 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 790;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[943], tmp_assign_source_774);
    }
    {
        PyObject *tmp_assign_source_775;
        tmp_assign_source_775 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[944], tmp_assign_source_775);
    }
    {
        PyObject *tmp_assign_source_776;
        tmp_assign_source_776 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[945], tmp_assign_source_776);
    }
    {
        PyObject *tmp_assign_source_777;
        tmp_assign_source_777 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[946], tmp_assign_source_777);
    }
    {
        PyObject *tmp_assign_source_778;
        tmp_assign_source_778 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[947], tmp_assign_source_778);
    }
    {
        PyObject *tmp_assign_source_779;
        tmp_assign_source_779 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[947], tmp_assign_source_779);
    }
    {
        PyObject *tmp_assign_source_780;
        tmp_assign_source_780 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[948], tmp_assign_source_780);
    }
    {
        PyObject *tmp_assign_source_781;
        tmp_assign_source_781 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[949], tmp_assign_source_781);
    }
    {
        PyObject *tmp_assign_source_782;
        tmp_assign_source_782 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[950], tmp_assign_source_782);
    }
    {
        PyObject *tmp_assign_source_783;
        tmp_assign_source_783 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[951], tmp_assign_source_783);
    }
    {
        PyObject *tmp_assign_source_784;
        tmp_assign_source_784 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[952], tmp_assign_source_784);
    }
    {
        PyObject *tmp_assign_source_785;
        tmp_assign_source_785 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[953], tmp_assign_source_785);
    }
    {
        PyObject *tmp_assign_source_786;
        tmp_assign_source_786 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[954], tmp_assign_source_786);
    }
    {
        PyObject *tmp_assign_source_787;
        tmp_assign_source_787 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[955], tmp_assign_source_787);
    }
    {
        PyObject *tmp_assign_source_788;
        PyObject *tmp_left_value_366;
        PyObject *tmp_right_value_366;
        tmp_left_value_366 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_366 == NULL)) {
            tmp_left_value_366 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;

            goto frame_exception_exit_1;
        }
        tmp_right_value_366 = mod_consts[10];
        tmp_assign_source_788 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_366, tmp_right_value_366);
        if (tmp_assign_source_788 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 804;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[956], tmp_assign_source_788);
    }
    {
        PyObject *tmp_assign_source_789;
        PyObject *tmp_left_value_367;
        PyObject *tmp_right_value_367;
        tmp_left_value_367 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_367 == NULL)) {
            tmp_left_value_367 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto frame_exception_exit_1;
        }
        tmp_right_value_367 = mod_consts[12];
        tmp_assign_source_789 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_367, tmp_right_value_367);
        if (tmp_assign_source_789 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 805;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[957], tmp_assign_source_789);
    }
    {
        PyObject *tmp_assign_source_790;
        PyObject *tmp_left_value_368;
        PyObject *tmp_right_value_368;
        tmp_left_value_368 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_368 == NULL)) {
            tmp_left_value_368 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 806;

            goto frame_exception_exit_1;
        }
        tmp_right_value_368 = mod_consts[120];
        tmp_assign_source_790 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_368, tmp_right_value_368);
        if (tmp_assign_source_790 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 806;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[958], tmp_assign_source_790);
    }
    {
        PyObject *tmp_assign_source_791;
        tmp_assign_source_791 = mod_consts[959];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[960], tmp_assign_source_791);
    }
    {
        PyObject *tmp_assign_source_792;
        tmp_assign_source_792 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[960]);

        if (unlikely(tmp_assign_source_792 == NULL)) {
            tmp_assign_source_792 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[960]);
        }

        assert(!(tmp_assign_source_792 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[961], tmp_assign_source_792);
    }
    {
        PyObject *tmp_assign_source_793;
        tmp_assign_source_793 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[962], tmp_assign_source_793);
    }
    {
        PyObject *tmp_assign_source_794;
        tmp_assign_source_794 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[963], tmp_assign_source_794);
    }
    {
        PyObject *tmp_assign_source_795;
        tmp_assign_source_795 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[964], tmp_assign_source_795);
    }
    {
        PyObject *tmp_assign_source_796;
        tmp_assign_source_796 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[965], tmp_assign_source_796);
    }
    {
        PyObject *tmp_assign_source_797;
        tmp_assign_source_797 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[966], tmp_assign_source_797);
    }
    {
        PyObject *tmp_assign_source_798;
        tmp_assign_source_798 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[967], tmp_assign_source_798);
    }
    {
        PyObject *tmp_assign_source_799;
        tmp_assign_source_799 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[968], tmp_assign_source_799);
    }
    {
        PyObject *tmp_assign_source_800;
        tmp_assign_source_800 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[969], tmp_assign_source_800);
    }
    {
        PyObject *tmp_assign_source_801;
        PyObject *tmp_left_value_369;
        PyObject *tmp_right_value_369;
        tmp_left_value_369 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[969]);

        if (unlikely(tmp_left_value_369 == NULL)) {
            tmp_left_value_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[969]);
        }

        assert(!(tmp_left_value_369 == NULL));
        tmp_right_value_369 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[962]);

        if (unlikely(tmp_right_value_369 == NULL)) {
            tmp_right_value_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[962]);
        }

        assert(!(tmp_right_value_369 == NULL));
        tmp_assign_source_801 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_369, tmp_right_value_369);
        assert(!(tmp_assign_source_801 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[970], tmp_assign_source_801);
    }
    {
        PyObject *tmp_assign_source_802;
        PyObject *tmp_left_value_370;
        PyObject *tmp_right_value_370;
        tmp_left_value_370 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[969]);

        if (unlikely(tmp_left_value_370 == NULL)) {
            tmp_left_value_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[969]);
        }

        assert(!(tmp_left_value_370 == NULL));
        tmp_right_value_370 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[964]);

        if (unlikely(tmp_right_value_370 == NULL)) {
            tmp_right_value_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[964]);
        }

        assert(!(tmp_right_value_370 == NULL));
        tmp_assign_source_802 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_370, tmp_right_value_370);
        assert(!(tmp_assign_source_802 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[971], tmp_assign_source_802);
    }
    {
        PyObject *tmp_assign_source_803;
        PyObject *tmp_left_value_371;
        PyObject *tmp_right_value_371;
        tmp_left_value_371 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[969]);

        if (unlikely(tmp_left_value_371 == NULL)) {
            tmp_left_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[969]);
        }

        assert(!(tmp_left_value_371 == NULL));
        tmp_right_value_371 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[963]);

        if (unlikely(tmp_right_value_371 == NULL)) {
            tmp_right_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[963]);
        }

        assert(!(tmp_right_value_371 == NULL));
        tmp_assign_source_803 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_371, tmp_right_value_371);
        assert(!(tmp_assign_source_803 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[972], tmp_assign_source_803);
    }
    {
        PyObject *tmp_assign_source_804;
        tmp_assign_source_804 = mod_consts[973];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[974], tmp_assign_source_804);
    }
    {
        PyObject *tmp_assign_source_805;
        tmp_assign_source_805 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[974]);

        if (unlikely(tmp_assign_source_805 == NULL)) {
            tmp_assign_source_805 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[974]);
        }

        assert(!(tmp_assign_source_805 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[975], tmp_assign_source_805);
    }
    {
        PyObject *tmp_assign_source_806;
        tmp_assign_source_806 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[976], tmp_assign_source_806);
    }
    {
        PyObject *tmp_assign_source_807;
        tmp_assign_source_807 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[977], tmp_assign_source_807);
    }
    {
        PyObject *tmp_assign_source_808;
        tmp_assign_source_808 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[978], tmp_assign_source_808);
    }
    {
        PyObject *tmp_assign_source_809;
        tmp_assign_source_809 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[979], tmp_assign_source_809);
    }
    {
        PyObject *tmp_assign_source_810;
        tmp_assign_source_810 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[980], tmp_assign_source_810);
    }
    {
        PyObject *tmp_assign_source_811;
        tmp_assign_source_811 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[981], tmp_assign_source_811);
    }
    {
        PyObject *tmp_assign_source_812;
        tmp_assign_source_812 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[982], tmp_assign_source_812);
    }
    {
        PyObject *tmp_assign_source_813;
        tmp_assign_source_813 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[983], tmp_assign_source_813);
    }
    {
        PyObject *tmp_assign_source_814;
        tmp_assign_source_814 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[984], tmp_assign_source_814);
    }
    {
        PyObject *tmp_assign_source_815;
        tmp_assign_source_815 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[985], tmp_assign_source_815);
    }
    {
        PyObject *tmp_assign_source_816;
        tmp_assign_source_816 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[986], tmp_assign_source_816);
    }
    {
        PyObject *tmp_assign_source_817;
        tmp_assign_source_817 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[987], tmp_assign_source_817);
    }
    {
        PyObject *tmp_assign_source_818;
        tmp_assign_source_818 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[988], tmp_assign_source_818);
    }
    {
        PyObject *tmp_assign_source_819;
        tmp_assign_source_819 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[989], tmp_assign_source_819);
    }
    {
        PyObject *tmp_assign_source_820;
        tmp_assign_source_820 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[990], tmp_assign_source_820);
    }
    {
        PyObject *tmp_assign_source_821;
        tmp_assign_source_821 = mod_consts[991];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[992], tmp_assign_source_821);
    }
    {
        PyObject *tmp_assign_source_822;
        tmp_assign_source_822 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[993], tmp_assign_source_822);
    }
    {
        PyObject *tmp_assign_source_823;
        tmp_assign_source_823 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[994], tmp_assign_source_823);
    }
    {
        PyObject *tmp_assign_source_824;
        tmp_assign_source_824 = mod_consts[995];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[996], tmp_assign_source_824);
    }
    {
        PyObject *tmp_assign_source_825;
        tmp_assign_source_825 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[997], tmp_assign_source_825);
    }
    {
        PyObject *tmp_assign_source_826;
        tmp_assign_source_826 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[998], tmp_assign_source_826);
    }
    {
        PyObject *tmp_assign_source_827;
        tmp_assign_source_827 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[999], tmp_assign_source_827);
    }
    {
        PyObject *tmp_assign_source_828;
        tmp_assign_source_828 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_828 == NULL)) {
            tmp_assign_source_828 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_assign_source_828 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 844;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1000], tmp_assign_source_828);
    }
    {
        PyObject *tmp_assign_source_829;
        tmp_assign_source_829 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_829 == NULL)) {
            tmp_assign_source_829 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_assign_source_829 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 845;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1001], tmp_assign_source_829);
    }
    {
        PyObject *tmp_assign_source_830;
        PyObject *tmp_left_value_372;
        PyObject *tmp_right_value_372;
        tmp_left_value_372 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_372 == NULL)) {
            tmp_left_value_372 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_372 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;

            goto frame_exception_exit_1;
        }
        tmp_right_value_372 = mod_consts[44];
        tmp_assign_source_830 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_372, tmp_right_value_372);
        if (tmp_assign_source_830 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1002], tmp_assign_source_830);
    }
    {
        PyObject *tmp_assign_source_831;
        PyObject *tmp_left_value_373;
        PyObject *tmp_right_value_373;
        tmp_left_value_373 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_373 == NULL)) {
            tmp_left_value_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 847;

            goto frame_exception_exit_1;
        }
        tmp_right_value_373 = mod_consts[10];
        tmp_assign_source_831 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_373, tmp_right_value_373);
        if (tmp_assign_source_831 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 847;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1003], tmp_assign_source_831);
    }
    {
        PyObject *tmp_assign_source_832;
        PyObject *tmp_left_value_374;
        PyObject *tmp_right_value_374;
        tmp_left_value_374 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_374 == NULL)) {
            tmp_left_value_374 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 848;

            goto frame_exception_exit_1;
        }
        tmp_right_value_374 = mod_consts[12];
        tmp_assign_source_832 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_374, tmp_right_value_374);
        if (tmp_assign_source_832 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 848;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1004], tmp_assign_source_832);
    }
    {
        PyObject *tmp_assign_source_833;
        tmp_assign_source_833 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1005], tmp_assign_source_833);
    }
    {
        PyObject *tmp_assign_source_834;
        tmp_assign_source_834 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1006], tmp_assign_source_834);
    }
    {
        PyObject *tmp_assign_source_835;
        tmp_assign_source_835 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1007], tmp_assign_source_835);
    }
    {
        PyObject *tmp_assign_source_836;
        PyObject *tmp_left_value_375;
        PyObject *tmp_right_value_375;
        tmp_left_value_375 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_375 == NULL)) {
            tmp_left_value_375 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_375 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;

            goto frame_exception_exit_1;
        }
        tmp_right_value_375 = mod_consts[120];
        tmp_assign_source_836 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_375, tmp_right_value_375);
        if (tmp_assign_source_836 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 852;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1008], tmp_assign_source_836);
    }
    {
        PyObject *tmp_assign_source_837;
        PyObject *tmp_left_value_376;
        PyObject *tmp_right_value_376;
        tmp_left_value_376 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_376 == NULL)) {
            tmp_left_value_376 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;

            goto frame_exception_exit_1;
        }
        tmp_right_value_376 = mod_consts[14];
        tmp_assign_source_837 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_376, tmp_right_value_376);
        if (tmp_assign_source_837 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1009], tmp_assign_source_837);
    }
    {
        PyObject *tmp_assign_source_838;
        tmp_assign_source_838 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1010], tmp_assign_source_838);
    }
    {
        PyObject *tmp_assign_source_839;
        tmp_assign_source_839 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1011], tmp_assign_source_839);
    }
    {
        PyObject *tmp_assign_source_840;
        tmp_assign_source_840 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1012], tmp_assign_source_840);
    }
    {
        PyObject *tmp_assign_source_841;
        tmp_assign_source_841 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1013], tmp_assign_source_841);
    }
    {
        PyObject *tmp_assign_source_842;
        tmp_assign_source_842 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1014], tmp_assign_source_842);
    }
    {
        PyObject *tmp_assign_source_843;
        tmp_assign_source_843 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1015], tmp_assign_source_843);
    }
    {
        PyObject *tmp_assign_source_844;
        tmp_assign_source_844 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1016], tmp_assign_source_844);
    }
    {
        PyObject *tmp_assign_source_845;
        tmp_assign_source_845 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1017], tmp_assign_source_845);
    }
    {
        PyObject *tmp_assign_source_846;
        tmp_assign_source_846 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1018], tmp_assign_source_846);
    }
    {
        PyObject *tmp_assign_source_847;
        tmp_assign_source_847 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1019], tmp_assign_source_847);
    }
    {
        PyObject *tmp_assign_source_848;
        tmp_assign_source_848 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1020], tmp_assign_source_848);
    }
    {
        PyObject *tmp_assign_source_849;
        tmp_assign_source_849 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1021], tmp_assign_source_849);
    }
    {
        PyObject *tmp_assign_source_850;
        tmp_assign_source_850 = mod_consts[1022];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1023], tmp_assign_source_850);
    }
    {
        PyObject *tmp_assign_source_851;
        tmp_assign_source_851 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1024], tmp_assign_source_851);
    }
    {
        PyObject *tmp_assign_source_852;
        tmp_assign_source_852 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1025], tmp_assign_source_852);
    }
    {
        PyObject *tmp_assign_source_853;
        tmp_assign_source_853 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1025]);

        if (unlikely(tmp_assign_source_853 == NULL)) {
            tmp_assign_source_853 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1025]);
        }

        assert(!(tmp_assign_source_853 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1026], tmp_assign_source_853);
    }
    {
        PyObject *tmp_assign_source_854;
        tmp_assign_source_854 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1027], tmp_assign_source_854);
    }
    {
        PyObject *tmp_assign_source_855;
        PyObject *tmp_left_value_377;
        PyObject *tmp_right_value_377;
        tmp_left_value_377 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_377 == NULL)) {
            tmp_left_value_377 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 871;

            goto frame_exception_exit_1;
        }
        tmp_right_value_377 = mod_consts[123];
        tmp_assign_source_855 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_377, tmp_right_value_377);
        if (tmp_assign_source_855 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 871;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1028], tmp_assign_source_855);
    }
    {
        PyObject *tmp_assign_source_856;
        PyObject *tmp_left_value_378;
        PyObject *tmp_right_value_378;
        tmp_left_value_378 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_378 == NULL)) {
            tmp_left_value_378 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_378 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;

            goto frame_exception_exit_1;
        }
        tmp_right_value_378 = mod_consts[461];
        tmp_assign_source_856 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_378, tmp_right_value_378);
        if (tmp_assign_source_856 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1029], tmp_assign_source_856);
    }
    {
        PyObject *tmp_assign_source_857;
        tmp_assign_source_857 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1029]);

        if (unlikely(tmp_assign_source_857 == NULL)) {
            tmp_assign_source_857 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1029]);
        }

        assert(!(tmp_assign_source_857 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1030], tmp_assign_source_857);
    }
    {
        PyObject *tmp_assign_source_858;
        tmp_assign_source_858 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1028]);

        if (unlikely(tmp_assign_source_858 == NULL)) {
            tmp_assign_source_858 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1028]);
        }

        if (tmp_assign_source_858 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 874;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1030], tmp_assign_source_858);
    }
    {
        PyObject *tmp_assign_source_859;
        PyObject *tmp_left_value_379;
        PyObject *tmp_right_value_379;
        tmp_left_value_379 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_379 == NULL)) {
            tmp_left_value_379 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 875;

            goto frame_exception_exit_1;
        }
        tmp_right_value_379 = mod_consts[125];
        tmp_assign_source_859 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_379, tmp_right_value_379);
        if (tmp_assign_source_859 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 875;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1031], tmp_assign_source_859);
    }
    {
        PyObject *tmp_assign_source_860;
        PyObject *tmp_left_value_380;
        PyObject *tmp_right_value_380;
        tmp_left_value_380 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_380 == NULL)) {
            tmp_left_value_380 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_380 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 876;

            goto frame_exception_exit_1;
        }
        tmp_right_value_380 = mod_consts[429];
        tmp_assign_source_860 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_380, tmp_right_value_380);
        if (tmp_assign_source_860 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 876;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1032], tmp_assign_source_860);
    }
    {
        PyObject *tmp_assign_source_861;
        tmp_assign_source_861 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1032]);

        if (unlikely(tmp_assign_source_861 == NULL)) {
            tmp_assign_source_861 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1032]);
        }

        assert(!(tmp_assign_source_861 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1033], tmp_assign_source_861);
    }
    {
        PyObject *tmp_assign_source_862;
        tmp_assign_source_862 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1031]);

        if (unlikely(tmp_assign_source_862 == NULL)) {
            tmp_assign_source_862 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1031]);
        }

        if (tmp_assign_source_862 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1033], tmp_assign_source_862);
    }
    {
        PyObject *tmp_assign_source_863;
        PyObject *tmp_left_value_381;
        PyObject *tmp_right_value_381;
        tmp_left_value_381 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_381 == NULL)) {
            tmp_left_value_381 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 879;

            goto frame_exception_exit_1;
        }
        tmp_right_value_381 = mod_consts[134];
        tmp_assign_source_863 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_381, tmp_right_value_381);
        if (tmp_assign_source_863 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 879;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1034], tmp_assign_source_863);
    }
    {
        PyObject *tmp_assign_source_864;
        PyObject *tmp_left_value_382;
        PyObject *tmp_right_value_382;
        tmp_left_value_382 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_382 == NULL)) {
            tmp_left_value_382 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_382 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 880;

            goto frame_exception_exit_1;
        }
        tmp_right_value_382 = mod_consts[433];
        tmp_assign_source_864 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_382, tmp_right_value_382);
        if (tmp_assign_source_864 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 880;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1035], tmp_assign_source_864);
    }
    {
        PyObject *tmp_assign_source_865;
        tmp_assign_source_865 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1034]);

        if (unlikely(tmp_assign_source_865 == NULL)) {
            tmp_assign_source_865 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1034]);
        }

        if (tmp_assign_source_865 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 881;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1036], tmp_assign_source_865);
    }
    {
        PyObject *tmp_assign_source_866;
        PyObject *tmp_left_value_383;
        PyObject *tmp_right_value_383;
        tmp_left_value_383 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_383 == NULL)) {
            tmp_left_value_383 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_383 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 882;

            goto frame_exception_exit_1;
        }
        tmp_right_value_383 = mod_consts[0];
        tmp_assign_source_866 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_383, tmp_right_value_383);
        if (tmp_assign_source_866 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 882;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1037], tmp_assign_source_866);
    }
    {
        PyObject *tmp_assign_source_867;
        PyObject *tmp_left_value_384;
        PyObject *tmp_right_value_384;
        tmp_left_value_384 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_384 == NULL)) {
            tmp_left_value_384 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 883;

            goto frame_exception_exit_1;
        }
        tmp_right_value_384 = mod_consts[270];
        tmp_assign_source_867 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_384, tmp_right_value_384);
        if (tmp_assign_source_867 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 883;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1038], tmp_assign_source_867);
    }
    {
        PyObject *tmp_assign_source_868;
        PyObject *tmp_left_value_385;
        PyObject *tmp_right_value_385;
        tmp_left_value_385 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_385 == NULL)) {
            tmp_left_value_385 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;

            goto frame_exception_exit_1;
        }
        tmp_right_value_385 = mod_consts[247];
        tmp_assign_source_868 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_385, tmp_right_value_385);
        if (tmp_assign_source_868 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1039], tmp_assign_source_868);
    }
    {
        PyObject *tmp_assign_source_869;
        PyObject *tmp_left_value_386;
        PyObject *tmp_right_value_386;
        tmp_left_value_386 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_386 == NULL)) {
            tmp_left_value_386 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_386 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;

            goto frame_exception_exit_1;
        }
        tmp_right_value_386 = mod_consts[252];
        tmp_assign_source_869 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_386, tmp_right_value_386);
        if (tmp_assign_source_869 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1040], tmp_assign_source_869);
    }
    {
        PyObject *tmp_assign_source_870;
        tmp_assign_source_870 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1041], tmp_assign_source_870);
    }
    {
        PyObject *tmp_assign_source_871;
        tmp_assign_source_871 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1042], tmp_assign_source_871);
    }
    {
        PyObject *tmp_assign_source_872;
        tmp_assign_source_872 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1043], tmp_assign_source_872);
    }
    {
        PyObject *tmp_assign_source_873;
        tmp_assign_source_873 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1044], tmp_assign_source_873);
    }
    {
        PyObject *tmp_assign_source_874;
        tmp_assign_source_874 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1045], tmp_assign_source_874);
    }
    {
        PyObject *tmp_assign_source_875;
        tmp_assign_source_875 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1046], tmp_assign_source_875);
    }
    {
        PyObject *tmp_assign_source_876;
        tmp_assign_source_876 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1047], tmp_assign_source_876);
    }
    {
        PyObject *tmp_assign_source_877;
        tmp_assign_source_877 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1048], tmp_assign_source_877);
    }
    {
        PyObject *tmp_assign_source_878;
        tmp_assign_source_878 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1049], tmp_assign_source_878);
    }
    {
        PyObject *tmp_assign_source_879;
        PyObject *tmp_left_value_387;
        PyObject *tmp_right_value_387;
        tmp_left_value_387 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_387 == NULL)) {
            tmp_left_value_387 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto frame_exception_exit_1;
        }
        tmp_right_value_387 = mod_consts[1];
        tmp_assign_source_879 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_387, tmp_right_value_387);
        if (tmp_assign_source_879 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1050], tmp_assign_source_879);
    }
    {
        PyObject *tmp_assign_source_880;
        tmp_assign_source_880 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1051], tmp_assign_source_880);
    }
    {
        PyObject *tmp_assign_source_881;
        tmp_assign_source_881 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1052], tmp_assign_source_881);
    }
    {
        PyObject *tmp_assign_source_882;
        tmp_assign_source_882 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1053], tmp_assign_source_882);
    }
    {
        PyObject *tmp_assign_source_883;
        tmp_assign_source_883 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1054], tmp_assign_source_883);
    }
    {
        PyObject *tmp_assign_source_884;
        tmp_assign_source_884 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1055], tmp_assign_source_884);
    }
    {
        PyObject *tmp_assign_source_885;
        PyObject *tmp_left_value_388;
        PyObject *tmp_right_value_388;
        tmp_left_value_388 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_388 == NULL)) {
            tmp_left_value_388 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_388 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 901;

            goto frame_exception_exit_1;
        }
        tmp_right_value_388 = mod_consts[138];
        tmp_assign_source_885 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_388, tmp_right_value_388);
        if (tmp_assign_source_885 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 901;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1056], tmp_assign_source_885);
    }
    {
        PyObject *tmp_assign_source_886;
        PyObject *tmp_left_value_389;
        PyObject *tmp_right_value_389;
        tmp_left_value_389 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_389 == NULL)) {
            tmp_left_value_389 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_389 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;

            goto frame_exception_exit_1;
        }
        tmp_right_value_389 = mod_consts[520];
        tmp_assign_source_886 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_389, tmp_right_value_389);
        if (tmp_assign_source_886 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 902;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1057], tmp_assign_source_886);
    }
    {
        PyObject *tmp_assign_source_887;
        tmp_assign_source_887 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1056]);

        if (unlikely(tmp_assign_source_887 == NULL)) {
            tmp_assign_source_887 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1056]);
        }

        if (tmp_assign_source_887 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 903;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1058], tmp_assign_source_887);
    }
    {
        PyObject *tmp_assign_source_888;
        tmp_assign_source_888 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1059], tmp_assign_source_888);
    }
    {
        PyObject *tmp_assign_source_889;
        tmp_assign_source_889 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1060], tmp_assign_source_889);
    }
    {
        PyObject *tmp_assign_source_890;
        tmp_assign_source_890 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1061], tmp_assign_source_890);
    }
    {
        PyObject *tmp_assign_source_891;
        tmp_assign_source_891 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1062], tmp_assign_source_891);
    }
    {
        PyObject *tmp_assign_source_892;
        PyObject *tmp_left_value_390;
        PyObject *tmp_right_value_390;
        tmp_left_value_390 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_390 == NULL)) {
            tmp_left_value_390 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;

            goto frame_exception_exit_1;
        }
        tmp_right_value_390 = mod_consts[140];
        tmp_assign_source_892 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_390, tmp_right_value_390);
        if (tmp_assign_source_892 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 908;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1063], tmp_assign_source_892);
    }
    {
        PyObject *tmp_assign_source_893;
        PyObject *tmp_left_value_391;
        PyObject *tmp_right_value_391;
        tmp_left_value_391 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_391 == NULL)) {
            tmp_left_value_391 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_391 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;

            goto frame_exception_exit_1;
        }
        tmp_right_value_391 = mod_consts[142];
        tmp_assign_source_893 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_391, tmp_right_value_391);
        if (tmp_assign_source_893 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 909;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1064], tmp_assign_source_893);
    }
    {
        PyObject *tmp_assign_source_894;
        PyObject *tmp_left_value_392;
        PyObject *tmp_right_value_392;
        tmp_left_value_392 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_392 == NULL)) {
            tmp_left_value_392 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;

            goto frame_exception_exit_1;
        }
        tmp_right_value_392 = mod_consts[17];
        tmp_assign_source_894 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_392, tmp_right_value_392);
        if (tmp_assign_source_894 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 910;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1065], tmp_assign_source_894);
    }
    {
        PyObject *tmp_assign_source_895;
        PyObject *tmp_left_value_393;
        PyObject *tmp_right_value_393;
        tmp_left_value_393 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_393 == NULL)) {
            tmp_left_value_393 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_393 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;

            goto frame_exception_exit_1;
        }
        tmp_right_value_393 = mod_consts[145];
        tmp_assign_source_895 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_393, tmp_right_value_393);
        if (tmp_assign_source_895 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 911;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1066], tmp_assign_source_895);
    }
    {
        PyObject *tmp_assign_source_896;
        PyObject *tmp_left_value_394;
        PyObject *tmp_right_value_394;
        tmp_left_value_394 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_394 == NULL)) {
            tmp_left_value_394 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_394 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;

            goto frame_exception_exit_1;
        }
        tmp_right_value_394 = mod_consts[528];
        tmp_assign_source_896 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_394, tmp_right_value_394);
        if (tmp_assign_source_896 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 912;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1067], tmp_assign_source_896);
    }
    {
        PyObject *tmp_assign_source_897;
        tmp_assign_source_897 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1066]);

        if (unlikely(tmp_assign_source_897 == NULL)) {
            tmp_assign_source_897 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1066]);
        }

        if (tmp_assign_source_897 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 913;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1068], tmp_assign_source_897);
    }
    {
        PyObject *tmp_assign_source_898;
        tmp_assign_source_898 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1069], tmp_assign_source_898);
    }
    {
        PyObject *tmp_assign_source_899;
        tmp_assign_source_899 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1070], tmp_assign_source_899);
    }
    {
        PyObject *tmp_assign_source_900;
        tmp_assign_source_900 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1071], tmp_assign_source_900);
    }
    {
        PyObject *tmp_assign_source_901;
        tmp_assign_source_901 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1072], tmp_assign_source_901);
    }
    {
        PyObject *tmp_assign_source_902;
        PyObject *tmp_left_value_395;
        PyObject *tmp_left_value_396;
        PyObject *tmp_right_value_395;
        PyObject *tmp_right_value_396;
        tmp_left_value_396 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1070]);

        if (unlikely(tmp_left_value_396 == NULL)) {
            tmp_left_value_396 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1070]);
        }

        assert(!(tmp_left_value_396 == NULL));
        tmp_right_value_395 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1071]);

        if (unlikely(tmp_right_value_395 == NULL)) {
            tmp_right_value_395 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1071]);
        }

        assert(!(tmp_right_value_395 == NULL));
        tmp_left_value_395 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_396, tmp_right_value_395);
        assert(!(tmp_left_value_395 == NULL));
        tmp_right_value_396 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1072]);

        if (unlikely(tmp_right_value_396 == NULL)) {
            tmp_right_value_396 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1072]);
        }

        assert(!(tmp_right_value_396 == NULL));
        tmp_assign_source_902 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_395, tmp_right_value_396);
        Py_DECREF(tmp_left_value_395);
        assert(!(tmp_assign_source_902 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1073], tmp_assign_source_902);
    }
    {
        PyObject *tmp_assign_source_903;
        tmp_assign_source_903 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1074], tmp_assign_source_903);
    }
    {
        PyObject *tmp_assign_source_904;
        tmp_assign_source_904 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1075], tmp_assign_source_904);
    }
    {
        PyObject *tmp_assign_source_905;
        tmp_assign_source_905 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1076], tmp_assign_source_905);
    }
    {
        PyObject *tmp_assign_source_906;
        tmp_assign_source_906 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1077], tmp_assign_source_906);
    }
    {
        PyObject *tmp_assign_source_907;
        PyObject *tmp_left_value_397;
        PyObject *tmp_right_value_397;
        tmp_left_value_397 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_397 == NULL)) {
            tmp_left_value_397 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_397 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 923;

            goto frame_exception_exit_1;
        }
        tmp_right_value_397 = mod_consts[147];
        tmp_assign_source_907 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_397, tmp_right_value_397);
        if (tmp_assign_source_907 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 923;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1078], tmp_assign_source_907);
    }
    {
        PyObject *tmp_assign_source_908;
        PyObject *tmp_left_value_398;
        PyObject *tmp_right_value_398;
        tmp_left_value_398 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_398 == NULL)) {
            tmp_left_value_398 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_398 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;

            goto frame_exception_exit_1;
        }
        tmp_right_value_398 = mod_consts[276];
        tmp_assign_source_908 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_398, tmp_right_value_398);
        if (tmp_assign_source_908 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1079], tmp_assign_source_908);
    }
    {
        PyObject *tmp_assign_source_909;
        PyObject *tmp_left_value_399;
        PyObject *tmp_right_value_399;
        tmp_left_value_399 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_399 == NULL)) {
            tmp_left_value_399 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_399 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;

            goto frame_exception_exit_1;
        }
        tmp_right_value_399 = mod_consts[281];
        tmp_assign_source_909 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_399, tmp_right_value_399);
        if (tmp_assign_source_909 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1080], tmp_assign_source_909);
    }
    {
        PyObject *tmp_assign_source_910;
        PyObject *tmp_left_value_400;
        PyObject *tmp_right_value_400;
        tmp_left_value_400 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_400 == NULL)) {
            tmp_left_value_400 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_400 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 926;

            goto frame_exception_exit_1;
        }
        tmp_right_value_400 = mod_consts[284];
        tmp_assign_source_910 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_400, tmp_right_value_400);
        if (tmp_assign_source_910 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 926;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1081], tmp_assign_source_910);
    }
    {
        PyObject *tmp_assign_source_911;
        tmp_assign_source_911 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1082], tmp_assign_source_911);
    }
    {
        PyObject *tmp_assign_source_912;
        tmp_assign_source_912 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1083], tmp_assign_source_912);
    }
    {
        PyObject *tmp_assign_source_913;
        tmp_assign_source_913 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1084], tmp_assign_source_913);
    }
    {
        PyObject *tmp_assign_source_914;
        tmp_assign_source_914 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1085], tmp_assign_source_914);
    }
    {
        PyObject *tmp_assign_source_915;
        PyObject *tmp_left_value_401;
        PyObject *tmp_right_value_401;
        tmp_left_value_401 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_401 == NULL)) {
            tmp_left_value_401 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_401 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;

            goto frame_exception_exit_1;
        }
        tmp_right_value_401 = mod_consts[287];
        tmp_assign_source_915 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_401, tmp_right_value_401);
        if (tmp_assign_source_915 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1086], tmp_assign_source_915);
    }
    {
        PyObject *tmp_assign_source_916;
        PyObject *tmp_left_value_402;
        PyObject *tmp_right_value_402;
        tmp_left_value_402 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_402 == NULL)) {
            tmp_left_value_402 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_402 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;

            goto frame_exception_exit_1;
        }
        tmp_right_value_402 = mod_consts[290];
        tmp_assign_source_916 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_402, tmp_right_value_402);
        if (tmp_assign_source_916 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1087], tmp_assign_source_916);
    }
    {
        PyObject *tmp_assign_source_917;
        PyObject *tmp_left_value_403;
        PyObject *tmp_right_value_403;
        tmp_left_value_403 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_403 == NULL)) {
            tmp_left_value_403 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_403 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 933;

            goto frame_exception_exit_1;
        }
        tmp_right_value_403 = mod_consts[1088];
        tmp_assign_source_917 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_403, tmp_right_value_403);
        if (tmp_assign_source_917 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 933;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1089], tmp_assign_source_917);
    }
    {
        PyObject *tmp_assign_source_918;
        tmp_assign_source_918 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1089]);

        if (unlikely(tmp_assign_source_918 == NULL)) {
            tmp_assign_source_918 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1089]);
        }

        assert(!(tmp_assign_source_918 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1090], tmp_assign_source_918);
    }
    {
        PyObject *tmp_assign_source_919;
        tmp_assign_source_919 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1087]);

        if (unlikely(tmp_assign_source_919 == NULL)) {
            tmp_assign_source_919 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1087]);
        }

        if (tmp_assign_source_919 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 935;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1090], tmp_assign_source_919);
    }
    {
        PyObject *tmp_assign_source_920;
        PyObject *tmp_left_value_404;
        PyObject *tmp_right_value_404;
        tmp_left_value_404 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_404 == NULL)) {
            tmp_left_value_404 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_404 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto frame_exception_exit_1;
        }
        tmp_right_value_404 = mod_consts[196];
        tmp_assign_source_920 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_404, tmp_right_value_404);
        if (tmp_assign_source_920 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 936;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1091], tmp_assign_source_920);
    }
    {
        PyObject *tmp_assign_source_921;
        tmp_assign_source_921 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1092], tmp_assign_source_921);
    }
    {
        PyObject *tmp_assign_source_922;
        tmp_assign_source_922 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1093], tmp_assign_source_922);
    }
    {
        PyObject *tmp_assign_source_923;
        tmp_assign_source_923 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1094], tmp_assign_source_923);
    }
    {
        PyObject *tmp_assign_source_924;
        tmp_assign_source_924 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1095], tmp_assign_source_924);
    }
    {
        PyObject *tmp_assign_source_925;
        tmp_assign_source_925 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1096], tmp_assign_source_925);
    }
    {
        PyObject *tmp_assign_source_926;
        tmp_assign_source_926 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1097], tmp_assign_source_926);
    }
    {
        PyObject *tmp_assign_source_927;
        tmp_assign_source_927 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1098], tmp_assign_source_927);
    }
    {
        PyObject *tmp_assign_source_928;
        tmp_assign_source_928 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1099], tmp_assign_source_928);
    }
    {
        PyObject *tmp_assign_source_929;
        tmp_assign_source_929 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1100], tmp_assign_source_929);
    }
    {
        PyObject *tmp_assign_source_930;
        tmp_assign_source_930 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1101], tmp_assign_source_930);
    }
    {
        PyObject *tmp_assign_source_931;
        tmp_assign_source_931 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1102], tmp_assign_source_931);
    }
    {
        PyObject *tmp_assign_source_932;
        tmp_assign_source_932 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1103], tmp_assign_source_932);
    }
    {
        PyObject *tmp_assign_source_933;
        tmp_assign_source_933 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1104], tmp_assign_source_933);
    }
    {
        PyObject *tmp_assign_source_934;
        PyObject *tmp_left_value_405;
        PyObject *tmp_right_value_405;
        tmp_left_value_405 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_405 == NULL)) {
            tmp_left_value_405 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_405 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 950;

            goto frame_exception_exit_1;
        }
        tmp_right_value_405 = mod_consts[293];
        tmp_assign_source_934 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_405, tmp_right_value_405);
        if (tmp_assign_source_934 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 950;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1105], tmp_assign_source_934);
    }
    {
        PyObject *tmp_assign_source_935;
        PyObject *tmp_left_value_406;
        PyObject *tmp_right_value_406;
        tmp_left_value_406 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_406 == NULL)) {
            tmp_left_value_406 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 951;

            goto frame_exception_exit_1;
        }
        tmp_right_value_406 = mod_consts[1106];
        tmp_assign_source_935 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_406, tmp_right_value_406);
        if (tmp_assign_source_935 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 951;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1107], tmp_assign_source_935);
    }
    {
        PyObject *tmp_assign_source_936;
        tmp_assign_source_936 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1105]);

        if (unlikely(tmp_assign_source_936 == NULL)) {
            tmp_assign_source_936 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1105]);
        }

        if (tmp_assign_source_936 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 952;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1108], tmp_assign_source_936);
    }
    {
        PyObject *tmp_assign_source_937;
        PyObject *tmp_left_value_407;
        PyObject *tmp_right_value_407;
        tmp_left_value_407 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_407 == NULL)) {
            tmp_left_value_407 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_407 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 953;

            goto frame_exception_exit_1;
        }
        tmp_right_value_407 = mod_consts[296];
        tmp_assign_source_937 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_407, tmp_right_value_407);
        if (tmp_assign_source_937 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 953;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1109], tmp_assign_source_937);
    }
    {
        PyObject *tmp_assign_source_938;
        PyObject *tmp_left_value_408;
        PyObject *tmp_right_value_408;
        tmp_left_value_408 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_408 == NULL)) {
            tmp_left_value_408 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_408 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 954;

            goto frame_exception_exit_1;
        }
        tmp_right_value_408 = mod_consts[1110];
        tmp_assign_source_938 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_408, tmp_right_value_408);
        if (tmp_assign_source_938 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 954;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1111], tmp_assign_source_938);
    }
    {
        PyObject *tmp_assign_source_939;
        tmp_assign_source_939 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1109]);

        if (unlikely(tmp_assign_source_939 == NULL)) {
            tmp_assign_source_939 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1109]);
        }

        if (tmp_assign_source_939 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 955;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1112], tmp_assign_source_939);
    }
    {
        PyObject *tmp_assign_source_940;
        PyObject *tmp_left_value_409;
        PyObject *tmp_right_value_409;
        tmp_left_value_409 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_409 == NULL)) {
            tmp_left_value_409 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto frame_exception_exit_1;
        }
        tmp_right_value_409 = mod_consts[299];
        tmp_assign_source_940 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_409, tmp_right_value_409);
        if (tmp_assign_source_940 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 956;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1113], tmp_assign_source_940);
    }
    {
        PyObject *tmp_assign_source_941;
        PyObject *tmp_left_value_410;
        PyObject *tmp_right_value_410;
        tmp_left_value_410 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_410 == NULL)) {
            tmp_left_value_410 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_410 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 957;

            goto frame_exception_exit_1;
        }
        tmp_right_value_410 = mod_consts[1114];
        tmp_assign_source_941 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_410, tmp_right_value_410);
        if (tmp_assign_source_941 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 957;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1115], tmp_assign_source_941);
    }
    {
        PyObject *tmp_assign_source_942;
        tmp_assign_source_942 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1113]);

        if (unlikely(tmp_assign_source_942 == NULL)) {
            tmp_assign_source_942 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1113]);
        }

        if (tmp_assign_source_942 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 958;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1116], tmp_assign_source_942);
    }
    {
        PyObject *tmp_assign_source_943;
        PyObject *tmp_left_value_411;
        PyObject *tmp_right_value_411;
        tmp_left_value_411 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_411 == NULL)) {
            tmp_left_value_411 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_411 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto frame_exception_exit_1;
        }
        tmp_right_value_411 = mod_consts[302];
        tmp_assign_source_943 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_411, tmp_right_value_411);
        if (tmp_assign_source_943 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1117], tmp_assign_source_943);
    }
    {
        PyObject *tmp_assign_source_944;
        PyObject *tmp_left_value_412;
        PyObject *tmp_right_value_412;
        tmp_left_value_412 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_412 == NULL)) {
            tmp_left_value_412 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_412 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;

            goto frame_exception_exit_1;
        }
        tmp_right_value_412 = mod_consts[305];
        tmp_assign_source_944 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_412, tmp_right_value_412);
        if (tmp_assign_source_944 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1118], tmp_assign_source_944);
    }
    {
        PyObject *tmp_assign_source_945;
        tmp_assign_source_945 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1119], tmp_assign_source_945);
    }
    {
        PyObject *tmp_assign_source_946;
        tmp_assign_source_946 = mod_consts[1120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1121], tmp_assign_source_946);
    }
    {
        PyObject *tmp_assign_source_947;
        PyObject *tmp_left_value_413;
        PyObject *tmp_right_value_413;
        tmp_left_value_413 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_413 == NULL)) {
            tmp_left_value_413 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_413 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 963;

            goto frame_exception_exit_1;
        }
        tmp_right_value_413 = mod_consts[436];
        tmp_assign_source_947 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_413, tmp_right_value_413);
        if (tmp_assign_source_947 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 963;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1122], tmp_assign_source_947);
    }
    {
        PyObject *tmp_assign_source_948;
        PyObject *tmp_left_value_414;
        PyObject *tmp_right_value_414;
        tmp_left_value_414 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_414 == NULL)) {
            tmp_left_value_414 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;

            goto frame_exception_exit_1;
        }
        tmp_right_value_414 = mod_consts[438];
        tmp_assign_source_948 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_414, tmp_right_value_414);
        if (tmp_assign_source_948 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1123], tmp_assign_source_948);
    }
    {
        PyObject *tmp_assign_source_949;
        PyObject *tmp_left_value_415;
        PyObject *tmp_right_value_415;
        tmp_left_value_415 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_415 == NULL)) {
            tmp_left_value_415 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_415 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;

            goto frame_exception_exit_1;
        }
        tmp_right_value_415 = mod_consts[441];
        tmp_assign_source_949 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_415, tmp_right_value_415);
        if (tmp_assign_source_949 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1124], tmp_assign_source_949);
    }
    {
        PyObject *tmp_assign_source_950;
        PyObject *tmp_left_value_416;
        PyObject *tmp_right_value_416;
        tmp_left_value_416 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_416 == NULL)) {
            tmp_left_value_416 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;

            goto frame_exception_exit_1;
        }
        tmp_right_value_416 = mod_consts[671];
        tmp_assign_source_950 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_416, tmp_right_value_416);
        if (tmp_assign_source_950 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1125], tmp_assign_source_950);
    }
    {
        PyObject *tmp_assign_source_951;
        PyObject *tmp_left_value_417;
        PyObject *tmp_right_value_417;
        tmp_left_value_417 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_417 == NULL)) {
            tmp_left_value_417 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_417 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 967;

            goto frame_exception_exit_1;
        }
        tmp_right_value_417 = mod_consts[443];
        tmp_assign_source_951 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_417, tmp_right_value_417);
        if (tmp_assign_source_951 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 967;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1126], tmp_assign_source_951);
    }
    {
        PyObject *tmp_assign_source_952;
        PyObject *tmp_left_value_418;
        PyObject *tmp_right_value_418;
        tmp_left_value_418 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_418 == NULL)) {
            tmp_left_value_418 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_418 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 968;

            goto frame_exception_exit_1;
        }
        tmp_right_value_418 = mod_consts[445];
        tmp_assign_source_952 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_418, tmp_right_value_418);
        if (tmp_assign_source_952 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 968;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1127], tmp_assign_source_952);
    }
    {
        PyObject *tmp_assign_source_953;
        PyObject *tmp_left_value_419;
        PyObject *tmp_right_value_419;
        tmp_left_value_419 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_419 == NULL)) {
            tmp_left_value_419 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_419 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;

            goto frame_exception_exit_1;
        }
        tmp_right_value_419 = mod_consts[447];
        tmp_assign_source_953 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_419, tmp_right_value_419);
        if (tmp_assign_source_953 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 969;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1128], tmp_assign_source_953);
    }
    {
        PyObject *tmp_assign_source_954;
        PyObject *tmp_left_value_420;
        PyObject *tmp_right_value_420;
        tmp_left_value_420 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_420 == NULL)) {
            tmp_left_value_420 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_420 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 970;

            goto frame_exception_exit_1;
        }
        tmp_right_value_420 = mod_consts[675];
        tmp_assign_source_954 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_420, tmp_right_value_420);
        if (tmp_assign_source_954 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 970;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1129], tmp_assign_source_954);
    }
    {
        PyObject *tmp_assign_source_955;
        PyObject *tmp_left_value_421;
        PyObject *tmp_right_value_421;
        tmp_left_value_421 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_421 == NULL)) {
            tmp_left_value_421 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_421 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 971;

            goto frame_exception_exit_1;
        }
        tmp_right_value_421 = mod_consts[449];
        tmp_assign_source_955 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_421, tmp_right_value_421);
        if (tmp_assign_source_955 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 971;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1130], tmp_assign_source_955);
    }
    {
        PyObject *tmp_assign_source_956;
        PyObject *tmp_left_value_422;
        PyObject *tmp_right_value_422;
        tmp_left_value_422 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_422 == NULL)) {
            tmp_left_value_422 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_422 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto frame_exception_exit_1;
        }
        tmp_right_value_422 = mod_consts[451];
        tmp_assign_source_956 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_422, tmp_right_value_422);
        if (tmp_assign_source_956 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1131], tmp_assign_source_956);
    }
    {
        PyObject *tmp_assign_source_957;
        PyObject *tmp_left_value_423;
        PyObject *tmp_right_value_423;
        tmp_left_value_423 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_423 == NULL)) {
            tmp_left_value_423 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_423 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 973;

            goto frame_exception_exit_1;
        }
        tmp_right_value_423 = mod_consts[542];
        tmp_assign_source_957 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_423, tmp_right_value_423);
        if (tmp_assign_source_957 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 973;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1132], tmp_assign_source_957);
    }
    {
        PyObject *tmp_assign_source_958;
        PyObject *tmp_left_value_424;
        PyObject *tmp_right_value_424;
        tmp_left_value_424 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_424 == NULL)) {
            tmp_left_value_424 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_424 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 974;

            goto frame_exception_exit_1;
        }
        tmp_right_value_424 = mod_consts[453];
        tmp_assign_source_958 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_424, tmp_right_value_424);
        if (tmp_assign_source_958 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 974;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1133], tmp_assign_source_958);
    }
    {
        PyObject *tmp_assign_source_959;
        PyObject *tmp_left_value_425;
        PyObject *tmp_right_value_425;
        tmp_left_value_425 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_425 == NULL)) {
            tmp_left_value_425 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_425 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 975;

            goto frame_exception_exit_1;
        }
        tmp_right_value_425 = mod_consts[455];
        tmp_assign_source_959 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_425, tmp_right_value_425);
        if (tmp_assign_source_959 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 975;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1134], tmp_assign_source_959);
    }
    {
        PyObject *tmp_assign_source_960;
        PyObject *tmp_left_value_426;
        PyObject *tmp_right_value_426;
        tmp_left_value_426 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_426 == NULL)) {
            tmp_left_value_426 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_426 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 976;

            goto frame_exception_exit_1;
        }
        tmp_right_value_426 = mod_consts[457];
        tmp_assign_source_960 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_426, tmp_right_value_426);
        if (tmp_assign_source_960 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 976;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1135], tmp_assign_source_960);
    }
    {
        PyObject *tmp_assign_source_961;
        PyObject *tmp_left_value_427;
        PyObject *tmp_right_value_427;
        tmp_left_value_427 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_427 == NULL)) {
            tmp_left_value_427 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_427 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 977;

            goto frame_exception_exit_1;
        }
        tmp_right_value_427 = mod_consts[459];
        tmp_assign_source_961 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_427, tmp_right_value_427);
        if (tmp_assign_source_961 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 977;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1136], tmp_assign_source_961);
    }
    {
        PyObject *tmp_assign_source_962;
        PyObject *tmp_left_value_428;
        PyObject *tmp_right_value_428;
        tmp_left_value_428 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_428 == NULL)) {
            tmp_left_value_428 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_428 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 978;

            goto frame_exception_exit_1;
        }
        tmp_right_value_428 = mod_consts[1137];
        tmp_assign_source_962 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_428, tmp_right_value_428);
        if (tmp_assign_source_962 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 978;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1138], tmp_assign_source_962);
    }
    {
        PyObject *tmp_assign_source_963;
        tmp_assign_source_963 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1138]);

        if (unlikely(tmp_assign_source_963 == NULL)) {
            tmp_assign_source_963 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1138]);
        }

        assert(!(tmp_assign_source_963 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1139], tmp_assign_source_963);
    }
    {
        PyObject *tmp_assign_source_964;
        tmp_assign_source_964 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1136]);

        if (unlikely(tmp_assign_source_964 == NULL)) {
            tmp_assign_source_964 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1136]);
        }

        if (tmp_assign_source_964 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 980;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1139], tmp_assign_source_964);
    }
    {
        PyObject *tmp_assign_source_965;
        PyObject *tmp_left_value_429;
        PyObject *tmp_right_value_429;
        tmp_left_value_429 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_429 == NULL)) {
            tmp_left_value_429 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_429 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 981;

            goto frame_exception_exit_1;
        }
        tmp_right_value_429 = mod_consts[463];
        tmp_assign_source_965 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_429, tmp_right_value_429);
        if (tmp_assign_source_965 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 981;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1140], tmp_assign_source_965);
    }
    {
        PyObject *tmp_assign_source_966;
        PyObject *tmp_left_value_430;
        PyObject *tmp_right_value_430;
        tmp_left_value_430 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_430 == NULL)) {
            tmp_left_value_430 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_430 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 982;

            goto frame_exception_exit_1;
        }
        tmp_right_value_430 = mod_consts[1141];
        tmp_assign_source_966 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_430, tmp_right_value_430);
        if (tmp_assign_source_966 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 982;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1142], tmp_assign_source_966);
    }
    {
        PyObject *tmp_assign_source_967;
        tmp_assign_source_967 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1142]);

        if (unlikely(tmp_assign_source_967 == NULL)) {
            tmp_assign_source_967 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1142]);
        }

        assert(!(tmp_assign_source_967 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1143], tmp_assign_source_967);
    }
    {
        PyObject *tmp_assign_source_968;
        tmp_assign_source_968 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1140]);

        if (unlikely(tmp_assign_source_968 == NULL)) {
            tmp_assign_source_968 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1140]);
        }

        if (tmp_assign_source_968 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 984;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1143], tmp_assign_source_968);
    }
    {
        PyObject *tmp_assign_source_969;
        tmp_assign_source_969 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1144], tmp_assign_source_969);
    }
    {
        PyObject *tmp_assign_source_970;
        tmp_assign_source_970 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1145], tmp_assign_source_970);
    }
    {
        PyObject *tmp_assign_source_971;
        PyObject *tmp_left_value_431;
        PyObject *tmp_right_value_431;
        tmp_left_value_431 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_431 == NULL)) {
            tmp_left_value_431 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_431 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 987;

            goto frame_exception_exit_1;
        }
        tmp_right_value_431 = mod_consts[465];
        tmp_assign_source_971 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_431, tmp_right_value_431);
        if (tmp_assign_source_971 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 987;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1146], tmp_assign_source_971);
    }
    {
        PyObject *tmp_assign_source_972;
        PyObject *tmp_left_value_432;
        PyObject *tmp_right_value_432;
        tmp_left_value_432 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_432 == NULL)) {
            tmp_left_value_432 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_432 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 988;

            goto frame_exception_exit_1;
        }
        tmp_right_value_432 = mod_consts[467];
        tmp_assign_source_972 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_432, tmp_right_value_432);
        if (tmp_assign_source_972 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 988;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1147], tmp_assign_source_972);
    }
    {
        PyObject *tmp_assign_source_973;
        PyObject *tmp_left_value_433;
        PyObject *tmp_right_value_433;
        tmp_left_value_433 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_433 == NULL)) {
            tmp_left_value_433 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_433 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 989;

            goto frame_exception_exit_1;
        }
        tmp_right_value_433 = mod_consts[469];
        tmp_assign_source_973 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_433, tmp_right_value_433);
        if (tmp_assign_source_973 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 989;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1148], tmp_assign_source_973);
    }
    {
        PyObject *tmp_assign_source_974;
        PyObject *tmp_left_value_434;
        PyObject *tmp_right_value_434;
        tmp_left_value_434 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_434 == NULL)) {
            tmp_left_value_434 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_434 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 990;

            goto frame_exception_exit_1;
        }
        tmp_right_value_434 = mod_consts[471];
        tmp_assign_source_974 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_434, tmp_right_value_434);
        if (tmp_assign_source_974 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 990;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1149], tmp_assign_source_974);
    }
    {
        PyObject *tmp_assign_source_975;
        PyObject *tmp_left_value_435;
        PyObject *tmp_right_value_435;
        tmp_left_value_435 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_435 == NULL)) {
            tmp_left_value_435 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_435 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 991;

            goto frame_exception_exit_1;
        }
        tmp_right_value_435 = mod_consts[473];
        tmp_assign_source_975 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_435, tmp_right_value_435);
        if (tmp_assign_source_975 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 991;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1150], tmp_assign_source_975);
    }
    {
        PyObject *tmp_assign_source_976;
        PyObject *tmp_left_value_436;
        PyObject *tmp_right_value_436;
        tmp_left_value_436 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_436 == NULL)) {
            tmp_left_value_436 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_436 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 992;

            goto frame_exception_exit_1;
        }
        tmp_right_value_436 = mod_consts[475];
        tmp_assign_source_976 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_436, tmp_right_value_436);
        if (tmp_assign_source_976 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 992;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1151], tmp_assign_source_976);
    }
    {
        PyObject *tmp_assign_source_977;
        PyObject *tmp_left_value_437;
        PyObject *tmp_right_value_437;
        tmp_left_value_437 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_437 == NULL)) {
            tmp_left_value_437 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_437 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 993;

            goto frame_exception_exit_1;
        }
        tmp_right_value_437 = mod_consts[1152];
        tmp_assign_source_977 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_437, tmp_right_value_437);
        if (tmp_assign_source_977 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 993;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1153], tmp_assign_source_977);
    }
    {
        PyObject *tmp_assign_source_978;
        tmp_assign_source_978 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1151]);

        if (unlikely(tmp_assign_source_978 == NULL)) {
            tmp_assign_source_978 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1151]);
        }

        if (tmp_assign_source_978 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 994;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1154], tmp_assign_source_978);
    }
    {
        PyObject *tmp_assign_source_979;
        PyObject *tmp_left_value_438;
        PyObject *tmp_right_value_438;
        tmp_left_value_438 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_438 == NULL)) {
            tmp_left_value_438 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_438 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 995;

            goto frame_exception_exit_1;
        }
        tmp_right_value_438 = mod_consts[477];
        tmp_assign_source_979 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_438, tmp_right_value_438);
        if (tmp_assign_source_979 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 995;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1155], tmp_assign_source_979);
    }
    {
        PyObject *tmp_assign_source_980;
        PyObject *tmp_left_value_439;
        PyObject *tmp_right_value_439;
        tmp_left_value_439 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_439 == NULL)) {
            tmp_left_value_439 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_439 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 996;

            goto frame_exception_exit_1;
        }
        tmp_right_value_439 = mod_consts[479];
        tmp_assign_source_980 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_439, tmp_right_value_439);
        if (tmp_assign_source_980 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 996;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1156], tmp_assign_source_980);
    }
    {
        PyObject *tmp_assign_source_981;
        PyObject *tmp_left_value_440;
        PyObject *tmp_right_value_440;
        tmp_left_value_440 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_440 == NULL)) {
            tmp_left_value_440 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_440 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 997;

            goto frame_exception_exit_1;
        }
        tmp_right_value_440 = mod_consts[481];
        tmp_assign_source_981 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_440, tmp_right_value_440);
        if (tmp_assign_source_981 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 997;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1157], tmp_assign_source_981);
    }
    {
        PyObject *tmp_assign_source_982;
        tmp_assign_source_982 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1158], tmp_assign_source_982);
    }
    {
        PyObject *tmp_assign_source_983;
        tmp_assign_source_983 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1159], tmp_assign_source_983);
    }
    {
        PyObject *tmp_assign_source_984;
        tmp_assign_source_984 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1160], tmp_assign_source_984);
    }
    {
        PyObject *tmp_assign_source_985;
        tmp_assign_source_985 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1161], tmp_assign_source_985);
    }
    {
        PyObject *tmp_assign_source_986;
        tmp_assign_source_986 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1162], tmp_assign_source_986);
    }
    {
        PyObject *tmp_assign_source_987;
        tmp_assign_source_987 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1163], tmp_assign_source_987);
    }
    {
        PyObject *tmp_assign_source_988;
        tmp_assign_source_988 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1164], tmp_assign_source_988);
    }
    {
        PyObject *tmp_assign_source_989;
        tmp_assign_source_989 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1165], tmp_assign_source_989);
    }
    {
        PyObject *tmp_assign_source_990;
        tmp_assign_source_990 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1166], tmp_assign_source_990);
    }
    {
        PyObject *tmp_assign_source_991;
        tmp_assign_source_991 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1167], tmp_assign_source_991);
    }
    {
        PyObject *tmp_assign_source_992;
        tmp_assign_source_992 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1168], tmp_assign_source_992);
    }
    {
        PyObject *tmp_assign_source_993;
        tmp_assign_source_993 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1169], tmp_assign_source_993);
    }
    {
        PyObject *tmp_assign_source_994;
        tmp_assign_source_994 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1170], tmp_assign_source_994);
    }
    {
        PyObject *tmp_assign_source_995;
        tmp_assign_source_995 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1171], tmp_assign_source_995);
    }
    {
        PyObject *tmp_assign_source_996;
        PyObject *tmp_left_value_441;
        PyObject *tmp_right_value_441;
        tmp_left_value_441 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_441 == NULL)) {
            tmp_left_value_441 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_441 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1012;

            goto frame_exception_exit_1;
        }
        tmp_right_value_441 = mod_consts[483];
        tmp_assign_source_996 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_441, tmp_right_value_441);
        if (tmp_assign_source_996 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1012;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1172], tmp_assign_source_996);
    }
    {
        PyObject *tmp_assign_source_997;
        PyObject *tmp_left_value_442;
        PyObject *tmp_right_value_442;
        tmp_left_value_442 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_442 == NULL)) {
            tmp_left_value_442 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_442 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1013;

            goto frame_exception_exit_1;
        }
        tmp_right_value_442 = mod_consts[485];
        tmp_assign_source_997 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_442, tmp_right_value_442);
        if (tmp_assign_source_997 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1013;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1173], tmp_assign_source_997);
    }
    {
        PyObject *tmp_assign_source_998;
        PyObject *tmp_left_value_443;
        PyObject *tmp_right_value_443;
        tmp_left_value_443 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_443 == NULL)) {
            tmp_left_value_443 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_443 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1014;

            goto frame_exception_exit_1;
        }
        tmp_right_value_443 = mod_consts[487];
        tmp_assign_source_998 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_443, tmp_right_value_443);
        if (tmp_assign_source_998 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1014;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1174], tmp_assign_source_998);
    }
    {
        PyObject *tmp_assign_source_999;
        PyObject *tmp_left_value_444;
        PyObject *tmp_right_value_444;
        tmp_left_value_444 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_444 == NULL)) {
            tmp_left_value_444 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_444 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;

            goto frame_exception_exit_1;
        }
        tmp_right_value_444 = mod_consts[489];
        tmp_assign_source_999 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_444, tmp_right_value_444);
        if (tmp_assign_source_999 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1175], tmp_assign_source_999);
    }
    {
        PyObject *tmp_assign_source_1000;
        PyObject *tmp_left_value_445;
        PyObject *tmp_right_value_445;
        tmp_left_value_445 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_445 == NULL)) {
            tmp_left_value_445 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_445 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1016;

            goto frame_exception_exit_1;
        }
        tmp_right_value_445 = mod_consts[491];
        tmp_assign_source_1000 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_445, tmp_right_value_445);
        if (tmp_assign_source_1000 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1016;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1176], tmp_assign_source_1000);
    }
    {
        PyObject *tmp_assign_source_1001;
        PyObject *tmp_left_value_446;
        PyObject *tmp_right_value_446;
        tmp_left_value_446 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_446 == NULL)) {
            tmp_left_value_446 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_446 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;

            goto frame_exception_exit_1;
        }
        tmp_right_value_446 = mod_consts[493];
        tmp_assign_source_1001 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_446, tmp_right_value_446);
        if (tmp_assign_source_1001 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1177], tmp_assign_source_1001);
    }
    {
        PyObject *tmp_assign_source_1002;
        PyObject *tmp_left_value_447;
        PyObject *tmp_right_value_447;
        tmp_left_value_447 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_447 == NULL)) {
            tmp_left_value_447 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_447 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1018;

            goto frame_exception_exit_1;
        }
        tmp_right_value_447 = mod_consts[498];
        tmp_assign_source_1002 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_447, tmp_right_value_447);
        if (tmp_assign_source_1002 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1018;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1178], tmp_assign_source_1002);
    }
    {
        PyObject *tmp_assign_source_1003;
        PyObject *tmp_left_value_448;
        PyObject *tmp_right_value_448;
        tmp_left_value_448 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_448 == NULL)) {
            tmp_left_value_448 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_448 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1019;

            goto frame_exception_exit_1;
        }
        tmp_right_value_448 = mod_consts[551];
        tmp_assign_source_1003 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_448, tmp_right_value_448);
        if (tmp_assign_source_1003 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1019;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1179], tmp_assign_source_1003);
    }
    {
        PyObject *tmp_assign_source_1004;
        PyObject *tmp_left_value_449;
        PyObject *tmp_right_value_449;
        tmp_left_value_449 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_449 == NULL)) {
            tmp_left_value_449 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_449 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1020;

            goto frame_exception_exit_1;
        }
        tmp_right_value_449 = mod_consts[21];
        tmp_assign_source_1004 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_449, tmp_right_value_449);
        if (tmp_assign_source_1004 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1020;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1180], tmp_assign_source_1004);
    }
    {
        PyObject *tmp_assign_source_1005;
        tmp_assign_source_1005 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1181], tmp_assign_source_1005);
    }
    {
        PyObject *tmp_assign_source_1006;
        PyObject *tmp_left_value_450;
        PyObject *tmp_right_value_450;
        tmp_left_value_450 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_450 == NULL)) {
            tmp_left_value_450 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_450 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1022;

            goto frame_exception_exit_1;
        }
        tmp_right_value_450 = mod_consts[554];
        tmp_assign_source_1006 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_450, tmp_right_value_450);
        if (tmp_assign_source_1006 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1022;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1182], tmp_assign_source_1006);
    }
    {
        PyObject *tmp_assign_source_1007;
        PyObject *tmp_left_value_451;
        PyObject *tmp_right_value_451;
        tmp_left_value_451 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_451 == NULL)) {
            tmp_left_value_451 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_451 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1023;

            goto frame_exception_exit_1;
        }
        tmp_right_value_451 = mod_consts[564];
        tmp_assign_source_1007 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_451, tmp_right_value_451);
        if (tmp_assign_source_1007 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1023;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1183], tmp_assign_source_1007);
    }
    {
        PyObject *tmp_assign_source_1008;
        PyObject *tmp_left_value_452;
        PyObject *tmp_right_value_452;
        tmp_left_value_452 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_452 == NULL)) {
            tmp_left_value_452 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_452 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        tmp_right_value_452 = mod_consts[504];
        tmp_assign_source_1008 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_452, tmp_right_value_452);
        if (tmp_assign_source_1008 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1184], tmp_assign_source_1008);
    }
    {
        PyObject *tmp_assign_source_1009;
        PyObject *tmp_left_value_453;
        PyObject *tmp_right_value_453;
        tmp_left_value_453 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_453 == NULL)) {
            tmp_left_value_453 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_453 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1025;

            goto frame_exception_exit_1;
        }
        tmp_right_value_453 = mod_consts[556];
        tmp_assign_source_1009 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_453, tmp_right_value_453);
        if (tmp_assign_source_1009 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1025;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1185], tmp_assign_source_1009);
    }
    {
        PyObject *tmp_assign_source_1010;
        PyObject *tmp_left_value_454;
        PyObject *tmp_right_value_454;
        tmp_left_value_454 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_454 == NULL)) {
            tmp_left_value_454 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_454 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1026;

            goto frame_exception_exit_1;
        }
        tmp_right_value_454 = mod_consts[558];
        tmp_assign_source_1010 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_454, tmp_right_value_454);
        if (tmp_assign_source_1010 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1026;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1186], tmp_assign_source_1010);
    }
    {
        PyObject *tmp_assign_source_1011;
        PyObject *tmp_left_value_455;
        PyObject *tmp_right_value_455;
        tmp_left_value_455 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_455 == NULL)) {
            tmp_left_value_455 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_455 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1027;

            goto frame_exception_exit_1;
        }
        tmp_right_value_455 = mod_consts[500];
        tmp_assign_source_1011 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_455, tmp_right_value_455);
        if (tmp_assign_source_1011 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1027;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1187], tmp_assign_source_1011);
    }
    {
        PyObject *tmp_assign_source_1012;
        PyObject *tmp_left_value_456;
        PyObject *tmp_right_value_456;
        tmp_left_value_456 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_456 == NULL)) {
            tmp_left_value_456 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_456 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1028;

            goto frame_exception_exit_1;
        }
        tmp_right_value_456 = mod_consts[502];
        tmp_assign_source_1012 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_456, tmp_right_value_456);
        if (tmp_assign_source_1012 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1028;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1188], tmp_assign_source_1012);
    }
    {
        PyObject *tmp_assign_source_1013;
        PyObject *tmp_left_value_457;
        PyObject *tmp_right_value_457;
        tmp_left_value_457 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_457 == NULL)) {
            tmp_left_value_457 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_457 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1029;

            goto frame_exception_exit_1;
        }
        tmp_right_value_457 = mod_consts[506];
        tmp_assign_source_1013 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_457, tmp_right_value_457);
        if (tmp_assign_source_1013 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1029;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1189], tmp_assign_source_1013);
    }
    {
        PyObject *tmp_assign_source_1014;
        PyObject *tmp_left_value_458;
        PyObject *tmp_right_value_458;
        tmp_left_value_458 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_458 == NULL)) {
            tmp_left_value_458 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_458 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1030;

            goto frame_exception_exit_1;
        }
        tmp_right_value_458 = mod_consts[508];
        tmp_assign_source_1014 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_458, tmp_right_value_458);
        if (tmp_assign_source_1014 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1030;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1190], tmp_assign_source_1014);
    }
    {
        PyObject *tmp_assign_source_1015;
        tmp_assign_source_1015 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1191], tmp_assign_source_1015);
    }
    {
        PyObject *tmp_assign_source_1016;
        tmp_assign_source_1016 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1192], tmp_assign_source_1016);
    }
    {
        PyObject *tmp_assign_source_1017;
        tmp_assign_source_1017 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1193], tmp_assign_source_1017);
    }
    {
        PyObject *tmp_assign_source_1018;
        tmp_assign_source_1018 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1194], tmp_assign_source_1018);
    }
    {
        PyObject *tmp_assign_source_1019;
        tmp_assign_source_1019 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1195], tmp_assign_source_1019);
    }
    {
        PyObject *tmp_assign_source_1020;
        tmp_assign_source_1020 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1196], tmp_assign_source_1020);
    }
    {
        PyObject *tmp_assign_source_1021;
        tmp_assign_source_1021 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1197], tmp_assign_source_1021);
    }
    {
        PyObject *tmp_assign_source_1022;
        PyObject *tmp_left_value_459;
        PyObject *tmp_right_value_459;
        tmp_left_value_459 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_459 == NULL)) {
            tmp_left_value_459 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_459 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1038;

            goto frame_exception_exit_1;
        }
        tmp_right_value_459 = mod_consts[560];
        tmp_assign_source_1022 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_459, tmp_right_value_459);
        if (tmp_assign_source_1022 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1038;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1198], tmp_assign_source_1022);
    }
    {
        PyObject *tmp_assign_source_1023;
        PyObject *tmp_left_value_460;
        PyObject *tmp_right_value_460;
        tmp_left_value_460 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_460 == NULL)) {
            tmp_left_value_460 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_460 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1039;

            goto frame_exception_exit_1;
        }
        tmp_right_value_460 = mod_consts[1199];
        tmp_assign_source_1023 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_460, tmp_right_value_460);
        if (tmp_assign_source_1023 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1039;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1200], tmp_assign_source_1023);
    }
    {
        PyObject *tmp_assign_source_1024;
        PyObject *tmp_left_value_461;
        PyObject *tmp_right_value_461;
        tmp_left_value_461 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_461 == NULL)) {
            tmp_left_value_461 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_461 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;

            goto frame_exception_exit_1;
        }
        tmp_right_value_461 = mod_consts[562];
        tmp_assign_source_1024 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_461, tmp_right_value_461);
        if (tmp_assign_source_1024 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1040;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1201], tmp_assign_source_1024);
    }
    {
        PyObject *tmp_assign_source_1025;
        PyObject *tmp_left_value_462;
        PyObject *tmp_right_value_462;
        tmp_left_value_462 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_left_value_462 == NULL)) {
            tmp_left_value_462 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_left_value_462 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1041;

            goto frame_exception_exit_1;
        }
        tmp_right_value_462 = mod_consts[1202];
        tmp_assign_source_1025 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_462, tmp_right_value_462);
        if (tmp_assign_source_1025 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1041;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1203], tmp_assign_source_1025);
    }
    {
        PyObject *tmp_assign_source_1026;
        tmp_assign_source_1026 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1204], tmp_assign_source_1026);
    }
    {
        PyObject *tmp_assign_source_1027;
        tmp_assign_source_1027 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1205], tmp_assign_source_1027);
    }
    {
        PyObject *tmp_assign_source_1028;
        tmp_assign_source_1028 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1206], tmp_assign_source_1028);
    }
    {
        PyObject *tmp_assign_source_1029;
        PyObject *tmp_left_value_463;
        PyObject *tmp_right_value_463;
        tmp_left_value_463 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_463 == NULL)) {
            tmp_left_value_463 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_463 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;

            goto frame_exception_exit_1;
        }
        tmp_right_value_463 = mod_consts[44];
        tmp_assign_source_1029 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_463, tmp_right_value_463);
        if (tmp_assign_source_1029 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1045;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1207], tmp_assign_source_1029);
    }
    {
        PyObject *tmp_assign_source_1030;
        PyObject *tmp_left_value_464;
        PyObject *tmp_right_value_464;
        tmp_left_value_464 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_464 == NULL)) {
            tmp_left_value_464 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_464 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;

            goto frame_exception_exit_1;
        }
        tmp_right_value_464 = mod_consts[10];
        tmp_assign_source_1030 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_464, tmp_right_value_464);
        if (tmp_assign_source_1030 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1208], tmp_assign_source_1030);
    }
    {
        PyObject *tmp_assign_source_1031;
        PyObject *tmp_left_value_465;
        PyObject *tmp_right_value_465;
        tmp_left_value_465 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_465 == NULL)) {
            tmp_left_value_465 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_465 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1047;

            goto frame_exception_exit_1;
        }
        tmp_right_value_465 = mod_consts[12];
        tmp_assign_source_1031 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_465, tmp_right_value_465);
        if (tmp_assign_source_1031 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1047;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1209], tmp_assign_source_1031);
    }
    {
        PyObject *tmp_assign_source_1032;
        PyObject *tmp_left_value_466;
        PyObject *tmp_right_value_466;
        tmp_left_value_466 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_466 == NULL)) {
            tmp_left_value_466 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_466 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;

            goto frame_exception_exit_1;
        }
        tmp_right_value_466 = mod_consts[120];
        tmp_assign_source_1032 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_466, tmp_right_value_466);
        if (tmp_assign_source_1032 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1048;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1210], tmp_assign_source_1032);
    }
    {
        PyObject *tmp_assign_source_1033;
        PyObject *tmp_left_value_467;
        PyObject *tmp_right_value_467;
        tmp_left_value_467 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_467 == NULL)) {
            tmp_left_value_467 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_467 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1049;

            goto frame_exception_exit_1;
        }
        tmp_right_value_467 = mod_consts[14];
        tmp_assign_source_1033 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_467, tmp_right_value_467);
        if (tmp_assign_source_1033 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1049;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1211], tmp_assign_source_1033);
    }
    {
        PyObject *tmp_assign_source_1034;
        PyObject *tmp_left_value_468;
        PyObject *tmp_right_value_468;
        tmp_left_value_468 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_468 == NULL)) {
            tmp_left_value_468 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_468 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1050;

            goto frame_exception_exit_1;
        }
        tmp_right_value_468 = mod_consts[123];
        tmp_assign_source_1034 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_468, tmp_right_value_468);
        if (tmp_assign_source_1034 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1050;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1212], tmp_assign_source_1034);
    }
    {
        PyObject *tmp_assign_source_1035;
        PyObject *tmp_left_value_469;
        PyObject *tmp_right_value_469;
        tmp_left_value_469 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_469 == NULL)) {
            tmp_left_value_469 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_469 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_right_value_469 = mod_consts[461];
        tmp_assign_source_1035 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_469, tmp_right_value_469);
        if (tmp_assign_source_1035 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1213], tmp_assign_source_1035);
    }
    {
        PyObject *tmp_assign_source_1036;
        PyObject *tmp_left_value_470;
        PyObject *tmp_right_value_470;
        tmp_left_value_470 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_470 == NULL)) {
            tmp_left_value_470 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_470 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;

            goto frame_exception_exit_1;
        }
        tmp_right_value_470 = mod_consts[125];
        tmp_assign_source_1036 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_470, tmp_right_value_470);
        if (tmp_assign_source_1036 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1214], tmp_assign_source_1036);
    }
    {
        PyObject *tmp_assign_source_1037;
        PyObject *tmp_left_value_471;
        PyObject *tmp_right_value_471;
        tmp_left_value_471 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_471 == NULL)) {
            tmp_left_value_471 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_471 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1053;

            goto frame_exception_exit_1;
        }
        tmp_right_value_471 = mod_consts[429];
        tmp_assign_source_1037 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_471, tmp_right_value_471);
        if (tmp_assign_source_1037 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1053;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1215], tmp_assign_source_1037);
    }
    {
        PyObject *tmp_assign_source_1038;
        PyObject *tmp_left_value_472;
        PyObject *tmp_right_value_472;
        tmp_left_value_472 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_472 == NULL)) {
            tmp_left_value_472 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_472 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;

            goto frame_exception_exit_1;
        }
        tmp_right_value_472 = mod_consts[0];
        tmp_assign_source_1038 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_472, tmp_right_value_472);
        if (tmp_assign_source_1038 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1054;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1216], tmp_assign_source_1038);
    }
    {
        PyObject *tmp_assign_source_1039;
        PyObject *tmp_left_value_473;
        PyObject *tmp_right_value_473;
        tmp_left_value_473 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_473 == NULL)) {
            tmp_left_value_473 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_473 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;

            goto frame_exception_exit_1;
        }
        tmp_right_value_473 = mod_consts[270];
        tmp_assign_source_1039 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_473, tmp_right_value_473);
        if (tmp_assign_source_1039 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1055;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1217], tmp_assign_source_1039);
    }
    {
        PyObject *tmp_assign_source_1040;
        PyObject *tmp_left_value_474;
        PyObject *tmp_right_value_474;
        tmp_left_value_474 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_474 == NULL)) {
            tmp_left_value_474 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_474 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1056;

            goto frame_exception_exit_1;
        }
        tmp_right_value_474 = mod_consts[252];
        tmp_assign_source_1040 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_474, tmp_right_value_474);
        if (tmp_assign_source_1040 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1056;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1218], tmp_assign_source_1040);
    }
    {
        PyObject *tmp_assign_source_1041;
        PyObject *tmp_left_value_475;
        PyObject *tmp_right_value_475;
        tmp_left_value_475 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_475 == NULL)) {
            tmp_left_value_475 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_475 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1057;

            goto frame_exception_exit_1;
        }
        tmp_right_value_475 = mod_consts[138];
        tmp_assign_source_1041 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_475, tmp_right_value_475);
        if (tmp_assign_source_1041 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1057;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1219], tmp_assign_source_1041);
    }
    {
        PyObject *tmp_assign_source_1042;
        PyObject *tmp_left_value_476;
        PyObject *tmp_right_value_476;
        tmp_left_value_476 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_476 == NULL)) {
            tmp_left_value_476 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_476 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1058;

            goto frame_exception_exit_1;
        }
        tmp_right_value_476 = mod_consts[475];
        tmp_assign_source_1042 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_476, tmp_right_value_476);
        if (tmp_assign_source_1042 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1058;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1220], tmp_assign_source_1042);
    }
    {
        PyObject *tmp_assign_source_1043;
        PyObject *tmp_left_value_477;
        PyObject *tmp_right_value_477;
        tmp_left_value_477 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_477 == NULL)) {
            tmp_left_value_477 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_477 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1059;

            goto frame_exception_exit_1;
        }
        tmp_right_value_477 = mod_consts[512];
        tmp_assign_source_1043 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_477, tmp_right_value_477);
        if (tmp_assign_source_1043 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1059;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1221], tmp_assign_source_1043);
    }
    {
        PyObject *tmp_assign_source_1044;
        PyObject *tmp_left_value_478;
        PyObject *tmp_right_value_478;
        tmp_left_value_478 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_478 == NULL)) {
            tmp_left_value_478 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_478 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto frame_exception_exit_1;
        }
        tmp_right_value_478 = mod_consts[140];
        tmp_assign_source_1044 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_478, tmp_right_value_478);
        if (tmp_assign_source_1044 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1060;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1222], tmp_assign_source_1044);
    }
    {
        PyObject *tmp_assign_source_1045;
        PyObject *tmp_left_value_479;
        PyObject *tmp_right_value_479;
        tmp_left_value_479 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_479 == NULL)) {
            tmp_left_value_479 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_479 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1061;

            goto frame_exception_exit_1;
        }
        tmp_right_value_479 = mod_consts[142];
        tmp_assign_source_1045 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_479, tmp_right_value_479);
        if (tmp_assign_source_1045 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1061;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1223], tmp_assign_source_1045);
    }
    {
        PyObject *tmp_assign_source_1046;
        tmp_assign_source_1046 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1220]);

        if (unlikely(tmp_assign_source_1046 == NULL)) {
            tmp_assign_source_1046 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1220]);
        }

        if (tmp_assign_source_1046 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1224], tmp_assign_source_1046);
    }
    {
        PyObject *tmp_assign_source_1047;
        PyObject *tmp_left_value_480;
        PyObject *tmp_right_value_480;
        tmp_left_value_480 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_480 == NULL)) {
            tmp_left_value_480 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_480 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1063;

            goto frame_exception_exit_1;
        }
        tmp_right_value_480 = mod_consts[284];
        tmp_assign_source_1047 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_480, tmp_right_value_480);
        if (tmp_assign_source_1047 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1063;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1225], tmp_assign_source_1047);
    }
    {
        PyObject *tmp_assign_source_1048;
        PyObject *tmp_left_value_481;
        PyObject *tmp_right_value_481;
        tmp_left_value_481 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_481 == NULL)) {
            tmp_left_value_481 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_481 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1064;

            goto frame_exception_exit_1;
        }
        tmp_right_value_481 = mod_consts[471];
        tmp_assign_source_1048 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_481, tmp_right_value_481);
        if (tmp_assign_source_1048 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1064;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1226], tmp_assign_source_1048);
    }
    {
        PyObject *tmp_assign_source_1049;
        PyObject *tmp_left_value_482;
        PyObject *tmp_right_value_482;
        tmp_left_value_482 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_482 == NULL)) {
            tmp_left_value_482 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_482 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto frame_exception_exit_1;
        }
        tmp_right_value_482 = mod_consts[433];
        tmp_assign_source_1049 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_482, tmp_right_value_482);
        if (tmp_assign_source_1049 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1227], tmp_assign_source_1049);
    }
    {
        PyObject *tmp_assign_source_1050;
        PyObject *tmp_left_value_483;
        PyObject *tmp_right_value_483;
        tmp_left_value_483 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_483 == NULL)) {
            tmp_left_value_483 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_483 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1066;

            goto frame_exception_exit_1;
        }
        tmp_right_value_483 = mod_consts[473];
        tmp_assign_source_1050 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_483, tmp_right_value_483);
        if (tmp_assign_source_1050 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1066;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1228], tmp_assign_source_1050);
    }
    {
        PyObject *tmp_assign_source_1051;
        PyObject *tmp_left_value_484;
        PyObject *tmp_right_value_484;
        tmp_left_value_484 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_484 == NULL)) {
            tmp_left_value_484 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_484 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1067;

            goto frame_exception_exit_1;
        }
        tmp_right_value_484 = mod_consts[508];
        tmp_assign_source_1051 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_484, tmp_right_value_484);
        if (tmp_assign_source_1051 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1067;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1229], tmp_assign_source_1051);
    }
    {
        PyObject *tmp_assign_source_1052;
        tmp_assign_source_1052 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1212]);

        if (unlikely(tmp_assign_source_1052 == NULL)) {
            tmp_assign_source_1052 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1212]);
        }

        if (tmp_assign_source_1052 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1068;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1230], tmp_assign_source_1052);
    }
    {
        PyObject *tmp_assign_source_1053;
        tmp_assign_source_1053 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1214]);

        if (unlikely(tmp_assign_source_1053 == NULL)) {
            tmp_assign_source_1053 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1214]);
        }

        if (tmp_assign_source_1053 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1069;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1231], tmp_assign_source_1053);
    }
    {
        PyObject *tmp_assign_source_1054;
        tmp_assign_source_1054 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1226]);

        if (unlikely(tmp_assign_source_1054 == NULL)) {
            tmp_assign_source_1054 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1226]);
        }

        if (tmp_assign_source_1054 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1070;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1232], tmp_assign_source_1054);
    }
    {
        PyObject *tmp_assign_source_1055;
        tmp_assign_source_1055 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1228]);

        if (unlikely(tmp_assign_source_1055 == NULL)) {
            tmp_assign_source_1055 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1228]);
        }

        if (tmp_assign_source_1055 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1071;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1233], tmp_assign_source_1055);
    }
    {
        PyObject *tmp_assign_source_1056;
        tmp_assign_source_1056 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1234], tmp_assign_source_1056);
    }
    {
        PyObject *tmp_assign_source_1057;
        PyObject *tmp_left_value_485;
        PyObject *tmp_right_value_485;
        tmp_left_value_485 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_485 == NULL)) {
            tmp_left_value_485 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_485 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1073;

            goto frame_exception_exit_1;
        }
        tmp_right_value_485 = mod_consts[481];
        tmp_assign_source_1057 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_485, tmp_right_value_485);
        if (tmp_assign_source_1057 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1073;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1235], tmp_assign_source_1057);
    }
    {
        PyObject *tmp_assign_source_1058;
        PyObject *tmp_left_value_486;
        PyObject *tmp_right_value_486;
        tmp_left_value_486 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_486 == NULL)) {
            tmp_left_value_486 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_486 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1074;

            goto frame_exception_exit_1;
        }
        tmp_right_value_486 = mod_consts[483];
        tmp_assign_source_1058 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_486, tmp_right_value_486);
        if (tmp_assign_source_1058 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1074;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1236], tmp_assign_source_1058);
    }
    {
        PyObject *tmp_assign_source_1059;
        tmp_assign_source_1059 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1237], tmp_assign_source_1059);
    }
    {
        PyObject *tmp_assign_source_1060;
        PyObject *tmp_left_value_487;
        PyObject *tmp_right_value_487;
        tmp_left_value_487 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_487 == NULL)) {
            tmp_left_value_487 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_487 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1076;

            goto frame_exception_exit_1;
        }
        tmp_right_value_487 = mod_consts[485];
        tmp_assign_source_1060 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_487, tmp_right_value_487);
        if (tmp_assign_source_1060 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1076;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1238], tmp_assign_source_1060);
    }
    {
        PyObject *tmp_assign_source_1061;
        PyObject *tmp_left_value_488;
        PyObject *tmp_right_value_488;
        tmp_left_value_488 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_left_value_488 == NULL)) {
            tmp_left_value_488 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_left_value_488 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;

            goto frame_exception_exit_1;
        }
        tmp_right_value_488 = mod_consts[487];
        tmp_assign_source_1061 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_488, tmp_right_value_488);
        if (tmp_assign_source_1061 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1077;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1239], tmp_assign_source_1061);
    }
    {
        PyObject *tmp_assign_source_1062;
        tmp_assign_source_1062 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1238]);

        if (unlikely(tmp_assign_source_1062 == NULL)) {
            tmp_assign_source_1062 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1238]);
        }

        if (tmp_assign_source_1062 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1078;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1240], tmp_assign_source_1062);
    }
    {
        PyObject *tmp_assign_source_1063;
        tmp_assign_source_1063 = mod_consts[1241];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1242], tmp_assign_source_1063);
    }
    {
        PyObject *tmp_assign_source_1064;
        tmp_assign_source_1064 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1242]);

        if (unlikely(tmp_assign_source_1064 == NULL)) {
            tmp_assign_source_1064 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1242]);
        }

        assert(!(tmp_assign_source_1064 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1243], tmp_assign_source_1064);
    }
    {
        PyObject *tmp_assign_source_1065;
        tmp_assign_source_1065 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1244], tmp_assign_source_1065);
    }
    {
        PyObject *tmp_assign_source_1066;
        tmp_assign_source_1066 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1245], tmp_assign_source_1066);
    }
    {
        PyObject *tmp_assign_source_1067;
        tmp_assign_source_1067 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1246], tmp_assign_source_1067);
    }
    {
        PyObject *tmp_assign_source_1068;
        tmp_assign_source_1068 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1247], tmp_assign_source_1068);
    }
    {
        PyObject *tmp_assign_source_1069;
        tmp_assign_source_1069 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1248], tmp_assign_source_1069);
    }
    {
        PyObject *tmp_assign_source_1070;
        tmp_assign_source_1070 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1249], tmp_assign_source_1070);
    }
    {
        PyObject *tmp_assign_source_1071;
        tmp_assign_source_1071 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1250], tmp_assign_source_1071);
    }
    {
        PyObject *tmp_assign_source_1072;
        tmp_assign_source_1072 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1251], tmp_assign_source_1072);
    }
    {
        PyObject *tmp_assign_source_1073;
        tmp_assign_source_1073 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1252], tmp_assign_source_1073);
    }
    {
        PyObject *tmp_assign_source_1074;
        tmp_assign_source_1074 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1253], tmp_assign_source_1074);
    }
    {
        PyObject *tmp_assign_source_1075;
        tmp_assign_source_1075 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1254], tmp_assign_source_1075);
    }
    {
        PyObject *tmp_assign_source_1076;
        tmp_assign_source_1076 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1255], tmp_assign_source_1076);
    }
    {
        PyObject *tmp_assign_source_1077;
        tmp_assign_source_1077 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1256], tmp_assign_source_1077);
    }
    {
        PyObject *tmp_assign_source_1078;
        tmp_assign_source_1078 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1257], tmp_assign_source_1078);
    }
    {
        PyObject *tmp_assign_source_1079;
        tmp_assign_source_1079 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1258], tmp_assign_source_1079);
    }
    {
        PyObject *tmp_assign_source_1080;
        tmp_assign_source_1080 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1259], tmp_assign_source_1080);
    }
    {
        PyObject *tmp_assign_source_1081;
        tmp_assign_source_1081 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1260], tmp_assign_source_1081);
    }
    {
        PyObject *tmp_assign_source_1082;
        tmp_assign_source_1082 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1261], tmp_assign_source_1082);
    }
    {
        PyObject *tmp_assign_source_1083;
        tmp_assign_source_1083 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1262], tmp_assign_source_1083);
    }
    {
        PyObject *tmp_assign_source_1084;
        tmp_assign_source_1084 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1263], tmp_assign_source_1084);
    }
    {
        PyObject *tmp_assign_source_1085;
        tmp_assign_source_1085 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1264], tmp_assign_source_1085);
    }
    {
        PyObject *tmp_assign_source_1086;
        tmp_assign_source_1086 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1265], tmp_assign_source_1086);
    }
    {
        PyObject *tmp_assign_source_1087;
        tmp_assign_source_1087 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1266], tmp_assign_source_1087);
    }
    {
        PyObject *tmp_assign_source_1088;
        tmp_assign_source_1088 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1267], tmp_assign_source_1088);
    }
    {
        PyObject *tmp_assign_source_1089;
        tmp_assign_source_1089 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1268], tmp_assign_source_1089);
    }
    {
        PyObject *tmp_assign_source_1090;
        tmp_assign_source_1090 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1269], tmp_assign_source_1090);
    }
    {
        PyObject *tmp_assign_source_1091;
        tmp_assign_source_1091 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1270], tmp_assign_source_1091);
    }
    {
        PyObject *tmp_assign_source_1092;
        tmp_assign_source_1092 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1271], tmp_assign_source_1092);
    }
    {
        PyObject *tmp_assign_source_1093;
        tmp_assign_source_1093 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1272], tmp_assign_source_1093);
    }
    {
        PyObject *tmp_assign_source_1094;
        tmp_assign_source_1094 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1273], tmp_assign_source_1094);
    }
    {
        PyObject *tmp_assign_source_1095;
        tmp_assign_source_1095 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1274], tmp_assign_source_1095);
    }
    {
        PyObject *tmp_assign_source_1096;
        tmp_assign_source_1096 = mod_consts[1022];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1275], tmp_assign_source_1096);
    }
    {
        PyObject *tmp_assign_source_1097;
        tmp_assign_source_1097 = mod_consts[1022];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1276], tmp_assign_source_1097);
    }
    {
        PyObject *tmp_assign_source_1098;
        tmp_assign_source_1098 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1277], tmp_assign_source_1098);
    }
    {
        PyObject *tmp_assign_source_1099;
        tmp_assign_source_1099 = mod_consts[1278];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1279], tmp_assign_source_1099);
    }
    {
        PyObject *tmp_assign_source_1100;
        tmp_assign_source_1100 = mod_consts[1280];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1281], tmp_assign_source_1100);
    }
    {
        PyObject *tmp_assign_source_1101;
        tmp_assign_source_1101 = mod_consts[1282];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1283], tmp_assign_source_1101);
    }
    {
        PyObject *tmp_assign_source_1102;
        tmp_assign_source_1102 = mod_consts[1284];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1285], tmp_assign_source_1102);
    }
    {
        PyObject *tmp_assign_source_1103;
        PyObject *tmp_left_value_489;
        PyObject *tmp_right_value_489;
        tmp_left_value_489 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_489 == NULL)) {
            tmp_left_value_489 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_489 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto frame_exception_exit_1;
        }
        tmp_right_value_489 = mod_consts[44];
        tmp_assign_source_1103 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_489, tmp_right_value_489);
        if (tmp_assign_source_1103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1286], tmp_assign_source_1103);
    }
    {
        PyObject *tmp_assign_source_1104;
        PyObject *tmp_left_value_490;
        PyObject *tmp_right_value_490;
        tmp_left_value_490 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_490 == NULL)) {
            tmp_left_value_490 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_490 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto frame_exception_exit_1;
        }
        tmp_right_value_490 = mod_consts[471];
        tmp_assign_source_1104 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_490, tmp_right_value_490);
        if (tmp_assign_source_1104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1287], tmp_assign_source_1104);
    }
    {
        PyObject *tmp_assign_source_1105;
        tmp_assign_source_1105 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1287]);

        if (unlikely(tmp_assign_source_1105 == NULL)) {
            tmp_assign_source_1105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1287]);
        }

        assert(!(tmp_assign_source_1105 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1288], tmp_assign_source_1105);
    }
    {
        PyObject *tmp_assign_source_1106;
        tmp_assign_source_1106 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1286]);

        if (unlikely(tmp_assign_source_1106 == NULL)) {
            tmp_assign_source_1106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1286]);
        }

        if (tmp_assign_source_1106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1288], tmp_assign_source_1106);
    }
    {
        PyObject *tmp_assign_source_1107;
        PyObject *tmp_left_value_491;
        PyObject *tmp_right_value_491;
        tmp_left_value_491 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_491 == NULL)) {
            tmp_left_value_491 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_491 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto frame_exception_exit_1;
        }
        tmp_right_value_491 = mod_consts[10];
        tmp_assign_source_1107 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_491, tmp_right_value_491);
        if (tmp_assign_source_1107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1289], tmp_assign_source_1107);
    }
    {
        PyObject *tmp_assign_source_1108;
        PyObject *tmp_left_value_492;
        PyObject *tmp_right_value_492;
        tmp_left_value_492 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_492 == NULL)) {
            tmp_left_value_492 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_492 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto frame_exception_exit_1;
        }
        tmp_right_value_492 = mod_consts[12];
        tmp_assign_source_1108 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_492, tmp_right_value_492);
        if (tmp_assign_source_1108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1290], tmp_assign_source_1108);
    }
    {
        PyObject *tmp_assign_source_1109;
        tmp_assign_source_1109 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1291], tmp_assign_source_1109);
    }
    {
        PyObject *tmp_assign_source_1110;
        tmp_assign_source_1110 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1292], tmp_assign_source_1110);
    }
    {
        PyObject *tmp_assign_source_1111;
        tmp_assign_source_1111 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1293], tmp_assign_source_1111);
    }
    {
        PyObject *tmp_assign_source_1112;
        tmp_assign_source_1112 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1294], tmp_assign_source_1112);
    }
    {
        PyObject *tmp_assign_source_1113;
        tmp_assign_source_1113 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1295], tmp_assign_source_1113);
    }
    {
        PyObject *tmp_assign_source_1114;
        PyObject *tmp_left_value_493;
        PyObject *tmp_right_value_493;
        tmp_left_value_493 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_493 == NULL)) {
            tmp_left_value_493 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_493 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto frame_exception_exit_1;
        }
        tmp_right_value_493 = mod_consts[14];
        tmp_assign_source_1114 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_493, tmp_right_value_493);
        if (tmp_assign_source_1114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1296], tmp_assign_source_1114);
    }
    {
        PyObject *tmp_assign_source_1115;
        PyObject *tmp_left_value_494;
        PyObject *tmp_right_value_494;
        tmp_left_value_494 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_494 == NULL)) {
            tmp_left_value_494 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_494 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto frame_exception_exit_1;
        }
        tmp_right_value_494 = mod_consts[123];
        tmp_assign_source_1115 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_494, tmp_right_value_494);
        if (tmp_assign_source_1115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1297], tmp_assign_source_1115);
    }
    {
        PyObject *tmp_assign_source_1116;
        PyObject *tmp_left_value_495;
        PyObject *tmp_right_value_495;
        tmp_left_value_495 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_495 == NULL)) {
            tmp_left_value_495 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_495 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto frame_exception_exit_1;
        }
        tmp_right_value_495 = mod_consts[125];
        tmp_assign_source_1116 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_495, tmp_right_value_495);
        if (tmp_assign_source_1116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1298], tmp_assign_source_1116);
    }
    {
        PyObject *tmp_assign_source_1117;
        PyObject *tmp_left_value_496;
        PyObject *tmp_right_value_496;
        tmp_left_value_496 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_496 == NULL)) {
            tmp_left_value_496 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_496 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto frame_exception_exit_1;
        }
        tmp_right_value_496 = mod_consts[134];
        tmp_assign_source_1117 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_496, tmp_right_value_496);
        if (tmp_assign_source_1117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1299], tmp_assign_source_1117);
    }
    {
        PyObject *tmp_assign_source_1118;
        PyObject *tmp_left_value_497;
        PyObject *tmp_right_value_497;
        tmp_left_value_497 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_497 == NULL)) {
            tmp_left_value_497 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_497 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto frame_exception_exit_1;
        }
        tmp_right_value_497 = mod_consts[0];
        tmp_assign_source_1118 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_497, tmp_right_value_497);
        if (tmp_assign_source_1118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1300], tmp_assign_source_1118);
    }
    {
        PyObject *tmp_assign_source_1119;
        tmp_assign_source_1119 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1301], tmp_assign_source_1119);
    }
    {
        PyObject *tmp_assign_source_1120;
        tmp_assign_source_1120 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1302], tmp_assign_source_1120);
    }
    {
        PyObject *tmp_assign_source_1121;
        PyObject *tmp_left_value_498;
        PyObject *tmp_right_value_498;
        tmp_left_value_498 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_498 == NULL)) {
            tmp_left_value_498 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_498 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1137;

            goto frame_exception_exit_1;
        }
        tmp_right_value_498 = mod_consts[270];
        tmp_assign_source_1121 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_498, tmp_right_value_498);
        if (tmp_assign_source_1121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1303], tmp_assign_source_1121);
    }
    {
        PyObject *tmp_assign_source_1122;
        PyObject *tmp_left_value_499;
        PyObject *tmp_right_value_499;
        tmp_left_value_499 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_499 == NULL)) {
            tmp_left_value_499 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_499 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto frame_exception_exit_1;
        }
        tmp_right_value_499 = mod_consts[247];
        tmp_assign_source_1122 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_499, tmp_right_value_499);
        if (tmp_assign_source_1122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1304], tmp_assign_source_1122);
    }
    {
        PyObject *tmp_assign_source_1123;
        tmp_assign_source_1123 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1305], tmp_assign_source_1123);
    }
    {
        PyObject *tmp_assign_source_1124;
        tmp_assign_source_1124 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1306], tmp_assign_source_1124);
    }
    {
        PyObject *tmp_assign_source_1125;
        tmp_assign_source_1125 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1307], tmp_assign_source_1125);
    }
    {
        PyObject *tmp_assign_source_1126;
        tmp_assign_source_1126 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1308], tmp_assign_source_1126);
    }
    {
        PyObject *tmp_assign_source_1127;
        tmp_assign_source_1127 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1309], tmp_assign_source_1127);
    }
    {
        PyObject *tmp_assign_source_1128;
        tmp_assign_source_1128 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1310], tmp_assign_source_1128);
    }
    {
        PyObject *tmp_assign_source_1129;
        tmp_assign_source_1129 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1311], tmp_assign_source_1129);
    }
    {
        PyObject *tmp_assign_source_1130;
        tmp_assign_source_1130 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1312], tmp_assign_source_1130);
    }
    {
        PyObject *tmp_assign_source_1131;
        tmp_assign_source_1131 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1313], tmp_assign_source_1131);
    }
    {
        PyObject *tmp_assign_source_1132;
        tmp_assign_source_1132 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1314], tmp_assign_source_1132);
    }
    {
        PyObject *tmp_assign_source_1133;
        tmp_assign_source_1133 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1315], tmp_assign_source_1133);
    }
    {
        PyObject *tmp_assign_source_1134;
        PyObject *tmp_left_value_500;
        PyObject *tmp_right_value_500;
        tmp_left_value_500 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_500 == NULL)) {
            tmp_left_value_500 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_500 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;

            goto frame_exception_exit_1;
        }
        tmp_right_value_500 = mod_consts[252];
        tmp_assign_source_1134 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_500, tmp_right_value_500);
        if (tmp_assign_source_1134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1316], tmp_assign_source_1134);
    }
    {
        PyObject *tmp_assign_source_1135;
        PyObject *tmp_left_value_501;
        PyObject *tmp_right_value_501;
        tmp_left_value_501 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_501 == NULL)) {
            tmp_left_value_501 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_501 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;

            goto frame_exception_exit_1;
        }
        tmp_right_value_501 = mod_consts[1];
        tmp_assign_source_1135 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_501, tmp_right_value_501);
        if (tmp_assign_source_1135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1317], tmp_assign_source_1135);
    }
    {
        PyObject *tmp_assign_source_1136;
        PyObject *tmp_left_value_502;
        PyObject *tmp_right_value_502;
        tmp_left_value_502 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_502 == NULL)) {
            tmp_left_value_502 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_502 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;

            goto frame_exception_exit_1;
        }
        tmp_right_value_502 = mod_consts[498];
        tmp_assign_source_1136 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_502, tmp_right_value_502);
        if (tmp_assign_source_1136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1318], tmp_assign_source_1136);
    }
    {
        PyObject *tmp_assign_source_1137;
        tmp_assign_source_1137 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1318]);

        if (unlikely(tmp_assign_source_1137 == NULL)) {
            tmp_assign_source_1137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1318]);
        }

        assert(!(tmp_assign_source_1137 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1319], tmp_assign_source_1137);
    }
    {
        PyObject *tmp_assign_source_1138;
        tmp_assign_source_1138 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1317]);

        if (unlikely(tmp_assign_source_1138 == NULL)) {
            tmp_assign_source_1138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1317]);
        }

        if (tmp_assign_source_1138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1319], tmp_assign_source_1138);
    }
    {
        PyObject *tmp_assign_source_1139;
        PyObject *tmp_left_value_503;
        PyObject *tmp_right_value_503;
        tmp_left_value_503 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_503 == NULL)) {
            tmp_left_value_503 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_503 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        tmp_right_value_503 = mod_consts[138];
        tmp_assign_source_1139 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_503, tmp_right_value_503);
        if (tmp_assign_source_1139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1320], tmp_assign_source_1139);
    }
    {
        PyObject *tmp_assign_source_1140;
        PyObject *tmp_left_value_504;
        PyObject *tmp_right_value_504;
        tmp_left_value_504 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_504 == NULL)) {
            tmp_left_value_504 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_504 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1156;

            goto frame_exception_exit_1;
        }
        tmp_right_value_504 = mod_consts[551];
        tmp_assign_source_1140 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_504, tmp_right_value_504);
        if (tmp_assign_source_1140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1321], tmp_assign_source_1140);
    }
    {
        PyObject *tmp_assign_source_1141;
        tmp_assign_source_1141 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1321]);

        if (unlikely(tmp_assign_source_1141 == NULL)) {
            tmp_assign_source_1141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1321]);
        }

        assert(!(tmp_assign_source_1141 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1322], tmp_assign_source_1141);
    }
    {
        PyObject *tmp_assign_source_1142;
        tmp_assign_source_1142 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1320]);

        if (unlikely(tmp_assign_source_1142 == NULL)) {
            tmp_assign_source_1142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1320]);
        }

        if (tmp_assign_source_1142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1322], tmp_assign_source_1142);
    }
    {
        PyObject *tmp_assign_source_1143;
        PyObject *tmp_left_value_505;
        PyObject *tmp_right_value_505;
        tmp_left_value_505 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_505 == NULL)) {
            tmp_left_value_505 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_505 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1159;

            goto frame_exception_exit_1;
        }
        tmp_right_value_505 = mod_consts[140];
        tmp_assign_source_1143 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_505, tmp_right_value_505);
        if (tmp_assign_source_1143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1323], tmp_assign_source_1143);
    }
    {
        PyObject *tmp_assign_source_1144;
        PyObject *tmp_left_value_506;
        PyObject *tmp_right_value_506;
        tmp_left_value_506 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_506 == NULL)) {
            tmp_left_value_506 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_506 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1160;

            goto frame_exception_exit_1;
        }
        tmp_right_value_506 = mod_consts[554];
        tmp_assign_source_1144 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_506, tmp_right_value_506);
        if (tmp_assign_source_1144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1324], tmp_assign_source_1144);
    }
    {
        PyObject *tmp_assign_source_1145;
        tmp_assign_source_1145 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1324]);

        if (unlikely(tmp_assign_source_1145 == NULL)) {
            tmp_assign_source_1145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1324]);
        }

        assert(!(tmp_assign_source_1145 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1325], tmp_assign_source_1145);
    }
    {
        PyObject *tmp_assign_source_1146;
        tmp_assign_source_1146 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1323]);

        if (unlikely(tmp_assign_source_1146 == NULL)) {
            tmp_assign_source_1146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1323]);
        }

        if (tmp_assign_source_1146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1325], tmp_assign_source_1146);
    }
    {
        PyObject *tmp_assign_source_1147;
        PyObject *tmp_left_value_507;
        PyObject *tmp_right_value_507;
        tmp_left_value_507 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_507 == NULL)) {
            tmp_left_value_507 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_507 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1163;

            goto frame_exception_exit_1;
        }
        tmp_right_value_507 = mod_consts[142];
        tmp_assign_source_1147 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_507, tmp_right_value_507);
        if (tmp_assign_source_1147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1326], tmp_assign_source_1147);
    }
    {
        PyObject *tmp_assign_source_1148;
        PyObject *tmp_left_value_508;
        PyObject *tmp_right_value_508;
        tmp_left_value_508 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_508 == NULL)) {
            tmp_left_value_508 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_508 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto frame_exception_exit_1;
        }
        tmp_right_value_508 = mod_consts[17];
        tmp_assign_source_1148 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_508, tmp_right_value_508);
        if (tmp_assign_source_1148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1327], tmp_assign_source_1148);
    }
    {
        PyObject *tmp_assign_source_1149;
        PyObject *tmp_left_value_509;
        PyObject *tmp_right_value_509;
        tmp_left_value_509 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_509 == NULL)) {
            tmp_left_value_509 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_509 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;

            goto frame_exception_exit_1;
        }
        tmp_right_value_509 = mod_consts[145];
        tmp_assign_source_1149 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_509, tmp_right_value_509);
        if (tmp_assign_source_1149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1328], tmp_assign_source_1149);
    }
    {
        PyObject *tmp_assign_source_1150;
        tmp_assign_source_1150 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1329], tmp_assign_source_1150);
    }
    {
        PyObject *tmp_assign_source_1151;
        tmp_assign_source_1151 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1330], tmp_assign_source_1151);
    }
    {
        PyObject *tmp_assign_source_1152;
        tmp_assign_source_1152 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1331], tmp_assign_source_1152);
    }
    {
        PyObject *tmp_assign_source_1153;
        tmp_assign_source_1153 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1332], tmp_assign_source_1153);
    }
    {
        PyObject *tmp_assign_source_1154;
        tmp_assign_source_1154 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1333], tmp_assign_source_1154);
    }
    {
        PyObject *tmp_assign_source_1155;
        tmp_assign_source_1155 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1334], tmp_assign_source_1155);
    }
    {
        PyObject *tmp_assign_source_1156;
        tmp_assign_source_1156 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1335], tmp_assign_source_1156);
    }
    {
        PyObject *tmp_assign_source_1157;
        tmp_assign_source_1157 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1336], tmp_assign_source_1157);
    }
    {
        PyObject *tmp_assign_source_1158;
        tmp_assign_source_1158 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1337], tmp_assign_source_1158);
    }
    {
        PyObject *tmp_assign_source_1159;
        tmp_assign_source_1159 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1338], tmp_assign_source_1159);
    }
    {
        PyObject *tmp_assign_source_1160;
        tmp_assign_source_1160 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1339], tmp_assign_source_1160);
    }
    {
        PyObject *tmp_assign_source_1161;
        PyObject *tmp_left_value_510;
        PyObject *tmp_left_value_511;
        PyObject *tmp_right_value_510;
        PyObject *tmp_right_value_511;
        tmp_left_value_511 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1330]);

        if (unlikely(tmp_left_value_511 == NULL)) {
            tmp_left_value_511 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1330]);
        }

        assert(!(tmp_left_value_511 == NULL));
        tmp_right_value_510 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1331]);

        if (unlikely(tmp_right_value_510 == NULL)) {
            tmp_right_value_510 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1331]);
        }

        assert(!(tmp_right_value_510 == NULL));
        tmp_left_value_510 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_511, tmp_right_value_510);
        assert(!(tmp_left_value_510 == NULL));
        tmp_right_value_511 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1335]);

        if (unlikely(tmp_right_value_511 == NULL)) {
            tmp_right_value_511 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1335]);
        }

        assert(!(tmp_right_value_511 == NULL));
        tmp_assign_source_1161 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_510, tmp_right_value_511);
        Py_DECREF(tmp_left_value_510);
        assert(!(tmp_assign_source_1161 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1340], tmp_assign_source_1161);
    }
    {
        PyObject *tmp_assign_source_1162;
        PyObject *tmp_left_value_512;
        PyObject *tmp_right_value_512;
        tmp_left_value_512 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_512 == NULL)) {
            tmp_left_value_512 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_512 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1178;

            goto frame_exception_exit_1;
        }
        tmp_right_value_512 = mod_consts[147];
        tmp_assign_source_1162 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_512, tmp_right_value_512);
        if (tmp_assign_source_1162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1341], tmp_assign_source_1162);
    }
    {
        PyObject *tmp_assign_source_1163;
        PyObject *tmp_left_value_513;
        PyObject *tmp_right_value_513;
        tmp_left_value_513 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_513 == NULL)) {
            tmp_left_value_513 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_513 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1179;

            goto frame_exception_exit_1;
        }
        tmp_right_value_513 = mod_consts[276];
        tmp_assign_source_1163 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_513, tmp_right_value_513);
        if (tmp_assign_source_1163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1342], tmp_assign_source_1163);
    }
    {
        PyObject *tmp_assign_source_1164;
        PyObject *tmp_left_value_514;
        PyObject *tmp_right_value_514;
        tmp_left_value_514 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_514 == NULL)) {
            tmp_left_value_514 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_514 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1180;

            goto frame_exception_exit_1;
        }
        tmp_right_value_514 = mod_consts[281];
        tmp_assign_source_1164 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_514, tmp_right_value_514);
        if (tmp_assign_source_1164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1343], tmp_assign_source_1164);
    }
    {
        PyObject *tmp_assign_source_1165;
        PyObject *tmp_left_value_515;
        PyObject *tmp_right_value_515;
        tmp_left_value_515 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_515 == NULL)) {
            tmp_left_value_515 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_515 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1181;

            goto frame_exception_exit_1;
        }
        tmp_right_value_515 = mod_consts[284];
        tmp_assign_source_1165 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_515, tmp_right_value_515);
        if (tmp_assign_source_1165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1344], tmp_assign_source_1165);
    }
    {
        PyObject *tmp_assign_source_1166;
        PyObject *tmp_left_value_516;
        PyObject *tmp_right_value_516;
        tmp_left_value_516 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_516 == NULL)) {
            tmp_left_value_516 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_516 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1182;

            goto frame_exception_exit_1;
        }
        tmp_right_value_516 = mod_consts[287];
        tmp_assign_source_1166 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_516, tmp_right_value_516);
        if (tmp_assign_source_1166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1345], tmp_assign_source_1166);
    }
    {
        PyObject *tmp_assign_source_1167;
        PyObject *tmp_left_value_517;
        PyObject *tmp_right_value_517;
        tmp_left_value_517 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_517 == NULL)) {
            tmp_left_value_517 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_517 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1183;

            goto frame_exception_exit_1;
        }
        tmp_right_value_517 = mod_consts[290];
        tmp_assign_source_1167 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_517, tmp_right_value_517);
        if (tmp_assign_source_1167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1346], tmp_assign_source_1167);
    }
    {
        PyObject *tmp_assign_source_1168;
        PyObject *tmp_left_value_518;
        PyObject *tmp_right_value_518;
        tmp_left_value_518 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_518 == NULL)) {
            tmp_left_value_518 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_518 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1184;

            goto frame_exception_exit_1;
        }
        tmp_right_value_518 = mod_consts[21];
        tmp_assign_source_1168 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_518, tmp_right_value_518);
        if (tmp_assign_source_1168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1347], tmp_assign_source_1168);
    }
    {
        PyObject *tmp_assign_source_1169;
        tmp_assign_source_1169 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1346]);

        if (unlikely(tmp_assign_source_1169 == NULL)) {
            tmp_assign_source_1169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1346]);
        }

        if (tmp_assign_source_1169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1348], tmp_assign_source_1169);
    }
    {
        PyObject *tmp_assign_source_1170;
        PyObject *tmp_left_value_519;
        PyObject *tmp_right_value_519;
        tmp_left_value_519 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_519 == NULL)) {
            tmp_left_value_519 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_519 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1186;

            goto frame_exception_exit_1;
        }
        tmp_right_value_519 = mod_consts[196];
        tmp_assign_source_1170 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_519, tmp_right_value_519);
        if (tmp_assign_source_1170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1349], tmp_assign_source_1170);
    }
    {
        PyObject *tmp_assign_source_1171;
        PyObject *tmp_left_value_520;
        PyObject *tmp_right_value_520;
        tmp_left_value_520 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_520 == NULL)) {
            tmp_left_value_520 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_520 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1187;

            goto frame_exception_exit_1;
        }
        tmp_right_value_520 = mod_consts[293];
        tmp_assign_source_1171 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_520, tmp_right_value_520);
        if (tmp_assign_source_1171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1187;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1350], tmp_assign_source_1171);
    }
    {
        PyObject *tmp_assign_source_1172;
        PyObject *tmp_left_value_521;
        PyObject *tmp_right_value_521;
        tmp_left_value_521 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_521 == NULL)) {
            tmp_left_value_521 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_521 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1188;

            goto frame_exception_exit_1;
        }
        tmp_right_value_521 = mod_consts[296];
        tmp_assign_source_1172 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_521, tmp_right_value_521);
        if (tmp_assign_source_1172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1351], tmp_assign_source_1172);
    }
    {
        PyObject *tmp_assign_source_1173;
        tmp_assign_source_1173 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_1173 == NULL)) {
            tmp_assign_source_1173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_assign_source_1173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1352], tmp_assign_source_1173);
    }
    {
        PyObject *tmp_assign_source_1174;
        tmp_assign_source_1174 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_1174 == NULL)) {
            tmp_assign_source_1174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_assign_source_1174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1353], tmp_assign_source_1174);
    }
    {
        PyObject *tmp_assign_source_1175;
        PyObject *tmp_left_value_522;
        PyObject *tmp_right_value_522;
        tmp_left_value_522 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_522 == NULL)) {
            tmp_left_value_522 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_522 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1191;

            goto frame_exception_exit_1;
        }
        tmp_right_value_522 = mod_consts[299];
        tmp_assign_source_1175 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_522, tmp_right_value_522);
        if (tmp_assign_source_1175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1354], tmp_assign_source_1175);
    }
    {
        PyObject *tmp_assign_source_1176;
        PyObject *tmp_left_value_523;
        PyObject *tmp_right_value_523;
        tmp_left_value_523 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_523 == NULL)) {
            tmp_left_value_523 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_523 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1192;

            goto frame_exception_exit_1;
        }
        tmp_right_value_523 = mod_consts[302];
        tmp_assign_source_1176 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_523, tmp_right_value_523);
        if (tmp_assign_source_1176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1355], tmp_assign_source_1176);
    }
    {
        PyObject *tmp_assign_source_1177;
        PyObject *tmp_left_value_524;
        PyObject *tmp_right_value_524;
        tmp_left_value_524 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_524 == NULL)) {
            tmp_left_value_524 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_524 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1193;

            goto frame_exception_exit_1;
        }
        tmp_right_value_524 = mod_consts[305];
        tmp_assign_source_1177 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_524, tmp_right_value_524);
        if (tmp_assign_source_1177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1356], tmp_assign_source_1177);
    }
    {
        PyObject *tmp_assign_source_1178;
        PyObject *tmp_left_value_525;
        PyObject *tmp_right_value_525;
        tmp_left_value_525 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_525 == NULL)) {
            tmp_left_value_525 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_525 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1194;

            goto frame_exception_exit_1;
        }
        tmp_right_value_525 = mod_consts[436];
        tmp_assign_source_1178 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_525, tmp_right_value_525);
        if (tmp_assign_source_1178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1357], tmp_assign_source_1178);
    }
    {
        PyObject *tmp_assign_source_1179;
        PyObject *tmp_left_value_526;
        PyObject *tmp_right_value_526;
        tmp_left_value_526 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_526 == NULL)) {
            tmp_left_value_526 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_526 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1195;

            goto frame_exception_exit_1;
        }
        tmp_right_value_526 = mod_consts[438];
        tmp_assign_source_1179 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_526, tmp_right_value_526);
        if (tmp_assign_source_1179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1358], tmp_assign_source_1179);
    }
    {
        PyObject *tmp_assign_source_1180;
        PyObject *tmp_left_value_527;
        PyObject *tmp_right_value_527;
        tmp_left_value_527 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_527 == NULL)) {
            tmp_left_value_527 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_527 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1196;

            goto frame_exception_exit_1;
        }
        tmp_right_value_527 = mod_consts[19];
        tmp_assign_source_1180 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_527, tmp_right_value_527);
        if (tmp_assign_source_1180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1359], tmp_assign_source_1180);
    }
    {
        PyObject *tmp_assign_source_1181;
        PyObject *tmp_left_value_528;
        PyObject *tmp_right_value_528;
        tmp_left_value_528 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_528 == NULL)) {
            tmp_left_value_528 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_528 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1197;

            goto frame_exception_exit_1;
        }
        tmp_right_value_528 = mod_consts[441];
        tmp_assign_source_1181 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_528, tmp_right_value_528);
        if (tmp_assign_source_1181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1360], tmp_assign_source_1181);
    }
    {
        PyObject *tmp_assign_source_1182;
        PyObject *tmp_left_value_529;
        PyObject *tmp_right_value_529;
        tmp_left_value_529 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_529 == NULL)) {
            tmp_left_value_529 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_529 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1198;

            goto frame_exception_exit_1;
        }
        tmp_right_value_529 = mod_consts[671];
        tmp_assign_source_1182 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_529, tmp_right_value_529);
        if (tmp_assign_source_1182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1361], tmp_assign_source_1182);
    }
    {
        PyObject *tmp_assign_source_1183;
        PyObject *tmp_left_value_530;
        PyObject *tmp_right_value_530;
        tmp_left_value_530 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_530 == NULL)) {
            tmp_left_value_530 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_530 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1199;

            goto frame_exception_exit_1;
        }
        tmp_right_value_530 = mod_consts[447];
        tmp_assign_source_1183 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_530, tmp_right_value_530);
        if (tmp_assign_source_1183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1362], tmp_assign_source_1183);
    }
    {
        PyObject *tmp_assign_source_1184;
        PyObject *tmp_left_value_531;
        PyObject *tmp_right_value_531;
        tmp_left_value_531 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_531 == NULL)) {
            tmp_left_value_531 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_left_value_531 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1200;

            goto frame_exception_exit_1;
        }
        tmp_right_value_531 = mod_consts[675];
        tmp_assign_source_1184 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_531, tmp_right_value_531);
        if (tmp_assign_source_1184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1363], tmp_assign_source_1184);
    }
    {
        PyObject *tmp_assign_source_1185;
        PyObject *tmp_left_value_532;
        PyObject *tmp_right_value_532;
        tmp_left_value_532 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_532 == NULL)) {
            tmp_left_value_532 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_532 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1201;

            goto frame_exception_exit_1;
        }
        tmp_right_value_532 = mod_consts[10];
        tmp_assign_source_1185 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_532, tmp_right_value_532);
        if (tmp_assign_source_1185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1364], tmp_assign_source_1185);
    }
    {
        PyObject *tmp_assign_source_1186;
        PyObject *tmp_left_value_533;
        PyObject *tmp_right_value_533;
        tmp_left_value_533 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_533 == NULL)) {
            tmp_left_value_533 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_533 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1202;

            goto frame_exception_exit_1;
        }
        tmp_right_value_533 = mod_consts[471];
        tmp_assign_source_1186 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_533, tmp_right_value_533);
        if (tmp_assign_source_1186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1365], tmp_assign_source_1186);
    }
    {
        PyObject *tmp_assign_source_1187;
        PyObject *tmp_left_value_534;
        PyObject *tmp_right_value_534;
        tmp_left_value_534 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_534 == NULL)) {
            tmp_left_value_534 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_534 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1203;

            goto frame_exception_exit_1;
        }
        tmp_right_value_534 = mod_consts[12];
        tmp_assign_source_1187 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_534, tmp_right_value_534);
        if (tmp_assign_source_1187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1203;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1366], tmp_assign_source_1187);
    }
    {
        PyObject *tmp_assign_source_1188;
        PyObject *tmp_left_value_535;
        PyObject *tmp_right_value_535;
        tmp_left_value_535 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_535 == NULL)) {
            tmp_left_value_535 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_535 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1204;

            goto frame_exception_exit_1;
        }
        tmp_right_value_535 = mod_consts[473];
        tmp_assign_source_1188 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_535, tmp_right_value_535);
        if (tmp_assign_source_1188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1367], tmp_assign_source_1188);
    }
    {
        PyObject *tmp_assign_source_1189;
        tmp_assign_source_1189 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1368], tmp_assign_source_1189);
    }
    {
        PyObject *tmp_assign_source_1190;
        tmp_assign_source_1190 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1369], tmp_assign_source_1190);
    }
    {
        PyObject *tmp_assign_source_1191;
        tmp_assign_source_1191 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1370], tmp_assign_source_1191);
    }
    {
        PyObject *tmp_assign_source_1192;
        PyObject *tmp_left_value_536;
        PyObject *tmp_right_value_536;
        tmp_left_value_536 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_536 == NULL)) {
            tmp_left_value_536 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_536 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1208;

            goto frame_exception_exit_1;
        }
        tmp_right_value_536 = mod_consts[120];
        tmp_assign_source_1192 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_536, tmp_right_value_536);
        if (tmp_assign_source_1192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1371], tmp_assign_source_1192);
    }
    {
        PyObject *tmp_assign_source_1193;
        PyObject *tmp_left_value_537;
        PyObject *tmp_right_value_537;
        tmp_left_value_537 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_537 == NULL)) {
            tmp_left_value_537 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_537 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1209;

            goto frame_exception_exit_1;
        }
        tmp_right_value_537 = mod_consts[475];
        tmp_assign_source_1193 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_537, tmp_right_value_537);
        if (tmp_assign_source_1193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1372], tmp_assign_source_1193);
    }
    {
        PyObject *tmp_assign_source_1194;
        PyObject *tmp_left_value_538;
        PyObject *tmp_right_value_538;
        tmp_left_value_538 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_538 == NULL)) {
            tmp_left_value_538 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_538 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1210;

            goto frame_exception_exit_1;
        }
        tmp_right_value_538 = mod_consts[14];
        tmp_assign_source_1194 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_538, tmp_right_value_538);
        if (tmp_assign_source_1194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1210;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1373], tmp_assign_source_1194);
    }
    {
        PyObject *tmp_assign_source_1195;
        PyObject *tmp_left_value_539;
        PyObject *tmp_right_value_539;
        tmp_left_value_539 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_539 == NULL)) {
            tmp_left_value_539 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_539 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1211;

            goto frame_exception_exit_1;
        }
        tmp_right_value_539 = mod_consts[477];
        tmp_assign_source_1195 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_539, tmp_right_value_539);
        if (tmp_assign_source_1195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1374], tmp_assign_source_1195);
    }
    {
        PyObject *tmp_assign_source_1196;
        tmp_assign_source_1196 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1375], tmp_assign_source_1196);
    }
    {
        PyObject *tmp_assign_source_1197;
        PyObject *tmp_left_value_540;
        PyObject *tmp_right_value_540;
        tmp_left_value_540 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_540 == NULL)) {
            tmp_left_value_540 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_540 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1213;

            goto frame_exception_exit_1;
        }
        tmp_right_value_540 = mod_consts[123];
        tmp_assign_source_1197 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_540, tmp_right_value_540);
        if (tmp_assign_source_1197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1213;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1376], tmp_assign_source_1197);
    }
    {
        PyObject *tmp_assign_source_1198;
        PyObject *tmp_left_value_541;
        PyObject *tmp_right_value_541;
        tmp_left_value_541 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_541 == NULL)) {
            tmp_left_value_541 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_541 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1214;

            goto frame_exception_exit_1;
        }
        tmp_right_value_541 = mod_consts[479];
        tmp_assign_source_1198 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_541, tmp_right_value_541);
        if (tmp_assign_source_1198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1214;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1377], tmp_assign_source_1198);
    }
    {
        PyObject *tmp_assign_source_1199;
        PyObject *tmp_left_value_542;
        PyObject *tmp_right_value_542;
        tmp_left_value_542 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_542 == NULL)) {
            tmp_left_value_542 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_542 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1215;

            goto frame_exception_exit_1;
        }
        tmp_right_value_542 = mod_consts[125];
        tmp_assign_source_1199 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_542, tmp_right_value_542);
        if (tmp_assign_source_1199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1215;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1378], tmp_assign_source_1199);
    }
    {
        PyObject *tmp_assign_source_1200;
        PyObject *tmp_left_value_543;
        PyObject *tmp_right_value_543;
        tmp_left_value_543 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_543 == NULL)) {
            tmp_left_value_543 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_543 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1216;

            goto frame_exception_exit_1;
        }
        tmp_right_value_543 = mod_consts[481];
        tmp_assign_source_1200 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_543, tmp_right_value_543);
        if (tmp_assign_source_1200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1216;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1379], tmp_assign_source_1200);
    }
    {
        PyObject *tmp_assign_source_1201;
        PyObject *tmp_left_value_544;
        PyObject *tmp_right_value_544;
        tmp_left_value_544 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_544 == NULL)) {
            tmp_left_value_544 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_544 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1217;

            goto frame_exception_exit_1;
        }
        tmp_right_value_544 = mod_consts[134];
        tmp_assign_source_1201 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_544, tmp_right_value_544);
        if (tmp_assign_source_1201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1217;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1380], tmp_assign_source_1201);
    }
    {
        PyObject *tmp_assign_source_1202;
        PyObject *tmp_left_value_545;
        PyObject *tmp_right_value_545;
        tmp_left_value_545 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_545 == NULL)) {
            tmp_left_value_545 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_545 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1218;

            goto frame_exception_exit_1;
        }
        tmp_right_value_545 = mod_consts[483];
        tmp_assign_source_1202 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_545, tmp_right_value_545);
        if (tmp_assign_source_1202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1381], tmp_assign_source_1202);
    }
    {
        PyObject *tmp_assign_source_1203;
        PyObject *tmp_left_value_546;
        PyObject *tmp_right_value_546;
        tmp_left_value_546 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_546 == NULL)) {
            tmp_left_value_546 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_546 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1219;

            goto frame_exception_exit_1;
        }
        tmp_right_value_546 = mod_consts[0];
        tmp_assign_source_1203 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_546, tmp_right_value_546);
        if (tmp_assign_source_1203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1219;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1382], tmp_assign_source_1203);
    }
    {
        PyObject *tmp_assign_source_1204;
        PyObject *tmp_left_value_547;
        PyObject *tmp_right_value_547;
        tmp_left_value_547 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_547 == NULL)) {
            tmp_left_value_547 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_547 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1220;

            goto frame_exception_exit_1;
        }
        tmp_right_value_547 = mod_consts[485];
        tmp_assign_source_1204 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_547, tmp_right_value_547);
        if (tmp_assign_source_1204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1220;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1383], tmp_assign_source_1204);
    }
    {
        PyObject *tmp_assign_source_1205;
        PyObject *tmp_left_value_548;
        PyObject *tmp_right_value_548;
        tmp_left_value_548 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_548 == NULL)) {
            tmp_left_value_548 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_548 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1221;

            goto frame_exception_exit_1;
        }
        tmp_right_value_548 = mod_consts[270];
        tmp_assign_source_1205 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_548, tmp_right_value_548);
        if (tmp_assign_source_1205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1384], tmp_assign_source_1205);
    }
    {
        PyObject *tmp_assign_source_1206;
        PyObject *tmp_left_value_549;
        PyObject *tmp_right_value_549;
        tmp_left_value_549 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_549 == NULL)) {
            tmp_left_value_549 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_549 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1222;

            goto frame_exception_exit_1;
        }
        tmp_right_value_549 = mod_consts[487];
        tmp_assign_source_1206 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_549, tmp_right_value_549);
        if (tmp_assign_source_1206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1222;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1385], tmp_assign_source_1206);
    }
    {
        PyObject *tmp_assign_source_1207;
        PyObject *tmp_left_value_550;
        PyObject *tmp_right_value_550;
        tmp_left_value_550 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_550 == NULL)) {
            tmp_left_value_550 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_550 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1223;

            goto frame_exception_exit_1;
        }
        tmp_right_value_550 = mod_consts[247];
        tmp_assign_source_1207 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_550, tmp_right_value_550);
        if (tmp_assign_source_1207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1223;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1386], tmp_assign_source_1207);
    }
    {
        PyObject *tmp_assign_source_1208;
        PyObject *tmp_left_value_551;
        PyObject *tmp_right_value_551;
        tmp_left_value_551 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_551 == NULL)) {
            tmp_left_value_551 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_551 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1224;

            goto frame_exception_exit_1;
        }
        tmp_right_value_551 = mod_consts[489];
        tmp_assign_source_1208 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_551, tmp_right_value_551);
        if (tmp_assign_source_1208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1387], tmp_assign_source_1208);
    }
    {
        PyObject *tmp_assign_source_1209;
        PyObject *tmp_left_value_552;
        PyObject *tmp_right_value_552;
        tmp_left_value_552 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_552 == NULL)) {
            tmp_left_value_552 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_552 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1225;

            goto frame_exception_exit_1;
        }
        tmp_right_value_552 = mod_consts[252];
        tmp_assign_source_1209 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_552, tmp_right_value_552);
        if (tmp_assign_source_1209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1225;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1388], tmp_assign_source_1209);
    }
    {
        PyObject *tmp_assign_source_1210;
        PyObject *tmp_left_value_553;
        PyObject *tmp_right_value_553;
        tmp_left_value_553 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_553 == NULL)) {
            tmp_left_value_553 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_553 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1226;

            goto frame_exception_exit_1;
        }
        tmp_right_value_553 = mod_consts[491];
        tmp_assign_source_1210 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_553, tmp_right_value_553);
        if (tmp_assign_source_1210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1226;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1389], tmp_assign_source_1210);
    }
    {
        PyObject *tmp_assign_source_1211;
        PyObject *tmp_left_value_554;
        PyObject *tmp_right_value_554;
        tmp_left_value_554 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_554 == NULL)) {
            tmp_left_value_554 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_554 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1227;

            goto frame_exception_exit_1;
        }
        tmp_right_value_554 = mod_consts[1];
        tmp_assign_source_1211 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_554, tmp_right_value_554);
        if (tmp_assign_source_1211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1227;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1390], tmp_assign_source_1211);
    }
    {
        PyObject *tmp_assign_source_1212;
        PyObject *tmp_left_value_555;
        PyObject *tmp_right_value_555;
        tmp_left_value_555 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_555 == NULL)) {
            tmp_left_value_555 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_555 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1228;

            goto frame_exception_exit_1;
        }
        tmp_right_value_555 = mod_consts[138];
        tmp_assign_source_1212 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_555, tmp_right_value_555);
        if (tmp_assign_source_1212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1391], tmp_assign_source_1212);
    }
    {
        PyObject *tmp_assign_source_1213;
        PyObject *tmp_left_value_556;
        PyObject *tmp_right_value_556;
        tmp_left_value_556 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_556 == NULL)) {
            tmp_left_value_556 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_556 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1229;

            goto frame_exception_exit_1;
        }
        tmp_right_value_556 = mod_consts[140];
        tmp_assign_source_1213 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_556, tmp_right_value_556);
        if (tmp_assign_source_1213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1392], tmp_assign_source_1213);
    }
    {
        PyObject *tmp_assign_source_1214;
        PyObject *tmp_left_value_557;
        PyObject *tmp_right_value_557;
        tmp_left_value_557 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_left_value_557 == NULL)) {
            tmp_left_value_557 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_left_value_557 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1230;

            goto frame_exception_exit_1;
        }
        tmp_right_value_557 = mod_consts[142];
        tmp_assign_source_1214 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_557, tmp_right_value_557);
        if (tmp_assign_source_1214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1230;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1393], tmp_assign_source_1214);
    }
    {
        PyObject *tmp_assign_source_1215;
        tmp_assign_source_1215 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1364]);

        if (unlikely(tmp_assign_source_1215 == NULL)) {
            tmp_assign_source_1215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1364]);
        }

        if (tmp_assign_source_1215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1394], tmp_assign_source_1215);
    }
    {
        PyObject *tmp_assign_source_1216;
        tmp_assign_source_1216 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1366]);

        if (unlikely(tmp_assign_source_1216 == NULL)) {
            tmp_assign_source_1216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1366]);
        }

        if (tmp_assign_source_1216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1232;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1395], tmp_assign_source_1216);
    }
    {
        PyObject *tmp_assign_source_1217;
        tmp_assign_source_1217 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1371]);

        if (unlikely(tmp_assign_source_1217 == NULL)) {
            tmp_assign_source_1217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1371]);
        }

        if (tmp_assign_source_1217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1233;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1396], tmp_assign_source_1217);
    }
    {
        PyObject *tmp_assign_source_1218;
        tmp_assign_source_1218 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1373]);

        if (unlikely(tmp_assign_source_1218 == NULL)) {
            tmp_assign_source_1218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1373]);
        }

        if (tmp_assign_source_1218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1234;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1397], tmp_assign_source_1218);
    }
    {
        PyObject *tmp_assign_source_1219;
        tmp_assign_source_1219 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1376]);

        if (unlikely(tmp_assign_source_1219 == NULL)) {
            tmp_assign_source_1219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1376]);
        }

        if (tmp_assign_source_1219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1235;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1398], tmp_assign_source_1219);
    }
    {
        PyObject *tmp_assign_source_1220;
        tmp_assign_source_1220 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1378]);

        if (unlikely(tmp_assign_source_1220 == NULL)) {
            tmp_assign_source_1220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1378]);
        }

        if (tmp_assign_source_1220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1236;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1399], tmp_assign_source_1220);
    }
    {
        PyObject *tmp_assign_source_1221;
        tmp_assign_source_1221 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1380]);

        if (unlikely(tmp_assign_source_1221 == NULL)) {
            tmp_assign_source_1221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1380]);
        }

        if (tmp_assign_source_1221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1237;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1400], tmp_assign_source_1221);
    }
    {
        PyObject *tmp_assign_source_1222;
        tmp_assign_source_1222 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1382]);

        if (unlikely(tmp_assign_source_1222 == NULL)) {
            tmp_assign_source_1222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1382]);
        }

        if (tmp_assign_source_1222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1238;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1401], tmp_assign_source_1222);
    }
    {
        PyObject *tmp_assign_source_1223;
        tmp_assign_source_1223 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1384]);

        if (unlikely(tmp_assign_source_1223 == NULL)) {
            tmp_assign_source_1223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1384]);
        }

        if (tmp_assign_source_1223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1239;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1402], tmp_assign_source_1223);
    }
    {
        PyObject *tmp_assign_source_1224;
        tmp_assign_source_1224 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1386]);

        if (unlikely(tmp_assign_source_1224 == NULL)) {
            tmp_assign_source_1224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1386]);
        }

        if (tmp_assign_source_1224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1240;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1403], tmp_assign_source_1224);
    }
    {
        PyObject *tmp_assign_source_1225;
        tmp_assign_source_1225 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1388]);

        if (unlikely(tmp_assign_source_1225 == NULL)) {
            tmp_assign_source_1225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1388]);
        }

        if (tmp_assign_source_1225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1241;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1404], tmp_assign_source_1225);
    }
    {
        PyObject *tmp_assign_source_1226;
        tmp_assign_source_1226 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1391]);

        if (unlikely(tmp_assign_source_1226 == NULL)) {
            tmp_assign_source_1226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1391]);
        }

        if (tmp_assign_source_1226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1242;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1405], tmp_assign_source_1226);
    }
    {
        PyObject *tmp_assign_source_1227;
        tmp_assign_source_1227 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1406], tmp_assign_source_1227);
    }
    {
        PyObject *tmp_assign_source_1228;
        tmp_assign_source_1228 = mod_consts[1407];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1408], tmp_assign_source_1228);
    }
    {
        PyObject *tmp_assign_source_1229;
        tmp_assign_source_1229 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1408]);

        if (unlikely(tmp_assign_source_1229 == NULL)) {
            tmp_assign_source_1229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1408]);
        }

        assert(!(tmp_assign_source_1229 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1409], tmp_assign_source_1229);
    }
    {
        PyObject *tmp_assign_source_1230;
        tmp_assign_source_1230 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1410], tmp_assign_source_1230);
    }
    {
        PyObject *tmp_assign_source_1231;
        tmp_assign_source_1231 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1411], tmp_assign_source_1231);
    }
    {
        PyObject *tmp_assign_source_1232;
        tmp_assign_source_1232 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1412], tmp_assign_source_1232);
    }
    {
        PyObject *tmp_assign_source_1233;
        tmp_assign_source_1233 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1413], tmp_assign_source_1233);
    }
    {
        PyObject *tmp_assign_source_1234;
        tmp_assign_source_1234 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1414], tmp_assign_source_1234);
    }
    {
        PyObject *tmp_assign_source_1235;
        tmp_assign_source_1235 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1415], tmp_assign_source_1235);
    }
    {
        PyObject *tmp_assign_source_1236;
        tmp_assign_source_1236 = mod_consts[597];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1416], tmp_assign_source_1236);
    }
    {
        PyObject *tmp_assign_source_1237;
        PyObject *tmp_left_value_558;
        PyObject *tmp_right_value_558;
        tmp_left_value_558 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_558 == NULL)) {
            tmp_left_value_558 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_558 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1253;

            goto frame_exception_exit_1;
        }
        tmp_right_value_558 = mod_consts[10];
        tmp_assign_source_1237 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_558, tmp_right_value_558);
        if (tmp_assign_source_1237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1253;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1417], tmp_assign_source_1237);
    }
    {
        PyObject *tmp_assign_source_1238;
        PyObject *tmp_left_value_559;
        PyObject *tmp_right_value_559;
        tmp_left_value_559 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_559 == NULL)) {
            tmp_left_value_559 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_559 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1254;

            goto frame_exception_exit_1;
        }
        tmp_right_value_559 = mod_consts[12];
        tmp_assign_source_1238 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_559, tmp_right_value_559);
        if (tmp_assign_source_1238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1254;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1418], tmp_assign_source_1238);
    }
    {
        PyObject *tmp_assign_source_1239;
        PyObject *tmp_left_value_560;
        PyObject *tmp_right_value_560;
        tmp_left_value_560 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_560 == NULL)) {
            tmp_left_value_560 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_560 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1255;

            goto frame_exception_exit_1;
        }
        tmp_right_value_560 = mod_consts[120];
        tmp_assign_source_1239 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_560, tmp_right_value_560);
        if (tmp_assign_source_1239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1255;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1419], tmp_assign_source_1239);
    }
    {
        PyObject *tmp_assign_source_1240;
        PyObject *tmp_left_value_561;
        PyObject *tmp_right_value_561;
        tmp_left_value_561 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_561 == NULL)) {
            tmp_left_value_561 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_561 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1256;

            goto frame_exception_exit_1;
        }
        tmp_right_value_561 = mod_consts[14];
        tmp_assign_source_1240 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_561, tmp_right_value_561);
        if (tmp_assign_source_1240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1256;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1420], tmp_assign_source_1240);
    }
    {
        PyObject *tmp_assign_source_1241;
        PyObject *tmp_left_value_562;
        PyObject *tmp_right_value_562;
        tmp_left_value_562 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_562 == NULL)) {
            tmp_left_value_562 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_562 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1257;

            goto frame_exception_exit_1;
        }
        tmp_right_value_562 = mod_consts[123];
        tmp_assign_source_1241 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_562, tmp_right_value_562);
        if (tmp_assign_source_1241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1257;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1421], tmp_assign_source_1241);
    }
    {
        PyObject *tmp_assign_source_1242;
        PyObject *tmp_left_value_563;
        PyObject *tmp_right_value_563;
        tmp_left_value_563 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_563 == NULL)) {
            tmp_left_value_563 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_563 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        tmp_right_value_563 = mod_consts[125];
        tmp_assign_source_1242 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_563, tmp_right_value_563);
        if (tmp_assign_source_1242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1259;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1422], tmp_assign_source_1242);
    }
    {
        PyObject *tmp_assign_source_1243;
        PyObject *tmp_left_value_564;
        PyObject *tmp_right_value_564;
        tmp_left_value_564 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_564 == NULL)) {
            tmp_left_value_564 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_564 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1260;

            goto frame_exception_exit_1;
        }
        tmp_right_value_564 = mod_consts[134];
        tmp_assign_source_1243 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_564, tmp_right_value_564);
        if (tmp_assign_source_1243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1260;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1423], tmp_assign_source_1243);
    }
    {
        PyObject *tmp_assign_source_1244;
        PyObject *tmp_left_value_565;
        PyObject *tmp_right_value_565;
        tmp_left_value_565 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_565 == NULL)) {
            tmp_left_value_565 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_565 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1261;

            goto frame_exception_exit_1;
        }
        tmp_right_value_565 = mod_consts[0];
        tmp_assign_source_1244 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_565, tmp_right_value_565);
        if (tmp_assign_source_1244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1261;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1424], tmp_assign_source_1244);
    }
    {
        PyObject *tmp_assign_source_1245;
        PyObject *tmp_left_value_566;
        PyObject *tmp_right_value_566;
        tmp_left_value_566 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_566 == NULL)) {
            tmp_left_value_566 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_566 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1262;

            goto frame_exception_exit_1;
        }
        tmp_right_value_566 = mod_consts[140];
        tmp_assign_source_1245 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_566, tmp_right_value_566);
        if (tmp_assign_source_1245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1262;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1425], tmp_assign_source_1245);
    }
    {
        PyObject *tmp_assign_source_1246;
        PyObject *tmp_left_value_567;
        PyObject *tmp_right_value_567;
        tmp_left_value_567 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_567 == NULL)) {
            tmp_left_value_567 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_567 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1263;

            goto frame_exception_exit_1;
        }
        tmp_right_value_567 = mod_consts[270];
        tmp_assign_source_1246 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_567, tmp_right_value_567);
        if (tmp_assign_source_1246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1426], tmp_assign_source_1246);
    }
    {
        PyObject *tmp_assign_source_1247;
        PyObject *tmp_left_value_568;
        PyObject *tmp_right_value_568;
        tmp_left_value_568 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_568 == NULL)) {
            tmp_left_value_568 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_568 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1264;

            goto frame_exception_exit_1;
        }
        tmp_right_value_568 = mod_consts[270];
        tmp_assign_source_1247 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_568, tmp_right_value_568);
        if (tmp_assign_source_1247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1264;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1427], tmp_assign_source_1247);
    }
    {
        PyObject *tmp_assign_source_1248;
        tmp_assign_source_1248 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_1248 == NULL)) {
            tmp_assign_source_1248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_assign_source_1248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1428], tmp_assign_source_1248);
    }
    {
        PyObject *tmp_assign_source_1249;
        tmp_assign_source_1249 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_1249 == NULL)) {
            tmp_assign_source_1249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_assign_source_1249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1429], tmp_assign_source_1249);
    }
    {
        PyObject *tmp_assign_source_1250;
        PyObject *tmp_left_value_569;
        PyObject *tmp_right_value_569;
        tmp_left_value_569 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_569 == NULL)) {
            tmp_left_value_569 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_569 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;

            goto frame_exception_exit_1;
        }
        tmp_right_value_569 = mod_consts[0];
        tmp_assign_source_1250 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_569, tmp_right_value_569);
        if (tmp_assign_source_1250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1424], tmp_assign_source_1250);
    }
    {
        PyObject *tmp_assign_source_1251;
        PyObject *tmp_left_value_570;
        PyObject *tmp_right_value_570;
        tmp_left_value_570 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_570 == NULL)) {
            tmp_left_value_570 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_570 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1268;

            goto frame_exception_exit_1;
        }
        tmp_right_value_570 = mod_consts[270];
        tmp_assign_source_1251 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_570, tmp_right_value_570);
        if (tmp_assign_source_1251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1268;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1426], tmp_assign_source_1251);
    }
    {
        PyObject *tmp_assign_source_1252;
        PyObject *tmp_left_value_571;
        PyObject *tmp_right_value_571;
        tmp_left_value_571 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_571 == NULL)) {
            tmp_left_value_571 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_571 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1269;

            goto frame_exception_exit_1;
        }
        tmp_right_value_571 = mod_consts[247];
        tmp_assign_source_1252 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_571, tmp_right_value_571);
        if (tmp_assign_source_1252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1269;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1430], tmp_assign_source_1252);
    }
    {
        PyObject *tmp_assign_source_1253;
        PyObject *tmp_left_value_572;
        PyObject *tmp_right_value_572;
        tmp_left_value_572 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_572 == NULL)) {
            tmp_left_value_572 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_572 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1270;

            goto frame_exception_exit_1;
        }
        tmp_right_value_572 = mod_consts[252];
        tmp_assign_source_1253 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_572, tmp_right_value_572);
        if (tmp_assign_source_1253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1431], tmp_assign_source_1253);
    }
    {
        PyObject *tmp_assign_source_1254;
        PyObject *tmp_left_value_573;
        PyObject *tmp_right_value_573;
        tmp_left_value_573 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_573 == NULL)) {
            tmp_left_value_573 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_573 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1271;

            goto frame_exception_exit_1;
        }
        tmp_right_value_573 = mod_consts[1];
        tmp_assign_source_1254 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_573, tmp_right_value_573);
        if (tmp_assign_source_1254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1271;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1432], tmp_assign_source_1254);
    }
    {
        PyObject *tmp_assign_source_1255;
        PyObject *tmp_left_value_574;
        PyObject *tmp_right_value_574;
        tmp_left_value_574 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_574 == NULL)) {
            tmp_left_value_574 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_574 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        tmp_right_value_574 = mod_consts[138];
        tmp_assign_source_1255 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_574, tmp_right_value_574);
        if (tmp_assign_source_1255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1433], tmp_assign_source_1255);
    }
    {
        PyObject *tmp_assign_source_1256;
        tmp_assign_source_1256 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1417]);

        if (unlikely(tmp_assign_source_1256 == NULL)) {
            tmp_assign_source_1256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1417]);
        }

        if (tmp_assign_source_1256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1273;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1434], tmp_assign_source_1256);
    }
    {
        PyObject *tmp_assign_source_1257;
        tmp_assign_source_1257 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1421]);

        if (unlikely(tmp_assign_source_1257 == NULL)) {
            tmp_assign_source_1257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1421]);
        }

        if (tmp_assign_source_1257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1274;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1435], tmp_assign_source_1257);
    }
    {
        PyObject *tmp_assign_source_1258;
        tmp_assign_source_1258 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1420]);

        if (unlikely(tmp_assign_source_1258 == NULL)) {
            tmp_assign_source_1258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1420]);
        }

        if (tmp_assign_source_1258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1436], tmp_assign_source_1258);
    }
    {
        PyObject *tmp_assign_source_1259;
        tmp_assign_source_1259 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1437], tmp_assign_source_1259);
    }
    {
        PyObject *tmp_assign_source_1260;
        tmp_assign_source_1260 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1438], tmp_assign_source_1260);
    }
    {
        PyObject *tmp_assign_source_1261;
        tmp_assign_source_1261 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1439], tmp_assign_source_1261);
    }
    {
        PyObject *tmp_assign_source_1262;
        tmp_assign_source_1262 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1440], tmp_assign_source_1262);
    }
    {
        PyObject *tmp_assign_source_1263;
        tmp_assign_source_1263 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1441], tmp_assign_source_1263);
    }
    {
        PyObject *tmp_assign_source_1264;
        PyObject *tmp_left_value_575;
        PyObject *tmp_right_value_575;
        tmp_left_value_575 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_575 == NULL)) {
            tmp_left_value_575 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_575 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1281;

            goto frame_exception_exit_1;
        }
        tmp_right_value_575 = mod_consts[44];
        tmp_assign_source_1264 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_575, tmp_right_value_575);
        if (tmp_assign_source_1264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1281;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1442], tmp_assign_source_1264);
    }
    {
        PyObject *tmp_assign_source_1265;
        PyObject *tmp_left_value_576;
        PyObject *tmp_right_value_576;
        tmp_left_value_576 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_576 == NULL)) {
            tmp_left_value_576 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_576 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1282;

            goto frame_exception_exit_1;
        }
        tmp_right_value_576 = mod_consts[44];
        tmp_assign_source_1265 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_576, tmp_right_value_576);
        if (tmp_assign_source_1265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1282;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1443], tmp_assign_source_1265);
    }
    {
        PyObject *tmp_assign_source_1266;
        PyObject *tmp_left_value_577;
        PyObject *tmp_right_value_577;
        tmp_left_value_577 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_577 == NULL)) {
            tmp_left_value_577 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_577 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1283;

            goto frame_exception_exit_1;
        }
        tmp_right_value_577 = mod_consts[10];
        tmp_assign_source_1266 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_577, tmp_right_value_577);
        if (tmp_assign_source_1266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1283;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1444], tmp_assign_source_1266);
    }
    {
        PyObject *tmp_assign_source_1267;
        PyObject *tmp_left_value_578;
        PyObject *tmp_right_value_578;
        tmp_left_value_578 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_578 == NULL)) {
            tmp_left_value_578 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_578 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1284;

            goto frame_exception_exit_1;
        }
        tmp_right_value_578 = mod_consts[12];
        tmp_assign_source_1267 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_578, tmp_right_value_578);
        if (tmp_assign_source_1267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1284;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1445], tmp_assign_source_1267);
    }
    {
        PyObject *tmp_assign_source_1268;
        PyObject *tmp_left_value_579;
        PyObject *tmp_right_value_579;
        tmp_left_value_579 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_579 == NULL)) {
            tmp_left_value_579 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_579 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1285;

            goto frame_exception_exit_1;
        }
        tmp_right_value_579 = mod_consts[14];
        tmp_assign_source_1268 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_579, tmp_right_value_579);
        if (tmp_assign_source_1268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1285;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1446], tmp_assign_source_1268);
    }
    {
        PyObject *tmp_assign_source_1269;
        PyObject *tmp_left_value_580;
        PyObject *tmp_right_value_580;
        tmp_left_value_580 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_580 == NULL)) {
            tmp_left_value_580 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_580 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1286;

            goto frame_exception_exit_1;
        }
        tmp_right_value_580 = mod_consts[123];
        tmp_assign_source_1269 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_580, tmp_right_value_580);
        if (tmp_assign_source_1269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1286;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1447], tmp_assign_source_1269);
    }
    {
        PyObject *tmp_assign_source_1270;
        PyObject *tmp_left_value_581;
        PyObject *tmp_right_value_581;
        tmp_left_value_581 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_581 == NULL)) {
            tmp_left_value_581 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_581 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1287;

            goto frame_exception_exit_1;
        }
        tmp_right_value_581 = mod_consts[125];
        tmp_assign_source_1270 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_581, tmp_right_value_581);
        if (tmp_assign_source_1270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1287;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1448], tmp_assign_source_1270);
    }
    {
        PyObject *tmp_assign_source_1271;
        PyObject *tmp_left_value_582;
        PyObject *tmp_right_value_582;
        tmp_left_value_582 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_582 == NULL)) {
            tmp_left_value_582 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_582 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1288;

            goto frame_exception_exit_1;
        }
        tmp_right_value_582 = mod_consts[134];
        tmp_assign_source_1271 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_582, tmp_right_value_582);
        if (tmp_assign_source_1271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1288;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1449], tmp_assign_source_1271);
    }
    {
        PyObject *tmp_assign_source_1272;
        PyObject *tmp_left_value_583;
        PyObject *tmp_right_value_583;
        tmp_left_value_583 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_583 == NULL)) {
            tmp_left_value_583 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_583 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1289;

            goto frame_exception_exit_1;
        }
        tmp_right_value_583 = mod_consts[0];
        tmp_assign_source_1272 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_583, tmp_right_value_583);
        if (tmp_assign_source_1272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1289;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1450], tmp_assign_source_1272);
    }
    {
        PyObject *tmp_assign_source_1273;
        PyObject *tmp_left_value_584;
        PyObject *tmp_right_value_584;
        tmp_left_value_584 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_left_value_584 == NULL)) {
            tmp_left_value_584 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_left_value_584 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1290;

            goto frame_exception_exit_1;
        }
        tmp_right_value_584 = mod_consts[270];
        tmp_assign_source_1273 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_584, tmp_right_value_584);
        if (tmp_assign_source_1273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1290;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1451], tmp_assign_source_1273);
    }
    {
        PyObject *tmp_assign_source_1274;
        tmp_assign_source_1274 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1450]);

        if (unlikely(tmp_assign_source_1274 == NULL)) {
            tmp_assign_source_1274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1450]);
        }

        if (tmp_assign_source_1274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1291;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1452], tmp_assign_source_1274);
    }
    {
        PyObject *tmp_assign_source_1275;
        tmp_assign_source_1275 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1447]);

        if (unlikely(tmp_assign_source_1275 == NULL)) {
            tmp_assign_source_1275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1447]);
        }

        if (tmp_assign_source_1275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1292;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1453], tmp_assign_source_1275);
    }
    {
        PyObject *tmp_assign_source_1276;
        tmp_assign_source_1276 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1454], tmp_assign_source_1276);
    }
    {
        PyObject *tmp_assign_source_1277;
        tmp_assign_source_1277 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1455], tmp_assign_source_1277);
    }
    {
        PyObject *tmp_assign_source_1278;
        tmp_assign_source_1278 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1456], tmp_assign_source_1278);
    }
    {
        PyObject *tmp_assign_source_1279;
        tmp_assign_source_1279 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1457], tmp_assign_source_1279);
    }
    {
        PyObject *tmp_assign_source_1280;
        tmp_assign_source_1280 = mod_consts[1458];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1459], tmp_assign_source_1280);
    }
    {
        PyObject *tmp_assign_source_1281;
        tmp_assign_source_1281 = mod_consts[1460];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1461], tmp_assign_source_1281);
    }
    {
        PyObject *tmp_assign_source_1282;
        tmp_assign_source_1282 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1461]);

        if (unlikely(tmp_assign_source_1282 == NULL)) {
            tmp_assign_source_1282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1461]);
        }

        assert(!(tmp_assign_source_1282 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1462], tmp_assign_source_1282);
    }
    {
        PyObject *tmp_assign_source_1283;
        tmp_assign_source_1283 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1463], tmp_assign_source_1283);
    }
    {
        PyObject *tmp_assign_source_1284;
        tmp_assign_source_1284 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1464], tmp_assign_source_1284);
    }
    {
        PyObject *tmp_assign_source_1285;
        tmp_assign_source_1285 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1465], tmp_assign_source_1285);
    }
    {
        PyObject *tmp_assign_source_1286;
        tmp_assign_source_1286 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1466], tmp_assign_source_1286);
    }
    {
        PyObject *tmp_assign_source_1287;
        tmp_assign_source_1287 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1467], tmp_assign_source_1287);
    }
    {
        PyObject *tmp_assign_source_1288;
        tmp_assign_source_1288 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1468], tmp_assign_source_1288);
    }
    {
        PyObject *tmp_assign_source_1289;
        tmp_assign_source_1289 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1469], tmp_assign_source_1289);
    }
    {
        PyObject *tmp_assign_source_1290;
        tmp_assign_source_1290 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1470], tmp_assign_source_1290);
    }
    {
        PyObject *tmp_assign_source_1291;
        tmp_assign_source_1291 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1471], tmp_assign_source_1291);
    }
    {
        PyObject *tmp_assign_source_1292;
        tmp_assign_source_1292 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1472], tmp_assign_source_1292);
    }
    {
        PyObject *tmp_assign_source_1293;
        tmp_assign_source_1293 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1473], tmp_assign_source_1293);
    }
    {
        PyObject *tmp_assign_source_1294;
        tmp_assign_source_1294 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1474], tmp_assign_source_1294);
    }
    {
        PyObject *tmp_assign_source_1295;
        tmp_assign_source_1295 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1475], tmp_assign_source_1295);
    }
    {
        PyObject *tmp_assign_source_1296;
        tmp_assign_source_1296 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1476], tmp_assign_source_1296);
    }
    {
        PyObject *tmp_assign_source_1297;
        tmp_assign_source_1297 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1477], tmp_assign_source_1297);
    }
    {
        PyObject *tmp_assign_source_1298;
        tmp_assign_source_1298 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1478], tmp_assign_source_1298);
    }
    {
        PyObject *tmp_assign_source_1299;
        tmp_assign_source_1299 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1479], tmp_assign_source_1299);
    }
    {
        PyObject *tmp_assign_source_1300;
        tmp_assign_source_1300 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1480], tmp_assign_source_1300);
    }
    {
        PyObject *tmp_assign_source_1301;
        tmp_assign_source_1301 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1481], tmp_assign_source_1301);
    }
    {
        PyObject *tmp_assign_source_1302;
        tmp_assign_source_1302 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1482], tmp_assign_source_1302);
    }
    {
        PyObject *tmp_assign_source_1303;
        tmp_assign_source_1303 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1483], tmp_assign_source_1303);
    }
    {
        PyObject *tmp_assign_source_1304;
        tmp_assign_source_1304 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1484], tmp_assign_source_1304);
    }
    {
        PyObject *tmp_assign_source_1305;
        PyObject *tmp_left_value_585;
        PyObject *tmp_right_value_585;
        tmp_left_value_585 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_585 == NULL)) {
            tmp_left_value_585 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_585 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1322;

            goto frame_exception_exit_1;
        }
        tmp_right_value_585 = mod_consts[12];
        tmp_assign_source_1305 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_585, tmp_right_value_585);
        if (tmp_assign_source_1305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1322;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1485], tmp_assign_source_1305);
    }
    {
        PyObject *tmp_assign_source_1306;
        PyObject *tmp_left_value_586;
        PyObject *tmp_right_value_586;
        tmp_left_value_586 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_586 == NULL)) {
            tmp_left_value_586 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_586 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1323;

            goto frame_exception_exit_1;
        }
        tmp_right_value_586 = mod_consts[120];
        tmp_assign_source_1306 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_586, tmp_right_value_586);
        if (tmp_assign_source_1306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1323;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1486], tmp_assign_source_1306);
    }
    {
        PyObject *tmp_assign_source_1307;
        PyObject *tmp_left_value_587;
        PyObject *tmp_right_value_587;
        tmp_left_value_587 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_587 == NULL)) {
            tmp_left_value_587 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_587 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1324;

            goto frame_exception_exit_1;
        }
        tmp_right_value_587 = mod_consts[14];
        tmp_assign_source_1307 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_587, tmp_right_value_587);
        if (tmp_assign_source_1307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1324;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1487], tmp_assign_source_1307);
    }
    {
        PyObject *tmp_assign_source_1308;
        tmp_assign_source_1308 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1488], tmp_assign_source_1308);
    }
    {
        PyObject *tmp_assign_source_1309;
        tmp_assign_source_1309 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1489], tmp_assign_source_1309);
    }
    {
        PyObject *tmp_assign_source_1310;
        tmp_assign_source_1310 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1490], tmp_assign_source_1310);
    }
    {
        PyObject *tmp_assign_source_1311;
        tmp_assign_source_1311 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1491], tmp_assign_source_1311);
    }
    {
        PyObject *tmp_assign_source_1312;
        tmp_assign_source_1312 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1492], tmp_assign_source_1312);
    }
    {
        PyObject *tmp_assign_source_1313;
        tmp_assign_source_1313 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1493], tmp_assign_source_1313);
    }
    {
        PyObject *tmp_assign_source_1314;
        tmp_assign_source_1314 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1494], tmp_assign_source_1314);
    }
    {
        PyObject *tmp_assign_source_1315;
        PyObject *tmp_left_value_588;
        PyObject *tmp_right_value_588;
        tmp_left_value_588 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_588 == NULL)) {
            tmp_left_value_588 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_588 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1332;

            goto frame_exception_exit_1;
        }
        tmp_right_value_588 = mod_consts[123];
        tmp_assign_source_1315 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_588, tmp_right_value_588);
        if (tmp_assign_source_1315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1332;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1495], tmp_assign_source_1315);
    }
    {
        PyObject *tmp_assign_source_1316;
        PyObject *tmp_left_value_589;
        PyObject *tmp_right_value_589;
        tmp_left_value_589 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_589 == NULL)) {
            tmp_left_value_589 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_589 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto frame_exception_exit_1;
        }
        tmp_right_value_589 = mod_consts[491];
        tmp_assign_source_1316 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_589, tmp_right_value_589);
        if (tmp_assign_source_1316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1333;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1496], tmp_assign_source_1316);
    }
    {
        PyObject *tmp_assign_source_1317;
        tmp_assign_source_1317 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1495]);

        if (unlikely(tmp_assign_source_1317 == NULL)) {
            tmp_assign_source_1317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1495]);
        }

        if (tmp_assign_source_1317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1334;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1497], tmp_assign_source_1317);
    }
    {
        PyObject *tmp_assign_source_1318;
        PyObject *tmp_left_value_590;
        PyObject *tmp_right_value_590;
        tmp_left_value_590 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_590 == NULL)) {
            tmp_left_value_590 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_590 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1335;

            goto frame_exception_exit_1;
        }
        tmp_right_value_590 = mod_consts[125];
        tmp_assign_source_1318 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_590, tmp_right_value_590);
        if (tmp_assign_source_1318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1335;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1498], tmp_assign_source_1318);
    }
    {
        PyObject *tmp_assign_source_1319;
        PyObject *tmp_left_value_591;
        PyObject *tmp_right_value_591;
        tmp_left_value_591 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_591 == NULL)) {
            tmp_left_value_591 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_591 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1336;

            goto frame_exception_exit_1;
        }
        tmp_right_value_591 = mod_consts[493];
        tmp_assign_source_1319 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_591, tmp_right_value_591);
        if (tmp_assign_source_1319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1336;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1499], tmp_assign_source_1319);
    }
    {
        PyObject *tmp_assign_source_1320;
        tmp_assign_source_1320 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1498]);

        if (unlikely(tmp_assign_source_1320 == NULL)) {
            tmp_assign_source_1320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1498]);
        }

        if (tmp_assign_source_1320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1337;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1500], tmp_assign_source_1320);
    }
    {
        PyObject *tmp_assign_source_1321;
        PyObject *tmp_left_value_592;
        PyObject *tmp_right_value_592;
        tmp_left_value_592 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_592 == NULL)) {
            tmp_left_value_592 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_592 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1338;

            goto frame_exception_exit_1;
        }
        tmp_right_value_592 = mod_consts[134];
        tmp_assign_source_1321 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_592, tmp_right_value_592);
        if (tmp_assign_source_1321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1338;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1501], tmp_assign_source_1321);
    }
    {
        PyObject *tmp_assign_source_1322;
        PyObject *tmp_left_value_593;
        PyObject *tmp_right_value_593;
        tmp_left_value_593 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_593 == NULL)) {
            tmp_left_value_593 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_593 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1339;

            goto frame_exception_exit_1;
        }
        tmp_right_value_593 = mod_consts[498];
        tmp_assign_source_1322 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_593, tmp_right_value_593);
        if (tmp_assign_source_1322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1339;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1502], tmp_assign_source_1322);
    }
    {
        PyObject *tmp_assign_source_1323;
        tmp_assign_source_1323 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1501]);

        if (unlikely(tmp_assign_source_1323 == NULL)) {
            tmp_assign_source_1323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1501]);
        }

        if (tmp_assign_source_1323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1340;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1503], tmp_assign_source_1323);
    }
    {
        PyObject *tmp_assign_source_1324;
        PyObject *tmp_left_value_594;
        PyObject *tmp_right_value_594;
        tmp_left_value_594 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_594 == NULL)) {
            tmp_left_value_594 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_594 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1341;

            goto frame_exception_exit_1;
        }
        tmp_right_value_594 = mod_consts[0];
        tmp_assign_source_1324 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_594, tmp_right_value_594);
        if (tmp_assign_source_1324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1341;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1504], tmp_assign_source_1324);
    }
    {
        PyObject *tmp_assign_source_1325;
        PyObject *tmp_left_value_595;
        PyObject *tmp_right_value_595;
        tmp_left_value_595 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_595 == NULL)) {
            tmp_left_value_595 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_595 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1342;

            goto frame_exception_exit_1;
        }
        tmp_right_value_595 = mod_consts[270];
        tmp_assign_source_1325 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_595, tmp_right_value_595);
        if (tmp_assign_source_1325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1342;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1505], tmp_assign_source_1325);
    }
    {
        PyObject *tmp_assign_source_1326;
        PyObject *tmp_left_value_596;
        PyObject *tmp_right_value_596;
        tmp_left_value_596 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_596 == NULL)) {
            tmp_left_value_596 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_596 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1343;

            goto frame_exception_exit_1;
        }
        tmp_right_value_596 = mod_consts[247];
        tmp_assign_source_1326 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_596, tmp_right_value_596);
        if (tmp_assign_source_1326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1343;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1506], tmp_assign_source_1326);
    }
    {
        PyObject *tmp_assign_source_1327;
        PyObject *tmp_left_value_597;
        PyObject *tmp_right_value_597;
        tmp_left_value_597 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_597 == NULL)) {
            tmp_left_value_597 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_597 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1344;

            goto frame_exception_exit_1;
        }
        tmp_right_value_597 = mod_consts[252];
        tmp_assign_source_1327 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_597, tmp_right_value_597);
        if (tmp_assign_source_1327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1344;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1507], tmp_assign_source_1327);
    }
    {
        PyObject *tmp_assign_source_1328;
        PyObject *tmp_left_value_598;
        PyObject *tmp_right_value_598;
        tmp_left_value_598 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_598 == NULL)) {
            tmp_left_value_598 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_598 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1345;

            goto frame_exception_exit_1;
        }
        tmp_right_value_598 = mod_consts[1];
        tmp_assign_source_1328 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_598, tmp_right_value_598);
        if (tmp_assign_source_1328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1345;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1508], tmp_assign_source_1328);
    }
    {
        PyObject *tmp_assign_source_1329;
        tmp_assign_source_1329 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1509], tmp_assign_source_1329);
    }
    {
        PyObject *tmp_assign_source_1330;
        tmp_assign_source_1330 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1510], tmp_assign_source_1330);
    }
    {
        PyObject *tmp_assign_source_1331;
        tmp_assign_source_1331 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1511], tmp_assign_source_1331);
    }
    {
        PyObject *tmp_assign_source_1332;
        PyObject *tmp_left_value_599;
        PyObject *tmp_right_value_599;
        tmp_left_value_599 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1510]);

        if (unlikely(tmp_left_value_599 == NULL)) {
            tmp_left_value_599 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1510]);
        }

        assert(!(tmp_left_value_599 == NULL));
        tmp_right_value_599 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1511]);

        if (unlikely(tmp_right_value_599 == NULL)) {
            tmp_right_value_599 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1511]);
        }

        assert(!(tmp_right_value_599 == NULL));
        tmp_assign_source_1332 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_599, tmp_right_value_599);
        assert(!(tmp_assign_source_1332 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1512], tmp_assign_source_1332);
    }
    {
        PyObject *tmp_assign_source_1333;
        PyObject *tmp_left_value_600;
        PyObject *tmp_right_value_600;
        tmp_left_value_600 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_600 == NULL)) {
            tmp_left_value_600 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_600 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1350;

            goto frame_exception_exit_1;
        }
        tmp_right_value_600 = mod_consts[138];
        tmp_assign_source_1333 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_600, tmp_right_value_600);
        if (tmp_assign_source_1333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1350;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1513], tmp_assign_source_1333);
    }
    {
        PyObject *tmp_assign_source_1334;
        PyObject *tmp_left_value_601;
        PyObject *tmp_right_value_601;
        tmp_left_value_601 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_601 == NULL)) {
            tmp_left_value_601 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_601 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1351;

            goto frame_exception_exit_1;
        }
        tmp_right_value_601 = mod_consts[140];
        tmp_assign_source_1334 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_601, tmp_right_value_601);
        if (tmp_assign_source_1334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1351;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1514], tmp_assign_source_1334);
    }
    {
        PyObject *tmp_assign_source_1335;
        PyObject *tmp_left_value_602;
        PyObject *tmp_right_value_602;
        tmp_left_value_602 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_602 == NULL)) {
            tmp_left_value_602 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_602 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1352;

            goto frame_exception_exit_1;
        }
        tmp_right_value_602 = mod_consts[451];
        tmp_assign_source_1335 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_602, tmp_right_value_602);
        if (tmp_assign_source_1335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1352;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1515], tmp_assign_source_1335);
    }
    {
        PyObject *tmp_assign_source_1336;
        PyObject *tmp_left_value_603;
        PyObject *tmp_right_value_603;
        tmp_left_value_603 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_603 == NULL)) {
            tmp_left_value_603 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_603 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1353;

            goto frame_exception_exit_1;
        }
        tmp_right_value_603 = mod_consts[542];
        tmp_assign_source_1336 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_603, tmp_right_value_603);
        if (tmp_assign_source_1336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1353;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1516], tmp_assign_source_1336);
    }
    {
        PyObject *tmp_assign_source_1337;
        PyObject *tmp_left_value_604;
        PyObject *tmp_right_value_604;
        tmp_left_value_604 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_604 == NULL)) {
            tmp_left_value_604 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_604 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1354;

            goto frame_exception_exit_1;
        }
        tmp_right_value_604 = mod_consts[453];
        tmp_assign_source_1337 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_604, tmp_right_value_604);
        if (tmp_assign_source_1337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1517], tmp_assign_source_1337);
    }
    {
        PyObject *tmp_assign_source_1338;
        PyObject *tmp_left_value_605;
        PyObject *tmp_right_value_605;
        tmp_left_value_605 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_605 == NULL)) {
            tmp_left_value_605 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_605 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1355;

            goto frame_exception_exit_1;
        }
        tmp_right_value_605 = mod_consts[455];
        tmp_assign_source_1338 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_605, tmp_right_value_605);
        if (tmp_assign_source_1338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1355;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1518], tmp_assign_source_1338);
    }
    {
        PyObject *tmp_assign_source_1339;
        PyObject *tmp_left_value_606;
        PyObject *tmp_right_value_606;
        tmp_left_value_606 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_606 == NULL)) {
            tmp_left_value_606 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_606 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1356;

            goto frame_exception_exit_1;
        }
        tmp_right_value_606 = mod_consts[457];
        tmp_assign_source_1339 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_606, tmp_right_value_606);
        if (tmp_assign_source_1339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1356;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1519], tmp_assign_source_1339);
    }
    {
        PyObject *tmp_assign_source_1340;
        PyObject *tmp_left_value_607;
        PyObject *tmp_right_value_607;
        tmp_left_value_607 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_607 == NULL)) {
            tmp_left_value_607 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_607 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1357;

            goto frame_exception_exit_1;
        }
        tmp_right_value_607 = mod_consts[459];
        tmp_assign_source_1340 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_607, tmp_right_value_607);
        if (tmp_assign_source_1340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1357;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1520], tmp_assign_source_1340);
    }
    {
        PyObject *tmp_assign_source_1341;
        PyObject *tmp_left_value_608;
        PyObject *tmp_right_value_608;
        tmp_left_value_608 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_608 == NULL)) {
            tmp_left_value_608 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_608 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1358;

            goto frame_exception_exit_1;
        }
        tmp_right_value_608 = mod_consts[463];
        tmp_assign_source_1341 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_608, tmp_right_value_608);
        if (tmp_assign_source_1341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1521], tmp_assign_source_1341);
    }
    {
        PyObject *tmp_assign_source_1342;
        PyObject *tmp_left_value_609;
        PyObject *tmp_right_value_609;
        tmp_left_value_609 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_609 == NULL)) {
            tmp_left_value_609 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_609 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1359;

            goto frame_exception_exit_1;
        }
        tmp_right_value_609 = mod_consts[465];
        tmp_assign_source_1342 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_609, tmp_right_value_609);
        if (tmp_assign_source_1342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1359;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1522], tmp_assign_source_1342);
    }
    {
        PyObject *tmp_assign_source_1343;
        PyObject *tmp_left_value_610;
        PyObject *tmp_right_value_610;
        tmp_left_value_610 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_610 == NULL)) {
            tmp_left_value_610 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_610 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1360;

            goto frame_exception_exit_1;
        }
        tmp_right_value_610 = mod_consts[467];
        tmp_assign_source_1343 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_610, tmp_right_value_610);
        if (tmp_assign_source_1343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1360;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1523], tmp_assign_source_1343);
    }
    {
        PyObject *tmp_assign_source_1344;
        PyObject *tmp_left_value_611;
        PyObject *tmp_right_value_611;
        tmp_left_value_611 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_611 == NULL)) {
            tmp_left_value_611 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_611 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1361;

            goto frame_exception_exit_1;
        }
        tmp_right_value_611 = mod_consts[469];
        tmp_assign_source_1344 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_611, tmp_right_value_611);
        if (tmp_assign_source_1344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1361;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1524], tmp_assign_source_1344);
    }
    {
        PyObject *tmp_assign_source_1345;
        PyObject *tmp_left_value_612;
        PyObject *tmp_right_value_612;
        tmp_left_value_612 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_612 == NULL)) {
            tmp_left_value_612 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_612 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1362;

            goto frame_exception_exit_1;
        }
        tmp_right_value_612 = mod_consts[471];
        tmp_assign_source_1345 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_612, tmp_right_value_612);
        if (tmp_assign_source_1345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1362;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1525], tmp_assign_source_1345);
    }
    {
        PyObject *tmp_assign_source_1346;
        PyObject *tmp_left_value_613;
        PyObject *tmp_right_value_613;
        tmp_left_value_613 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_613 == NULL)) {
            tmp_left_value_613 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_613 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        tmp_right_value_613 = mod_consts[473];
        tmp_assign_source_1346 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_613, tmp_right_value_613);
        if (tmp_assign_source_1346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1526], tmp_assign_source_1346);
    }
    {
        PyObject *tmp_assign_source_1347;
        PyObject *tmp_left_value_614;
        PyObject *tmp_right_value_614;
        tmp_left_value_614 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_614 == NULL)) {
            tmp_left_value_614 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_614 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1364;

            goto frame_exception_exit_1;
        }
        tmp_right_value_614 = mod_consts[475];
        tmp_assign_source_1347 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_614, tmp_right_value_614);
        if (tmp_assign_source_1347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1364;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1527], tmp_assign_source_1347);
    }
    {
        PyObject *tmp_assign_source_1348;
        PyObject *tmp_left_value_615;
        PyObject *tmp_right_value_615;
        tmp_left_value_615 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_left_value_615 == NULL)) {
            tmp_left_value_615 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_left_value_615 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1365;

            goto frame_exception_exit_1;
        }
        tmp_right_value_615 = mod_consts[477];
        tmp_assign_source_1348 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_615, tmp_right_value_615);
        if (tmp_assign_source_1348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1365;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1528], tmp_assign_source_1348);
    }
    {
        PyObject *tmp_assign_source_1349;
        tmp_assign_source_1349 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_1349 == NULL)) {
            tmp_assign_source_1349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_assign_source_1349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1366;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1529], tmp_assign_source_1349);
    }
    {
        PyObject *tmp_assign_source_1350;
        tmp_assign_source_1350 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_1350 == NULL)) {
            tmp_assign_source_1350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_assign_source_1350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1367;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1530], tmp_assign_source_1350);
    }
    {
        PyObject *tmp_assign_source_1351;
        PyObject *tmp_left_value_616;
        PyObject *tmp_right_value_616;
        tmp_left_value_616 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_left_value_616 == NULL)) {
            tmp_left_value_616 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_left_value_616 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;

            goto frame_exception_exit_1;
        }
        tmp_right_value_616 = mod_consts[44];
        tmp_assign_source_1351 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_616, tmp_right_value_616);
        if (tmp_assign_source_1351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1531], tmp_assign_source_1351);
    }
    {
        PyObject *tmp_assign_source_1352;
        tmp_assign_source_1352 = mod_consts[1532];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1533], tmp_assign_source_1352);
    }
    {
        PyObject *tmp_assign_source_1353;
        tmp_assign_source_1353 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1533]);

        if (unlikely(tmp_assign_source_1353 == NULL)) {
            tmp_assign_source_1353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1533]);
        }

        assert(!(tmp_assign_source_1353 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1534], tmp_assign_source_1353);
    }
    {
        PyObject *tmp_assign_source_1354;
        tmp_assign_source_1354 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1535], tmp_assign_source_1354);
    }
    {
        PyObject *tmp_assign_source_1355;
        tmp_assign_source_1355 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1536], tmp_assign_source_1355);
    }
    {
        PyObject *tmp_assign_source_1356;
        tmp_assign_source_1356 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1537], tmp_assign_source_1356);
    }
    {
        PyObject *tmp_assign_source_1357;
        tmp_assign_source_1357 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1538], tmp_assign_source_1357);
    }
    {
        PyObject *tmp_assign_source_1358;
        PyObject *tmp_left_value_617;
        PyObject *tmp_right_value_617;
        tmp_left_value_617 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_617 == NULL)) {
            tmp_left_value_617 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_617 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1375;

            goto frame_exception_exit_1;
        }
        tmp_right_value_617 = mod_consts[38];
        tmp_assign_source_1358 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_617, tmp_right_value_617);
        if (tmp_assign_source_1358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1375;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1539], tmp_assign_source_1358);
    }
    {
        PyObject *tmp_assign_source_1359;
        PyObject *tmp_left_value_618;
        PyObject *tmp_right_value_618;
        tmp_left_value_618 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_618 == NULL)) {
            tmp_left_value_618 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_618 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1376;

            goto frame_exception_exit_1;
        }
        tmp_right_value_618 = mod_consts[906];
        tmp_assign_source_1359 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_618, tmp_right_value_618);
        if (tmp_assign_source_1359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1376;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1540], tmp_assign_source_1359);
    }
    {
        PyObject *tmp_assign_source_1360;
        tmp_assign_source_1360 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1540]);

        if (unlikely(tmp_assign_source_1360 == NULL)) {
            tmp_assign_source_1360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1540]);
        }

        assert(!(tmp_assign_source_1360 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1541], tmp_assign_source_1360);
    }
    {
        PyObject *tmp_assign_source_1361;
        tmp_assign_source_1361 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1539]);

        if (unlikely(tmp_assign_source_1361 == NULL)) {
            tmp_assign_source_1361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1539]);
        }

        if (tmp_assign_source_1361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1378;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1541], tmp_assign_source_1361);
    }
    {
        PyObject *tmp_assign_source_1362;
        PyObject *tmp_left_value_619;
        PyObject *tmp_right_value_619;
        tmp_left_value_619 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_619 == NULL)) {
            tmp_left_value_619 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_619 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1379;

            goto frame_exception_exit_1;
        }
        tmp_right_value_619 = mod_consts[40];
        tmp_assign_source_1362 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_619, tmp_right_value_619);
        if (tmp_assign_source_1362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1379;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1542], tmp_assign_source_1362);
    }
    {
        PyObject *tmp_assign_source_1363;
        PyObject *tmp_left_value_620;
        PyObject *tmp_right_value_620;
        tmp_left_value_620 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_620 == NULL)) {
            tmp_left_value_620 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_620 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;

            goto frame_exception_exit_1;
        }
        tmp_right_value_620 = mod_consts[42];
        tmp_assign_source_1363 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_620, tmp_right_value_620);
        if (tmp_assign_source_1363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1543], tmp_assign_source_1363);
    }
    {
        PyObject *tmp_assign_source_1364;
        tmp_assign_source_1364 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1544], tmp_assign_source_1364);
    }
    {
        PyObject *tmp_assign_source_1365;
        tmp_assign_source_1365 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1545], tmp_assign_source_1365);
    }
    {
        PyObject *tmp_assign_source_1366;
        tmp_assign_source_1366 = mod_consts[1546];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1547], tmp_assign_source_1366);
    }
    {
        PyObject *tmp_assign_source_1367;
        tmp_assign_source_1367 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1547]);

        if (unlikely(tmp_assign_source_1367 == NULL)) {
            tmp_assign_source_1367 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1547]);
        }

        assert(!(tmp_assign_source_1367 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1548], tmp_assign_source_1367);
    }
    {
        PyObject *tmp_assign_source_1368;
        tmp_assign_source_1368 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549], tmp_assign_source_1368);
    }
    {
        PyObject *tmp_assign_source_1369;
        PyObject *tmp_left_value_621;
        PyObject *tmp_right_value_621;
        tmp_left_value_621 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_621 == NULL)) {
            tmp_left_value_621 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_621 == NULL));
        tmp_right_value_621 = mod_consts[10];
        tmp_assign_source_1369 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_621, tmp_right_value_621);
        assert(!(tmp_assign_source_1369 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1550], tmp_assign_source_1369);
    }
    {
        PyObject *tmp_assign_source_1370;
        PyObject *tmp_left_value_622;
        PyObject *tmp_right_value_622;
        tmp_left_value_622 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_622 == NULL)) {
            tmp_left_value_622 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_622 == NULL));
        tmp_right_value_622 = mod_consts[12];
        tmp_assign_source_1370 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_622, tmp_right_value_622);
        assert(!(tmp_assign_source_1370 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1551], tmp_assign_source_1370);
    }
    {
        PyObject *tmp_assign_source_1371;
        PyObject *tmp_left_value_623;
        PyObject *tmp_right_value_623;
        tmp_left_value_623 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_623 == NULL)) {
            tmp_left_value_623 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_623 == NULL));
        tmp_right_value_623 = mod_consts[120];
        tmp_assign_source_1371 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_623, tmp_right_value_623);
        assert(!(tmp_assign_source_1371 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1552], tmp_assign_source_1371);
    }
    {
        PyObject *tmp_assign_source_1372;
        PyObject *tmp_left_value_624;
        PyObject *tmp_right_value_624;
        tmp_left_value_624 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_624 == NULL)) {
            tmp_left_value_624 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_624 == NULL));
        tmp_right_value_624 = mod_consts[14];
        tmp_assign_source_1372 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_624, tmp_right_value_624);
        assert(!(tmp_assign_source_1372 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1553], tmp_assign_source_1372);
    }
    {
        PyObject *tmp_assign_source_1373;
        PyObject *tmp_left_value_625;
        PyObject *tmp_right_value_625;
        tmp_left_value_625 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_625 == NULL)) {
            tmp_left_value_625 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_625 == NULL));
        tmp_right_value_625 = mod_consts[123];
        tmp_assign_source_1373 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_625, tmp_right_value_625);
        assert(!(tmp_assign_source_1373 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1554], tmp_assign_source_1373);
    }
    {
        PyObject *tmp_assign_source_1374;
        PyObject *tmp_left_value_626;
        PyObject *tmp_right_value_626;
        tmp_left_value_626 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_626 == NULL)) {
            tmp_left_value_626 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_626 == NULL));
        tmp_right_value_626 = mod_consts[125];
        tmp_assign_source_1374 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_626, tmp_right_value_626);
        assert(!(tmp_assign_source_1374 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1555], tmp_assign_source_1374);
    }
    {
        PyObject *tmp_assign_source_1375;
        PyObject *tmp_left_value_627;
        PyObject *tmp_right_value_627;
        tmp_left_value_627 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_627 == NULL)) {
            tmp_left_value_627 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_627 == NULL));
        tmp_right_value_627 = mod_consts[134];
        tmp_assign_source_1375 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_627, tmp_right_value_627);
        assert(!(tmp_assign_source_1375 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1556], tmp_assign_source_1375);
    }
    {
        PyObject *tmp_assign_source_1376;
        PyObject *tmp_left_value_628;
        PyObject *tmp_right_value_628;
        tmp_left_value_628 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_628 == NULL)) {
            tmp_left_value_628 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_628 == NULL));
        tmp_right_value_628 = mod_consts[0];
        tmp_assign_source_1376 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_628, tmp_right_value_628);
        assert(!(tmp_assign_source_1376 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1557], tmp_assign_source_1376);
    }
    {
        PyObject *tmp_assign_source_1377;
        PyObject *tmp_left_value_629;
        PyObject *tmp_right_value_629;
        tmp_left_value_629 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_629 == NULL)) {
            tmp_left_value_629 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_629 == NULL));
        tmp_right_value_629 = mod_consts[270];
        tmp_assign_source_1377 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_629, tmp_right_value_629);
        assert(!(tmp_assign_source_1377 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1558], tmp_assign_source_1377);
    }
    {
        PyObject *tmp_assign_source_1378;
        PyObject *tmp_left_value_630;
        PyObject *tmp_right_value_630;
        tmp_left_value_630 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_630 == NULL)) {
            tmp_left_value_630 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_630 == NULL));
        tmp_right_value_630 = mod_consts[247];
        tmp_assign_source_1378 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_630, tmp_right_value_630);
        assert(!(tmp_assign_source_1378 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1559], tmp_assign_source_1378);
    }
    {
        PyObject *tmp_assign_source_1379;
        PyObject *tmp_left_value_631;
        PyObject *tmp_right_value_631;
        tmp_left_value_631 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_631 == NULL)) {
            tmp_left_value_631 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_631 == NULL));
        tmp_right_value_631 = mod_consts[252];
        tmp_assign_source_1379 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_631, tmp_right_value_631);
        assert(!(tmp_assign_source_1379 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1560], tmp_assign_source_1379);
    }
    {
        PyObject *tmp_assign_source_1380;
        tmp_assign_source_1380 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1561], tmp_assign_source_1380);
    }
    {
        PyObject *tmp_assign_source_1381;
        tmp_assign_source_1381 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1562], tmp_assign_source_1381);
    }
    {
        PyObject *tmp_assign_source_1382;
        tmp_assign_source_1382 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1563], tmp_assign_source_1382);
    }
    {
        PyObject *tmp_assign_source_1383;
        tmp_assign_source_1383 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1564], tmp_assign_source_1383);
    }
    {
        PyObject *tmp_assign_source_1384;
        tmp_assign_source_1384 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1565], tmp_assign_source_1384);
    }
    {
        PyObject *tmp_assign_source_1385;
        tmp_assign_source_1385 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1566], tmp_assign_source_1385);
    }
    {
        PyObject *tmp_assign_source_1386;
        PyObject *tmp_left_value_632;
        PyObject *tmp_right_value_632;
        tmp_left_value_632 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_632 == NULL)) {
            tmp_left_value_632 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_632 == NULL));
        tmp_right_value_632 = mod_consts[1];
        tmp_assign_source_1386 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_632, tmp_right_value_632);
        assert(!(tmp_assign_source_1386 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1567], tmp_assign_source_1386);
    }
    {
        PyObject *tmp_assign_source_1387;
        PyObject *tmp_left_value_633;
        PyObject *tmp_right_value_633;
        tmp_left_value_633 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_633 == NULL)) {
            tmp_left_value_633 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_633 == NULL));
        tmp_right_value_633 = mod_consts[138];
        tmp_assign_source_1387 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_633, tmp_right_value_633);
        assert(!(tmp_assign_source_1387 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1568], tmp_assign_source_1387);
    }
    {
        PyObject *tmp_assign_source_1388;
        PyObject *tmp_left_value_634;
        PyObject *tmp_right_value_634;
        tmp_left_value_634 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_634 == NULL)) {
            tmp_left_value_634 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_634 == NULL));
        tmp_right_value_634 = mod_consts[140];
        tmp_assign_source_1388 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_634, tmp_right_value_634);
        assert(!(tmp_assign_source_1388 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1569], tmp_assign_source_1388);
    }
    {
        PyObject *tmp_assign_source_1389;
        tmp_assign_source_1389 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1570], tmp_assign_source_1389);
    }
    {
        PyObject *tmp_assign_source_1390;
        tmp_assign_source_1390 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1571], tmp_assign_source_1390);
    }
    {
        PyObject *tmp_assign_source_1391;
        tmp_assign_source_1391 = mod_consts[1572];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1573], tmp_assign_source_1391);
    }
    {
        PyObject *tmp_assign_source_1392;
        tmp_assign_source_1392 = mod_consts[1574];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1575], tmp_assign_source_1392);
    }
    {
        PyObject *tmp_assign_source_1393;
        tmp_assign_source_1393 = mod_consts[1576];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1577], tmp_assign_source_1393);
    }
    {
        PyObject *tmp_assign_source_1394;
        tmp_assign_source_1394 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1578], tmp_assign_source_1394);
    }
    {
        PyObject *tmp_assign_source_1395;
        tmp_assign_source_1395 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1570]);

        if (unlikely(tmp_assign_source_1395 == NULL)) {
            tmp_assign_source_1395 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1570]);
        }

        assert(!(tmp_assign_source_1395 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1579], tmp_assign_source_1395);
    }
    {
        PyObject *tmp_assign_source_1396;
        PyObject *tmp_left_value_635;
        PyObject *tmp_right_value_635;
        tmp_left_value_635 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1570]);

        if (unlikely(tmp_left_value_635 == NULL)) {
            tmp_left_value_635 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1570]);
        }

        assert(!(tmp_left_value_635 == NULL));
        tmp_right_value_635 = mod_consts[10];
        tmp_assign_source_1396 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_635, tmp_right_value_635);
        assert(!(tmp_assign_source_1396 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1580], tmp_assign_source_1396);
    }
    {
        PyObject *tmp_assign_source_1397;
        PyObject *tmp_left_value_636;
        PyObject *tmp_right_value_636;
        tmp_left_value_636 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1570]);

        if (unlikely(tmp_left_value_636 == NULL)) {
            tmp_left_value_636 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1570]);
        }

        assert(!(tmp_left_value_636 == NULL));
        tmp_right_value_636 = mod_consts[12];
        tmp_assign_source_1397 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_636, tmp_right_value_636);
        assert(!(tmp_assign_source_1397 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1581], tmp_assign_source_1397);
    }
    {
        PyObject *tmp_assign_source_1398;
        PyObject *tmp_left_value_637;
        PyObject *tmp_left_value_638;
        PyObject *tmp_right_value_637;
        PyObject *tmp_right_value_638;
        tmp_left_value_638 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1570]);

        if (unlikely(tmp_left_value_638 == NULL)) {
            tmp_left_value_638 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1570]);
        }

        assert(!(tmp_left_value_638 == NULL));
        tmp_right_value_637 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1575]);

        if (unlikely(tmp_right_value_637 == NULL)) {
            tmp_right_value_637 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1575]);
        }

        assert(!(tmp_right_value_637 == NULL));
        tmp_left_value_637 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_638, tmp_right_value_637);
        assert(!(tmp_left_value_637 == NULL));
        tmp_right_value_638 = mod_consts[120];
        tmp_assign_source_1398 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_637, tmp_right_value_638);
        Py_DECREF(tmp_left_value_637);
        assert(!(tmp_assign_source_1398 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1582], tmp_assign_source_1398);
    }
    {
        PyObject *tmp_assign_source_1399;
        PyObject *tmp_left_value_639;
        PyObject *tmp_left_value_640;
        PyObject *tmp_right_value_639;
        PyObject *tmp_right_value_640;
        tmp_left_value_640 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1570]);

        if (unlikely(tmp_left_value_640 == NULL)) {
            tmp_left_value_640 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1570]);
        }

        assert(!(tmp_left_value_640 == NULL));
        tmp_right_value_639 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1577]);

        if (unlikely(tmp_right_value_639 == NULL)) {
            tmp_right_value_639 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1577]);
        }

        assert(!(tmp_right_value_639 == NULL));
        tmp_left_value_639 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_640, tmp_right_value_639);
        assert(!(tmp_left_value_639 == NULL));
        tmp_right_value_640 = mod_consts[120];
        tmp_assign_source_1399 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_639, tmp_right_value_640);
        Py_DECREF(tmp_left_value_639);
        assert(!(tmp_assign_source_1399 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1583], tmp_assign_source_1399);
    }
    {
        PyObject *tmp_assign_source_1400;
        tmp_assign_source_1400 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1571]);

        if (unlikely(tmp_assign_source_1400 == NULL)) {
            tmp_assign_source_1400 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1571]);
        }

        assert(!(tmp_assign_source_1400 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1584], tmp_assign_source_1400);
    }
    {
        PyObject *tmp_assign_source_1401;
        PyObject *tmp_left_value_641;
        PyObject *tmp_right_value_641;
        tmp_left_value_641 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1571]);

        if (unlikely(tmp_left_value_641 == NULL)) {
            tmp_left_value_641 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1571]);
        }

        assert(!(tmp_left_value_641 == NULL));
        tmp_right_value_641 = mod_consts[10];
        tmp_assign_source_1401 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_641, tmp_right_value_641);
        assert(!(tmp_assign_source_1401 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1585], tmp_assign_source_1401);
    }
    {
        PyObject *tmp_assign_source_1402;
        PyObject *tmp_left_value_642;
        PyObject *tmp_right_value_642;
        tmp_left_value_642 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1585]);

        if (unlikely(tmp_left_value_642 == NULL)) {
            tmp_left_value_642 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1585]);
        }

        assert(!(tmp_left_value_642 == NULL));
        tmp_right_value_642 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1575]);

        if (unlikely(tmp_right_value_642 == NULL)) {
            tmp_right_value_642 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1575]);
        }

        assert(!(tmp_right_value_642 == NULL));
        tmp_assign_source_1402 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_642, tmp_right_value_642);
        assert(!(tmp_assign_source_1402 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1586], tmp_assign_source_1402);
    }
    {
        PyObject *tmp_assign_source_1403;
        PyObject *tmp_left_value_643;
        PyObject *tmp_right_value_643;
        tmp_left_value_643 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1585]);

        if (unlikely(tmp_left_value_643 == NULL)) {
            tmp_left_value_643 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1585]);
        }

        assert(!(tmp_left_value_643 == NULL));
        tmp_right_value_643 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1577]);

        if (unlikely(tmp_right_value_643 == NULL)) {
            tmp_right_value_643 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1577]);
        }

        assert(!(tmp_right_value_643 == NULL));
        tmp_assign_source_1403 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_643, tmp_right_value_643);
        assert(!(tmp_assign_source_1403 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1587], tmp_assign_source_1403);
    }
    {
        PyObject *tmp_assign_source_1404;
        PyObject *tmp_left_value_644;
        PyObject *tmp_right_value_644;
        tmp_left_value_644 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1571]);

        if (unlikely(tmp_left_value_644 == NULL)) {
            tmp_left_value_644 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1571]);
        }

        assert(!(tmp_left_value_644 == NULL));
        tmp_right_value_644 = mod_consts[12];
        tmp_assign_source_1404 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_644, tmp_right_value_644);
        assert(!(tmp_assign_source_1404 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1588], tmp_assign_source_1404);
    }
    {
        PyObject *tmp_assign_source_1405;
        PyObject *tmp_left_value_645;
        PyObject *tmp_right_value_645;
        tmp_left_value_645 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1571]);

        if (unlikely(tmp_left_value_645 == NULL)) {
            tmp_left_value_645 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1571]);
        }

        assert(!(tmp_left_value_645 == NULL));
        tmp_right_value_645 = mod_consts[120];
        tmp_assign_source_1405 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_645, tmp_right_value_645);
        assert(!(tmp_assign_source_1405 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1589], tmp_assign_source_1405);
    }
    {
        PyObject *tmp_assign_source_1406;
        PyObject *tmp_left_value_646;
        PyObject *tmp_right_value_646;
        tmp_left_value_646 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_646 == NULL)) {
            tmp_left_value_646 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_646 == NULL));
        tmp_right_value_646 = mod_consts[142];
        tmp_assign_source_1406 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_646, tmp_right_value_646);
        assert(!(tmp_assign_source_1406 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1590], tmp_assign_source_1406);
    }
    {
        PyObject *tmp_assign_source_1407;
        PyObject *tmp_left_value_647;
        PyObject *tmp_right_value_647;
        tmp_left_value_647 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_647 == NULL)) {
            tmp_left_value_647 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_647 == NULL));
        tmp_right_value_647 = mod_consts[17];
        tmp_assign_source_1407 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_647, tmp_right_value_647);
        assert(!(tmp_assign_source_1407 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1591], tmp_assign_source_1407);
    }
    {
        PyObject *tmp_assign_source_1408;
        PyObject *tmp_left_value_648;
        PyObject *tmp_right_value_648;
        tmp_left_value_648 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_648 == NULL)) {
            tmp_left_value_648 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_648 == NULL));
        tmp_right_value_648 = mod_consts[145];
        tmp_assign_source_1408 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_648, tmp_right_value_648);
        assert(!(tmp_assign_source_1408 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1592], tmp_assign_source_1408);
    }
    {
        PyObject *tmp_assign_source_1409;
        PyObject *tmp_left_value_649;
        PyObject *tmp_right_value_649;
        tmp_left_value_649 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_649 == NULL)) {
            tmp_left_value_649 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_649 == NULL));
        tmp_right_value_649 = mod_consts[147];
        tmp_assign_source_1409 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_649, tmp_right_value_649);
        assert(!(tmp_assign_source_1409 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1593], tmp_assign_source_1409);
    }
    {
        PyObject *tmp_assign_source_1410;
        PyObject *tmp_left_value_650;
        PyObject *tmp_right_value_650;
        tmp_left_value_650 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_650 == NULL)) {
            tmp_left_value_650 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_650 == NULL));
        tmp_right_value_650 = mod_consts[276];
        tmp_assign_source_1410 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_650, tmp_right_value_650);
        assert(!(tmp_assign_source_1410 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1594], tmp_assign_source_1410);
    }
    {
        PyObject *tmp_assign_source_1411;
        PyObject *tmp_left_value_651;
        PyObject *tmp_right_value_651;
        tmp_left_value_651 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_651 == NULL)) {
            tmp_left_value_651 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_651 == NULL));
        tmp_right_value_651 = mod_consts[281];
        tmp_assign_source_1411 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_651, tmp_right_value_651);
        assert(!(tmp_assign_source_1411 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1595], tmp_assign_source_1411);
    }
    {
        PyObject *tmp_assign_source_1412;
        PyObject *tmp_left_value_652;
        PyObject *tmp_right_value_652;
        tmp_left_value_652 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1549]);

        if (unlikely(tmp_left_value_652 == NULL)) {
            tmp_left_value_652 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1549]);
        }

        assert(!(tmp_left_value_652 == NULL));
        tmp_right_value_652 = mod_consts[284];
        tmp_assign_source_1412 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_652, tmp_right_value_652);
        assert(!(tmp_assign_source_1412 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1596], tmp_assign_source_1412);
    }
    {
        PyObject *tmp_assign_source_1413;
        tmp_assign_source_1413 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_1413 == NULL)) {
            tmp_assign_source_1413 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_assign_source_1413 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1597], tmp_assign_source_1413);
    }
    {
        PyObject *tmp_assign_source_1414;
        tmp_assign_source_1414 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assign_source_1414 == NULL)) {
            tmp_assign_source_1414 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_assign_source_1414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1431;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1598], tmp_assign_source_1414);
    }
    {
        PyObject *tmp_assign_source_1415;
        PyObject *tmp_left_value_653;
        PyObject *tmp_right_value_653;
        tmp_left_value_653 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_left_value_653 == NULL)) {
            tmp_left_value_653 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_left_value_653 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1432;

            goto frame_exception_exit_1;
        }
        tmp_right_value_653 = mod_consts[10];
        tmp_assign_source_1415 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_653, tmp_right_value_653);
        if (tmp_assign_source_1415 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1432;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1599], tmp_assign_source_1415);
    }
    {
        PyObject *tmp_assign_source_1416;
        PyObject *tmp_left_value_654;
        PyObject *tmp_right_value_654;
        tmp_left_value_654 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_left_value_654 == NULL)) {
            tmp_left_value_654 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_left_value_654 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1433;

            goto frame_exception_exit_1;
        }
        tmp_right_value_654 = mod_consts[120];
        tmp_assign_source_1416 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_654, tmp_right_value_654);
        if (tmp_assign_source_1416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1433;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1600], tmp_assign_source_1416);
    }
    {
        PyObject *tmp_assign_source_1417;
        PyObject *tmp_left_value_655;
        PyObject *tmp_right_value_655;
        tmp_left_value_655 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_left_value_655 == NULL)) {
            tmp_left_value_655 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_left_value_655 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1434;

            goto frame_exception_exit_1;
        }
        tmp_right_value_655 = mod_consts[14];
        tmp_assign_source_1417 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_655, tmp_right_value_655);
        if (tmp_assign_source_1417 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1434;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1601], tmp_assign_source_1417);
    }
    {
        PyObject *tmp_assign_source_1418;
        tmp_assign_source_1418 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1602], tmp_assign_source_1418);
    }
    {
        PyObject *tmp_assign_source_1419;
        tmp_assign_source_1419 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1603], tmp_assign_source_1419);
    }
    {
        PyObject *tmp_assign_source_1420;
        tmp_assign_source_1420 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1604], tmp_assign_source_1420);
    }
    {
        PyObject *tmp_assign_source_1421;
        tmp_assign_source_1421 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1605], tmp_assign_source_1421);
    }
    {
        PyObject *tmp_assign_source_1422;
        tmp_assign_source_1422 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1606], tmp_assign_source_1422);
    }
    {
        PyObject *tmp_assign_source_1423;
        tmp_assign_source_1423 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1606], tmp_assign_source_1423);
    }
    {
        PyObject *tmp_assign_source_1424;
        tmp_assign_source_1424 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1607], tmp_assign_source_1424);
    }
    {
        PyObject *tmp_assign_source_1425;
        tmp_assign_source_1425 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1608], tmp_assign_source_1425);
    }
    {
        PyObject *tmp_assign_source_1426;
        tmp_assign_source_1426 = mod_consts[1609];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1610], tmp_assign_source_1426);
    }
    {
        PyObject *tmp_assign_source_1427;
        tmp_assign_source_1427 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1610]);

        if (unlikely(tmp_assign_source_1427 == NULL)) {
            tmp_assign_source_1427 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1610]);
        }

        assert(!(tmp_assign_source_1427 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1611], tmp_assign_source_1427);
    }
    {
        PyObject *tmp_assign_source_1428;
        tmp_assign_source_1428 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612], tmp_assign_source_1428);
    }
    {
        PyObject *tmp_assign_source_1429;
        PyObject *tmp_left_value_656;
        PyObject *tmp_right_value_656;
        tmp_left_value_656 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_656 == NULL)) {
            tmp_left_value_656 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_656 == NULL));
        tmp_right_value_656 = mod_consts[10];
        tmp_assign_source_1429 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_656, tmp_right_value_656);
        assert(!(tmp_assign_source_1429 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1613], tmp_assign_source_1429);
    }
    {
        PyObject *tmp_assign_source_1430;
        PyObject *tmp_left_value_657;
        PyObject *tmp_right_value_657;
        tmp_left_value_657 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_657 == NULL)) {
            tmp_left_value_657 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_657 == NULL));
        tmp_right_value_657 = mod_consts[12];
        tmp_assign_source_1430 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_657, tmp_right_value_657);
        assert(!(tmp_assign_source_1430 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1614], tmp_assign_source_1430);
    }
    {
        PyObject *tmp_assign_source_1431;
        PyObject *tmp_left_value_658;
        PyObject *tmp_right_value_658;
        tmp_left_value_658 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_658 == NULL)) {
            tmp_left_value_658 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_658 == NULL));
        tmp_right_value_658 = mod_consts[120];
        tmp_assign_source_1431 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_658, tmp_right_value_658);
        assert(!(tmp_assign_source_1431 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1615], tmp_assign_source_1431);
    }
    {
        PyObject *tmp_assign_source_1432;
        PyObject *tmp_left_value_659;
        PyObject *tmp_right_value_659;
        tmp_left_value_659 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_659 == NULL)) {
            tmp_left_value_659 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_659 == NULL));
        tmp_right_value_659 = mod_consts[14];
        tmp_assign_source_1432 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_659, tmp_right_value_659);
        assert(!(tmp_assign_source_1432 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1616], tmp_assign_source_1432);
    }
    {
        PyObject *tmp_assign_source_1433;
        PyObject *tmp_left_value_660;
        PyObject *tmp_right_value_660;
        tmp_left_value_660 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_660 == NULL)) {
            tmp_left_value_660 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_660 == NULL));
        tmp_right_value_660 = mod_consts[123];
        tmp_assign_source_1433 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_660, tmp_right_value_660);
        assert(!(tmp_assign_source_1433 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1617], tmp_assign_source_1433);
    }
    {
        PyObject *tmp_assign_source_1434;
        PyObject *tmp_left_value_661;
        PyObject *tmp_right_value_661;
        tmp_left_value_661 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_661 == NULL)) {
            tmp_left_value_661 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_661 == NULL));
        tmp_right_value_661 = mod_consts[471];
        tmp_assign_source_1434 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_661, tmp_right_value_661);
        assert(!(tmp_assign_source_1434 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1618], tmp_assign_source_1434);
    }
    {
        PyObject *tmp_assign_source_1435;
        tmp_assign_source_1435 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1618]);

        if (unlikely(tmp_assign_source_1435 == NULL)) {
            tmp_assign_source_1435 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1618]);
        }

        assert(!(tmp_assign_source_1435 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1619], tmp_assign_source_1435);
    }
    {
        PyObject *tmp_assign_source_1436;
        tmp_assign_source_1436 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1617]);

        if (unlikely(tmp_assign_source_1436 == NULL)) {
            tmp_assign_source_1436 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1617]);
        }

        assert(!(tmp_assign_source_1436 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1619], tmp_assign_source_1436);
    }
    {
        PyObject *tmp_assign_source_1437;
        PyObject *tmp_left_value_662;
        PyObject *tmp_right_value_662;
        tmp_left_value_662 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_662 == NULL)) {
            tmp_left_value_662 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_662 == NULL));
        tmp_right_value_662 = mod_consts[125];
        tmp_assign_source_1437 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_662, tmp_right_value_662);
        assert(!(tmp_assign_source_1437 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1620], tmp_assign_source_1437);
    }
    {
        PyObject *tmp_assign_source_1438;
        PyObject *tmp_left_value_663;
        PyObject *tmp_right_value_663;
        tmp_left_value_663 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_663 == NULL)) {
            tmp_left_value_663 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_663 == NULL));
        tmp_right_value_663 = mod_consts[134];
        tmp_assign_source_1438 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_663, tmp_right_value_663);
        assert(!(tmp_assign_source_1438 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1621], tmp_assign_source_1438);
    }
    {
        PyObject *tmp_assign_source_1439;
        PyObject *tmp_left_value_664;
        PyObject *tmp_right_value_664;
        tmp_left_value_664 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_664 == NULL)) {
            tmp_left_value_664 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_664 == NULL));
        tmp_right_value_664 = mod_consts[0];
        tmp_assign_source_1439 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_664, tmp_right_value_664);
        assert(!(tmp_assign_source_1439 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1622], tmp_assign_source_1439);
    }
    {
        PyObject *tmp_assign_source_1440;
        PyObject *tmp_left_value_665;
        PyObject *tmp_right_value_665;
        tmp_left_value_665 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_665 == NULL)) {
            tmp_left_value_665 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_665 == NULL));
        tmp_right_value_665 = mod_consts[270];
        tmp_assign_source_1440 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_665, tmp_right_value_665);
        assert(!(tmp_assign_source_1440 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1623], tmp_assign_source_1440);
    }
    {
        PyObject *tmp_assign_source_1441;
        PyObject *tmp_left_value_666;
        PyObject *tmp_right_value_666;
        tmp_left_value_666 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1612]);

        if (unlikely(tmp_left_value_666 == NULL)) {
            tmp_left_value_666 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1612]);
        }

        assert(!(tmp_left_value_666 == NULL));
        tmp_right_value_666 = mod_consts[247];
        tmp_assign_source_1441 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_666, tmp_right_value_666);
        assert(!(tmp_assign_source_1441 == NULL));
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1624], tmp_assign_source_1441);
    }
    {
        PyObject *tmp_assign_source_1442;
        tmp_assign_source_1442 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1625], tmp_assign_source_1442);
    }
    {
        PyObject *tmp_assign_source_1443;
        tmp_assign_source_1443 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1626], tmp_assign_source_1443);
    }
    {
        PyObject *tmp_assign_source_1444;
        tmp_assign_source_1444 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1627], tmp_assign_source_1444);
    }
    {
        PyObject *tmp_assign_source_1445;
        tmp_assign_source_1445 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1628], tmp_assign_source_1445);
    }
    {
        PyObject *tmp_assign_source_1446;
        tmp_assign_source_1446 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1629], tmp_assign_source_1446);
    }
    {
        PyObject *tmp_assign_source_1447;
        tmp_assign_source_1447 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1630], tmp_assign_source_1447);
    }
    {
        PyObject *tmp_assign_source_1448;
        tmp_assign_source_1448 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1631], tmp_assign_source_1448);
    }
    {
        PyObject *tmp_assign_source_1449;
        PyObject *tmp_left_value_667;
        PyObject *tmp_right_value_667;
        tmp_left_value_667 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_667 == NULL)) {
            tmp_left_value_667 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_667 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1470;

            goto frame_exception_exit_1;
        }
        tmp_right_value_667 = mod_consts[10];
        tmp_assign_source_1449 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_667, tmp_right_value_667);
        if (tmp_assign_source_1449 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1470;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1632], tmp_assign_source_1449);
    }
    {
        PyObject *tmp_assign_source_1450;
        PyObject *tmp_left_value_668;
        PyObject *tmp_right_value_668;
        tmp_left_value_668 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_668 == NULL)) {
            tmp_left_value_668 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_668 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1471;

            goto frame_exception_exit_1;
        }
        tmp_right_value_668 = mod_consts[12];
        tmp_assign_source_1450 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_668, tmp_right_value_668);
        if (tmp_assign_source_1450 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1471;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1633], tmp_assign_source_1450);
    }
    {
        PyObject *tmp_assign_source_1451;
        PyObject *tmp_left_value_669;
        PyObject *tmp_right_value_669;
        tmp_left_value_669 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_669 == NULL)) {
            tmp_left_value_669 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_669 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1472;

            goto frame_exception_exit_1;
        }
        tmp_right_value_669 = mod_consts[142];
        tmp_assign_source_1451 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_669, tmp_right_value_669);
        if (tmp_assign_source_1451 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1472;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1634], tmp_assign_source_1451);
    }
    {
        PyObject *tmp_assign_source_1452;
        tmp_assign_source_1452 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1634]);

        if (unlikely(tmp_assign_source_1452 == NULL)) {
            tmp_assign_source_1452 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1634]);
        }

        assert(!(tmp_assign_source_1452 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1635], tmp_assign_source_1452);
    }
    {
        PyObject *tmp_assign_source_1453;
        PyObject *tmp_left_value_670;
        PyObject *tmp_right_value_670;
        tmp_left_value_670 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_670 == NULL)) {
            tmp_left_value_670 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_670 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1474;

            goto frame_exception_exit_1;
        }
        tmp_right_value_670 = mod_consts[120];
        tmp_assign_source_1453 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_670, tmp_right_value_670);
        if (tmp_assign_source_1453 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1474;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1636], tmp_assign_source_1453);
    }
    {
        PyObject *tmp_assign_source_1454;
        PyObject *tmp_left_value_671;
        PyObject *tmp_right_value_671;
        tmp_left_value_671 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_671 == NULL)) {
            tmp_left_value_671 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_671 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto frame_exception_exit_1;
        }
        tmp_right_value_671 = mod_consts[17];
        tmp_assign_source_1454 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_671, tmp_right_value_671);
        if (tmp_assign_source_1454 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1475;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1637], tmp_assign_source_1454);
    }
    {
        PyObject *tmp_assign_source_1455;
        tmp_assign_source_1455 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1636]);

        if (unlikely(tmp_assign_source_1455 == NULL)) {
            tmp_assign_source_1455 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1636]);
        }

        if (tmp_assign_source_1455 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1476;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1638], tmp_assign_source_1455);
    }
    {
        PyObject *tmp_assign_source_1456;
        PyObject *tmp_left_value_672;
        PyObject *tmp_right_value_672;
        tmp_left_value_672 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_672 == NULL)) {
            tmp_left_value_672 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_672 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1477;

            goto frame_exception_exit_1;
        }
        tmp_right_value_672 = mod_consts[14];
        tmp_assign_source_1456 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_672, tmp_right_value_672);
        if (tmp_assign_source_1456 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1477;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1639], tmp_assign_source_1456);
    }
    {
        PyObject *tmp_assign_source_1457;
        PyObject *tmp_left_value_673;
        PyObject *tmp_right_value_673;
        tmp_left_value_673 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_673 == NULL)) {
            tmp_left_value_673 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_673 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1478;

            goto frame_exception_exit_1;
        }
        tmp_right_value_673 = mod_consts[145];
        tmp_assign_source_1457 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_673, tmp_right_value_673);
        if (tmp_assign_source_1457 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1478;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1640], tmp_assign_source_1457);
    }
    {
        PyObject *tmp_assign_source_1458;
        tmp_assign_source_1458 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1639]);

        if (unlikely(tmp_assign_source_1458 == NULL)) {
            tmp_assign_source_1458 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1639]);
        }

        if (tmp_assign_source_1458 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1479;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1641], tmp_assign_source_1458);
    }
    {
        PyObject *tmp_assign_source_1459;
        PyObject *tmp_left_value_674;
        PyObject *tmp_right_value_674;
        tmp_left_value_674 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_674 == NULL)) {
            tmp_left_value_674 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_674 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1480;

            goto frame_exception_exit_1;
        }
        tmp_right_value_674 = mod_consts[123];
        tmp_assign_source_1459 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_674, tmp_right_value_674);
        if (tmp_assign_source_1459 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1480;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1642], tmp_assign_source_1459);
    }
    {
        PyObject *tmp_assign_source_1460;
        PyObject *tmp_left_value_675;
        PyObject *tmp_right_value_675;
        tmp_left_value_675 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_675 == NULL)) {
            tmp_left_value_675 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_675 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        tmp_right_value_675 = mod_consts[147];
        tmp_assign_source_1460 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_675, tmp_right_value_675);
        if (tmp_assign_source_1460 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1643], tmp_assign_source_1460);
    }
    {
        PyObject *tmp_assign_source_1461;
        tmp_assign_source_1461 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1642]);

        if (unlikely(tmp_assign_source_1461 == NULL)) {
            tmp_assign_source_1461 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1642]);
        }

        if (tmp_assign_source_1461 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1644], tmp_assign_source_1461);
    }
    {
        PyObject *tmp_assign_source_1462;
        PyObject *tmp_left_value_676;
        PyObject *tmp_right_value_676;
        tmp_left_value_676 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_676 == NULL)) {
            tmp_left_value_676 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_676 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1483;

            goto frame_exception_exit_1;
        }
        tmp_right_value_676 = mod_consts[125];
        tmp_assign_source_1462 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_676, tmp_right_value_676);
        if (tmp_assign_source_1462 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1483;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1645], tmp_assign_source_1462);
    }
    {
        PyObject *tmp_assign_source_1463;
        PyObject *tmp_left_value_677;
        PyObject *tmp_right_value_677;
        tmp_left_value_677 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_left_value_677 == NULL)) {
            tmp_left_value_677 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_left_value_677 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        tmp_right_value_677 = mod_consts[134];
        tmp_assign_source_1463 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_677, tmp_right_value_677);
        if (tmp_assign_source_1463 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1484;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1646], tmp_assign_source_1463);
    }
    {
        PyObject *tmp_assign_source_1464;
        tmp_assign_source_1464 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1647], tmp_assign_source_1464);
    }
    {
        PyObject *tmp_assign_source_1465;
        tmp_assign_source_1465 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1648], tmp_assign_source_1465);
    }
    {
        PyObject *tmp_assign_source_1466;
        tmp_assign_source_1466 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1649], tmp_assign_source_1466);
    }
    {
        PyObject *tmp_assign_source_1467;
        tmp_assign_source_1467 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1650], tmp_assign_source_1467);
    }
    {
        PyObject *tmp_assign_source_1468;
        tmp_assign_source_1468 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1651], tmp_assign_source_1468);
    }
    {
        PyObject *tmp_assign_source_1469;
        PyObject *tmp_left_value_678;
        PyObject *tmp_right_value_678;
        tmp_left_value_678 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_678 == NULL)) {
            tmp_left_value_678 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_678 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1490;

            goto frame_exception_exit_1;
        }
        tmp_right_value_678 = mod_consts[38];
        tmp_assign_source_1469 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_678, tmp_right_value_678);
        if (tmp_assign_source_1469 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1490;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1652], tmp_assign_source_1469);
    }
    {
        PyObject *tmp_assign_source_1470;
        PyObject *tmp_left_value_679;
        PyObject *tmp_right_value_679;
        tmp_left_value_679 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_679 == NULL)) {
            tmp_left_value_679 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_679 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto frame_exception_exit_1;
        }
        tmp_right_value_679 = mod_consts[40];
        tmp_assign_source_1470 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_679, tmp_right_value_679);
        if (tmp_assign_source_1470 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1491;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1653], tmp_assign_source_1470);
    }
    {
        PyObject *tmp_assign_source_1471;
        PyObject *tmp_left_value_680;
        PyObject *tmp_right_value_680;
        tmp_left_value_680 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_680 == NULL)) {
            tmp_left_value_680 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_680 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1493;

            goto frame_exception_exit_1;
        }
        tmp_right_value_680 = mod_consts[42];
        tmp_assign_source_1471 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_680, tmp_right_value_680);
        if (tmp_assign_source_1471 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1493;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1654], tmp_assign_source_1471);
    }
    {
        PyObject *tmp_assign_source_1472;
        PyObject *tmp_left_value_681;
        PyObject *tmp_right_value_681;
        tmp_left_value_681 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_681 == NULL)) {
            tmp_left_value_681 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_681 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1495;

            goto frame_exception_exit_1;
        }
        tmp_right_value_681 = mod_consts[906];
        tmp_assign_source_1472 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_681, tmp_right_value_681);
        if (tmp_assign_source_1472 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1495;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1655], tmp_assign_source_1472);
    }
    {
        PyObject *tmp_assign_source_1473;
        PyObject *tmp_left_value_682;
        PyObject *tmp_right_value_682;
        tmp_left_value_682 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_682 == NULL)) {
            tmp_left_value_682 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_682 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1496;

            goto frame_exception_exit_1;
        }
        tmp_right_value_682 = mod_consts[908];
        tmp_assign_source_1473 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_682, tmp_right_value_682);
        if (tmp_assign_source_1473 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1496;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1656], tmp_assign_source_1473);
    }
    {
        PyObject *tmp_assign_source_1474;
        PyObject *tmp_left_value_683;
        PyObject *tmp_right_value_683;
        tmp_left_value_683 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_left_value_683 == NULL)) {
            tmp_left_value_683 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_left_value_683 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;

            goto frame_exception_exit_1;
        }
        tmp_right_value_683 = mod_consts[910];
        tmp_assign_source_1474 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_683, tmp_right_value_683);
        if (tmp_assign_source_1474 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1497;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1657], tmp_assign_source_1474);
    }
    {
        PyObject *tmp_assign_source_1475;
        tmp_assign_source_1475 = mod_consts[1658];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1659], tmp_assign_source_1475);
    }
    {
        PyObject *tmp_assign_source_1476;
        tmp_assign_source_1476 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1659]);

        if (unlikely(tmp_assign_source_1476 == NULL)) {
            tmp_assign_source_1476 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1659]);
        }

        assert(!(tmp_assign_source_1476 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1660], tmp_assign_source_1476);
    }
    {
        PyObject *tmp_assign_source_1477;
        PyObject *tmp_left_value_684;
        PyObject *tmp_right_value_684;
        tmp_left_value_684 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_left_value_684 == NULL)) {
            tmp_left_value_684 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_left_value_684 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1500;

            goto frame_exception_exit_1;
        }
        tmp_right_value_684 = mod_consts[44];
        tmp_assign_source_1477 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_684, tmp_right_value_684);
        if (tmp_assign_source_1477 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1500;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1661], tmp_assign_source_1477);
    }
    {
        PyObject *tmp_assign_source_1478;
        tmp_assign_source_1478 = mod_consts[1662];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1663], tmp_assign_source_1478);
    }
    {
        PyObject *tmp_assign_source_1479;
        tmp_assign_source_1479 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1663]);

        if (unlikely(tmp_assign_source_1479 == NULL)) {
            tmp_assign_source_1479 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1663]);
        }

        assert(!(tmp_assign_source_1479 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1664], tmp_assign_source_1479);
    }
    {
        PyObject *tmp_assign_source_1480;
        tmp_assign_source_1480 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1665], tmp_assign_source_1480);
    }
    {
        PyObject *tmp_assign_source_1481;
        tmp_assign_source_1481 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1666], tmp_assign_source_1481);
    }
    {
        PyObject *tmp_assign_source_1482;
        tmp_assign_source_1482 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1667], tmp_assign_source_1482);
    }
    {
        PyObject *tmp_assign_source_1483;
        tmp_assign_source_1483 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1668], tmp_assign_source_1483);
    }
    {
        PyObject *tmp_assign_source_1484;
        tmp_assign_source_1484 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1669], tmp_assign_source_1484);
    }
    {
        PyObject *tmp_assign_source_1485;
        tmp_assign_source_1485 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1670], tmp_assign_source_1485);
    }
    {
        PyObject *tmp_assign_source_1486;
        tmp_assign_source_1486 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1671], tmp_assign_source_1486);
    }
    {
        PyObject *tmp_assign_source_1487;
        tmp_assign_source_1487 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1672], tmp_assign_source_1487);
    }
    {
        PyObject *tmp_assign_source_1488;
        tmp_assign_source_1488 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1673], tmp_assign_source_1488);
    }
    {
        PyObject *tmp_assign_source_1489;
        tmp_assign_source_1489 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1674], tmp_assign_source_1489);
    }
    {
        PyObject *tmp_assign_source_1490;
        tmp_assign_source_1490 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1675], tmp_assign_source_1490);
    }
    {
        PyObject *tmp_assign_source_1491;
        PyObject *tmp_left_value_685;
        PyObject *tmp_right_value_685;
        tmp_left_value_685 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_685 == NULL)) {
            tmp_left_value_685 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_685 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1514;

            goto frame_exception_exit_1;
        }
        tmp_right_value_685 = mod_consts[10];
        tmp_assign_source_1491 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_685, tmp_right_value_685);
        if (tmp_assign_source_1491 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1514;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1676], tmp_assign_source_1491);
    }
    {
        PyObject *tmp_assign_source_1492;
        PyObject *tmp_left_value_686;
        PyObject *tmp_right_value_686;
        tmp_left_value_686 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_686 == NULL)) {
            tmp_left_value_686 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_686 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1515;

            goto frame_exception_exit_1;
        }
        tmp_right_value_686 = mod_consts[12];
        tmp_assign_source_1492 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_686, tmp_right_value_686);
        if (tmp_assign_source_1492 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1515;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1677], tmp_assign_source_1492);
    }
    {
        PyObject *tmp_assign_source_1493;
        PyObject *tmp_left_value_687;
        PyObject *tmp_right_value_687;
        tmp_left_value_687 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_687 == NULL)) {
            tmp_left_value_687 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_687 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1516;

            goto frame_exception_exit_1;
        }
        tmp_right_value_687 = mod_consts[120];
        tmp_assign_source_1493 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_687, tmp_right_value_687);
        if (tmp_assign_source_1493 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1516;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1678], tmp_assign_source_1493);
    }
    {
        PyObject *tmp_assign_source_1494;
        PyObject *tmp_left_value_688;
        PyObject *tmp_right_value_688;
        tmp_left_value_688 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_688 == NULL)) {
            tmp_left_value_688 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_688 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1517;

            goto frame_exception_exit_1;
        }
        tmp_right_value_688 = mod_consts[14];
        tmp_assign_source_1494 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_688, tmp_right_value_688);
        if (tmp_assign_source_1494 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1517;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1679], tmp_assign_source_1494);
    }
    {
        PyObject *tmp_assign_source_1495;
        PyObject *tmp_left_value_689;
        PyObject *tmp_right_value_689;
        tmp_left_value_689 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_689 == NULL)) {
            tmp_left_value_689 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_689 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1518;

            goto frame_exception_exit_1;
        }
        tmp_right_value_689 = mod_consts[123];
        tmp_assign_source_1495 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_689, tmp_right_value_689);
        if (tmp_assign_source_1495 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1518;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1680], tmp_assign_source_1495);
    }
    {
        PyObject *tmp_assign_source_1496;
        PyObject *tmp_left_value_690;
        PyObject *tmp_right_value_690;
        tmp_left_value_690 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_690 == NULL)) {
            tmp_left_value_690 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_690 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1519;

            goto frame_exception_exit_1;
        }
        tmp_right_value_690 = mod_consts[125];
        tmp_assign_source_1496 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_690, tmp_right_value_690);
        if (tmp_assign_source_1496 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1519;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1681], tmp_assign_source_1496);
    }
    {
        PyObject *tmp_assign_source_1497;
        PyObject *tmp_left_value_691;
        PyObject *tmp_right_value_691;
        tmp_left_value_691 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_691 == NULL)) {
            tmp_left_value_691 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_691 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;

            goto frame_exception_exit_1;
        }
        tmp_right_value_691 = mod_consts[134];
        tmp_assign_source_1497 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_691, tmp_right_value_691);
        if (tmp_assign_source_1497 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1520;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1682], tmp_assign_source_1497);
    }
    {
        PyObject *tmp_assign_source_1498;
        PyObject *tmp_left_value_692;
        PyObject *tmp_right_value_692;
        tmp_left_value_692 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_692 == NULL)) {
            tmp_left_value_692 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_692 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1521;

            goto frame_exception_exit_1;
        }
        tmp_right_value_692 = mod_consts[0];
        tmp_assign_source_1498 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_692, tmp_right_value_692);
        if (tmp_assign_source_1498 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1521;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1683], tmp_assign_source_1498);
    }
    {
        PyObject *tmp_assign_source_1499;
        PyObject *tmp_left_value_693;
        PyObject *tmp_right_value_693;
        tmp_left_value_693 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_693 == NULL)) {
            tmp_left_value_693 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_693 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1522;

            goto frame_exception_exit_1;
        }
        tmp_right_value_693 = mod_consts[270];
        tmp_assign_source_1499 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_693, tmp_right_value_693);
        if (tmp_assign_source_1499 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1522;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1684], tmp_assign_source_1499);
    }
    {
        PyObject *tmp_assign_source_1500;
        PyObject *tmp_left_value_694;
        PyObject *tmp_right_value_694;
        tmp_left_value_694 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_694 == NULL)) {
            tmp_left_value_694 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_694 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1523;

            goto frame_exception_exit_1;
        }
        tmp_right_value_694 = mod_consts[247];
        tmp_assign_source_1500 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_694, tmp_right_value_694);
        if (tmp_assign_source_1500 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1523;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1685], tmp_assign_source_1500);
    }
    {
        PyObject *tmp_assign_source_1501;
        PyObject *tmp_left_value_695;
        PyObject *tmp_right_value_695;
        tmp_left_value_695 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_695 == NULL)) {
            tmp_left_value_695 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_695 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1524;

            goto frame_exception_exit_1;
        }
        tmp_right_value_695 = mod_consts[252];
        tmp_assign_source_1501 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_695, tmp_right_value_695);
        if (tmp_assign_source_1501 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1524;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1686], tmp_assign_source_1501);
    }
    {
        PyObject *tmp_assign_source_1502;
        PyObject *tmp_left_value_696;
        PyObject *tmp_right_value_696;
        tmp_left_value_696 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_left_value_696 == NULL)) {
            tmp_left_value_696 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_left_value_696 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1525;

            goto frame_exception_exit_1;
        }
        tmp_right_value_696 = mod_consts[1];
        tmp_assign_source_1502 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_696, tmp_right_value_696);
        if (tmp_assign_source_1502 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1525;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1687], tmp_assign_source_1502);
    }
    {
        PyObject *tmp_assign_source_1503;
        tmp_assign_source_1503 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assign_source_1503 == NULL)) {
            tmp_assign_source_1503 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_assign_source_1503 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1526;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1688], tmp_assign_source_1503);
    }
    {
        PyObject *tmp_assign_source_1504;
        PyObject *tmp_left_value_697;
        PyObject *tmp_right_value_697;
        tmp_left_value_697 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_left_value_697 == NULL)) {
            tmp_left_value_697 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_left_value_697 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1527;

            goto frame_exception_exit_1;
        }
        tmp_right_value_697 = mod_consts[10];
        tmp_assign_source_1504 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_697, tmp_right_value_697);
        if (tmp_assign_source_1504 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1527;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1689], tmp_assign_source_1504);
    }
    {
        PyObject *tmp_assign_source_1505;
        tmp_assign_source_1505 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1690], tmp_assign_source_1505);
    }
    {
        PyObject *tmp_assign_source_1506;
        tmp_assign_source_1506 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1691], tmp_assign_source_1506);
    }
    {
        PyObject *tmp_assign_source_1507;
        tmp_assign_source_1507 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1692], tmp_assign_source_1507);
    }
    {
        PyObject *tmp_assign_source_1508;
        tmp_assign_source_1508 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1693], tmp_assign_source_1508);
    }
    {
        PyObject *tmp_assign_source_1509;
        tmp_assign_source_1509 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1694], tmp_assign_source_1509);
    }
    {
        PyObject *tmp_assign_source_1510;
        tmp_assign_source_1510 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1695], tmp_assign_source_1510);
    }
    {
        PyObject *tmp_assign_source_1511;
        tmp_assign_source_1511 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1696], tmp_assign_source_1511);
    }
    {
        PyObject *tmp_assign_source_1512;
        PyObject *tmp_left_value_698;
        PyObject *tmp_right_value_698;
        tmp_left_value_698 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_left_value_698 == NULL)) {
            tmp_left_value_698 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_left_value_698 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        tmp_right_value_698 = mod_consts[12];
        tmp_assign_source_1512 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_698, tmp_right_value_698);
        if (tmp_assign_source_1512 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1697], tmp_assign_source_1512);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9fa683eec1355242b055416205c91aa);
#endif
    popFrameStack();

    assertFrameObject(frame_e9fa683eec1355242b055416205c91aa);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9fa683eec1355242b055416205c91aa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9fa683eec1355242b055416205c91aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9fa683eec1355242b055416205c91aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9fa683eec1355242b055416205c91aa, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_1513;
        tmp_assign_source_1513 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1698], tmp_assign_source_1513);
    }
    {
        PyObject *tmp_assign_source_1514;
        tmp_assign_source_1514 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1699], tmp_assign_source_1514);
    }
    {
        PyObject *tmp_assign_source_1515;
        tmp_assign_source_1515 = mod_consts[1700];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1701], tmp_assign_source_1515);
    }
    {
        PyObject *tmp_assign_source_1516;
        tmp_assign_source_1516 = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1701]);

        if (unlikely(tmp_assign_source_1516 == NULL)) {
            tmp_assign_source_1516 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1701]);
        }

        assert(!(tmp_assign_source_1516 == NULL));
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1702], tmp_assign_source_1516);
    }
    {
        PyObject *tmp_assign_source_1517;
        tmp_assign_source_1517 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1703], tmp_assign_source_1517);
    }
    {
        PyObject *tmp_assign_source_1518;
        tmp_assign_source_1518 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1704], tmp_assign_source_1518);
    }
    {
        PyObject *tmp_assign_source_1519;
        tmp_assign_source_1519 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1705], tmp_assign_source_1519);
    }
    {
        PyObject *tmp_assign_source_1520;
        tmp_assign_source_1520 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1706], tmp_assign_source_1520);
    }
    {
        PyObject *tmp_assign_source_1521;
        tmp_assign_source_1521 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1707], tmp_assign_source_1521);
    }
    {
        PyObject *tmp_assign_source_1522;
        tmp_assign_source_1522 = mod_consts[1708];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1709], tmp_assign_source_1522);
    }
    {
        PyObject *tmp_assign_source_1523;
        tmp_assign_source_1523 = mod_consts[1710];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1711], tmp_assign_source_1523);
    }
    {
        PyObject *tmp_assign_source_1524;
        tmp_assign_source_1524 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1712], tmp_assign_source_1524);
    }
    {
        PyObject *tmp_assign_source_1525;
        tmp_assign_source_1525 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1713], tmp_assign_source_1525);
    }
    {
        PyObject *tmp_assign_source_1526;
        tmp_assign_source_1526 = mod_consts[1714];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1715], tmp_assign_source_1526);
    }
    {
        PyObject *tmp_assign_source_1527;
        tmp_assign_source_1527 = mod_consts[1716];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1717], tmp_assign_source_1527);
    }
    {
        PyObject *tmp_assign_source_1528;
        tmp_assign_source_1528 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1718], tmp_assign_source_1528);
    }
    {
        PyObject *tmp_assign_source_1529;
        tmp_assign_source_1529 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1719], tmp_assign_source_1529);
    }
    {
        PyObject *tmp_assign_source_1530;
        tmp_assign_source_1530 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1720], tmp_assign_source_1530);
    }
    {
        PyObject *tmp_assign_source_1531;
        tmp_assign_source_1531 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1721], tmp_assign_source_1531);
    }
    {
        PyObject *tmp_assign_source_1532;
        tmp_assign_source_1532 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1722], tmp_assign_source_1532);
    }
    {
        PyObject *tmp_assign_source_1533;
        tmp_assign_source_1533 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1723], tmp_assign_source_1533);
    }
    {
        PyObject *tmp_assign_source_1534;
        tmp_assign_source_1534 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1724], tmp_assign_source_1534);
    }
    {
        PyObject *tmp_assign_source_1535;
        tmp_assign_source_1535 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1725], tmp_assign_source_1535);
    }
    {
        PyObject *tmp_assign_source_1536;
        tmp_assign_source_1536 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1726], tmp_assign_source_1536);
    }
    {
        PyObject *tmp_assign_source_1537;
        tmp_assign_source_1537 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1727], tmp_assign_source_1537);
    }
    {
        PyObject *tmp_assign_source_1538;
        tmp_assign_source_1538 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1728], tmp_assign_source_1538);
    }
    {
        PyObject *tmp_assign_source_1539;
        tmp_assign_source_1539 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1729], tmp_assign_source_1539);
    }
    {
        PyObject *tmp_assign_source_1540;
        tmp_assign_source_1540 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1730], tmp_assign_source_1540);
    }
    {
        PyObject *tmp_assign_source_1541;
        tmp_assign_source_1541 = mod_consts[1731];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1732], tmp_assign_source_1541);
    }
    {
        PyObject *tmp_assign_source_1542;
        tmp_assign_source_1542 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1733], tmp_assign_source_1542);
    }
    {
        PyObject *tmp_assign_source_1543;
        tmp_assign_source_1543 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1734], tmp_assign_source_1543);
    }
    {
        PyObject *tmp_assign_source_1544;
        tmp_assign_source_1544 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1735], tmp_assign_source_1544);
    }
    {
        PyObject *tmp_assign_source_1545;


        tmp_assign_source_1545 = MAKE_FUNCTION_commctrl$$$function__1_INDEXTOOVERLAYMASK();

        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1736], tmp_assign_source_1545);
    }
    {
        PyObject *tmp_assign_source_1546;


        tmp_assign_source_1546 = MAKE_FUNCTION_commctrl$$$function__2_INDEXTOSTATEIMAGEMASK();

        UPDATE_STRING_DICT1(moduledict_commctrl, (Nuitka_StringObject *)mod_consts[1737], tmp_assign_source_1546);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("commctrl", false);

    return module_commctrl;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_commctrl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("commctrl", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
