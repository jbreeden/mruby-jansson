#ifndef Jansson_HEADER
#define Jansson_HEADER

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

/* MRUBY_BINDING: pre_includes */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: includes */
/* sha: edb7fd66d6269161974f375fa74d5a7586f16a4e814069a32b54c4d6ccf1aabd */
#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/compile.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"

#include "jansson.h"

#include "mruby_Jansson_functions.h"
#include "mruby_Jansson_classes.h"
#include "mruby_Jansson_boxing.h"
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_includes */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

/* MRUBY_BINDING: pre_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_macros */
/* sha: ca9df7618851164a27fd1b39f2018bba5ca4ef672bc99ecc6ef0fe07fac20081 */
#define Jansson_module(mrb) mrb_module_get(mrb, "Jansson")
#define Json_class(mrb) mrb_class_get_under(mrb, Jansson_module(mrb), "Json")
#define JsonError_class(mrb) mrb_class_get_under(mrb, Jansson_module(mrb), "JsonError")
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class initialization function declarations
 * ------------------------------------------
 */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: a5c3a648301cfb284175e42a060696fe361ac9ebfbe83379091f45fd456715d5 */
#if BIND_Json_TYPE
void mrb_Jansson_Json_init(mrb_state* mrb);
#endif
#if BIND_JsonError_TYPE
void mrb_Jansson_JsonError_init(mrb_state* mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Macro & Enum definition function declarations
 * ---------------------------------------------
 */
void mruby_Jansson_define_macro_constants(mrb_state* mrb);
void mruby_Jansson_define_enum_constants(mrb_state* mrb);

#endif
