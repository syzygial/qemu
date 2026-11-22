/*
 * NXP Layerscape LX2160A board models.
 *
 * Written by syzygial
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 or
 * (at your option) any later version.
 */

#include "qemu/osdep.h"
#include "hw/core/boards.h"
#include "hw/arm/nxp_lx2160a.h"
#include "qemu/module.h"

struct ClearfogState {
    LX2160A soc;
};

static void solidrun_clearfog_class_init(ObjectClass* oc, const void* data) {
    MachineClass* mc = MACHINE_CLASS(oc);
    mc->desc = "Solidrun Clearfog (LX2160A)";
}

static const TypeInfo solidrun_clearfog_info = {
    .name = MACHINE_TYPE_NAME("clearfog"),
    .class_size = sizeof(struct LX2160AClass),
    .instance_size = sizeof(struct ClearfogState),
    .parent = TYPE_MACHINE,
    .class_init = solidrun_clearfog_class_init,
    .abstract = false
};

static void lx2160a_boards_register_types(void) {
    type_register_static(&solidrun_clearfog_info);
}

type_init(lx2160a_boards_register_types);