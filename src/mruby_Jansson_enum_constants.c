#include "mruby_Jansson.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_Jansson_define_enum_constants(mrb_state* mrb) {
  struct RClass * Jansson_module = Jansson_module(mrb);
  mrb_value Jansson_mod = mrb_obj_value(Jansson_module(mrb));

/* MRUBY_BINDING: JsonType_enum */
/* sha: cb526e1e6fd385d9670306d94e30290bca599806dbdf06e2b07a4520b84327e4 */
  struct RClass * JsonType_module = mrb_define_module_under(mrb, Jansson_module, "JsonType");
  mrb_value JsonType_mod = mrb_obj_value(JsonType_module);
  mrb_const_set(mrb, JsonType_mod, mrb_intern_lit(mrb, "OBJECT"), mrb_fixnum_value(JSON_OBJECT));
  mrb_const_set(mrb, Jansson_mod, mrb_intern_lit(mrb, "OBJECT"), mrb_fixnum_value(JSON_OBJECT));
  mrb_const_set(mrb, JsonType_mod, mrb_intern_lit(mrb, "ARRAY"), mrb_fixnum_value(JSON_ARRAY));
  mrb_const_set(mrb, Jansson_mod, mrb_intern_lit(mrb, "ARRAY"), mrb_fixnum_value(JSON_ARRAY));
  mrb_const_set(mrb, JsonType_mod, mrb_intern_lit(mrb, "STRING"), mrb_fixnum_value(JSON_STRING));
  mrb_const_set(mrb, Jansson_mod, mrb_intern_lit(mrb, "STRING"), mrb_fixnum_value(JSON_STRING));
  mrb_const_set(mrb, JsonType_mod, mrb_intern_lit(mrb, "INTEGER"), mrb_fixnum_value(JSON_INTEGER));
  mrb_const_set(mrb, Jansson_mod, mrb_intern_lit(mrb, "INTEGER"), mrb_fixnum_value(JSON_INTEGER));
  mrb_const_set(mrb, JsonType_mod, mrb_intern_lit(mrb, "REAL"), mrb_fixnum_value(JSON_REAL));
  mrb_const_set(mrb, Jansson_mod, mrb_intern_lit(mrb, "REAL"), mrb_fixnum_value(JSON_REAL));
  mrb_const_set(mrb, JsonType_mod, mrb_intern_lit(mrb, "TRUE"), mrb_fixnum_value(JSON_TRUE));
  mrb_const_set(mrb, Jansson_mod, mrb_intern_lit(mrb, "TRUE"), mrb_fixnum_value(JSON_TRUE));
  mrb_const_set(mrb, JsonType_mod, mrb_intern_lit(mrb, "FALSE"), mrb_fixnum_value(JSON_FALSE));
  mrb_const_set(mrb, Jansson_mod, mrb_intern_lit(mrb, "FALSE"), mrb_fixnum_value(JSON_FALSE));
  mrb_const_set(mrb, JsonType_mod, mrb_intern_lit(mrb, "NULL"), mrb_fixnum_value(JSON_NULL));
  mrb_const_set(mrb, Jansson_mod, mrb_intern_lit(mrb, "NULL"), mrb_fixnum_value(JSON_NULL));
/* MRUBY_BINDING_END */

}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
