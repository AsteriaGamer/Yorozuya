// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CEventLootTable.hpp"
#include "CItemLootTableVtbl.hpp"
#include "CRecordData.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CItemLootTable
    {
        struct _linker_code
        {
            char byTableCode;
            unsigned __int16 wItemIndex;
            int bExist;
        };
        CItemLootTableVtbl *vfptr;
        CRecordData m_tblLoot;
        CEventLootTable *m_pTblEvent;
        _linker_code **m_ppLinkCode;
        int m_nLootNum;
    public:
        CItemLootTable()
        {
            using org_ptr = void (WINAPIV*)(struct CItemLootTable*);
            (org_ptr(0x1402024d0L))(this);
        };
        void ctor_CItemLootTable()
        {
            using org_ptr = void (WINAPIV*)(struct CItemLootTable*);
            (org_ptr(0x1402024d0L))(this);
        };
        bool Indexing(struct CRecordData* pItemRec, char* pszErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct CItemLootTable*, struct CRecordData*, char*);
            return (org_ptr(0x140203f20L))(this, pItemRec, pszErrMsg);
        };
        bool ReadRecord(char* szFile, struct CRecordData* pItemRec, char* pszErrMsg)
        {
            using org_ptr = bool (WINAPIV*)(struct CItemLootTable*, char*, struct CRecordData*, char*);
            return (org_ptr(0x140203900L))(this, szFile, pItemRec, pszErrMsg);
        };
        ~CItemLootTable()
        {
            using org_ptr = void (WINAPIV*)(struct CItemLootTable*);
            (org_ptr(0x1402027a0L))(this);
        };
        void dtor_CItemLootTable()
        {
            using org_ptr = void (WINAPIV*)(struct CItemLootTable*);
            (org_ptr(0x1402027a0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE