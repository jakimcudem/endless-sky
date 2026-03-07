/* Tweaks.h
Copyright (c) 2014 by Michael Zahniser

Endless Sky is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

Endless Sky is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef TWEAKS_H_
#define TWEAKS_H_


namespace tweaks {
	// Changes the size of a system by multiplying all in-system object distances
	inline const double systemDistanceMultiplier = 10.;
	// Changes the size of the effective radius of ramscoop fuel generation
	inline const double ramscoopDistanceMultiplier = 10.;
	// Changes how far NPC ships can travel from the system center
	inline const double invisibleFenceMultiplier = 10.;

	// Fraction of main thrust that is applied when reversing
	// on top of existing reverse thrust, if any
	inline const double mainThrusterReverseThrustFactor = 0.25;
	// Fraction of main thrust cost that is applied when strafing
	inline const double mainThrusterReverseCostFactor = 0.25;
	// Fraction of turning power that is applied when strafing
	inline const double turnPowerToStrafePowerRatio = 0.03;
	// Fraction of turning cost that is applied when strafing
	inline const double strafingCostMultiplier = 1.;
}


#endif
