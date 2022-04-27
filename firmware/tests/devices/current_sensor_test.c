/*
 * current_sensor_test.c
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
 * \brief Unit test of the Current Sensor device
 *
 * \author Lucas Zacchi de Medeiros <lucas.zacchi@spacelab.ufsc.br>
 *
 * \version 0.1.0
 *
 * \date 2021/08/23
 *
 * \defgroup current_sensor_test Current Sensor
 * \ingroup tests
 * \{
 */

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <float.h>
#include <cmocka.h>

#include <devices/current_sensor/current_sensor.h>
#include <system/sys_log/sys_log.h>
#include <drivers/adc/adc.h>
#include <drivers/max9934/max9934.h>

#define PANNEL_MINUS_Y_CURRENT_SENSOR_ADC_PORT ADC_PORT_1
#define PANNEL_PLUS_X_CURRENT_SENSOR_ADC_PORT ADC_PORT_2
#define PANNEL_MINUS_X_CURRENT_SENSOR_ADC_PORT ADC_PORT_3
#define PANNEL_PLUS_Z_CURRENT_SENSOR_ADC_PORT ADC_PORT_4
#define PANNEL_MINUS_Z_CURRENT_SENSOR_ADC_PORT ADC_PORT_5
#define PANNEL_PLUS_Y_CURRENT_SENSOR_ADC_PORT ADC_PORT_6
#define EPS_BEACON_CURRENT_SENSOR_ADC_PORT ADC_PORT_7

static void current_sensor_init_test(void **state)
{
}

static void current_sensor_raw_read_test(void **state)
{
}

int main(void)
{
    const struct CMUnitTest current_sensor_tests[] = {
        cmocka_unit_test(current_sensor_init_test),
        cmocka_unit_test(current_sensor_raw_read_test),
    };

    return cmocka_run_group_tests(current_sensor_tests, NULL, NULL);
}

/** \} End of current_sensor_test group */
