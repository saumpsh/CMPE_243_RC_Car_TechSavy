/*
 * c_uart2_wrapper.h
 *
 *  Created on: Feb 15, 2019
 *      Author: Aakash Chitroda
 *      SJSU ID: 013755040
 */

#ifndef UART2_WRAPPER_H_
#define UART2_WRAPPER_H_
#include "stdint.h"
#include "stdbool.h"

#ifdef __cplusplus
extern "C" {
#endif

bool uart2_init(unsigned int baud_rate, int rx_queue_size, int tx_queue_size);
bool uart2_put(const char send_data[], unsigned int timeout_ms);
bool uart2_put_char(const char send_data, unsigned int timeout_ms);
bool uart2_get(char *recvd_data, int max_length, unsigned int timeout_ms);
bool uart2_get_char(char *recvd_data, unsigned int timeout_ms);

#ifdef __cplusplus
}
#endif


#endif /* UART2_WRAPPER_H_ */
