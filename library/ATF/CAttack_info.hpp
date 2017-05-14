// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAttack.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CAttackAreaDamageProc2_ptr = void (WINAPIV*)(struct CAttack*, int, int, float*, int, bool);
        using CAttackAreaDamageProc2_clbk = void (WINAPIV*)(struct CAttack*, int, int, float*, int, bool, CAttackAreaDamageProc2_ptr);
        using CAttackAttackForce4_ptr = void (WINAPIV*)(struct CAttack*, struct _attack_param*, bool);
        using CAttackAttackForce4_clbk = void (WINAPIV*)(struct CAttack*, struct _attack_param*, bool, CAttackAttackForce4_ptr);
        using CAttackAttackGen6_ptr = void (WINAPIV*)(struct CAttack*, struct _attack_param*, bool, bool);
        using CAttackAttackGen6_clbk = void (WINAPIV*)(struct CAttack*, struct _attack_param*, bool, bool, CAttackAttackGen6_ptr);
        using CAttackctor_CAttack8_ptr = void (WINAPIV*)(struct CAttack*, struct CCharacter*);
        using CAttackctor_CAttack8_clbk = void (WINAPIV*)(struct CAttack*, struct CCharacter*, CAttackctor_CAttack8_ptr);
        using CAttackCalcAvgDamage10_ptr = void (WINAPIV*)(struct CAttack*);
        using CAttackCalcAvgDamage10_clbk = void (WINAPIV*)(struct CAttack*, CAttackCalcAvgDamage10_ptr);
        using CAttackCheckGuildBattleLimit12_ptr = bool (WINAPIV*)(struct CAttack*, struct CGameObject*, bool*);
        using CAttackCheckGuildBattleLimit12_clbk = bool (WINAPIV*)(struct CAttack*, struct CGameObject*, bool*, CAttackCheckGuildBattleLimit12_ptr);
        using CAttackFlashDamageProc14_ptr = void (WINAPIV*)(struct CAttack*, int, int, int, int, bool);
        using CAttackFlashDamageProc14_clbk = void (WINAPIV*)(struct CAttack*, int, int, int, int, bool, CAttackFlashDamageProc14_ptr);
        using CAttackGetAttackFC16_ptr = float (WINAPIV*)(struct CAttack*, struct CPlayer*, char, bool, bool);
        using CAttackGetAttackFC16_clbk = float (WINAPIV*)(struct CAttack*, struct CPlayer*, char, bool, bool, CAttackGetAttackFC16_ptr);
        using CAttackGetMeleeSkillIndex18_ptr = int (WINAPIV*)(int);
        using CAttackGetMeleeSkillIndex18_clbk = int (WINAPIV*)(int, CAttackGetMeleeSkillIndex18_ptr);
        using CAttackIsCharInSector20_ptr = int (WINAPIV*)(float*, float*, float*, float, float);
        using CAttackIsCharInSector20_clbk = int (WINAPIV*)(float*, float*, float*, float, float, CAttackIsCharInSector20_ptr);
        using CAttackMonsterCritical_Exception_Rate22_ptr = int (WINAPIV*)(struct CAttack*, struct CCharacter*, bool);
        using CAttackMonsterCritical_Exception_Rate22_clbk = int (WINAPIV*)(struct CAttack*, struct CCharacter*, bool, CAttackMonsterCritical_Exception_Rate22_ptr);
        using CAttackSectorDamageProc24_ptr = void (WINAPIV*)(struct CAttack*, int, int, int, int, int, int, bool);
        using CAttackSectorDamageProc24_clbk = void (WINAPIV*)(struct CAttack*, int, int, int, int, int, int, bool, CAttackSectorDamageProc24_ptr);
        using CAttackSetActiveSucc26_ptr = void (WINAPIV*)(struct CAttack*, bool);
        using CAttackSetActiveSucc26_clbk = void (WINAPIV*)(struct CAttack*, bool, CAttackSetActiveSucc26_ptr);
        using CAttackSetStaticMember28_ptr = void (WINAPIV*)(struct CRecordData*);
        using CAttackSetStaticMember28_clbk = void (WINAPIV*)(struct CRecordData*, CAttackSetStaticMember28_ptr);
        using CAttack_CalcForceAttPnt30_ptr = int (WINAPIV*)(struct CAttack*, bool);
        using CAttack_CalcForceAttPnt30_clbk = int (WINAPIV*)(struct CAttack*, bool, CAttack_CalcForceAttPnt30_ptr);
        using CAttack_CalcGenAttPnt32_ptr = int (WINAPIV*)(struct CAttack*, bool);
        using CAttack_CalcGenAttPnt32_clbk = int (WINAPIV*)(struct CAttack*, bool, CAttack_CalcGenAttPnt32_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE