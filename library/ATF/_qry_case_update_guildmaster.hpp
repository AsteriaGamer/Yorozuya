// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_case_update_guildmaster
    {
        unsigned int in_guildserial;
        unsigned int tmp_guildindex;
        unsigned int in_guild_prev_masterSerial;
        char in_guild_prev_masterPrevGrade;
        unsigned int in_guild_new_masterSerial;
        char in_guild_new_masterPrevGrade;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_update_guildmaster*);
            return (org_ptr(0x14025d220L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE