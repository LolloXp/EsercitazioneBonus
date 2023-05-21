/*! \file CreazioneOggetti.h
	\brief Declaration of the object creator library CrezioneOggetti

	Details.
*/

#pragma once

#define CREAZIONEOGGETTI_H

#include "polygon.h"

/// @brief creates a Rectangle
void CreazioneRettangolo(Polygon* ptr[], int *c, float b, float h);
/// @brief creates a Rhombus
void CreazioneRombo(Polygon* ptr[], int *c, float D, float d);
/// @brief creates a RightTrapezoid
void CreazioneTrapezio(Polygon* ptr[], int *c, float B, float b, float h);