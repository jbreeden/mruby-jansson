/*
 * json_t
 * Defined in file jansson.h @ line 50
 */

#include "mruby_Jansson.h"

#if BIND_Json_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::initialize */
/* sha: 98980b6352820758d5d5c55e8fe16de4ad3c16b921aedb48f8bbfbd0ef75ed07 */
#if BIND_Json_INITIALIZE
mrb_value
mrb_Jansson_Json_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  json_t* native_object = (json_t*)calloc(1, sizeof(json_t));
  mruby_gift_json_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Json::type_reader */
/* sha: 1924048905301c93b9aed36224e7f6134cae6ef2625628a38d215ab7decab2ee */
#if BIND_Json_type_FIELD_READER
mrb_value
mrb_Jansson_Json_get_type(mrb_state* mrb, mrb_value self) {
  json_t * native_self = mruby_unbox_json_t(self);

  json_type native_type = native_self->type;

  mrb_value type = mrb_fixnum_value(native_type);

  return type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::type_writer */
/* sha: 4061338621e8b0a33506efcc2ac1caf563cb8593978c2381ea312b4ef32a8e67 */
#if BIND_Json_type_FIELD_WRITER
mrb_value
mrb_Jansson_Json_set_type(mrb_state* mrb, mrb_value self) {
  json_t * native_self = mruby_unbox_json_t(self);
  mrb_int native_type;

  mrb_get_args(mrb, "i", &native_type);

  native_self->type = native_type;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::refcount_reader */
/* sha: 4d4a4495ebdfcaa4f1115229b116921b6f6c70afe981b10039c7e98da89af1cc */
#if BIND_Json_refcount_FIELD_READER
mrb_value
mrb_Jansson_Json_get_refcount(mrb_state* mrb, mrb_value self) {
  json_t * native_self = mruby_unbox_json_t(self);

  size_t native_refcount = native_self->refcount;

  mrb_value refcount = mrb_fixnum_value(native_refcount);

  return refcount;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::refcount_writer */
/* sha: f57a9954be814f9ffdefe838a515f53ef513e01f4293aca378733bf354917047 */
#if BIND_Json_refcount_FIELD_WRITER
mrb_value
mrb_Jansson_Json_set_refcount(mrb_state* mrb, mrb_value self) {
  json_t * native_self = mruby_unbox_json_t(self);
  mrb_int native_refcount;

  mrb_get_args(mrb, "i", &native_refcount);

  native_self->refcount = native_refcount;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Jansson_Json_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::class_definition */
/* sha: ac2eda227ecf7adf350c73bd7c124ddac133e405e320cb436e647fba6775c6c3 */
  struct RClass* Json_class = mrb_define_class_under(mrb, Jansson_module(mrb), "Json", mrb->object_class);
  MRB_SET_INSTANCE_TT(Json_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::class_method_definitions */
/* sha: ca5d7a36cb4fdea2066c18c0ef298ba619b098faedcb29c0ccb5d613e89d1a26 */
#if BIND_Json_INITIALIZE
  mrb_define_method(mrb, Json_class, "initialize", mrb_Jansson_Json_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Json::attr_definitions */
/* sha: f740d406941b6bedd1e89022bb6a2b97db0666c26c4ede23616c539d125cb647 */
  /*
   * Fields
   */
#if BIND_Json_type_FIELD_READER
  mrb_define_method(mrb, Json_class, "type", mrb_Jansson_Json_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Json_type_FIELD_WRITER
  mrb_define_method(mrb, Json_class, "type=", mrb_Jansson_Json_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Json_refcount_FIELD_READER
  mrb_define_method(mrb, Json_class, "refcount", mrb_Jansson_Json_get_refcount, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Json_refcount_FIELD_WRITER
  mrb_define_method(mrb, Json_class, "refcount=", mrb_Jansson_Json_set_refcount, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Json::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
