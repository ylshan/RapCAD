/*
 *   RapCAD - Rapid prototyping CAD IDE (www.rapcad.org)
 *   Copyright (C) 2010-2014 Giles Bathgate
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

#include "normfunction.h"
#include "context.h"
#include "vectorvalue.h"
#include "numbervalue.h"
#include "rmath.h"

NormFunction::NormFunction() : Function("norm")
{
	addParameter("value");
}

Value* NormFunction::evaluate(Context* ctx)
{
	VectorValue* v=dynamic_cast<VectorValue*>(getParameterArgument(ctx,0));
	if(v) {
		Value* v2=Value::operation(v,Expression::Multiply,v);
		NumberValue* n=dynamic_cast<NumberValue*>(v2);
		if(n)
			return new NumberValue(r_sqrt(n->getNumber()));
	}
	return new Value();
}