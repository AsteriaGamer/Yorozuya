// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace ATL
    {
        struct _AtlStringThunks
        {
            int (WINAPIV *pfnCompareStringW)(unsigned int, unsigned int, const wchar_t *, int, const wchar_t *, int);
            int (WINAPIV *pfnGetStringTypeExW)(unsigned int, unsigned int, const wchar_t *, int, unsigned __int16 *);
            int (WINAPIV *pfnlstrcmpiW)(const wchar_t *, const wchar_t *);
            wchar_t *(WINAPIV *pfnCharLowerW)(wchar_t *);
            wchar_t *(WINAPIV *pfnCharUpperW)(wchar_t *);
            unsigned int (WINAPIV *pfnGetEnvironmentVariableW)(const wchar_t *, wchar_t *, unsigned int);
        };
    }; // end namespace ATL
END_ATF_NAMESPACE