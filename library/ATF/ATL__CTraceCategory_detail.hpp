// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CTraceCategory_info.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace detail
        {
            static info::ATL__CTraceCategoryctor_CTraceCategory1_ptr ATL__CTraceCategoryctor_CTraceCategory1_next(nullptr);
            static info::ATL__CTraceCategoryctor_CTraceCategory1_clbk ATL__CTraceCategoryctor_CTraceCategory1_user(nullptr);
            
            static void ATL__CTraceCategoryctor_CTraceCategory1_wrapper(struct ATL::CTraceCategory* _this, char* pszCategoryName, unsigned int nStartingLevel)
            {
               ATL__CTraceCategoryctor_CTraceCategory1_user(_this, pszCategoryName, nStartingLevel, ATL__CTraceCategoryctor_CTraceCategory1_next);
            };
            
            static hook_record CTraceCategory_functions[] = {
            {   (LPVOID)0x14066da00L,
                (LPVOID *)&ATL__CTraceCategoryctor_CTraceCategory1_user,
                (LPVOID *)&ATL__CTraceCategoryctor_CTraceCategory1_next,
                (LPVOID)cast_pointer_function(ATL__CTraceCategoryctor_CTraceCategory1_wrapper),
                (LPVOID)cast_pointer_function((void(ATL::CTraceCategory::*)(char*, unsigned int))&ATL::CTraceCategory::ctor_CTraceCategory) },
            
            };
            
        }; // static end namespace detail
    }; // end namespace ATL
END_ATF_NAMESPACE