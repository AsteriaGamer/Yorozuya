// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMoveMapLimitManager.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CMoveMapLimitManagerctor_CMoveMapLimitManager2_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*);
        using CMoveMapLimitManagerctor_CMoveMapLimitManager2_clbk = void (WINAPIV*)(struct CMoveMapLimitManager*, CMoveMapLimitManagerctor_CMoveMapLimitManager2_ptr);
        using CMoveMapLimitManagerCreateComplete4_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*);
        using CMoveMapLimitManagerCreateComplete4_clbk = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*, CMoveMapLimitManagerCreateComplete4_ptr);
        using CMoveMapLimitManagerDestroy6_ptr = void (WINAPIV*)();
        using CMoveMapLimitManagerDestroy6_clbk = void (WINAPIV*)(CMoveMapLimitManagerDestroy6_ptr);
        using CMoveMapLimitManagerInit8_ptr = bool (WINAPIV*)(struct CMoveMapLimitManager*);
        using CMoveMapLimitManagerInit8_clbk = bool (WINAPIV*)(struct CMoveMapLimitManager*, CMoveMapLimitManagerInit8_ptr);
        using CMoveMapLimitManagerInstance10_ptr = struct CMoveMapLimitManager* (WINAPIV*)();
        using CMoveMapLimitManagerInstance10_clbk = struct CMoveMapLimitManager* (WINAPIV*)(CMoveMapLimitManagerInstance10_ptr);
        using CMoveMapLimitManagerLoad12_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*);
        using CMoveMapLimitManagerLoad12_clbk = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*, CMoveMapLimitManagerLoad12_ptr);
        using CMoveMapLimitManagerLogIn14_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*);
        using CMoveMapLimitManagerLogIn14_clbk = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*, CMoveMapLimitManagerLogIn14_ptr);
        using CMoveMapLimitManagerLogOut16_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*);
        using CMoveMapLimitManagerLogOut16_clbk = void (WINAPIV*)(struct CMoveMapLimitManager*, struct CPlayer*, CMoveMapLimitManagerLogOut16_ptr);
        using CMoveMapLimitManagerLoop18_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*);
        using CMoveMapLimitManagerLoop18_clbk = void (WINAPIV*)(struct CMoveMapLimitManager*, CMoveMapLimitManagerLoop18_ptr);
        using CMoveMapLimitManagerMoveLimitMapZoneRequest20_ptr = bool (WINAPIV*)(struct CMoveMapLimitManager*, int, char*);
        using CMoveMapLimitManagerMoveLimitMapZoneRequest20_clbk = bool (WINAPIV*)(struct CMoveMapLimitManager*, int, char*, CMoveMapLimitManagerMoveLimitMapZoneRequest20_ptr);
        using CMoveMapLimitManagerRequest22_ptr = char (WINAPIV*)(struct CMoveMapLimitManager*, int, int, int, unsigned int, int, char*);
        using CMoveMapLimitManagerRequest22_clbk = char (WINAPIV*)(struct CMoveMapLimitManager*, int, int, int, unsigned int, int, char*, CMoveMapLimitManagerRequest22_ptr);
        using CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_ptr = char (WINAPIV*)(struct CMoveMapLimitManager*);
        using CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_clbk = char (WINAPIV*)(struct CMoveMapLimitManager*, CMoveMapLimitManagerRequestElanMapUserForceMoveHQ24_ptr);
        
        using CMoveMapLimitManagerdtor_CMoveMapLimitManager28_ptr = void (WINAPIV*)(struct CMoveMapLimitManager*);
        using CMoveMapLimitManagerdtor_CMoveMapLimitManager28_clbk = void (WINAPIV*)(struct CMoveMapLimitManager*, CMoveMapLimitManagerdtor_CMoveMapLimitManager28_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
