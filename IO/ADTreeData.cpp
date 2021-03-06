/*
* This file is part of MultiBoost, a multi-class 
* AdaBoost learner/classifier
*
* Copyright (C) 2005-2006 Norman Casagrande
* For informations write to nova77@gmail.com
*
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this library; if not, write to the Free Software
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*
*/

#include "ADTreeData.h"


// ------------------------------------------------------------------------
namespace MultiBoost {

ADTreeData::~ADTreeData()
{
   if (_pHead)
      delete _pHead;
}

// ------------------------------------------------------------------------

void ADTreeData::load(const string& fileName, eInputType inputType, int verboseLevel)
{
   SortedData::load(fileName, inputType, verboseLevel);

   _pHead = new ADTreeLearner();

}

// ------------------------------------------------------------------------

} // end of namespace MultiBoost
