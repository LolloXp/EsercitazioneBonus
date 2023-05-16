#pragma once
/** @file RightTrapezoid.h
	\brief Declaration of the general class RightTrapezoid
	@Luigi Thea
	@Lorenzo Pitzalis
*/

#ifndef RIGHTTRAPEZOID_H
#define RIGHTTRAPEZOID_H

#include<iostream>
#include "polygon.h"

using namespace std;

/// @class RightTrapezoid
/// @brief an abstract base class for polygons
class RightTrapezoid :public Polygon {
protected:
	float perimeter;
	float area;
	float b1, b2, h;
	
	float Area();
	float Perimeter();

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	RightTrapezoid();
	RightTrapezoid(const RightTrapezoid& p);
	virtual ~RightTrapezoid();
	/// @}

	/// @name OPERATORS
	/// @{
	RightTrapezoid& operator=(const RightTrapezoid& p);
	bool operator==(const RightTrapezoid& p);
	/// @}

	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const RightTrapezoid& r);
	void Reset();
	/// @}


	/// @name GETTERS
	/// @{
	float GetValue();
	float GetArea();
	float GetPerimeter();
	/// @}

	/// @name DRAWING
	/// @{
	virtual void Draw() = 0;
	/// @}

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}

};

#endif