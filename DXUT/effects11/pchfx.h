//--------------------------------------------------------------------------------------
// File: pchfx.h
//
// Direct3D 11 shader effects precompiled header
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//
// http://go.microsoft.com/fwlink/p/?LinkId=271568
//--------------------------------------------------------------------------------------

#pragma once

#pragma warning(disable : 4102 4127 4201 4505 4616 4706 6326)

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <algorithm>
#include <d3d11_1.h>

#ifndef _WIN32_WINNT_WIN8
#define _WIN32_WINNT_WIN8 0x0602
#endif

#undef DEFINE_GUID
#include "INITGUID.h"

#include "d3dx11effect.h"

#define UNUSED -1

//////////////////////////////////////////////////////////////////////////

#define offsetof_fx( a, b ) (uint32_t)offsetof( a, b )

#include "d3dxGlobal.h"

#include <stddef.h>
#include <stdlib.h>

#include "Effect.h"
#include "EffectStateBase11.h"
#include "EffectLoad.h"

#include <D3DCompiler.h>

