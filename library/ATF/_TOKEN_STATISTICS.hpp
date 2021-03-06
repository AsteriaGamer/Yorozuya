// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_LARGE_INTEGER.hpp>
#include <_LUID.hpp>


START_ATF_NAMESPACE
    struct _TOKEN_STATISTICS
    {
        _LUID TokenId;
        _LUID AuthenticationId;
        _LARGE_INTEGER ExpirationTime;
        _TOKEN_TYPE TokenType;
        _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
        unsigned int DynamicCharged;
        unsigned int DynamicAvailable;
        unsigned int GroupCount;
        unsigned int PrivilegeCount;
        _LUID ModifiedId;
    };
END_ATF_NAMESPACE
