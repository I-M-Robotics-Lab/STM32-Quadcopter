/*
* This file is part of Cleanflight.
*
* Cleanflight is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cleanflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdbool.h>
#include <platform.h>
#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"

timerHardware_t timerHardware[] = {
    //Motor 1 -> PA9
    DEF_TIM(TIM1, CH2, PA9,  TIM_USE_MC_MOTOR, 0, 1),
    //Motor 2 -> PA8 
    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_MC_MOTOR, 0, 1),
    //Motor 3 -> PB4
    DEF_TIM(TIM3, CH1, PB4,  TIM_USE_MC_MOTOR, 0, 0),
    //Motor 4 -> PB5
    DEF_TIM(TIM3, CH2, PB5,  TIM_USE_MC_MOTOR, 0, 0),
};

    

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);