/*
 * tps54x0_wrap.h
 *
 * Copyright (C) 2022, SpaceLab.
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
 * \brief TPS54X0 driver wrap definition.
 *
 * \author Lucas Zacchi <lucas.zacchi@spacelab.ufsc.br>
 *
 * \version 0.1.0
 *
 * \date 2022/07/12
 *
 * \defgroup tps54x0_wrap TPS54X0 Wrap
 * \ingroup tests
 * \{
 */

#ifndef TPS54X0_WRAP_H_
#define TPS54X0_WRAP_H_

#include <stdint.h>

#include <drivers/tps54x0/tps54x0.h>

int __wrap_tps54x0_init(tps54x0_config_t config);
int __wrap_tps54x0_enable(tps54x0_config_t config);
int __wrap_tps54x0_disable(tps54x0_config_t config);

#endif /* TPS54X0_WRAP_H_ */

/** \} End of tps54x0 group */