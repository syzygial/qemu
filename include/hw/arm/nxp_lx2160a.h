/*
 * NXP Layerscape LX2160A model.
 *
 * Written by syzygial
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 or
 * (at your option) any later version.
 */

#ifndef NXP_LX2160A_H
#define NXP_LX2160A_H

#include "target/arm/cpu.h"
#include "hw/core/sysbus.h"
#include "hw/intc/arm_gicv3_common.h"

#define TYPE_NXP_LX2160A "lx2160a"
OBJECT_DECLARE_TYPE(LX2160A, LX2160AClass, NXP_LX2160A)

#define LX2160A_NUM_CPUS 16

struct LX2160A {
    SysBusDevice parent;

    ARMCPU cpu[LX2160A_NUM_CPUS];
    GICv3State gic;
};

struct LX2160AClass {
    SysBusDevice parent;
};

#endif