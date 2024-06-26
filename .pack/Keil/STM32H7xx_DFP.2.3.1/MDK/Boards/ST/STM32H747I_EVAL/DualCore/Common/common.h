/*----------------------------------------------------------------------------
 * Name:    common.h
 * Purpose: commen include file
 *----------------------------------------------------------------------------*/

#ifndef COMMON_H__
#define COMMON_H__

#include "stm32h7xx_hal.h"

#define HSEM_ID_LED1  (0U)                                      /* HW semaphore 0: used for LED control */
#define HSEM_MSK_LED1 (__HAL_HSEM_SEMID_TO_MASK(HSEM_ID_LED1))  /* HW semaphore 0 mask */

#define HSEM_ID_LED2  (1U)                                      /* HW semaphore 1: used for LED control */
#define HSEM_MSK_LED2 (__HAL_HSEM_SEMID_TO_MASK(HSEM_ID_LED2))  /* HW semaphore 1mask */

#define HSEM_ID_LED3  (2U)                                      /* HW semaphore 2: used for LED control */
#define HSEM_MSK_LED3 (__HAL_HSEM_SEMID_TO_MASK(HSEM_ID_LED3))  /* HW semaphore 2 mask */

#define HSEM_ID_LED4  (3U)                                      /* HW semaphore 3: used for LED control */
#define HSEM_MSK_LED4 (__HAL_HSEM_SEMID_TO_MASK(HSEM_ID_LED4))  /* HW semaphore 3 mask */

#define HSEM_ID_SYNC  (7U)                                      /* HW semaphore 7: used for syncronisation */
#define HSEM_MSK_SYNC (__HAL_HSEM_SEMID_TO_MASK(HSEM_ID_SYNC))  /* HW semaphore 7 mask */


#endif
