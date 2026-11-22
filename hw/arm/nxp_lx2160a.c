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
#include "hw/core/sysbus.h"
#include "qemu/module.h"

static void lx2160a_init(Object *obj) {
    LX2160A* s = NXP_LX2160A(obj);
    (void)s;
}

static void lx2160a_class_init(ObjectClass *class, const void *data) {
    DeviceClass *dc = DEVICE_CLASS(class);
    dc->desc = "NXP LX2160A";
}

static const TypeInfo lx2160a_info = {
    .name = TYPE_NXP_LX2160A,
    .parent = TYPE_SYS_BUS_DEVICE,
    .class_init = lx2160a_class_init,
    .instance_init = lx2160a_init
};

static void lx2160a_register_types(void) {
    type_register_static(&lx2160a_info);
}

type_init(lx2160a_register_types);
