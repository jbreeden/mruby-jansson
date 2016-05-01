/*
 * json_error_t
 * Defined in file jansson.h @ line 121
 */

#include "mruby_Jansson.h"

#if BIND_JsonError_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::initialize */
/* sha: 15cedd747fda353568b152ed88c44d3d839e3a40c396263c0b6d6fe982f1cec4 */
#if BIND_JsonError_INITIALIZE
mrb_value
mrb_Jansson_JsonError_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  json_error_t* native_object = (json_error_t*)calloc(1, sizeof(json_error_t));
  mruby_gift_json_error_t_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: JsonError::line_reader */
/* sha: e8a55b11e286a14a1c15976b2336aaecdb09e1347890701db6645cd7c7b6479c */
#if BIND_JsonError_line_FIELD_READER
mrb_value
mrb_Jansson_JsonError_get_line(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);

  int native_line = native_self->line;

  mrb_value line = mrb_fixnum_value(native_line);

  return line;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::line_writer */
/* sha: 660d434c1510a348e2de7e29d8411fe79e5fabdd269effaa8e5aa7e3748e3847 */
#if BIND_JsonError_line_FIELD_WRITER
mrb_value
mrb_Jansson_JsonError_set_line(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);
  mrb_int native_line;

  mrb_get_args(mrb, "i", &native_line);

  native_self->line = native_line;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::column_reader */
/* sha: efa89b77cf21ff9bccbee0d4d73525a89e4667520bc6bd16476fd93b8291154b */
#if BIND_JsonError_column_FIELD_READER
mrb_value
mrb_Jansson_JsonError_get_column(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);

  int native_column = native_self->column;

  mrb_value column = mrb_fixnum_value(native_column);

  return column;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::column_writer */
/* sha: e43948936ba7e81a3a1b87a45236e6e19387879a86ee984891f01faf8cbe9bf8 */
#if BIND_JsonError_column_FIELD_WRITER
mrb_value
mrb_Jansson_JsonError_set_column(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);
  mrb_int native_column;

  mrb_get_args(mrb, "i", &native_column);

  native_self->column = native_column;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::position_reader */
/* sha: 9a31497030b33ad3e48c0ca1922d9490fb58d740934f3c22ae0deb9b077dc769 */
#if BIND_JsonError_position_FIELD_READER
mrb_value
mrb_Jansson_JsonError_get_position(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);

  int native_position = native_self->position;

  mrb_value position = mrb_fixnum_value(native_position);

  return position;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::position_writer */
/* sha: 7891f0fc4bbafcd89e26fbb2ee2c958e5ab0947fe8d20372642c170e284f9aff */
#if BIND_JsonError_position_FIELD_WRITER
mrb_value
mrb_Jansson_JsonError_set_position(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);
  mrb_int native_position;

  mrb_get_args(mrb, "i", &native_position);

  native_self->position = native_position;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::source_reader */
/* sha: 162dbd5c39d67cb259167b5ca0099066901094bc630c61fa9ca6e0342728eed4 */
#if BIND_JsonError_source_FIELD_READER
mrb_value
mrb_Jansson_JsonError_get_source(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);

  char [80] native_source = native_self->source;

  mrb_value source = TODO_mruby_box_char_[80](mrb, native_source);

  return source;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::source_writer */
/* sha: 7f9c6107ea47d3dcb8d454e50e7bfee874061caaa80070757b7ed47b6c850de3 */
#if BIND_JsonError_source_FIELD_WRITER
mrb_value
mrb_Jansson_JsonError_set_source(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);
  mrb_value source;

  mrb_get_args(mrb, "o", &source);

  /* type checking */
  TODO_type_check_char_[80](source);

  char [80] native_source = TODO_mruby_unbox_char_[80](source);

  native_self->source = native_source;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::text_reader */
/* sha: e7803ea049f8cd860abcf344e9a2cd7cfe41950db3810314aed13de1a9cf9c89 */
#if BIND_JsonError_text_FIELD_READER
mrb_value
mrb_Jansson_JsonError_get_text(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);

  char [160] native_text = native_self->text;

  mrb_value text = TODO_mruby_box_char_[160](mrb, native_text);

  return text;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::text_writer */
/* sha: 3c1e43956c72b3fac0807e49b9d5e7526d82eb6cd50e7ae79a341eb76f4991e1 */
#if BIND_JsonError_text_FIELD_WRITER
mrb_value
mrb_Jansson_JsonError_set_text(mrb_state* mrb, mrb_value self) {
  json_error_t * native_self = mruby_unbox_json_error_t(self);
  mrb_value text;

  mrb_get_args(mrb, "o", &text);

  /* type checking */
  TODO_type_check_char_[160](text);

  char [160] native_text = TODO_mruby_unbox_char_[160](text);

  native_self->text = native_text;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Jansson_JsonError_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::class_definition */
/* sha: c7baab486628ef5330726cfadcb2151a7494be03a0d799a85f6da8cdaf34d48b */
  struct RClass* JsonError_class = mrb_define_class_under(mrb, Jansson_module(mrb), "JsonError", mrb->object_class);
  MRB_SET_INSTANCE_TT(JsonError_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::class_method_definitions */
/* sha: e91cf7ea0d537a1c7a09bbea7241b716801d033310f9a644b9b1687feaca5ec5 */
#if BIND_JsonError_INITIALIZE
  mrb_define_method(mrb, JsonError_class, "initialize", mrb_Jansson_JsonError_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::attr_definitions */
/* sha: 558b01c39679b3ed90dc73393f0a2e04247a79288c7773d6ac281ef80c9c558c */
  /*
   * Fields
   */
#if BIND_JsonError_line_FIELD_READER
  mrb_define_method(mrb, JsonError_class, "line", mrb_Jansson_JsonError_get_line, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_JsonError_line_FIELD_WRITER
  mrb_define_method(mrb, JsonError_class, "line=", mrb_Jansson_JsonError_set_line, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_JsonError_column_FIELD_READER
  mrb_define_method(mrb, JsonError_class, "column", mrb_Jansson_JsonError_get_column, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_JsonError_column_FIELD_WRITER
  mrb_define_method(mrb, JsonError_class, "column=", mrb_Jansson_JsonError_set_column, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_JsonError_position_FIELD_READER
  mrb_define_method(mrb, JsonError_class, "position", mrb_Jansson_JsonError_get_position, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_JsonError_position_FIELD_WRITER
  mrb_define_method(mrb, JsonError_class, "position=", mrb_Jansson_JsonError_set_position, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_JsonError_source_FIELD_READER
  mrb_define_method(mrb, JsonError_class, "source", mrb_Jansson_JsonError_get_source, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_JsonError_source_FIELD_WRITER
  mrb_define_method(mrb, JsonError_class, "source=", mrb_Jansson_JsonError_set_source, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_JsonError_text_FIELD_READER
  mrb_define_method(mrb, JsonError_class, "text", mrb_Jansson_JsonError_get_text, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_JsonError_text_FIELD_WRITER
  mrb_define_method(mrb, JsonError_class, "text=", mrb_Jansson_JsonError_set_text, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: JsonError::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
