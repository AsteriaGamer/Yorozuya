// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_unmandtrader_log_in_proc_update_complete
    {
        struct __list
        {
            char byProcRet;
            char byProcUpdate;
            unsigned int dwBuyer;
            unsigned int dwRegistSerial;
            char byUpdateState;
        };
        unsigned __int16 wInx;
        unsigned int dwSeller;
        bool bAllSuccess;
        char byType;
        unsigned __int16 wNum;
        __list List[20];
    };
END_ATF_NAMESPACE