/*
 * Clutter COGL
 *
 * A basic GL/GLES Abstraction/Utility Layer
 *
 * Authored By Matthew Allum  <mallum@openedhand.com>
 *
 * Copyright (C) 2007 OpenedHand
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __COGL_PRIMITIVES_H
#define __COGL_PRIMITIVES_H

typedef struct _floatVec2    floatVec2;
typedef struct _CoglBezQuad      CoglBezQuad;
typedef struct _CoglBezCubic     CoglBezCubic;
typedef struct _CoglPathNode     CoglPathNode;

struct _floatVec2
{
  float x;
  float y;
};

#ifdef CLUTTER_COGL_HAS_GL

typedef struct _CoglFloatVec2    CoglFloatVec2;

struct _CoglFloatVec2
{
  GLfloat x;
  GLfloat y;
};

struct _CoglPathNode
{
  GLfloat x;
  GLfloat y;
  guint   path_size;
};

#else /* CLUTTER_COGL_HAS_GL */

struct _CoglPathNode
{
  GLfixed x;
  GLfixed y;
  guint   path_size;
};

#endif /* CLUTTER_COGL_HAS_GL */

struct _CoglBezQuad
{
  floatVec2 p1;
  floatVec2 p2;
  floatVec2 p3;
};

struct _CoglBezCubic
{
  floatVec2 p1;
  floatVec2 p2;
  floatVec2 p3;
  floatVec2 p4;
};

#endif /* __COGL_PRIMITIVES_H */
