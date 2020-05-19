/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"
#include "fsl_semc.h"
/* Definition of peripheral ID */
#define SEMC_1_PERIPHERAL SEMC
#include "fsl_clock.h"
#include "fsl_lpspi.h"
#include "fsl_lpuart.h"
#include "fsl_lpi2c.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* BOARD_InitPeripherals defines for LPSPI1 */
/* Definition of peripheral ID */
#define LPSPI_1_PERIPHERAL LPSPI1
/* Definition of clock source */
#define LPSPI_1_CLOCK_FREQ 105600000UL
/* Definition of peripheral ID */
#define LPUART_1_PERIPHERAL LPUART8
/* Definition of the clock source frequency */
#define LPUART_1_CLOCK_SOURCE 80000000UL
/* Definition of peripheral ID */
#define LPUART_2_PERIPHERAL LPUART3
/* Definition of the clock source frequency */
#define LPUART_2_CLOCK_SOURCE 80000000UL
/* Definition of peripheral ID */
#define LPUART_3_PERIPHERAL LPUART2
/* Definition of the clock source frequency */
#define LPUART_3_CLOCK_SOURCE 80000000UL
/* BOARD_InitPeripherals defines for LPI2C1 */
/* Definition of peripheral ID */
#define LPI2C_1_PERIPHERAL LPI2C1
/* Definition of clock source */
#define LPI2C_1_CLOCK_FREQ 60000000UL
/* Transfer buffer size */
#define LPI2C_1_MASTER_BUFFER_SIZE 1
/* BOARD_InitPeripherals defines for LPI2C2 */
/* Definition of peripheral ID */
#define LPI2C_2_PERIPHERAL LPI2C2
/* Definition of clock source */
#define LPI2C_2_CLOCK_FREQ 60000000UL
/* Transfer buffer size */
#define LPI2C_2_MASTER_BUFFER_SIZE 1
/* Definition of peripheral ID */
#define LPUART_4_PERIPHERAL LPUART1
/* Definition of the clock source frequency */
#define LPUART_4_CLOCK_SOURCE 80000000UL
/* BOARD_InitPeripherals defines for LPI2C3 */
/* Definition of peripheral ID */
#define LPI2C_3_PERIPHERAL LPI2C3
/* Definition of clock source */
#define LPI2C_3_CLOCK_FREQ 60000000UL
/* Transfer buffer size */
#define LPI2C_3_MASTER_BUFFER_SIZE 1
/* BOARD_InitPeripherals defines for LPSPI3 */
/* Definition of peripheral ID */
#define LPSPI_2_PERIPHERAL LPSPI3
/* Definition of clock source */
#define LPSPI_2_CLOCK_FREQ 105600000UL

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const lpspi_master_config_t LPSPI_1_config;
extern const lpuart_config_t LPUART_1_config;
extern const lpuart_config_t LPUART_2_config;
extern const lpuart_config_t LPUART_3_config;
extern const lpi2c_master_config_t LPI2C_1_masterConfig;
extern lpi2c_master_transfer_t LPI2C_1_masterTransfer;
extern uint8_t LPI2C_1_masterBuffer[LPI2C_1_MASTER_BUFFER_SIZE];
extern lpi2c_master_handle_t LPI2C_1_masterHandle;
extern const lpi2c_master_config_t LPI2C_2_masterConfig;
extern lpi2c_master_transfer_t LPI2C_2_masterTransfer;
extern uint8_t LPI2C_2_masterBuffer[LPI2C_2_MASTER_BUFFER_SIZE];
extern lpi2c_master_handle_t LPI2C_2_masterHandle;
extern const lpuart_config_t LPUART_4_config;
extern const lpi2c_master_config_t LPI2C_3_masterConfig;
extern lpi2c_master_transfer_t LPI2C_3_masterTransfer;
extern uint8_t LPI2C_3_masterBuffer[LPI2C_3_MASTER_BUFFER_SIZE];
extern lpi2c_master_handle_t LPI2C_3_masterHandle;
extern const lpspi_master_config_t LPSPI_2_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */