/*
 *   RapCAD - Rapid prototyping CAD IDE (www.rapcad.org)
 *   Copyright (C) 2010  Giles Bathgate
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

#include "binaryexpression.h"

BinaryExpression::BinaryExpression()
{
    left=NULL;
    right=NULL;
}

BinaryExpression::~BinaryExpression()
{
    delete left;
    delete right;
}

QString BinaryExpression::toString()
{
    QString result;
    result.append("Expression: (");
    result.append(this->left->toString());
    result.append("Operator: ");
    result.append(this->getOpString());
    result.append(" ");
    result.append(this->right->toString());
    result.append(") ");
    return result;
}

Expression* BinaryExpression::getLeft()
{
    return this->left;
}

void BinaryExpression::setLeft(Expression * left)
{
    this->left = left;
}

Expression* BinaryExpression::getRight()
{
    return this->right;
}

void BinaryExpression::setRight(Expression * right)
{
    this->right = right;
}
