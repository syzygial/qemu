/*
 * NXP Layerscape LX2160A model.
 *
 * Written by syzygial
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 or
 * (at your option) any later version.
 */
#include "qemu/osdep.h"
#include "hw/arm/nxp_lx2160a.h"
#include "qemu/module.h"

static void versal_class_init(ObjectClass *klass, const void *data) {}

static const TypeInfo lx2160a_info = {
    .name = NXP_LX2160A,
    .parent = TYPE_NXP_LX2160A_BASE,
    .class_init = versal_class_init,
};

static void lx2160a_register_types(void) {
    type_register_static(&lx2160a_info);
}

type_init(lx2160a_register_types);
