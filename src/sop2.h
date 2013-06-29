/*
 * AMD GCN ISA Assembler
 *
 * SOP2 instruction parser
 *
 * This software is Copyright 2013, Daniel Bali <balijanosdaniel at gmail.com>,
 * and it is hereby released to the general public under the following terms:
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted.
 */

#ifndef _SOP2_H
#define _SOP2_H

#include "isa_instr.h"
#include "isa_operand.h"
#include "error.h"

isa_op_code parseSOP2(isa_instr instr, char **args);

#endif