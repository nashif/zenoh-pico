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

#ifndef ZENOH_PICO_PROTOCOL_KEYEXPR_H
#define ZENOH_PICO_PROTOCOL_KEYEXPR_H

#include <stdbool.h>
#include "zenoh-pico/api/constants.h"
#include "zenoh-pico/protocol/core.h"

z_keyexpr_canon_status_t _z_keyexpr_is_canon_ke(const char *start, size_t len);
z_keyexpr_canon_status_t _z_keyexpr_canonize(char *start, size_t *len);
bool _z_keyexpr_includes(const char *l, const char *r);
bool _z_keyexpr_intersect(const char *l, const char *r);

/*------------------ clone/Copy/Free helpers ------------------*/
void _z_keyexpr_copy(_z_keyexpr_t *dst, const _z_keyexpr_t *src);
_z_keyexpr_t _z_keyexpr_duplicate(const _z_keyexpr_t *src);
_z_timestamp_t _z_timestamp_duplicate(const _z_timestamp_t *tstamp);
void _z_timestamp_reset(_z_timestamp_t *tstamp);

#endif /* ZENOH_PICO_PROTOCOL_KEYEXPR_H */