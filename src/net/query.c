/*
 * Copyright (c) 2017, 2021 ADLINK Technology Inc.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Apache License, Version 2.0
 * which is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *
 * Contributors:
 *   ADLINK zenoh team, <zenoh@adlink-labs.tech>
 */

#include "zenoh-pico/api/primitives.h"
#include "zenoh-pico/session/query.h"

_z_target_t _z_target_default(void)
{
    return (_z_target_t){._kind = Z_QUERYABLE_ALL_KINDS, ._target = z_query_target_default()};
}

z_consolidation_strategy_t _z_consolidation_strategy_default(void)
{
    return (z_consolidation_strategy_t) { .first_routers = Z_CONSOLIDATION_MODE_LAZY,
                                          .last_router = Z_CONSOLIDATION_MODE_LAZY,
                                          .reception = Z_CONSOLIDATION_MODE_FULL
                                        };
}

z_consolidation_strategy_t _z_consolidation_strategy_none(void)
{
    return (z_consolidation_strategy_t) { .first_routers = Z_CONSOLIDATION_MODE_NONE,
                                          .last_router = Z_CONSOLIDATION_MODE_NONE,
                                          .reception = Z_CONSOLIDATION_MODE_NONE
                                        };
}