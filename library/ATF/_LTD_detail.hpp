// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_LTD_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_LTDset2_ptr _LTDset2_next(nullptr);
        static info::_LTDset2_clbk _LTDset2_user(nullptr);
        
        static void _LTDset2_wrapper(struct _LTD* _this, char byMainLogType, char bySubLogType)
        {
           _LTDset2_user(_this, byMainLogType, bySubLogType, _LTDset2_next);
        };
        
        static hook_record _LTD_functions[] = {
        {   (LPVOID)0x14024bfc0L,
            (LPVOID *)&_LTDset2_user,
            (LPVOID *)&_LTDset2_next,
            (LPVOID)cast_pointer_function(_LTDset2_wrapper),
            (LPVOID)cast_pointer_function((void(_LTD::*)(char, char))&_LTD::set) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE