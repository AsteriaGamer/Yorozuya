// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _apex_block_request_wrac
    {
        char szAccountID[13];
        unsigned int dwAccountSerial;
        unsigned int dwIP;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _apex_block_request_wrac*);
            return (org_ptr(0x140410c50L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE