/*
 * param_server.c
 * 
 * Copyright (C) 2021, SpaceLab.
 * 
 * This file is part of EPS 2.0.
 * 
 * EPS 2.0 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * EPS 2.0 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with EPS 2.0. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Parameter server task definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.2.1
 * 
 * \date 2021/06/30
 * 
 * \defgroup param_server Parameter server
 * \ingroup tasks
 * \{
 */

#ifndef PARAM_SERVER_H_
#define PARAM_SERVER_H_

#include <FreeRTOS.h>
#include <task.h>

#define TASK_PARAM_SERVER_NAME                      "Param Server"      /**< Task name. */
#define TASK_PARAM_SERVER_STACK_SIZE                300                 /**< Stack size in bytes. */
#define TASK_PARAM_SERVER_PRIORITY                  4                   /**< Task priority. */
#define TASK_PARAM_SERVER_PERIOD_MS                 50                  /**< Task period in milliseconds. */
#define TASK_PARAM_SERVER_INITIAL_DELAY_MS          1000                /**< Delay, in milliseconds, before the first execution. */

/**
 * \brief Parameter server handle.
 */
extern xTaskHandle xTaskParamServerHandle;

/**
 * \brief Parameter server task.
 *
 * \param[in] pvParameters is a value that will passed as the task's parameter.
 *
 * \return None.
 */
void vTaskParamServer(void *pvParameters);

#endif /* PARAM_SERVER_H_ */

/** \} End of param_server group */