// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMapDataTableVtbl.hpp>
#include <_map_fld.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CMapDataTable
    {
        CMapDataTableVtbl *vfptr;
        _map_fld *m_pRecord;
        unsigned int m_dwRecordNum;
    public:
        CMapDataTable();
        void ctor_CMapDataTable();
        struct _map_fld* GetRecord(unsigned int dwIndex);
        int GetRecordNum();
        bool ReadScript(char* szFileName);
        ~CMapDataTable();
        void dtor_CMapDataTable();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<CMapDataTable, 24>(), "CMapDataTable");
END_ATF_NAMESPACE
