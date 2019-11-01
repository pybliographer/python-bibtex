/*
 This file is part of pybliographer
 Copyright 2019 Peter Chubb
 Email : peter.chubb@data61.csiro.au
 	   
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2 
 of the License, or (at your option) any later version.
   
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 
*/

#pragma once
/* Python 2 Compatibility */
#if PY_MAJOR_VERSION < 3
#undef PyUnicode_FromString
#define PyUnicode_FromString(s) PyString_FromString(s)
#define PyUnicode_AsUTF8(s) PyString_AsString(s)
#define PyLong_AsLong(i) PyInt_AsLong(i)
#define PyLong_FromLong(l) PyInt_FromLong(l)
#endif
