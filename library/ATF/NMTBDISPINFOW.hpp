// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagNMHDR.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct NMTBDISPINFOW
    {
        tagNMHDR hdr;
        unsigned int dwMask;
        int idCommand;
        unsigned __int64 lParam;
        int iImage;
        wchar_t *pszText;
        int cchText;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE