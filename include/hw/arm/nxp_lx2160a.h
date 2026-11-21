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

#include "hw/core/boards.h"

#define TYPE_NXP_LX2160A_BASE "lx2160a-base"
OBJECT_DECLARE_TYPE(LX2160A, LX2160AClass, NXP_LX2160A_BASE)

struct LX2160A {
    MachineState parent;
};

struct LX2160AClass {
    MachineClass parent;
};

#define NXP_LX2160A "lx2160a"

#endif