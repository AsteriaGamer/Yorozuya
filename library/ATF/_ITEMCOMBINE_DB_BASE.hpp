// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_COMBINEKEY.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _ITEMCOMBINE_DB_BASE
    {
        struct _LIST
        {
            _COMBINEKEY Key;
            unsigned int dwDur;
            unsigned int dwUpt;
        public:
            void Init();
            _LIST();
            void ctor__LIST();
        };
        bool m_bIsResult;
        char m_byItemListNum;
        char m_byDlgType;
         unsigned int m_dwDalant;
         unsigned int m_dwCheckKey;
        char m_bySelectItemCount;
        _LIST m_List[24];
        unsigned int m_dwResultEffectType;
        unsigned int m_dwResultEffectMsgCode;
    public:
        void Init();
        bool IsCombineData();
        _ITEMCOMBINE_DB_BASE();
        void ctor__ITEMCOMBINE_DB_BASE();
    };
    #pragma pack(pop)
    static_assert(ATF::checkSize<_ITEMCOMBINE_DB_BASE, 308>(), "_ITEMCOMBINE_DB_BASE");
END_ATF_NAMESPACE
