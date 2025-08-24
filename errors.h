#pragma once

enum class Error
{
    NONE = 0,      /* No error, operation successful */
    NULLPTR,       /* nullptr when not expected */
    NO_DEVICE,     /* Device does not exist (ex: UART4 requested when only has 3)*/
    BAD_PARAM,     /* Parameter does not make sense */
    INVALID,       /* Logical invalid cant be enabled and off*/
    UNINITIALIZED, /* Use of uninitialized resource */
    BUSY,          /* Resource is busy and cannot complete operation */
    BAD_STATE,     /* Operation attempted in wrong state or state should not have reached */
    UNKNOWN,       /* Cannot pinpoint error (likely asssert) */
    COMMS,         /* Failed to communicate */
    TIMEOUT,       /* Timeoout waiting for operation */
    NO_RESPONSE,   /* No response from resource */
    OVERFLOW,      /* Overflow of buffer or other container */
    UNDERFLOW,     /* Attempt to read from a buffer with nothing */
    NONE_AVAIL,    /* No resource available */
    SHUTDOWN,      /* Error shutting down */
    ABORT,         /* Operation aborted */
    NOT_SUPPORTED, /* Operation not supported */
    LOCKED,        /* Resource locked by other process or accidentally */
    PERMISSIONS,   /* Operation not permitted (ex: override non overridable data)*/
    IO_FAIL,       /* Generic IO failure (ex: UART framing error, parity mismatch)*/
    CRC,           /* CRC Mismatch */
};