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

static void lx2160a_class_init(ObjectClass *class, const void *data) {
    MachineClass *mc = MACHINE_CLASS(class);
    mc->desc = "NXP LX2160A";
}

static const TypeInfo lx2160a_info = {
    .name = MACHINE_TYPE_NAME(NXP_LX2160A),
    .parent = TYPE_MACHINE,
    .class_init = lx2160a_class_init,
};

static void lx2160a_register_types(void) {
    type_register_static(&lx2160a_info);
}

type_init(lx2160a_register_types);
