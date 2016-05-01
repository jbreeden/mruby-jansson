#include "mruby_Jansson.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
extern "C" {
#endif

/* MRUBY_BINDING: json_array */
/* sha: 84a1df17742df125029be59b4bcbc1392d6bbf6add2384a5bd50c7150d44bf55 */
#if BIND_json_array_FUNCTION
#define json_array_REQUIRED_ARGC 0
#define json_array_OPTIONAL_ARGC 0
/* json_t * json_array() */
mrb_value
mrb_Jansson_json_array(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  json_t * native_return_value = json_array();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_append */
/* sha: 7196bf4c3d69da4c9ac759b7ec08f2c2b283b89ccdec865566bd0bde45e62150 */
#if BIND_json_array_append_FUNCTION
#define json_array_append_REQUIRED_ARGC 2
#define json_array_append_OPTIONAL_ARGC 0
/* int json_array_append(json_t * array, json_t * value) */
mrb_value
mrb_Jansson_json_array_append(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &array, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_array_append(native_array, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_append_new */
/* sha: ca939f5573aa2e5c46ab94f28ef6f1652c533ad66b8edc75d9a2564a8bc192b8 */
#if BIND_json_array_append_new_FUNCTION
#define json_array_append_new_REQUIRED_ARGC 2
#define json_array_append_new_OPTIONAL_ARGC 0
/* int json_array_append_new(json_t * array, json_t * value) */
mrb_value
mrb_Jansson_json_array_append_new(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &array, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_array_append_new(native_array, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_clear */
/* sha: 7d748bf295235e8280e19ebf2b9d6502bf7b41c5b8c98850bafb1de37ef1619f */
#if BIND_json_array_clear_FUNCTION
#define json_array_clear_REQUIRED_ARGC 1
#define json_array_clear_OPTIONAL_ARGC 0
/* int json_array_clear(json_t * array) */
mrb_value
mrb_Jansson_json_array_clear(mrb_state* mrb, mrb_value self) {
  mrb_value array;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &array);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Invocation */
  int native_return_value = json_array_clear(native_array);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_extend */
/* sha: 2731aaa35bc6bf5cae8d7ad1e2b77f5667b7b63e2639f4712988281c7ee1f562 */
#if BIND_json_array_extend_FUNCTION
#define json_array_extend_REQUIRED_ARGC 2
#define json_array_extend_OPTIONAL_ARGC 0
/* int json_array_extend(json_t * array, json_t * other) */
mrb_value
mrb_Jansson_json_array_extend(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_value other;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &array, &other);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, other, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Unbox param: other */
  json_t * native_other = (mrb_nil_p(other) ? NULL : mruby_unbox_json_t(other));

  /* Invocation */
  int native_return_value = json_array_extend(native_array, native_other);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_get */
/* sha: dcb561e70c424db54433aebe092c37b47b5eeb888cff0b9c2f4f023c28c96062 */
#if BIND_json_array_get_FUNCTION
#define json_array_get_REQUIRED_ARGC 2
#define json_array_get_OPTIONAL_ARGC 0
/* json_t * json_array_get(const json_t * array, size_t index) */
mrb_value
mrb_Jansson_json_array_get(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &array, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  const json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Invocation */
  json_t * native_return_value = json_array_get(native_array, native_index);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_insert */
/* sha: 9120280b9fdeaa505ea1544a5e3764723c9ddf80981b2ec512bd8203ca6d6717 */
#if BIND_json_array_insert_FUNCTION
#define json_array_insert_REQUIRED_ARGC 3
#define json_array_insert_OPTIONAL_ARGC 0
/* int json_array_insert(json_t * array, size_t ind, json_t * value) */
mrb_value
mrb_Jansson_json_array_insert(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_int native_ind;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &array, &native_ind, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_array_insert(native_array, native_ind, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_insert_new */
/* sha: b11766abc2fb512c3c64b241ea275009377921ee04ffbce8367affeb243d967e */
#if BIND_json_array_insert_new_FUNCTION
#define json_array_insert_new_REQUIRED_ARGC 3
#define json_array_insert_new_OPTIONAL_ARGC 0
/* int json_array_insert_new(json_t * array, size_t index, json_t * value) */
mrb_value
mrb_Jansson_json_array_insert_new(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_int native_index;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &array, &native_index, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_array_insert_new(native_array, native_index, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_remove */
/* sha: 77bac4cf023fbd8a01c37457ccb0ad5e9001fdc38099183f1c13a621bbb64537 */
#if BIND_json_array_remove_FUNCTION
#define json_array_remove_REQUIRED_ARGC 2
#define json_array_remove_OPTIONAL_ARGC 0
/* int json_array_remove(json_t * array, size_t index) */
mrb_value
mrb_Jansson_json_array_remove(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &array, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Invocation */
  int native_return_value = json_array_remove(native_array, native_index);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_set */
/* sha: a8de8ecbf908d0406e4fbe396145a3a2c552ada73885bc33b3167ba6d21c0a22 */
#if BIND_json_array_set_FUNCTION
#define json_array_set_REQUIRED_ARGC 3
#define json_array_set_OPTIONAL_ARGC 0
/* int json_array_set(json_t * array, size_t ind, json_t * value) */
mrb_value
mrb_Jansson_json_array_set(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_int native_ind;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &array, &native_ind, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_array_set(native_array, native_ind, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_set_new */
/* sha: d2f67898df0001df2ef4d6f262b6e49c89b2596ef428a8231fa6d2acdd834ba8 */
#if BIND_json_array_set_new_FUNCTION
#define json_array_set_new_REQUIRED_ARGC 3
#define json_array_set_new_OPTIONAL_ARGC 0
/* int json_array_set_new(json_t * array, size_t index, json_t * value) */
mrb_value
mrb_Jansson_json_array_set_new(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_int native_index;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &array, &native_index, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_array_set_new(native_array, native_index, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_array_size */
/* sha: 94e5066e6dfcc5f7c5a197c9ea42c3f67ba073c5dac7fbded6f814d529624c47 */
#if BIND_json_array_size_FUNCTION
#define json_array_size_REQUIRED_ARGC 1
#define json_array_size_OPTIONAL_ARGC 0
/* size_t json_array_size(const json_t * array) */
mrb_value
mrb_Jansson_json_array_size(mrb_state* mrb, mrb_value self) {
  mrb_value array;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &array);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  const json_t * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_json_t(array));

  /* Invocation */
  size_t native_return_value = json_array_size(native_array);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_copy */
/* sha: 70105e47b551ef766d3363f49fd4644c47fbffb0e47d7b9f084a98805f084b12 */
#if BIND_json_copy_FUNCTION
#define json_copy_REQUIRED_ARGC 1
#define json_copy_OPTIONAL_ARGC 0
/* json_t * json_copy(json_t * value) */
mrb_value
mrb_Jansson_json_copy(mrb_state* mrb, mrb_value self) {
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  json_t * native_return_value = json_copy(native_value);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_decref */
/* sha: 19065f36b0a2866ee3683e87275fe4a52afd69dfceaa83144c05e957829bb6b3 */
#if BIND_json_decref_FUNCTION
#define json_decref_REQUIRED_ARGC 1
#define json_decref_OPTIONAL_ARGC 0
/* void json_decref(json_t * json) */
mrb_value
mrb_Jansson_json_decref(mrb_state* mrb, mrb_value self) {
  mrb_value json;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &json);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, json, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: json */
  json_t * native_json = (mrb_nil_p(json) ? NULL : mruby_unbox_json_t(json));

  /* Invocation */
  json_decref(native_json);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_deep_copy */
/* sha: 858732640b56d8fe988a7fa6f3d7748697e0b41cc234eb2c3e360139d2af9820 */
#if BIND_json_deep_copy_FUNCTION
#define json_deep_copy_REQUIRED_ARGC 1
#define json_deep_copy_OPTIONAL_ARGC 0
/* json_t * json_deep_copy(const json_t * value) */
mrb_value
mrb_Jansson_json_deep_copy(mrb_state* mrb, mrb_value self) {
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: value */
  const json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  json_t * native_return_value = json_deep_copy(native_value);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_delete */
/* sha: f93e6945fbf41cd346237e9e6a1fe8d649ecb726e676dacb7f71a3555fda69fd */
#if BIND_json_delete_FUNCTION
#define json_delete_REQUIRED_ARGC 1
#define json_delete_OPTIONAL_ARGC 0
/* void json_delete(json_t * json) */
mrb_value
mrb_Jansson_json_delete(mrb_state* mrb, mrb_value self) {
  mrb_value json;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &json);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, json, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: json */
  json_t * native_json = (mrb_nil_p(json) ? NULL : mruby_unbox_json_t(json));

  /* Invocation */
  json_delete(native_json);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_dump_callback */
/* sha: feda3c19d220ebce790b2d21a7a459ecec3e7477f32d99fe6e42b3549c4060a3 */
#if BIND_json_dump_callback_FUNCTION
#define json_dump_callback_REQUIRED_ARGC 4
#define json_dump_callback_OPTIONAL_ARGC 0
/* int json_dump_callback(const json_t * json, json_dump_callback_t callback, void * data, size_t flags) */
mrb_value
mrb_Jansson_json_dump_callback(mrb_state* mrb, mrb_value self) {
  mrb_value json;
  mrb_value callback;
  mrb_value data;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oooi", &json, &callback, &data, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, json, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  TODO_type_check_json_dump_callback_t(callback);
  TODO_type_check_void_PTR(data);

  /* Unbox param: json */
  const json_t * native_json = (mrb_nil_p(json) ? NULL : mruby_unbox_json_t(json));

  /* Unbox param: callback */
  json_dump_callback_t native_callback = TODO_mruby_unbox_json_dump_callback_t(callback);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Invocation */
  int native_return_value = json_dump_callback(native_json, native_callback, native_data, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_dump_file */
/* sha: d3eb0095e4dcd115acb2587a485b36ef810fedc38d8f92267eb0d531fcef36ce */
#if BIND_json_dump_file_FUNCTION
#define json_dump_file_REQUIRED_ARGC 3
#define json_dump_file_OPTIONAL_ARGC 0
/* int json_dump_file(const json_t * json, const char * path, size_t flags) */
mrb_value
mrb_Jansson_json_dump_file(mrb_state* mrb, mrb_value self) {
  mrb_value json;
  char * native_path = NULL;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &json, &native_path, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, json, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: json */
  const json_t * native_json = (mrb_nil_p(json) ? NULL : mruby_unbox_json_t(json));

  /* Invocation */
  int native_return_value = json_dump_file(native_json, native_path, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_dumpf */
/* sha: 0172cf132f0fa070fa93ee3a80e49f1daedecfe4a520abc205edd812ffa743bf */
#if BIND_json_dumpf_FUNCTION
#define json_dumpf_REQUIRED_ARGC 3
#define json_dumpf_OPTIONAL_ARGC 0
/* int json_dumpf(const json_t * json, FILE * output, size_t flags) */
mrb_value
mrb_Jansson_json_dumpf(mrb_state* mrb, mrb_value self) {
  mrb_value json;
  mrb_value output;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &json, &output, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, json, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  TODO_type_check_FILE_PTR(output);

  /* Unbox param: json */
  const json_t * native_json = (mrb_nil_p(json) ? NULL : mruby_unbox_json_t(json));

  /* Unbox param: output */
  FILE * native_output = TODO_mruby_unbox_FILE_PTR(output);

  /* Invocation */
  int native_return_value = json_dumpf(native_json, native_output, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_dumps */
/* sha: dc59bb92adaf740d8132173e705dec524e338e015f2a0959e6506a84cfbd3475 */
#if BIND_json_dumps_FUNCTION
#define json_dumps_REQUIRED_ARGC 2
#define json_dumps_OPTIONAL_ARGC 0
/* char * json_dumps(const json_t * json, size_t flags) */
mrb_value
mrb_Jansson_json_dumps(mrb_state* mrb, mrb_value self) {
  mrb_value json;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &json, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, json, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: json */
  const json_t * native_json = (mrb_nil_p(json) ? NULL : mruby_unbox_json_t(json));

  /* Invocation */
  char * native_return_value = json_dumps(native_json, native_flags);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, native_return_value);
  free(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_equal */
/* sha: b953712967a5ac97239fd334f35e5286da1ff96eafd7a8fd8148d617adc72c56 */
#if BIND_json_equal_FUNCTION
#define json_equal_REQUIRED_ARGC 2
#define json_equal_OPTIONAL_ARGC 0
/* int json_equal(json_t * value1, json_t * value2) */
mrb_value
mrb_Jansson_json_equal(mrb_state* mrb, mrb_value self) {
  mrb_value value1;
  mrb_value value2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &value1, &value2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value1, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value2, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: value1 */
  json_t * native_value1 = (mrb_nil_p(value1) ? NULL : mruby_unbox_json_t(value1));

  /* Unbox param: value2 */
  json_t * native_value2 = (mrb_nil_p(value2) ? NULL : mruby_unbox_json_t(value2));

  /* Invocation */
  int native_return_value = json_equal(native_value1, native_value2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_false */
/* sha: 9c33a907d524a7b2a0e30b9f2eed1c4140ed977da19c55ac425276b159b0ca91 */
#if BIND_json_false_FUNCTION
#define json_false_REQUIRED_ARGC 0
#define json_false_OPTIONAL_ARGC 0
/* json_t * json_false() */
mrb_value
mrb_Jansson_json_false(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  json_t * native_return_value = json_false();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_incref */
/* sha: 3bfd10fee37bbaa9c2f30c7b792146c1ca5e6aeb47b9294b68532972c79a221c */
#if BIND_json_incref_FUNCTION
#define json_incref_REQUIRED_ARGC 1
#define json_incref_OPTIONAL_ARGC 0
/* json_t * json_incref(json_t * json) */
mrb_value
mrb_Jansson_json_incref(mrb_state* mrb, mrb_value self) {
  mrb_value json;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &json);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, json, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: json */
  json_t * native_json = (mrb_nil_p(json) ? NULL : mruby_unbox_json_t(json));

  /* Invocation */
  json_t * native_return_value = json_incref(native_json);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_integer */
/* sha: 55f7d658f8383da41273fb92ff559deb5622f295a1f20f32217a5144648c2136 */
#if BIND_json_integer_FUNCTION
#define json_integer_REQUIRED_ARGC 1
#define json_integer_OPTIONAL_ARGC 0
/* json_t * json_integer(json_int_t value) */
mrb_value
mrb_Jansson_json_integer(mrb_state* mrb, mrb_value self) {
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_value);

  /* Invocation */
  json_t * native_return_value = json_integer(native_value);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_integer_set */
/* sha: 4250d13cd3209cd988ebe027510e9303240e75e91b992ebd2dd28ac996973f3d */
#if BIND_json_integer_set_FUNCTION
#define json_integer_set_REQUIRED_ARGC 2
#define json_integer_set_OPTIONAL_ARGC 0
/* int json_integer_set(json_t * integer, json_int_t value) */
mrb_value
mrb_Jansson_json_integer_set(mrb_state* mrb, mrb_value self) {
  mrb_value integer;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &integer, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, integer, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: integer */
  json_t * native_integer = (mrb_nil_p(integer) ? NULL : mruby_unbox_json_t(integer));

  /* Invocation */
  int native_return_value = json_integer_set(native_integer, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_integer_value */
/* sha: 32252931709d56c4c0d183806b92167b4c39b0066c039c2b870a18e6a7b6231c */
#if BIND_json_integer_value_FUNCTION
#define json_integer_value_REQUIRED_ARGC 1
#define json_integer_value_OPTIONAL_ARGC 0
/* json_int_t json_integer_value(const json_t * integer) */
mrb_value
mrb_Jansson_json_integer_value(mrb_state* mrb, mrb_value self) {
  mrb_value integer;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &integer);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, integer, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: integer */
  const json_t * native_integer = (mrb_nil_p(integer) ? NULL : mruby_unbox_json_t(integer));

  /* Invocation */
  json_int_t native_return_value = json_integer_value(native_integer);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_load_callback */
/* sha: 242a980aa1b9df8320bb1d0cd3d397cceaf8cfcd682f5bc6f70db0d6b429ce2a */
#if BIND_json_load_callback_FUNCTION
#define json_load_callback_REQUIRED_ARGC 4
#define json_load_callback_OPTIONAL_ARGC 0
/* json_t * json_load_callback(json_load_callback_t callback, void * data, size_t flags, json_error_t * error) */
mrb_value
mrb_Jansson_json_load_callback(mrb_state* mrb, mrb_value self) {
  mrb_value callback;
  mrb_value data;
  mrb_int native_flags;
  mrb_value error;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &callback, &data, &native_flags, &error);

  /* Type checking */
  TODO_type_check_json_load_callback_t(callback);
  TODO_type_check_void_PTR(data);
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }

  /* Unbox param: callback */
  json_load_callback_t native_callback = TODO_mruby_unbox_json_load_callback_t(callback);

  /* Unbox param: data */
  void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Invocation */
  json_t * native_return_value = json_load_callback(native_callback, native_data, native_flags, native_error);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_load_file */
/* sha: ef3f83e6a0a8750372078537dfc94dcd5fe0a69f9f5d1991e8cbf89578d500bc */
#if BIND_json_load_file_FUNCTION
#define json_load_file_REQUIRED_ARGC 3
#define json_load_file_OPTIONAL_ARGC 0
/* json_t * json_load_file(const char * path, size_t flags, json_error_t * error) */
mrb_value
mrb_Jansson_json_load_file(mrb_state* mrb, mrb_value self) {
  char * native_path = NULL;
  mrb_int native_flags;
  mrb_value error;

  /* Fetch the args */
  mrb_get_args(mrb, "zio", &native_path, &native_flags, &error);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Invocation */
  json_t * native_return_value = json_load_file(native_path, native_flags, native_error);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_loadb */
/* sha: b96eae68ea112bd3f6b862863a9593560e1cce8c03ad4bb5be9c9930d91811ce */
#if BIND_json_loadb_FUNCTION
#define json_loadb_REQUIRED_ARGC 4
#define json_loadb_OPTIONAL_ARGC 0
/* json_t * json_loadb(const char * buffer, size_t buflen, size_t flags, json_error_t * error) */
mrb_value
mrb_Jansson_json_loadb(mrb_state* mrb, mrb_value self) {
  char * native_buffer = NULL;
  mrb_int native_buflen;
  mrb_int native_flags;
  mrb_value error;

  /* Fetch the args */
  mrb_get_args(mrb, "ziio", &native_buffer, &native_buflen, &native_flags, &error);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Invocation */
  json_t * native_return_value = json_loadb(native_buffer, native_buflen, native_flags, native_error);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_loadf */
/* sha: 4b494ea3adab5453cd9093fc41d1a34a7eed51aff38b8a6eee69e429ad94440b */
#if BIND_json_loadf_FUNCTION
#define json_loadf_REQUIRED_ARGC 3
#define json_loadf_OPTIONAL_ARGC 0
/* json_t * json_loadf(FILE * input, size_t flags, json_error_t * error) */
mrb_value
mrb_Jansson_json_loadf(mrb_state* mrb, mrb_value self) {
  mrb_value input;
  mrb_int native_flags;
  mrb_value error;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &input, &native_flags, &error);

  /* Type checking */
  TODO_type_check_FILE_PTR(input);
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }

  /* Unbox param: input */
  FILE * native_input = TODO_mruby_unbox_FILE_PTR(input);

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Invocation */
  json_t * native_return_value = json_loadf(native_input, native_flags, native_error);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_loads */
/* sha: aa08b2e053144fd752e63087ad1e5cc75980086a95270400f6bbafc43b5ef35a */
#if BIND_json_loads_FUNCTION
#define json_loads_REQUIRED_ARGC 3
#define json_loads_OPTIONAL_ARGC 0
/* json_t * json_loads(const char * input, size_t flags, json_error_t * error) */
mrb_value
mrb_Jansson_json_loads(mrb_state* mrb, mrb_value self) {
  char * native_input = NULL;
  mrb_int native_flags;
  mrb_value error;

  /* Fetch the args */
  mrb_get_args(mrb, "zio", &native_input, &native_flags, &error);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Invocation */
  json_t * native_return_value = json_loads(native_input, native_flags, native_error);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_null */
/* sha: 4b4e2faa78a787ea234d88adb657a064d26c980f148e6466cbe3ddc142df1c8e */
#if BIND_json_null_FUNCTION
#define json_null_REQUIRED_ARGC 0
#define json_null_OPTIONAL_ARGC 0
/* json_t * json_null() */
mrb_value
mrb_Jansson_json_null(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  json_t * native_return_value = json_null();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_number_value */
/* sha: 1cc69405fa8a30e2d2dd574d840311217fd7b97a6e3be06e15bea2a33345b3f3 */
#if BIND_json_number_value_FUNCTION
#define json_number_value_REQUIRED_ARGC 1
#define json_number_value_OPTIONAL_ARGC 0
/* double json_number_value(const json_t * json) */
mrb_value
mrb_Jansson_json_number_value(mrb_state* mrb, mrb_value self) {
  mrb_value json;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &json);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, json, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: json */
  const json_t * native_json = (mrb_nil_p(json) ? NULL : mruby_unbox_json_t(json));

  /* Invocation */
  double native_return_value = json_number_value(native_json);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object */
/* sha: e326f2c7583c4617659d26b6fece1edea2bfcc056cc399777bdd5870cb69473b */
#if BIND_json_object_FUNCTION
#define json_object_REQUIRED_ARGC 0
#define json_object_OPTIONAL_ARGC 0
/* json_t * json_object() */
mrb_value
mrb_Jansson_json_object(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  json_t * native_return_value = json_object();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_clear */
/* sha: b9df91f2d8bb9681b87ac7cdc7a5eca1ef103a89dbd327d847751fc654e2933f */
#if BIND_json_object_clear_FUNCTION
#define json_object_clear_REQUIRED_ARGC 1
#define json_object_clear_OPTIONAL_ARGC 0
/* int json_object_clear(json_t * object) */
mrb_value
mrb_Jansson_json_object_clear(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Invocation */
  int native_return_value = json_object_clear(native_object);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_del */
/* sha: 4706cc08126fc89b09cff3566aa1560ddc05b93367b1fa8012f449b5db3e3ef4 */
#if BIND_json_object_del_FUNCTION
#define json_object_del_REQUIRED_ARGC 2
#define json_object_del_OPTIONAL_ARGC 0
/* int json_object_del(json_t * object, const char * key) */
mrb_value
mrb_Jansson_json_object_del(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  char * native_key = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &object, &native_key);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Invocation */
  int native_return_value = json_object_del(native_object, native_key);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_get */
/* sha: 9ec9901e9793f50054b2618fe28936fd4cd46db74830c59e2339f506b8b81348 */
#if BIND_json_object_get_FUNCTION
#define json_object_get_REQUIRED_ARGC 2
#define json_object_get_OPTIONAL_ARGC 0
/* json_t * json_object_get(const json_t * object, const char * key) */
mrb_value
mrb_Jansson_json_object_get(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  char * native_key = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &object, &native_key);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  const json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Invocation */
  json_t * native_return_value = json_object_get(native_object, native_key);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_iter */
/* sha: 2ca00f42ada7870832df37fca2efe885c867f98843fd4aa630a1885f8097445f */
#if BIND_json_object_iter_FUNCTION
#define json_object_iter_REQUIRED_ARGC 1
#define json_object_iter_OPTIONAL_ARGC 0
/* void * json_object_iter(json_t * object) */
mrb_value
mrb_Jansson_json_object_iter(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Invocation */
  void * native_return_value = json_object_iter(native_object);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_iter_at */
/* sha: cb8ccc9fc16673a395bbd5abba9fa477311dd7624120d41575d9d2a8221d28b1 */
#if BIND_json_object_iter_at_FUNCTION
#define json_object_iter_at_REQUIRED_ARGC 2
#define json_object_iter_at_OPTIONAL_ARGC 0
/* void * json_object_iter_at(json_t * object, const char * key) */
mrb_value
mrb_Jansson_json_object_iter_at(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  char * native_key = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &object, &native_key);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Invocation */
  void * native_return_value = json_object_iter_at(native_object, native_key);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_iter_key */
/* sha: 8485d6675971c404b0bfb2861e528dbe7818dff80faea2f0ee80b400dea69859 */
#if BIND_json_object_iter_key_FUNCTION
#define json_object_iter_key_REQUIRED_ARGC 1
#define json_object_iter_key_OPTIONAL_ARGC 0
/* const char * json_object_iter_key(void * iter) */
mrb_value
mrb_Jansson_json_object_iter_key(mrb_state* mrb, mrb_value self) {
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  TODO_type_check_void_PTR(iter);

  /* Unbox param: iter */
  void * native_iter = TODO_mruby_unbox_void_PTR(iter);

  /* Invocation */
  const char * native_return_value = json_object_iter_key(native_iter);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_iter_next */
/* sha: 32c6e77db51b2912dbfe44876c3a65b7b81120e9cf6c0c33d1df934a16168dd4 */
#if BIND_json_object_iter_next_FUNCTION
#define json_object_iter_next_REQUIRED_ARGC 2
#define json_object_iter_next_OPTIONAL_ARGC 0
/* void * json_object_iter_next(json_t * object, void * iter) */
mrb_value
mrb_Jansson_json_object_iter_next(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &object, &iter);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(iter);

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: iter */
  void * native_iter = TODO_mruby_unbox_void_PTR(iter);

  /* Invocation */
  void * native_return_value = json_object_iter_next(native_object, native_iter);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_iter_set */
/* sha: a3da5d465057d4bb42c3cdec09710c6b0011b8e9263c1270eaaccf0e0b28e320 */
#if BIND_json_object_iter_set_FUNCTION
#define json_object_iter_set_REQUIRED_ARGC 3
#define json_object_iter_set_OPTIONAL_ARGC 0
/* int json_object_iter_set(json_t * object, void * iter, json_t * value) */
mrb_value
mrb_Jansson_json_object_iter_set(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  mrb_value iter;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &object, &iter, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(iter);
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: iter */
  void * native_iter = TODO_mruby_unbox_void_PTR(iter);

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_object_iter_set(native_object, native_iter, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_iter_set_new */
/* sha: 537218108f9a4cfaa77c88fea685d64e6c6ccf167789c2b7c8c3e24bbf752147 */
#if BIND_json_object_iter_set_new_FUNCTION
#define json_object_iter_set_new_REQUIRED_ARGC 3
#define json_object_iter_set_new_OPTIONAL_ARGC 0
/* int json_object_iter_set_new(json_t * object, void * iter, json_t * value) */
mrb_value
mrb_Jansson_json_object_iter_set_new(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  mrb_value iter;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &object, &iter, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(iter);
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: iter */
  void * native_iter = TODO_mruby_unbox_void_PTR(iter);

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_object_iter_set_new(native_object, native_iter, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_iter_value */
/* sha: 6baf46a283668568d6f6eb732ba5a00e04da8623911d627d2cbc39ef24f09494 */
#if BIND_json_object_iter_value_FUNCTION
#define json_object_iter_value_REQUIRED_ARGC 1
#define json_object_iter_value_OPTIONAL_ARGC 0
/* json_t * json_object_iter_value(void * iter) */
mrb_value
mrb_Jansson_json_object_iter_value(mrb_state* mrb, mrb_value self) {
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  TODO_type_check_void_PTR(iter);

  /* Unbox param: iter */
  void * native_iter = TODO_mruby_unbox_void_PTR(iter);

  /* Invocation */
  json_t * native_return_value = json_object_iter_value(native_iter);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_key_to_iter */
/* sha: b183bdb39d0e46863ab8a766461bf3180087fa3a1156aa8b633a559a520746ce */
#if BIND_json_object_key_to_iter_FUNCTION
#define json_object_key_to_iter_REQUIRED_ARGC 1
#define json_object_key_to_iter_OPTIONAL_ARGC 0
/* void * json_object_key_to_iter(const char * key) */
mrb_value
mrb_Jansson_json_object_key_to_iter(mrb_state* mrb, mrb_value self) {
  char * native_key = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_key);

  /* Invocation */
  void * native_return_value = json_object_key_to_iter(native_key);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_seed */
/* sha: 75cf8d272623f86b60186a0860a30a443bc541c7a11141656eec1c36bf614733 */
#if BIND_json_object_seed_FUNCTION
#define json_object_seed_REQUIRED_ARGC 1
#define json_object_seed_OPTIONAL_ARGC 0
/* void json_object_seed(size_t seed) */
mrb_value
mrb_Jansson_json_object_seed(mrb_state* mrb, mrb_value self) {
  mrb_int native_seed;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_seed);

  /* Invocation */
  json_object_seed(native_seed);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_set */
/* sha: 82a93669eae6dec9a2504bac97b0ee3c07ad9a3442441051bb4ee5553cdb389d */
#if BIND_json_object_set_FUNCTION
#define json_object_set_REQUIRED_ARGC 3
#define json_object_set_OPTIONAL_ARGC 0
/* int json_object_set(json_t * object, const char * key, json_t * value) */
mrb_value
mrb_Jansson_json_object_set(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  char * native_key = NULL;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &object, &native_key, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_object_set(native_object, native_key, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_set_new */
/* sha: 01998501bf98382c98ba747d5cff34729ac7ce582e10db1c4ff3ccc1e5260959 */
#if BIND_json_object_set_new_FUNCTION
#define json_object_set_new_REQUIRED_ARGC 3
#define json_object_set_new_OPTIONAL_ARGC 0
/* int json_object_set_new(json_t * object, const char * key, json_t * value) */
mrb_value
mrb_Jansson_json_object_set_new(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  char * native_key = NULL;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &object, &native_key, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_object_set_new(native_object, native_key, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_set_new_nocheck */
/* sha: 4165a1d07406622e81c8516bb814e55be33983406f4c0a423ce0489c8d256309 */
#if BIND_json_object_set_new_nocheck_FUNCTION
#define json_object_set_new_nocheck_REQUIRED_ARGC 3
#define json_object_set_new_nocheck_OPTIONAL_ARGC 0
/* int json_object_set_new_nocheck(json_t * object, const char * key, json_t * value) */
mrb_value
mrb_Jansson_json_object_set_new_nocheck(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  char * native_key = NULL;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &object, &native_key, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_object_set_new_nocheck(native_object, native_key, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_set_nocheck */
/* sha: a6cd3eb75cd788cfd5b403203b1a2a28c316f190032f891cc1498a351cf374fc */
#if BIND_json_object_set_nocheck_FUNCTION
#define json_object_set_nocheck_REQUIRED_ARGC 3
#define json_object_set_nocheck_OPTIONAL_ARGC 0
/* int json_object_set_nocheck(json_t * object, const char * key, json_t * value) */
mrb_value
mrb_Jansson_json_object_set_nocheck(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  char * native_key = NULL;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &object, &native_key, &value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: value */
  json_t * native_value = (mrb_nil_p(value) ? NULL : mruby_unbox_json_t(value));

  /* Invocation */
  int native_return_value = json_object_set_nocheck(native_object, native_key, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_size */
/* sha: c1a6f5c004cf3d176fe146304b10dce023d2ab924949f001b08d9092c1c5b62e */
#if BIND_json_object_size_FUNCTION
#define json_object_size_REQUIRED_ARGC 1
#define json_object_size_OPTIONAL_ARGC 0
/* size_t json_object_size(const json_t * object) */
mrb_value
mrb_Jansson_json_object_size(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  const json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Invocation */
  size_t native_return_value = json_object_size(native_object);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_update */
/* sha: d2a8a36e61f3c6f4c42b8da1563c49ab70d3f9cf3887dac88bce271190f477ee */
#if BIND_json_object_update_FUNCTION
#define json_object_update_REQUIRED_ARGC 2
#define json_object_update_OPTIONAL_ARGC 0
/* int json_object_update(json_t * object, json_t * other) */
mrb_value
mrb_Jansson_json_object_update(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  mrb_value other;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &object, &other);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, other, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: other */
  json_t * native_other = (mrb_nil_p(other) ? NULL : mruby_unbox_json_t(other));

  /* Invocation */
  int native_return_value = json_object_update(native_object, native_other);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_update_existing */
/* sha: 3dc26cdd935f679f0faa86a3b983a90358ed9bb6cfa0de2a9c3e977abe84e875 */
#if BIND_json_object_update_existing_FUNCTION
#define json_object_update_existing_REQUIRED_ARGC 2
#define json_object_update_existing_OPTIONAL_ARGC 0
/* int json_object_update_existing(json_t * object, json_t * other) */
mrb_value
mrb_Jansson_json_object_update_existing(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  mrb_value other;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &object, &other);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, other, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: other */
  json_t * native_other = (mrb_nil_p(other) ? NULL : mruby_unbox_json_t(other));

  /* Invocation */
  int native_return_value = json_object_update_existing(native_object, native_other);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_object_update_missing */
/* sha: 1e356c98be340def2f8ca885404c62db342b86911b65de371859e934a91fb481 */
#if BIND_json_object_update_missing_FUNCTION
#define json_object_update_missing_REQUIRED_ARGC 2
#define json_object_update_missing_OPTIONAL_ARGC 0
/* int json_object_update_missing(json_t * object, json_t * other) */
mrb_value
mrb_Jansson_json_object_update_missing(mrb_state* mrb, mrb_value self) {
  mrb_value object;
  mrb_value other;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &object, &other);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, other, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  json_t * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_json_t(object));

  /* Unbox param: other */
  json_t * native_other = (mrb_nil_p(other) ? NULL : mruby_unbox_json_t(other));

  /* Invocation */
  int native_return_value = json_object_update_missing(native_object, native_other);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_pack */
/* sha: 968d1b81b1685c0fc9dfecbddced81c56efde319c367567814fc262a14af9ad7 */
#if BIND_json_pack_FUNCTION
#define json_pack_REQUIRED_ARGC 1
#define json_pack_OPTIONAL_ARGC 0
/* json_t * json_pack(const char * fmt) */
mrb_value
mrb_Jansson_json_pack(mrb_state* mrb, mrb_value self) {
  char * native_fmt = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_fmt);

  /* Invocation */
  json_t * native_return_value = json_pack(native_fmt);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_pack_ex */
/* sha: 62f3cd3df8b23d61c0afab2629e7a4231a3f4165a94226171304eaf89961b24c */
#if BIND_json_pack_ex_FUNCTION
#define json_pack_ex_REQUIRED_ARGC 3
#define json_pack_ex_OPTIONAL_ARGC 0
/* json_t * json_pack_ex(json_error_t * error, size_t flags, const char * fmt) */
mrb_value
mrb_Jansson_json_pack_ex(mrb_state* mrb, mrb_value self) {
  mrb_value error;
  mrb_int native_flags;
  char * native_fmt = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oiz", &error, &native_flags, &native_fmt);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Invocation */
  json_t * native_return_value = json_pack_ex(native_error, native_flags, native_fmt);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_real */
/* sha: 41f7efcca0264f005ecde1096a867816a68ee0189bee556c55942b3b08713013 */
#if BIND_json_real_FUNCTION
#define json_real_REQUIRED_ARGC 1
#define json_real_OPTIONAL_ARGC 0
/* json_t * json_real(double value) */
mrb_value
mrb_Jansson_json_real(mrb_state* mrb, mrb_value self) {
  mrb_float native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "f", &native_value);

  /* Invocation */
  json_t * native_return_value = json_real(native_value);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_real_set */
/* sha: 61336daf8048bfa04a67b5f1eb8dddbfac5fb03e2fbe7e92643822788bf316bf */
#if BIND_json_real_set_FUNCTION
#define json_real_set_REQUIRED_ARGC 2
#define json_real_set_OPTIONAL_ARGC 0
/* int json_real_set(json_t * real, double value) */
mrb_value
mrb_Jansson_json_real_set(mrb_state* mrb, mrb_value self) {
  mrb_value real;
  mrb_float native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "of", &real, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, real, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: real */
  json_t * native_real = (mrb_nil_p(real) ? NULL : mruby_unbox_json_t(real));

  /* Invocation */
  int native_return_value = json_real_set(native_real, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_real_value */
/* sha: 0cdd0bbb728c9d33af0a14c7719522713fa3eca87ad10130137bdd61c62e2d90 */
#if BIND_json_real_value_FUNCTION
#define json_real_value_REQUIRED_ARGC 1
#define json_real_value_OPTIONAL_ARGC 0
/* double json_real_value(const json_t * real) */
mrb_value
mrb_Jansson_json_real_value(mrb_state* mrb, mrb_value self) {
  mrb_value real;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &real);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, real, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: real */
  const json_t * native_real = (mrb_nil_p(real) ? NULL : mruby_unbox_json_t(real));

  /* Invocation */
  double native_return_value = json_real_value(native_real);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_set_alloc_funcs */
/* sha: d4b0efda991047a929aa545c7d267ff762743217c3288e423d72327b0aafa3f1 */
#if BIND_json_set_alloc_funcs_FUNCTION
#define json_set_alloc_funcs_REQUIRED_ARGC 2
#define json_set_alloc_funcs_OPTIONAL_ARGC 0
/* void json_set_alloc_funcs(json_malloc_t malloc_fn, json_free_t free_fn) */
mrb_value
mrb_Jansson_json_set_alloc_funcs(mrb_state* mrb, mrb_value self) {
  mrb_value malloc_fn;
  mrb_value free_fn;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &malloc_fn, &free_fn);

  /* Type checking */
  TODO_type_check_json_malloc_t(malloc_fn);
  TODO_type_check_json_free_t(free_fn);

  /* Unbox param: malloc_fn */
  json_malloc_t native_malloc_fn = TODO_mruby_unbox_json_malloc_t(malloc_fn);

  /* Unbox param: free_fn */
  json_free_t native_free_fn = TODO_mruby_unbox_json_free_t(free_fn);

  /* Invocation */
  json_set_alloc_funcs(native_malloc_fn, native_free_fn);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_string */
/* sha: 3bb6f34241d51fdc6d52ffe00451f3f0509329ea1f8214ebc91052a5c4d60ddc */
#if BIND_json_string_FUNCTION
#define json_string_REQUIRED_ARGC 1
#define json_string_OPTIONAL_ARGC 0
/* json_t * json_string(const char * value) */
mrb_value
mrb_Jansson_json_string(mrb_state* mrb, mrb_value self) {
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_value);

  /* Invocation */
  json_t * native_return_value = json_string(native_value);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_string_length */
/* sha: f522482433c0004452837d7a60d524acaf07fd48541ab2694caee46627df7229 */
#if BIND_json_string_length_FUNCTION
#define json_string_length_REQUIRED_ARGC 1
#define json_string_length_OPTIONAL_ARGC 0
/* size_t json_string_length(const json_t * string) */
mrb_value
mrb_Jansson_json_string_length(mrb_state* mrb, mrb_value self) {
  mrb_value string;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &string);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, string, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: string */
  const json_t * native_string = (mrb_nil_p(string) ? NULL : mruby_unbox_json_t(string));

  /* Invocation */
  size_t native_return_value = json_string_length(native_string);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_string_nocheck */
/* sha: 47e64d2fc8834c997462866e2dc0be32690debab096088dc464400e5fbc14806 */
#if BIND_json_string_nocheck_FUNCTION
#define json_string_nocheck_REQUIRED_ARGC 1
#define json_string_nocheck_OPTIONAL_ARGC 0
/* json_t * json_string_nocheck(const char * value) */
mrb_value
mrb_Jansson_json_string_nocheck(mrb_state* mrb, mrb_value self) {
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_value);

  /* Invocation */
  json_t * native_return_value = json_string_nocheck(native_value);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_string_set */
/* sha: a377eb12824a4ad96c6d7649173da6c0f2265c6fd3db65273f6872be955953a9 */
#if BIND_json_string_set_FUNCTION
#define json_string_set_REQUIRED_ARGC 2
#define json_string_set_OPTIONAL_ARGC 0
/* int json_string_set(json_t * string, const char * value) */
mrb_value
mrb_Jansson_json_string_set(mrb_state* mrb, mrb_value self) {
  mrb_value string;
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &string, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, string, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: string */
  json_t * native_string = (mrb_nil_p(string) ? NULL : mruby_unbox_json_t(string));

  /* Invocation */
  int native_return_value = json_string_set(native_string, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_string_set_nocheck */
/* sha: bcfa248b4f6db2035eaff28cd67aca4f37eb2ed69019d3cf3d1e1fac2f22a87d */
#if BIND_json_string_set_nocheck_FUNCTION
#define json_string_set_nocheck_REQUIRED_ARGC 2
#define json_string_set_nocheck_OPTIONAL_ARGC 0
/* int json_string_set_nocheck(json_t * string, const char * value) */
mrb_value
mrb_Jansson_json_string_set_nocheck(mrb_state* mrb, mrb_value self) {
  mrb_value string;
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &string, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, string, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: string */
  json_t * native_string = (mrb_nil_p(string) ? NULL : mruby_unbox_json_t(string));

  /* Invocation */
  int native_return_value = json_string_set_nocheck(native_string, native_value);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_string_setn */
/* sha: b47df69b9dbec3ec15317f57ed0e24943d30dcc8a1314be43c27f1cbbbb3c2fc */
#if BIND_json_string_setn_FUNCTION
#define json_string_setn_REQUIRED_ARGC 3
#define json_string_setn_OPTIONAL_ARGC 0
/* int json_string_setn(json_t * string, const char * value, size_t len) */
mrb_value
mrb_Jansson_json_string_setn(mrb_state* mrb, mrb_value self) {
  mrb_value string;
  char * native_value = NULL;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &string, &native_value, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, string, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: string */
  json_t * native_string = (mrb_nil_p(string) ? NULL : mruby_unbox_json_t(string));

  /* Invocation */
  int native_return_value = json_string_setn(native_string, native_value, native_len);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_string_setn_nocheck */
/* sha: e83666511dab9229e1a81997990cd297f035770f65fa102dde0d24322e2e6fda */
#if BIND_json_string_setn_nocheck_FUNCTION
#define json_string_setn_nocheck_REQUIRED_ARGC 3
#define json_string_setn_nocheck_OPTIONAL_ARGC 0
/* int json_string_setn_nocheck(json_t * string, const char * value, size_t len) */
mrb_value
mrb_Jansson_json_string_setn_nocheck(mrb_state* mrb, mrb_value self) {
  mrb_value string;
  char * native_value = NULL;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &string, &native_value, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, string, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: string */
  json_t * native_string = (mrb_nil_p(string) ? NULL : mruby_unbox_json_t(string));

  /* Invocation */
  int native_return_value = json_string_setn_nocheck(native_string, native_value, native_len);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_string_value */
/* sha: 3ca1a0a9f79fb768c35c0000669661e5bfbf90cf0ec407d1219a3b35d6a750ad */
#if BIND_json_string_value_FUNCTION
#define json_string_value_REQUIRED_ARGC 1
#define json_string_value_OPTIONAL_ARGC 0
/* const char * json_string_value(const json_t * string) */
mrb_value
mrb_Jansson_json_string_value(mrb_state* mrb, mrb_value self) {
  mrb_value string;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &string);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, string, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: string */
  const json_t * native_string = (mrb_nil_p(string) ? NULL : mruby_unbox_json_t(string));

  /* Invocation */
  const char * native_return_value = json_string_value(native_string);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_stringn */
/* sha: d7c0cb986a1a38daecede7637fe2d24e34ae3f5619a3e983d1d228d55949c38a */
#if BIND_json_stringn_FUNCTION
#define json_stringn_REQUIRED_ARGC 2
#define json_stringn_OPTIONAL_ARGC 0
/* json_t * json_stringn(const char * value, size_t len) */
mrb_value
mrb_Jansson_json_stringn(mrb_state* mrb, mrb_value self) {
  char * native_value = NULL;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "zi", &native_value, &native_len);

  /* Invocation */
  json_t * native_return_value = json_stringn(native_value, native_len);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_stringn_nocheck */
/* sha: c73ef8088d7140716ad403aa24521b0b218aea8f4bb0655a88fd35b506c98337 */
#if BIND_json_stringn_nocheck_FUNCTION
#define json_stringn_nocheck_REQUIRED_ARGC 2
#define json_stringn_nocheck_OPTIONAL_ARGC 0
/* json_t * json_stringn_nocheck(const char * value, size_t len) */
mrb_value
mrb_Jansson_json_stringn_nocheck(mrb_state* mrb, mrb_value self) {
  char * native_value = NULL;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "zi", &native_value, &native_len);

  /* Invocation */
  json_t * native_return_value = json_stringn_nocheck(native_value, native_len);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_true */
/* sha: 851a87d12c1f65e71f044178861b7de6f19475bb92e29e6ed85c226f33722b19 */
#if BIND_json_true_FUNCTION
#define json_true_REQUIRED_ARGC 0
#define json_true_OPTIONAL_ARGC 0
/* json_t * json_true() */
mrb_value
mrb_Jansson_json_true(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  json_t * native_return_value = json_true();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_unpack */
/* sha: 0408d54e77f85fbd0985e04a12b972c27469747d21e1b3c26576c8985ea55ef4 */
#if BIND_json_unpack_FUNCTION
#define json_unpack_REQUIRED_ARGC 2
#define json_unpack_OPTIONAL_ARGC 0
/* int json_unpack(json_t * root, const char * fmt) */
mrb_value
mrb_Jansson_json_unpack(mrb_state* mrb, mrb_value self) {
  mrb_value root;
  char * native_fmt = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &root, &native_fmt);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, root, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }

  /* Unbox param: root */
  json_t * native_root = (mrb_nil_p(root) ? NULL : mruby_unbox_json_t(root));

  /* Invocation */
  int native_return_value = json_unpack(native_root, native_fmt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_unpack_ex */
/* sha: 9b0bcbfaa19434b614d5c29eef8002957dbb90df7b19bdd6256e23c9f934e3e1 */
#if BIND_json_unpack_ex_FUNCTION
#define json_unpack_ex_REQUIRED_ARGC 4
#define json_unpack_ex_OPTIONAL_ARGC 0
/* int json_unpack_ex(json_t * root, json_error_t * error, size_t flags, const char * fmt) */
mrb_value
mrb_Jansson_json_unpack_ex(mrb_state* mrb, mrb_value self) {
  mrb_value root;
  mrb_value error;
  mrb_int native_flags;
  char * native_fmt = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiz", &root, &error, &native_flags, &native_fmt);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, root, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }

  /* Unbox param: root */
  json_t * native_root = (mrb_nil_p(root) ? NULL : mruby_unbox_json_t(root));

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Invocation */
  int native_return_value = json_unpack_ex(native_root, native_error, native_flags, native_fmt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_vpack_ex */
/* sha: 2e2f92df591a0dc8bbd88928b77263b756e041e65ee9f9aae5759e9722350f20 */
#if BIND_json_vpack_ex_FUNCTION
#define json_vpack_ex_REQUIRED_ARGC 4
#define json_vpack_ex_OPTIONAL_ARGC 0
/* json_t * json_vpack_ex(json_error_t * error, size_t flags, const char * fmt, va_list ap) */
mrb_value
mrb_Jansson_json_vpack_ex(mrb_state* mrb, mrb_value self) {
  mrb_value error;
  mrb_int native_flags;
  char * native_fmt = NULL;
  mrb_value ap;

  /* Fetch the args */
  mrb_get_args(mrb, "oizo", &error, &native_flags, &native_fmt, &ap);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }
  TODO_type_check_va_list(ap);

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Unbox param: ap */
  va_list native_ap = TODO_mruby_unbox_va_list(ap);

  /* Invocation */
  json_t * native_return_value = json_vpack_ex(native_error, native_flags, native_fmt, native_ap);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_json_t(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: json_vunpack_ex */
/* sha: 28e3f55db33fbf0e868ae42d08397e369f02fbd446968f3eed8bcae4f2758965 */
#if BIND_json_vunpack_ex_FUNCTION
#define json_vunpack_ex_REQUIRED_ARGC 5
#define json_vunpack_ex_OPTIONAL_ARGC 0
/* int json_vunpack_ex(json_t * root, json_error_t * error, size_t flags, const char * fmt, va_list ap) */
mrb_value
mrb_Jansson_json_vunpack_ex(mrb_state* mrb, mrb_value self) {
  mrb_value root;
  mrb_value error;
  mrb_int native_flags;
  char * native_fmt = NULL;
  mrb_value ap;

  /* Fetch the args */
  mrb_get_args(mrb, "ooizo", &root, &error, &native_flags, &native_fmt, &ap);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, root, Json_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Json expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, error, JsonError_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "JsonError expected");
    return mrb_nil_value();
  }
  TODO_type_check_va_list(ap);

  /* Unbox param: root */
  json_t * native_root = (mrb_nil_p(root) ? NULL : mruby_unbox_json_t(root));

  /* Unbox param: error */
  json_error_t * native_error = (mrb_nil_p(error) ? NULL : mruby_unbox_json_error_t(error));

  /* Unbox param: ap */
  va_list native_ap = TODO_mruby_unbox_va_list(ap);

  /* Invocation */
  int native_return_value = json_vunpack_ex(native_root, native_error, native_flags, native_fmt, native_ap);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_mruby_jansson_gem_init(mrb_state* mrb) {
/* MRUBY_BINDING: pre_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
  
  struct RClass* Jansson_module = mrb_define_module(mrb, "Jansson");
  mruby_Jansson_define_macro_constants(mrb);
  mruby_Jansson_define_enum_constants(mrb);

/* MRUBY_BINDING: pre_class_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_initializations */
/* sha: 6b00e916583c1a16bb11cf13eca49fd0f935859a4c064222109bad8ca476af43 */
#if BIND_Json_TYPE
  mrb_Jansson_Json_init(mrb);
#endif
#if BIND_JsonError_TYPE
  mrb_Jansson_JsonError_init(mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_global_function_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: global_function_definitions */
/* sha: 93f51f9038acc77a4727e67bae647f6fb80a5dd2594eb73d289f1131729c30ac */
  /*
   * Global Functions
   */
#if BIND_json_array_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array", mrb_Jansson_json_array, MRB_ARGS_ARG(json_array_REQUIRED_ARGC, json_array_OPTIONAL_ARGC));
#endif
#if BIND_json_array_append_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_append", mrb_Jansson_json_array_append, MRB_ARGS_ARG(json_array_append_REQUIRED_ARGC, json_array_append_OPTIONAL_ARGC));
#endif
#if BIND_json_array_append_new_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_append_new", mrb_Jansson_json_array_append_new, MRB_ARGS_ARG(json_array_append_new_REQUIRED_ARGC, json_array_append_new_OPTIONAL_ARGC));
#endif
#if BIND_json_array_clear_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_clear", mrb_Jansson_json_array_clear, MRB_ARGS_ARG(json_array_clear_REQUIRED_ARGC, json_array_clear_OPTIONAL_ARGC));
#endif
#if BIND_json_array_extend_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_extend", mrb_Jansson_json_array_extend, MRB_ARGS_ARG(json_array_extend_REQUIRED_ARGC, json_array_extend_OPTIONAL_ARGC));
#endif
#if BIND_json_array_get_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_get", mrb_Jansson_json_array_get, MRB_ARGS_ARG(json_array_get_REQUIRED_ARGC, json_array_get_OPTIONAL_ARGC));
#endif
#if BIND_json_array_insert_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_insert", mrb_Jansson_json_array_insert, MRB_ARGS_ARG(json_array_insert_REQUIRED_ARGC, json_array_insert_OPTIONAL_ARGC));
#endif
#if BIND_json_array_insert_new_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_insert_new", mrb_Jansson_json_array_insert_new, MRB_ARGS_ARG(json_array_insert_new_REQUIRED_ARGC, json_array_insert_new_OPTIONAL_ARGC));
#endif
#if BIND_json_array_remove_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_remove", mrb_Jansson_json_array_remove, MRB_ARGS_ARG(json_array_remove_REQUIRED_ARGC, json_array_remove_OPTIONAL_ARGC));
#endif
#if BIND_json_array_set_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_set", mrb_Jansson_json_array_set, MRB_ARGS_ARG(json_array_set_REQUIRED_ARGC, json_array_set_OPTIONAL_ARGC));
#endif
#if BIND_json_array_set_new_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_set_new", mrb_Jansson_json_array_set_new, MRB_ARGS_ARG(json_array_set_new_REQUIRED_ARGC, json_array_set_new_OPTIONAL_ARGC));
#endif
#if BIND_json_array_size_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "array_size", mrb_Jansson_json_array_size, MRB_ARGS_ARG(json_array_size_REQUIRED_ARGC, json_array_size_OPTIONAL_ARGC));
#endif
#if BIND_json_copy_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "copy", mrb_Jansson_json_copy, MRB_ARGS_ARG(json_copy_REQUIRED_ARGC, json_copy_OPTIONAL_ARGC));
#endif
#if BIND_json_decref_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "decref", mrb_Jansson_json_decref, MRB_ARGS_ARG(json_decref_REQUIRED_ARGC, json_decref_OPTIONAL_ARGC));
#endif
#if BIND_json_deep_copy_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "deep_copy", mrb_Jansson_json_deep_copy, MRB_ARGS_ARG(json_deep_copy_REQUIRED_ARGC, json_deep_copy_OPTIONAL_ARGC));
#endif
#if BIND_json_delete_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "delete", mrb_Jansson_json_delete, MRB_ARGS_ARG(json_delete_REQUIRED_ARGC, json_delete_OPTIONAL_ARGC));
#endif
#if BIND_json_dump_callback_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "dump_callback", mrb_Jansson_json_dump_callback, MRB_ARGS_ARG(json_dump_callback_REQUIRED_ARGC, json_dump_callback_OPTIONAL_ARGC));
#endif
#if BIND_json_dump_file_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "dump_file", mrb_Jansson_json_dump_file, MRB_ARGS_ARG(json_dump_file_REQUIRED_ARGC, json_dump_file_OPTIONAL_ARGC));
#endif
#if BIND_json_dumpf_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "dumpf", mrb_Jansson_json_dumpf, MRB_ARGS_ARG(json_dumpf_REQUIRED_ARGC, json_dumpf_OPTIONAL_ARGC));
#endif
#if BIND_json_dumps_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "dumps", mrb_Jansson_json_dumps, MRB_ARGS_ARG(json_dumps_REQUIRED_ARGC, json_dumps_OPTIONAL_ARGC));
#endif
#if BIND_json_equal_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "equal", mrb_Jansson_json_equal, MRB_ARGS_ARG(json_equal_REQUIRED_ARGC, json_equal_OPTIONAL_ARGC));
#endif
#if BIND_json_false_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "false", mrb_Jansson_json_false, MRB_ARGS_ARG(json_false_REQUIRED_ARGC, json_false_OPTIONAL_ARGC));
#endif
#if BIND_json_incref_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "incref", mrb_Jansson_json_incref, MRB_ARGS_ARG(json_incref_REQUIRED_ARGC, json_incref_OPTIONAL_ARGC));
#endif
#if BIND_json_integer_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "integer", mrb_Jansson_json_integer, MRB_ARGS_ARG(json_integer_REQUIRED_ARGC, json_integer_OPTIONAL_ARGC));
#endif
#if BIND_json_integer_set_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "integer_set", mrb_Jansson_json_integer_set, MRB_ARGS_ARG(json_integer_set_REQUIRED_ARGC, json_integer_set_OPTIONAL_ARGC));
#endif
#if BIND_json_integer_value_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "integer_value", mrb_Jansson_json_integer_value, MRB_ARGS_ARG(json_integer_value_REQUIRED_ARGC, json_integer_value_OPTIONAL_ARGC));
#endif
#if BIND_json_load_callback_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "load_callback", mrb_Jansson_json_load_callback, MRB_ARGS_ARG(json_load_callback_REQUIRED_ARGC, json_load_callback_OPTIONAL_ARGC));
#endif
#if BIND_json_load_file_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "load_file", mrb_Jansson_json_load_file, MRB_ARGS_ARG(json_load_file_REQUIRED_ARGC, json_load_file_OPTIONAL_ARGC));
#endif
#if BIND_json_loadb_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "loadb", mrb_Jansson_json_loadb, MRB_ARGS_ARG(json_loadb_REQUIRED_ARGC, json_loadb_OPTIONAL_ARGC));
#endif
#if BIND_json_loadf_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "loadf", mrb_Jansson_json_loadf, MRB_ARGS_ARG(json_loadf_REQUIRED_ARGC, json_loadf_OPTIONAL_ARGC));
#endif
#if BIND_json_loads_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "loads", mrb_Jansson_json_loads, MRB_ARGS_ARG(json_loads_REQUIRED_ARGC, json_loads_OPTIONAL_ARGC));
#endif
#if BIND_json_null_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "null", mrb_Jansson_json_null, MRB_ARGS_ARG(json_null_REQUIRED_ARGC, json_null_OPTIONAL_ARGC));
#endif
#if BIND_json_number_value_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "number_value", mrb_Jansson_json_number_value, MRB_ARGS_ARG(json_number_value_REQUIRED_ARGC, json_number_value_OPTIONAL_ARGC));
#endif
#if BIND_json_object_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object", mrb_Jansson_json_object, MRB_ARGS_ARG(json_object_REQUIRED_ARGC, json_object_OPTIONAL_ARGC));
#endif
#if BIND_json_object_clear_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_clear", mrb_Jansson_json_object_clear, MRB_ARGS_ARG(json_object_clear_REQUIRED_ARGC, json_object_clear_OPTIONAL_ARGC));
#endif
#if BIND_json_object_del_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_del", mrb_Jansson_json_object_del, MRB_ARGS_ARG(json_object_del_REQUIRED_ARGC, json_object_del_OPTIONAL_ARGC));
#endif
#if BIND_json_object_get_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_get", mrb_Jansson_json_object_get, MRB_ARGS_ARG(json_object_get_REQUIRED_ARGC, json_object_get_OPTIONAL_ARGC));
#endif
#if BIND_json_object_iter_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_iter", mrb_Jansson_json_object_iter, MRB_ARGS_ARG(json_object_iter_REQUIRED_ARGC, json_object_iter_OPTIONAL_ARGC));
#endif
#if BIND_json_object_iter_at_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_iter_at", mrb_Jansson_json_object_iter_at, MRB_ARGS_ARG(json_object_iter_at_REQUIRED_ARGC, json_object_iter_at_OPTIONAL_ARGC));
#endif
#if BIND_json_object_iter_key_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_iter_key", mrb_Jansson_json_object_iter_key, MRB_ARGS_ARG(json_object_iter_key_REQUIRED_ARGC, json_object_iter_key_OPTIONAL_ARGC));
#endif
#if BIND_json_object_iter_next_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_iter_next", mrb_Jansson_json_object_iter_next, MRB_ARGS_ARG(json_object_iter_next_REQUIRED_ARGC, json_object_iter_next_OPTIONAL_ARGC));
#endif
#if BIND_json_object_iter_set_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_iter_set", mrb_Jansson_json_object_iter_set, MRB_ARGS_ARG(json_object_iter_set_REQUIRED_ARGC, json_object_iter_set_OPTIONAL_ARGC));
#endif
#if BIND_json_object_iter_set_new_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_iter_set_new", mrb_Jansson_json_object_iter_set_new, MRB_ARGS_ARG(json_object_iter_set_new_REQUIRED_ARGC, json_object_iter_set_new_OPTIONAL_ARGC));
#endif
#if BIND_json_object_iter_value_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_iter_value", mrb_Jansson_json_object_iter_value, MRB_ARGS_ARG(json_object_iter_value_REQUIRED_ARGC, json_object_iter_value_OPTIONAL_ARGC));
#endif
#if BIND_json_object_key_to_iter_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_key_to_iter", mrb_Jansson_json_object_key_to_iter, MRB_ARGS_ARG(json_object_key_to_iter_REQUIRED_ARGC, json_object_key_to_iter_OPTIONAL_ARGC));
#endif
#if BIND_json_object_seed_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_seed", mrb_Jansson_json_object_seed, MRB_ARGS_ARG(json_object_seed_REQUIRED_ARGC, json_object_seed_OPTIONAL_ARGC));
#endif
#if BIND_json_object_set_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_set", mrb_Jansson_json_object_set, MRB_ARGS_ARG(json_object_set_REQUIRED_ARGC, json_object_set_OPTIONAL_ARGC));
#endif
#if BIND_json_object_set_new_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_set_new", mrb_Jansson_json_object_set_new, MRB_ARGS_ARG(json_object_set_new_REQUIRED_ARGC, json_object_set_new_OPTIONAL_ARGC));
#endif
#if BIND_json_object_set_new_nocheck_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_set_new_nocheck", mrb_Jansson_json_object_set_new_nocheck, MRB_ARGS_ARG(json_object_set_new_nocheck_REQUIRED_ARGC, json_object_set_new_nocheck_OPTIONAL_ARGC));
#endif
#if BIND_json_object_set_nocheck_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_set_nocheck", mrb_Jansson_json_object_set_nocheck, MRB_ARGS_ARG(json_object_set_nocheck_REQUIRED_ARGC, json_object_set_nocheck_OPTIONAL_ARGC));
#endif
#if BIND_json_object_size_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_size", mrb_Jansson_json_object_size, MRB_ARGS_ARG(json_object_size_REQUIRED_ARGC, json_object_size_OPTIONAL_ARGC));
#endif
#if BIND_json_object_update_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_update", mrb_Jansson_json_object_update, MRB_ARGS_ARG(json_object_update_REQUIRED_ARGC, json_object_update_OPTIONAL_ARGC));
#endif
#if BIND_json_object_update_existing_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_update_existing", mrb_Jansson_json_object_update_existing, MRB_ARGS_ARG(json_object_update_existing_REQUIRED_ARGC, json_object_update_existing_OPTIONAL_ARGC));
#endif
#if BIND_json_object_update_missing_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "object_update_missing", mrb_Jansson_json_object_update_missing, MRB_ARGS_ARG(json_object_update_missing_REQUIRED_ARGC, json_object_update_missing_OPTIONAL_ARGC));
#endif
#if BIND_json_pack_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "pack", mrb_Jansson_json_pack, MRB_ARGS_ARG(json_pack_REQUIRED_ARGC, json_pack_OPTIONAL_ARGC));
#endif
#if BIND_json_pack_ex_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "pack_ex", mrb_Jansson_json_pack_ex, MRB_ARGS_ARG(json_pack_ex_REQUIRED_ARGC, json_pack_ex_OPTIONAL_ARGC));
#endif
#if BIND_json_real_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "real", mrb_Jansson_json_real, MRB_ARGS_ARG(json_real_REQUIRED_ARGC, json_real_OPTIONAL_ARGC));
#endif
#if BIND_json_real_set_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "real_set", mrb_Jansson_json_real_set, MRB_ARGS_ARG(json_real_set_REQUIRED_ARGC, json_real_set_OPTIONAL_ARGC));
#endif
#if BIND_json_real_value_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "real_value", mrb_Jansson_json_real_value, MRB_ARGS_ARG(json_real_value_REQUIRED_ARGC, json_real_value_OPTIONAL_ARGC));
#endif
#if BIND_json_set_alloc_funcs_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "set_alloc_funcs", mrb_Jansson_json_set_alloc_funcs, MRB_ARGS_ARG(json_set_alloc_funcs_REQUIRED_ARGC, json_set_alloc_funcs_OPTIONAL_ARGC));
#endif
#if BIND_json_string_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "string", mrb_Jansson_json_string, MRB_ARGS_ARG(json_string_REQUIRED_ARGC, json_string_OPTIONAL_ARGC));
#endif
#if BIND_json_string_length_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "string_length", mrb_Jansson_json_string_length, MRB_ARGS_ARG(json_string_length_REQUIRED_ARGC, json_string_length_OPTIONAL_ARGC));
#endif
#if BIND_json_string_nocheck_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "string_nocheck", mrb_Jansson_json_string_nocheck, MRB_ARGS_ARG(json_string_nocheck_REQUIRED_ARGC, json_string_nocheck_OPTIONAL_ARGC));
#endif
#if BIND_json_string_set_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "string_set", mrb_Jansson_json_string_set, MRB_ARGS_ARG(json_string_set_REQUIRED_ARGC, json_string_set_OPTIONAL_ARGC));
#endif
#if BIND_json_string_set_nocheck_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "string_set_nocheck", mrb_Jansson_json_string_set_nocheck, MRB_ARGS_ARG(json_string_set_nocheck_REQUIRED_ARGC, json_string_set_nocheck_OPTIONAL_ARGC));
#endif
#if BIND_json_string_setn_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "string_setn", mrb_Jansson_json_string_setn, MRB_ARGS_ARG(json_string_setn_REQUIRED_ARGC, json_string_setn_OPTIONAL_ARGC));
#endif
#if BIND_json_string_setn_nocheck_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "string_setn_nocheck", mrb_Jansson_json_string_setn_nocheck, MRB_ARGS_ARG(json_string_setn_nocheck_REQUIRED_ARGC, json_string_setn_nocheck_OPTIONAL_ARGC));
#endif
#if BIND_json_string_value_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "string_value", mrb_Jansson_json_string_value, MRB_ARGS_ARG(json_string_value_REQUIRED_ARGC, json_string_value_OPTIONAL_ARGC));
#endif
#if BIND_json_stringn_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "stringn", mrb_Jansson_json_stringn, MRB_ARGS_ARG(json_stringn_REQUIRED_ARGC, json_stringn_OPTIONAL_ARGC));
#endif
#if BIND_json_stringn_nocheck_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "stringn_nocheck", mrb_Jansson_json_stringn_nocheck, MRB_ARGS_ARG(json_stringn_nocheck_REQUIRED_ARGC, json_stringn_nocheck_OPTIONAL_ARGC));
#endif
#if BIND_json_true_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "true", mrb_Jansson_json_true, MRB_ARGS_ARG(json_true_REQUIRED_ARGC, json_true_OPTIONAL_ARGC));
#endif
#if BIND_json_unpack_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "unpack", mrb_Jansson_json_unpack, MRB_ARGS_ARG(json_unpack_REQUIRED_ARGC, json_unpack_OPTIONAL_ARGC));
#endif
#if BIND_json_unpack_ex_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "unpack_ex", mrb_Jansson_json_unpack_ex, MRB_ARGS_ARG(json_unpack_ex_REQUIRED_ARGC, json_unpack_ex_OPTIONAL_ARGC));
#endif
#if BIND_json_vpack_ex_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "vpack_ex", mrb_Jansson_json_vpack_ex, MRB_ARGS_ARG(json_vpack_ex_REQUIRED_ARGC, json_vpack_ex_OPTIONAL_ARGC));
#endif
#if BIND_json_vunpack_ex_FUNCTION
  mrb_define_class_method(mrb, Jansson_module, "vunpack_ex", mrb_Jansson_json_vunpack_ex, MRB_ARGS_ARG(json_vunpack_ex_REQUIRED_ARGC, json_vunpack_ex_OPTIONAL_ARGC));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

void mrb_mruby_jansson_gem_final(mrb_state* mrb){
/* MRUBY_BINDING: module_final */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
}
#endif
