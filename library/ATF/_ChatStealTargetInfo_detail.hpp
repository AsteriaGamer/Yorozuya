// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_ChatStealTargetInfo_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_ChatStealTargetInfoctor__ChatStealTargetInfo2_ptr _ChatStealTargetInfoctor__ChatStealTargetInfo2_next(nullptr);
        static info::_ChatStealTargetInfoctor__ChatStealTargetInfo2_clbk _ChatStealTargetInfoctor__ChatStealTargetInfo2_user(nullptr);
        
        static void _ChatStealTargetInfoctor__ChatStealTargetInfo2_wrapper(struct _ChatStealTargetInfo* _this)
        {
           _ChatStealTargetInfoctor__ChatStealTargetInfo2_user(_this, _ChatStealTargetInfoctor__ChatStealTargetInfo2_next);
        };
        
        static hook_record _ChatStealTargetInfo_functions[] = {
        {   (LPVOID)0x1403f8cf0L,
            (LPVOID *)&_ChatStealTargetInfoctor__ChatStealTargetInfo2_user,
            (LPVOID *)&_ChatStealTargetInfoctor__ChatStealTargetInfo2_next,
            (LPVOID)cast_pointer_function(_ChatStealTargetInfoctor__ChatStealTargetInfo2_wrapper),
            (LPVOID)cast_pointer_function((void(_ChatStealTargetInfo::*)())&_ChatStealTargetInfo::ctor__ChatStealTargetInfo) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE