#include "be_constobj.h"

static be_define_const_map_slots(be_class_lv_obj_map) {
    { be_const_key(init, 2), be_const_func(lvbe_obj_create) },
    { be_const_key(tostring, -1), be_const_func(lvx_tostring) },
    { be_const_key(dot_p, -1), be_const_index(0) },
    { be_const_key(member, 0), be_const_func(lvx_member) },
};

static be_define_const_map(
    be_class_lv_obj_map,
    4
);

BE_EXPORT_VARIABLE be_define_const_class(
    be_class_lv_obj,
    1,
    NULL,
    lv_obj
);
