#ifndef MRUBY_Jansson_BOXING_HEADER
#define MRUBY_Jansson_BOXING_HEADER

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */


/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are enabled by the macros in mruby_Jansson_classes.h
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* Owner is mruby (it should be garage collected) or C (it shouldn't be).
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby garbage collects the ruby object containing this pointer.
   * This is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object.
   * 
   * Possible uses:
   * - A function pointer to invoke instead of `free` on GC.
   * - A pointer back to the RObject, to be accessed during GC.
   * - etc.
   */
  void* data;
} mruby_to_native_ref;

/* MRUBY_BINDING: Json::boxing_decls */
/* sha: 384701ebb07742446e7638ae91e2d538b02c1c7514b1b9e72fbb9328eba594a8 */
#if BIND_Json_TYPE
mrb_value
mruby_box_json_t(mrb_state* mrb, json_t *unboxed);

mrb_value
mruby_giftwrap_json_t(mrb_state* mrb, json_t *unboxed);

void
mruby_set_json_t_data_ptr(mrb_value obj, json_t *unboxed);

void
mruby_gift_json_t_data_ptr(mrb_value obj, json_t *unboxed);

json_t *
mruby_unbox_json_t(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: JsonError::boxing_decls */
/* sha: 45145d2966753c424eeb4c860362be466d0924a422dc6521baaccd87afaebee6 */
#if BIND_JsonError_TYPE
mrb_value
mruby_box_json_error_t(mrb_state* mrb, json_error_t *unboxed);

mrb_value
mruby_giftwrap_json_error_t(mrb_state* mrb, json_error_t *unboxed);

void
mruby_set_json_error_t_data_ptr(mrb_value obj, json_error_t *unboxed);

void
mruby_gift_json_error_t_data_ptr(mrb_value obj, json_error_t *unboxed);

json_error_t *
mruby_unbox_json_error_t(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#endif
