/*
 * ejemplo_clock.h
 *
 *  Created on: May 12, 2019
 *      Author: Cojua
 */

#ifndef EJEMPLO_CLOCK_H_
#define EJEMPLO_CLOCK_H_

/*==================[inclusions]=============================================*/
#include <stdio.h>
#include "board.h"
#include "MKL46Z4.h"
#include "fsl_debug_console.h"
#include "clock_config.h"
#include "fsl_smc.h"

/* TODO: insert other include files here. */
#include "SD2_board.h"
#include "key.h"



void APP_SetClockVlpr(void);
void APP_SetClockRunFromVlpr(void);
void APP_ShowPowerMode(smc_power_state_t currentPowerState);

#endif /* EJEMPLO_CLOCK_H_ */
