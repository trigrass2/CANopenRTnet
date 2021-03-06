#ifndef drive_canopen_H_
#define drive_canopen_H_
#include <xs1.h>

// *******************************************************************************
// Configuraciones del nodo CANopen va en canopen_conf.h del módulo module_canopen
// Node-Id, Harbeat, etc.
// *******************************************************************************


#define _DEBUG_

// Configuraciones del hardware

#define N_ENT_DIGITALES 1
#define N_SAL_DIGITALES 4

#define N_PUERTOS_PWM   4
#define RES_PWM         1024                    // resolución de los puertos PWM
#define GRANO_PWM       5                     // granularidad en veintenas de nS del incremento de
                                                  // ancho de pulso de la señal PWM
                                                  // grano=0 -> incremento=10nS, grano=1 -> incremento 20nS, 2->40nS, 3->60nS, etc.
                                                // 4->80ns, 5->100ns
#define PWM_OFF         0,0,0,0                  // Valores PWM mientras drive está apagado


// módulo Quadrature-Encoder-Input configura su cantidad de encoders leídos con este define que
// en rigor debería llamarse "number_of_encoders"
#define NUMBER_OF_MOTORS 2


// Configuracion puerto SPI para comunicación con módulo wireless

// En este modo (SD-Card) se puede leer el registro de STATUS del módulo WL directamente
// con una lectura del puerto SPI
#define SPI_MASTER_SD_CARD_COMPAT 0
#define DEFAULT_SPI_CLOCK_DIV 16
#define SPI_MASTER_MODE 0

// Selección de canal
#define NRF_CHANNEL     5
#define NRF_ADDRESS     0xB6,0x24,0xA6


#ifdef __XC__
// declaraciones de funciones

#endif
#endif /* sync_RTnet_H_ */
