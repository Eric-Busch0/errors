#pragma once

enum class Error
{
    NONE = 0,
    SUCCESS = 0,
    NULLPTR = -1,
    NO_DEVICE = -2,
    BAD_PARAM = -3,
    INVALID = -4,
    UNINITIALIZED = -5,
    BUSY = -6,
    BAD_STATE = -7,
    UNKNOWN = -8,
    COMMS = -9,
    TIMEOUT = -10,
    NO_RESPONSE = -11,
    OVERFLOW = -12,
    UNDERFLOW = -13,
    NONE_AVAIL = -14,
    SHUTDOWN = -15,
    ABORT = -16,
    NOT_SUPPORTED = -17,
    FAIL = -255
};