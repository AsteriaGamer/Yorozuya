// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CItemStore.hpp"
#include "_character_create_setdata.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  _npc_create_setdata : _character_create_setdata
    {
        CItemStore *m_pLinkItemStore;
        char m_byRaceCode;
    public:
        _npc_create_setdata()
        {
            using org_ptr = void (WINAPIV*)(struct _npc_create_setdata*);
            (org_ptr(0x140199140L))(this);
        };
        void ctor__npc_create_setdata()
        {
            using org_ptr = void (WINAPIV*)(struct _npc_create_setdata*);
            (org_ptr(0x140199140L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE