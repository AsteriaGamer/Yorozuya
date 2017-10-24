#pragma once

#include "ETypes.h"
#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        namespace detail
        {
            enum class ATTACK_TYPE : uint8_t
            {
                self_destruction = 0,
                class_skill,
                normal,
                skill,
                force,
                unit,
                siege,
                num
            };
        }

        class CAttackSystem : public IModule, CModuleRegister<CAttackSystem>
        {
        public:
            CAttackSystem() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static int WINAPIV _pre_check_skill_attack(
                ATF::CPlayer *pPlayer, 
                ATF::CCharacter* pDst,
                float* pfAttackPos, 
                char byEffectCode, 
                ATF::_skill_fld* pSkillFld,
                uint16_t wBulletSerial, 
                ATF::_STORAGE_LIST::_db_con** ppBulletProp,
                ATF::_BulletItem_fld** ppfldBullet,
                int nEffectGroup, 
                uint16_t* pdwDecPoint, 
                uint16_t wEffBtSerial, 
                ATF::_STORAGE_LIST::_db_con** ppEffBtProp,
                ATF::_BulletItem_fld** ppfldEffBt,
                ATF::Info::CPlayer_pre_check_skill_attack1374_ptr next);

            static char WINAPIV skill_process(
                ATF::CPlayer* pPlayer,
                int nEffectCode,
                int nSkillIndex,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                int* pnLv,
                ATF::Info::CPlayerskill_process2035_ptr next);

            static void WINAPIV pc_ForceRequest(
                ATF::CPlayer* pPlayer,
                uint16_t wForceSerial,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_ForceRequest1717_ptr next);

            static void WINAPIV pc_SkillRequest(
                ATF::CPlayer* pPlayer,
                char bySkillIndex,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_SkillRequest1943_ptr next);

            static void WINAPIV pc_ClassSkillRequest(
                ATF::CPlayer* pPlayer,
                uint16_t wSkillIndex,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_ClassSkillRequest1663_ptr next);

            static void WINAPIV pc_PlayAttack_Force(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                float* pfAreaPos,
                uint16_t wForceSerial,
                uint16_t* pConsumeSerial,
                uint16_t wEffBtSerial,
                ATF::Info::CPlayerpc_PlayAttack_Force1841_ptr next);

            static void WINAPIV pc_PlayAttack_Gen(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                char byAttPart,
                uint16_t wBulletSerial,
                uint16_t wEffBtSerial,
                bool bCount,
                ATF::Info::CPlayerpc_PlayAttack_Gen1843_ptr next);

            static void WINAPIV pc_PlayAttack_SelfDestruction(
                ATF::CPlayer* pPlayer,
                ATF::Info::CPlayerpc_PlayAttack_SelfDestruction1845_ptr next);

            static void WINAPIV pc_PlayAttack_Siege(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                float* pfAttackPos,
                char byAttPart,
                uint16_t wBulletSerial,
                uint16_t wEffBtSerial,
                ATF::Info::CPlayerpc_PlayAttack_Siege1847_ptr next);

            static void WINAPIV pc_PlayAttack_Skill(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                float* pfAttackPos,
                char byEffectCode,
                uint16_t wSkillIndex,
                uint16_t wBulletSerial,
                uint16_t* pConsumeSerial,
                uint16_t wEffBtSerial,
                ATF::Info::CPlayerpc_PlayAttack_Skill1849_ptr next);

            static void WINAPIV pc_PlayAttack_Unit(
                ATF::CPlayer* pPlayer,
                ATF::CCharacter* pDst,
                char byWeaponPart,
                ATF::Info::CPlayerpc_PlayAttack_Unit1853_ptr next);

            static void WINAPIV pc_ThrowSkillRequest(
                ATF::CPlayer* pPlayer,
                uint16_t wBulletSerial,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_ThrowSkillRequest1951_ptr next);

            static void WINAPIV pc_ThrowUnitRequest(
                ATF::CPlayer* pPlayer,
                ATF::_CHRID* pidDst,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_ThrowUnitRequest1955_ptr next);

        private:
            static ATF::_STORAGE_LIST::_db_con* WINAPIV IsBulletValidity(
                ATF::CPlayer* pPlayer,
                uint16_t wBulletSerial,
                ATF::Info::CPlayerIsBulletValidity302_ptr next);
        };
    };
};
