// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <tagEMR.hpp>
#include <tagPALETTEENTRY.hpp>


START_ATF_NAMESPACE
    struct tagEMRSETPALETTEENTRIES
    {
        tagEMR emr;
        unsigned int ihPal;
        unsigned int iStart;
        unsigned int cEntries;
        tagPALETTEENTRY aPalEntries[1];
    };
END_ATF_NAMESPACE
