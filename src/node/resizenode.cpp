/*
 *   RapCAD - Rapid prototyping CAD IDE (www.rapcad.org)
 *   Copyright (C) 2010-2017 Giles Bathgate
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "resizenode.h"

ResizeNode::ResizeNode() : size(0,0,0)
{
	autosize=false;
}

void ResizeNode::setSize(Point p)
{
	size=p;
}

Point ResizeNode::getSize()
{
	return size;
}

void ResizeNode::setAutoSize(bool b)
{
	autosize=b;
}

bool ResizeNode::getAutoSize()
{
	return autosize;
}

void ResizeNode::accept(NodeVisitor& v)
{
	v.visit(this);
}
