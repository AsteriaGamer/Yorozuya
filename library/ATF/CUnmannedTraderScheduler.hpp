// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLogFile.hpp"
#include "CMyTimer.hpp"
#include "_unmannedtrader_reserved_schedule_info.hpp"
#include "std___Vector_iterator.hpp"
#include "std__vector.hpp"


START_ATF_NAMESPACE
    struct CUnmannedTraderScheduler
    {
        int m_iOldDay;
        bool m_bLoad;
        CMyTimer *m_pkTimer;
        CLogFile *m_pkLogger;
        std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> > m_iterSchedule;
        std::vector<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> > m_veckSchdule;
    public:
        CUnmannedTraderScheduler()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x140393120L))(this);
        };
        void ctor_CUnmannedTraderScheduler()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x140393120L))(this);
        };
        void CheatPushLoad()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x140351a10L))(this);
        };
        void ClearAll()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x140351a60L))(this);
        };
        void CompleteClear(char byDBQueryRet, char byProcRet, char byType, unsigned int dwRegistSerial)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*, char, char, char, unsigned int);
            (org_ptr(0x140393b60L))(this, byDBQueryRet, byProcRet, byType, dwRegistSerial);
        };
        static void Destroy()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140393330L))();
        };
        void DoDayChangedWork()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x140393f00L))(this);
        };
        struct std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> >* FindItem(struct std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> >* result, char byType, unsigned int dwRegistSerial)
        {
            using org_ptr = struct std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> >* (WINAPIV*)(struct CUnmannedTraderScheduler*, struct std::_Vector_iterator<CUnmannedTraderSchedule,std::allocator<CUnmannedTraderSchedule> >*, char, unsigned int);
            return (org_ptr(0x1403947e0L))(this, result, byType, dwRegistSerial);
        };
        bool FindWaitItem()
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderScheduler*);
            return (org_ptr(0x140393da0L))(this);
        };
        bool Init()
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderScheduler*);
            return (org_ptr(0x1403933b0L))(this);
        };
        static struct CUnmannedTraderScheduler* Instance()
        {
            using org_ptr = struct CUnmannedTraderScheduler* (WINAPIV*)();
            return (org_ptr(0x140393270L))();
        };
        bool Load()
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderScheduler*);
            return (org_ptr(0x1403935e0L))(this);
        };
        void Log(char* fmt)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*, char*);
            (org_ptr(0x140393d10L))(this, fmt);
        };
        void Loop()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x1403938c0L))(this);
        };
        void PushLoad()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x140394020L))(this);
        };
        void SetLogger(struct CLogFile* pkLogger)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*, struct CLogFile*);
            (org_ptr(0x140351950L))(this, pkLogger);
        };
        void Update(struct _unmannedtrader_reserved_schedule_info* pkInfo)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*, struct _unmannedtrader_reserved_schedule_info*);
            (org_ptr(0x1403936b0L))(this, pkInfo);
        };
        ~CUnmannedTraderScheduler()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x1403931d0L))(this);
        };
        void dtor_CUnmannedTraderScheduler()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderScheduler*);
            (org_ptr(0x1403931d0L))(this);
        };
    };
END_ATF_NAMESPACE