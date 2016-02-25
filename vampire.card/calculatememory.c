/*
    Copyright 2016, Jason S. McMullan <jason.mcmullan@gmail.com>
    Licensed under the MIT (Expat) license. �
*/

#include <aros/libcall.h>

#include "vampire_intern.h"

/*****************************************************************************

    NAME */
        AROS_LH3(APTR, CalculateMemory,

/*  SYNOPSIS */
        AROS_LHA(struct BoardInfo *, bi, A0),
        AROS_LHA(APTR, LogicalMemory, A1),
        AROS_LHA(RGBFTYPE, RGBFormat, D7),

/*  LOCATION */
        struct Library *, VampireBase, 31, Vampire)

/*  FUNCTION

    INPUTS

    RESULT

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO

    INTERNALS

    HISTORY

*****************************************************************************/
{
    AROS_LIBFUNC_INIT

    return FALSE;

    AROS_LIBFUNC_EXIT
}

