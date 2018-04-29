//
//  bls12_finalexp.h
//  elips_refactoring
//
//  Created by Khandaker Md. Al-Amin on 2/5/18.
/*
 * ELiPS is an Efficient Library for Pairing-based Systems
 * Copyright (C) 2008-2018 ELiPS Authors. Please refer to the COPYRIGHT file
 * for contact information.
 *
 * This file is part of ELiPS Project. ELiPS is legal property of its
 * developers, whose names are not listed here. 
 *
 * ELiPS is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * ELiPS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with ELiPS. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef bls12_finalexp_h
#define bls12_finalexp_h

#include <ELiPS_bn_bls/bls12_frobenius.h>

//final exp
extern void bls12_finalexp_plain(Fp12 *ANS,Fp12 *A);
extern void bls12_finalexp_optimal(Fp12 *ANS,Fp12 *A);

#endif /* bls12_finalexp_h */
