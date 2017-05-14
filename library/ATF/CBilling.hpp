// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CBillingVtbl.hpp"
#include "CUserDB.hpp"
#include "_SYSTEMTIME.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CBilling
    {
        CBillingVtbl *vfptr;
        bool m_bOper;
    public:
        void Alive(struct CUserDB* pUserDB)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, struct CUserDB*);
            (org_ptr(0x14028cba0L))(this, pUserDB);
        };
        void BillingClose(char* szID)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, char*);
            (org_ptr(0x14028cea0L))(this, szID);
        };
        CBilling()
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*);
            (org_ptr(0x14022bad0L))(this);
        };
        void ctor_CBilling()
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*);
            (org_ptr(0x14022bad0L))(this);
        };
        void Change_BillingType(char* szID, char* szCMSCode, int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate, char byReason)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, char*, char*, int16_t, int, struct _SYSTEMTIME*, char);
            (org_ptr(0x14028d170L))(this, szID, szCMSCode, iType, lRemainTime, pstEndDate, byReason);
        };
        void Change_Primium(char* szID, bool bResult)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, char*, bool);
            (org_ptr(0x1401c4370L))(this, szID, bResult);
        };
        void Expire_IPOverflow(char* szID)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, char*);
            (org_ptr(0x1401c42b0L))(this, szID);
        };
        void Expire_PCBang(char* szCMS)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, char*);
            (org_ptr(0x14028d2b0L))(this, szCMS);
        };
        void Expire_Personal(char* szID)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, char*);
            (org_ptr(0x1401c41e0L))(this, szID);
        };
        void Login(struct CUserDB* pUserDB)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, struct CUserDB*);
            (org_ptr(0x14028cac0L))(this, pUserDB);
        };
        void Logout(struct CUserDB* pUserDB)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, struct CUserDB*);
            (org_ptr(0x14028cd20L))(this, pUserDB);
        };
        void Remaintime_PCBang(char* szCMSCode, int16_t iType, int lRemaintime, struct _SYSTEMTIME* pstEndDate)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, char*, int16_t, int, struct _SYSTEMTIME*);
            (org_ptr(0x14028d040L))(this, szCMSCode, iType, lRemaintime, pstEndDate);
        };
        void Remaintime_Personal(char* szID, int16_t iType, int lRemaintime, struct _SYSTEMTIME* pstEndDate)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, char*, int16_t, int, struct _SYSTEMTIME*);
            (org_ptr(0x14028cf50L))(this, szID, iType, lRemaintime, pstEndDate);
        };
        void SendMsg_CurAllUserLogin()
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*);
            (org_ptr(0x14028d610L))(this);
        };
        bool SendMsg_Login(char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
        {
            using org_ptr = bool (WINAPIV*)(struct CBilling*, char*, char*, char*, int16_t, struct _SYSTEMTIME*, int);
            return (org_ptr(0x14028d3c0L))(this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime);
        };
        void SendMsg_StartBilling()
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*);
            (org_ptr(0x14028d550L))(this);
        };
        void SendMsg_ZoneAliveCheck(unsigned int dwData)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, unsigned int);
            (org_ptr(0x14028d760L))(this, dwData);
        };
        void SetOper(bool bOper)
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*, bool);
            (org_ptr(0x14028ca50L))(this, bOper);
        };
        void Start()
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*);
            (org_ptr(0x14028ca70L))(this);
        };
        ~CBilling()
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*);
            (org_ptr(0x14022bb70L))(this);
        };
        void dtor_CBilling()
        {
            using org_ptr = void (WINAPIV*)(struct CBilling*);
            (org_ptr(0x14022bb70L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE