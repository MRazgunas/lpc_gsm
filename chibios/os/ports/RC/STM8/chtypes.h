/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
                 2011,2012,2013 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    RC/STM8/chtypes.h
 * @brief   STM8 (Raisonance) port system types.
 *
 * @addtogroup STM8_RAISONANCE_CORE
 * @{
 */

#ifndef _CHTYPES_H_
#define _CHTYPES_H_

#include <stddef.h>

typedef unsigned char   uint8t;         /**< C99-style boolean.             */
typedef unsigned char   uint8_t;        /**< C99-style 8 bits unsigned.     */
typedef signed char     int8_t;         /**< C99-style 8 bits signed.       */
typedef unsigned int    uint16_t;       /**< C99-style 16 bits unsigned.    */
typedef signed int      int16_t;        /**< C99-style 16 bits signed.      */
typedef unsigned long   uint32_t;       /**< C99-style 32 bits unsigned.    */
typedef signed long     int32_t;        /**< C99-style 32 bits signed.      */
typedef uint8_t         uint_fast8_t;   /**< C99-style 8 bits unsigned.     */
typedef uint16_t        uint_fast16_t;  /**< C99-style 16 bits unsigned.    */
typedef uint32_t        uint_fast32_t;  /**< C99-style 32 bits unsigned.    */

#if !defined(false) || defined(__DOXYGEN__)
#define false           0
#endif

#if !defined(true) || defined(__DOXYGEN__)
#define true            (!false)
#endif

typedef bool            bool_t;         /**< Fast boolean type.             */
typedef uint8_t         tmode_t;        /**< Thread flags.                  */
typedef uint8_t         tstate_t;       /**< Thread state.                  */
typedef uint8_t         trefs_t;        /**< Thread references counter.     */
typedef uint8_t         tslices_t;      /**< Thread time slices counter.    */
typedef uint8_t         tprio_t;        /**< Thread priority.               */
typedef int16_t         msg_t;          /**< Inter-thread message.          */
typedef int8_t          eventid_t;      /**< Event Id.                      */
typedef uint8_t         eventmask_t;    /**< Event mask.                    */
typedef uint8_t         flagsmask_t;    /**< Event flags.                   */
typedef uint16_t        systime_t;      /**< System time.                   */
typedef int8_t          cnt_t;          /**< Resources counter.             */

/**
 * @brief   Inline function modifier.
 */
#define INLINE inline

/**
 * @brief   ROM constant modifier.
 * @note    Uses the "const" keyword in this port.
 */
#define ROMCONST code

/**
 * @brief   Packed structure modifier (within).
 * @note    Empty in this port.
 */
#define PACK_STRUCT_STRUCT

/**
 * @brief   Packed structure modifier (before).
 * @note    Empty in this port.
 */
#define PACK_STRUCT_BEGIN

/**
 * @brief   Packed structure modifier (after).
 * @note    Empty in this port.
 */
#define PACK_STRUCT_END

#endif /* _CHTYPES_H_ */

/** @} */
