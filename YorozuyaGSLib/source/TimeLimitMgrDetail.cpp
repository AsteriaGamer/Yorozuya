#include <TimeLimitMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::TimeLimitMgrChack_Time2_ptr TimeLimitMgrChack_Time2_next(nullptr);
        Info::TimeLimitMgrChack_Time2_clbk TimeLimitMgrChack_Time2_user(nullptr);
        
        Info::TimeLimitMgrCheckPlayerStatus4_ptr TimeLimitMgrCheckPlayerStatus4_next(nullptr);
        Info::TimeLimitMgrCheckPlayerStatus4_clbk TimeLimitMgrCheckPlayerStatus4_user(nullptr);
        
        Info::TimeLimitMgrClacLastLogoutTimeSec6_ptr TimeLimitMgrClacLastLogoutTimeSec6_next(nullptr);
        Info::TimeLimitMgrClacLastLogoutTimeSec6_clbk TimeLimitMgrClacLastLogoutTimeSec6_user(nullptr);
        
        Info::TimeLimitMgrClacLastLogoutTimeToFatigue8_ptr TimeLimitMgrClacLastLogoutTimeToFatigue8_next(nullptr);
        Info::TimeLimitMgrClacLastLogoutTimeToFatigue8_clbk TimeLimitMgrClacLastLogoutTimeToFatigue8_user(nullptr);
        
        Info::TimeLimitMgrDelete_All10_ptr TimeLimitMgrDelete_All10_next(nullptr);
        Info::TimeLimitMgrDelete_All10_clbk TimeLimitMgrDelete_All10_user(nullptr);
        
        Info::TimeLimitMgrFind_Data12_ptr TimeLimitMgrFind_Data12_next(nullptr);
        Info::TimeLimitMgrFind_Data12_clbk TimeLimitMgrFind_Data12_user(nullptr);
        
        Info::TimeLimitMgrFind_Data14_ptr TimeLimitMgrFind_Data14_next(nullptr);
        Info::TimeLimitMgrFind_Data14_clbk TimeLimitMgrFind_Data14_user(nullptr);
        
        Info::TimeLimitMgrGetEndPlayTime16_ptr TimeLimitMgrGetEndPlayTime16_next(nullptr);
        Info::TimeLimitMgrGetEndPlayTime16_clbk TimeLimitMgrGetEndPlayTime16_user(nullptr);
        
        Info::TimeLimitMgrGetPeriodCnt18_ptr TimeLimitMgrGetPeriodCnt18_next(nullptr);
        Info::TimeLimitMgrGetPeriodCnt18_clbk TimeLimitMgrGetPeriodCnt18_user(nullptr);
        
        Info::TimeLimitMgrGetPlayFDegree20_ptr TimeLimitMgrGetPlayFDegree20_next(nullptr);
        Info::TimeLimitMgrGetPlayFDegree20_clbk TimeLimitMgrGetPlayFDegree20_user(nullptr);
        
        Info::TimeLimitMgrGetPlayerData22_ptr TimeLimitMgrGetPlayerData22_next(nullptr);
        Info::TimeLimitMgrGetPlayerData22_clbk TimeLimitMgrGetPlayerData22_user(nullptr);
        
        Info::TimeLimitMgrGetPlayerPenalty24_ptr TimeLimitMgrGetPlayerPenalty24_next(nullptr);
        Info::TimeLimitMgrGetPlayerPenalty24_clbk TimeLimitMgrGetPlayerPenalty24_user(nullptr);
        
        Info::TimeLimitMgrGetPlayerStatus26_ptr TimeLimitMgrGetPlayerStatus26_next(nullptr);
        Info::TimeLimitMgrGetPlayerStatus26_clbk TimeLimitMgrGetPlayerStatus26_user(nullptr);
        
        Info::TimeLimitMgrInitializeTLMgr28_ptr TimeLimitMgrInitializeTLMgr28_next(nullptr);
        Info::TimeLimitMgrInitializeTLMgr28_clbk TimeLimitMgrInitializeTLMgr28_user(nullptr);
        
        Info::TimeLimitMgrInsertPlayerStatus30_ptr TimeLimitMgrInsertPlayerStatus30_next(nullptr);
        Info::TimeLimitMgrInsertPlayerStatus30_clbk TimeLimitMgrInsertPlayerStatus30_user(nullptr);
        
        Info::TimeLimitMgrInstance32_ptr TimeLimitMgrInstance32_next(nullptr);
        Info::TimeLimitMgrInstance32_clbk TimeLimitMgrInstance32_user(nullptr);
        
        Info::TimeLimitMgrLoadTLINIFile34_ptr TimeLimitMgrLoadTLINIFile34_next(nullptr);
        Info::TimeLimitMgrLoadTLINIFile34_clbk TimeLimitMgrLoadTLINIFile34_user(nullptr);
        
        Info::TimeLimitMgrPop_Data36_ptr TimeLimitMgrPop_Data36_next(nullptr);
        Info::TimeLimitMgrPop_Data36_clbk TimeLimitMgrPop_Data36_user(nullptr);
        
        Info::TimeLimitMgrPush_Data38_ptr TimeLimitMgrPush_Data38_next(nullptr);
        Info::TimeLimitMgrPush_Data38_clbk TimeLimitMgrPush_Data38_user(nullptr);
        
        Info::TimeLimitMgrReInitFatigue40_ptr TimeLimitMgrReInitFatigue40_next(nullptr);
        Info::TimeLimitMgrReInitFatigue40_clbk TimeLimitMgrReInitFatigue40_user(nullptr);
        
        Info::TimeLimitMgrReSetPercent42_ptr TimeLimitMgrReSetPercent42_next(nullptr);
        Info::TimeLimitMgrReSetPercent42_clbk TimeLimitMgrReSetPercent42_user(nullptr);
        
        Info::TimeLimitMgrSetConfig44_ptr TimeLimitMgrSetConfig44_next(nullptr);
        Info::TimeLimitMgrSetConfig44_clbk TimeLimitMgrSetConfig44_user(nullptr);
        
        Info::TimeLimitMgrSetLogoutFDegree46_ptr TimeLimitMgrSetLogoutFDegree46_next(nullptr);
        Info::TimeLimitMgrSetLogoutFDegree46_clbk TimeLimitMgrSetLogoutFDegree46_user(nullptr);
        
        Info::TimeLimitMgrSetPlayFDegree48_ptr TimeLimitMgrSetPlayFDegree48_next(nullptr);
        Info::TimeLimitMgrSetPlayFDegree48_clbk TimeLimitMgrSetPlayFDegree48_user(nullptr);
        
        Info::TimeLimitMgrSetTLEnable50_ptr TimeLimitMgrSetTLEnable50_next(nullptr);
        Info::TimeLimitMgrSetTLEnable50_clbk TimeLimitMgrSetTLEnable50_user(nullptr);
        
        Info::TimeLimitMgrSetTime52_ptr TimeLimitMgrSetTime52_next(nullptr);
        Info::TimeLimitMgrSetTime52_clbk TimeLimitMgrSetTime52_user(nullptr);
        
        Info::TimeLimitMgrSumMinuteBetweenSec54_ptr TimeLimitMgrSumMinuteBetweenSec54_next(nullptr);
        Info::TimeLimitMgrSumMinuteBetweenSec54_clbk TimeLimitMgrSumMinuteBetweenSec54_user(nullptr);
        
        Info::TimeLimitMgrSumMinuteOne56_ptr TimeLimitMgrSumMinuteOne56_next(nullptr);
        Info::TimeLimitMgrSumMinuteOne56_clbk TimeLimitMgrSumMinuteOne56_user(nullptr);
        
        
        Info::TimeLimitMgrctor_TimeLimitMgr58_ptr TimeLimitMgrctor_TimeLimitMgr58_next(nullptr);
        Info::TimeLimitMgrctor_TimeLimitMgr58_clbk TimeLimitMgrctor_TimeLimitMgr58_user(nullptr);
        
        Info::TimeLimitMgrUpdatePlayerStatus60_ptr TimeLimitMgrUpdatePlayerStatus60_next(nullptr);
        Info::TimeLimitMgrUpdatePlayerStatus60_clbk TimeLimitMgrUpdatePlayerStatus60_user(nullptr);
        
        
        Info::TimeLimitMgrdtor_TimeLimitMgr64_ptr TimeLimitMgrdtor_TimeLimitMgr64_next(nullptr);
        Info::TimeLimitMgrdtor_TimeLimitMgr64_clbk TimeLimitMgrdtor_TimeLimitMgr64_user(nullptr);
        
        void TimeLimitMgrChack_Time2_wrapper(struct TimeLimitMgr* _this)
        {
           TimeLimitMgrChack_Time2_user(_this, TimeLimitMgrChack_Time2_next);
        };
        bool TimeLimitMgrCheckPlayerStatus4_wrapper(struct TimeLimitMgr* _this, uint16_t wIndex, unsigned int dwLastContSaveTime, char* pbyStatus, unsigned int* pdwFatigue)
        {
           return TimeLimitMgrCheckPlayerStatus4_user(_this, wIndex, dwLastContSaveTime, pbyStatus, pdwFatigue, TimeLimitMgrCheckPlayerStatus4_next);
        };
        unsigned int TimeLimitMgrClacLastLogoutTimeSec6_wrapper(struct TimeLimitMgr* _this, unsigned int dwLastConnTime)
        {
           return TimeLimitMgrClacLastLogoutTimeSec6_user(_this, dwLastConnTime, TimeLimitMgrClacLastLogoutTimeSec6_next);
        };
        unsigned int TimeLimitMgrClacLastLogoutTimeToFatigue8_wrapper(struct TimeLimitMgr* _this, unsigned int dwLastConnTime)
        {
           return TimeLimitMgrClacLastLogoutTimeToFatigue8_user(_this, dwLastConnTime, TimeLimitMgrClacLastLogoutTimeToFatigue8_next);
        };
        void TimeLimitMgrDelete_All10_wrapper(struct TimeLimitMgr* _this)
        {
           TimeLimitMgrDelete_All10_user(_this, TimeLimitMgrDelete_All10_next);
        };
        struct Player_TL_Status* TimeLimitMgrFind_Data12_wrapper(struct TimeLimitMgr* _this, unsigned int dwSerial)
        {
           return TimeLimitMgrFind_Data12_user(_this, dwSerial, TimeLimitMgrFind_Data12_next);
        };
        struct Player_TL_Status* TimeLimitMgrFind_Data14_wrapper(struct TimeLimitMgr* _this, uint16_t wIndex)
        {
           return TimeLimitMgrFind_Data14_user(_this, wIndex, TimeLimitMgrFind_Data14_next);
        };
        uint16_t TimeLimitMgrGetEndPlayTime16_wrapper(struct TimeLimitMgr* _this)
        {
           return TimeLimitMgrGetEndPlayTime16_user(_this, TimeLimitMgrGetEndPlayTime16_next);
        };
        uint16_t TimeLimitMgrGetPeriodCnt18_wrapper(struct TimeLimitMgr* _this)
        {
           return TimeLimitMgrGetPeriodCnt18_user(_this, TimeLimitMgrGetPeriodCnt18_next);
        };
        unsigned int TimeLimitMgrGetPlayFDegree20_wrapper(struct TimeLimitMgr* _this)
        {
           return TimeLimitMgrGetPlayFDegree20_user(_this, TimeLimitMgrGetPlayFDegree20_next);
        };
        uint16_t TimeLimitMgrGetPlayerData22_wrapper(struct TimeLimitMgr* _this, uint16_t wIndex, char* psStatus, long double* pdPercent)
        {
           return TimeLimitMgrGetPlayerData22_user(_this, wIndex, psStatus, pdPercent, TimeLimitMgrGetPlayerData22_next);
        };
        long double TimeLimitMgrGetPlayerPenalty24_wrapper(struct TimeLimitMgr* _this, uint16_t wIndex)
        {
           return TimeLimitMgrGetPlayerPenalty24_user(_this, wIndex, TimeLimitMgrGetPlayerPenalty24_next);
        };
        char TimeLimitMgrGetPlayerStatus26_wrapper(struct TimeLimitMgr* _this, uint16_t wIndex)
        {
           return TimeLimitMgrGetPlayerStatus26_user(_this, wIndex, TimeLimitMgrGetPlayerStatus26_next);
        };
        void TimeLimitMgrInitializeTLMgr28_wrapper(struct TimeLimitMgr* _this)
        {
           TimeLimitMgrInitializeTLMgr28_user(_this, TimeLimitMgrInitializeTLMgr28_next);
        };
        void TimeLimitMgrInsertPlayerStatus30_wrapper(struct TimeLimitMgr* _this, uint16_t wIndex, unsigned int dwAccountSerial, char byStatus, unsigned int dwFatigue, unsigned int dwLastLogoutTime, bool bAgeLimit)
        {
           TimeLimitMgrInsertPlayerStatus30_user(_this, wIndex, dwAccountSerial, byStatus, dwFatigue, dwLastLogoutTime, bAgeLimit, TimeLimitMgrInsertPlayerStatus30_next);
        };
        struct TimeLimitMgr* TimeLimitMgrInstance32_wrapper()
        {
           return TimeLimitMgrInstance32_user(TimeLimitMgrInstance32_next);
        };
        void TimeLimitMgrLoadTLINIFile34_wrapper(struct TimeLimitMgr* _this)
        {
           TimeLimitMgrLoadTLINIFile34_user(_this, TimeLimitMgrLoadTLINIFile34_next);
        };
        void TimeLimitMgrPop_Data36_wrapper(struct TimeLimitMgr* _this, unsigned int dwAccountSerial, uint16_t wIndex)
        {
           TimeLimitMgrPop_Data36_user(_this, dwAccountSerial, wIndex, TimeLimitMgrPop_Data36_next);
        };
        void TimeLimitMgrPush_Data38_wrapper(struct TimeLimitMgr* _this, struct Player_TL_Status* data, uint16_t wIndex)
        {
           TimeLimitMgrPush_Data38_user(_this, data, wIndex, TimeLimitMgrPush_Data38_next);
        };
        void TimeLimitMgrReInitFatigue40_wrapper(struct TimeLimitMgr* _this)
        {
           TimeLimitMgrReInitFatigue40_user(_this, TimeLimitMgrReInitFatigue40_next);
        };
        void TimeLimitMgrReSetPercent42_wrapper(struct TimeLimitMgr* _this, uint16_t wIndex)
        {
           TimeLimitMgrReSetPercent42_user(_this, wIndex, TimeLimitMgrReSetPercent42_next);
        };
        bool TimeLimitMgrSetConfig44_wrapper(struct TimeLimitMgr* _this, uint16_t time1, uint16_t time2, uint16_t time3, uint16_t time4, uint16_t time5)
        {
           return TimeLimitMgrSetConfig44_user(_this, time1, time2, time3, time4, time5, TimeLimitMgrSetConfig44_next);
        };
        void TimeLimitMgrSetLogoutFDegree46_wrapper(struct TimeLimitMgr* _this, unsigned int dwDegree)
        {
           TimeLimitMgrSetLogoutFDegree46_user(_this, dwDegree, TimeLimitMgrSetLogoutFDegree46_next);
        };
        void TimeLimitMgrSetPlayFDegree48_wrapper(struct TimeLimitMgr* _this, unsigned int dwDegree)
        {
           TimeLimitMgrSetPlayFDegree48_user(_this, dwDegree, TimeLimitMgrSetPlayFDegree48_next);
        };
        void TimeLimitMgrSetTLEnable50_wrapper(struct TimeLimitMgr* _this, uint16_t wState)
        {
           TimeLimitMgrSetTLEnable50_user(_this, wState, TimeLimitMgrSetTLEnable50_next);
        };
        void TimeLimitMgrSetTime52_wrapper(struct TimeLimitMgr* _this, unsigned int dwTime, uint16_t iIndex)
        {
           TimeLimitMgrSetTime52_user(_this, dwTime, iIndex, TimeLimitMgrSetTime52_next);
        };
        unsigned int TimeLimitMgrSumMinuteBetweenSec54_wrapper(struct TimeLimitMgr* _this, struct tm* tmLast)
        {
           return TimeLimitMgrSumMinuteBetweenSec54_user(_this, tmLast, TimeLimitMgrSumMinuteBetweenSec54_next);
        };
        unsigned int TimeLimitMgrSumMinuteOne56_wrapper(struct TimeLimitMgr* _this, struct _SYSTEMTIME* tm)
        {
           return TimeLimitMgrSumMinuteOne56_user(_this, tm, TimeLimitMgrSumMinuteOne56_next);
        };
        
        void TimeLimitMgrctor_TimeLimitMgr58_wrapper(struct TimeLimitMgr* _this)
        {
           TimeLimitMgrctor_TimeLimitMgr58_user(_this, TimeLimitMgrctor_TimeLimitMgr58_next);
        };
        bool TimeLimitMgrUpdatePlayerStatus60_wrapper(struct TimeLimitMgr* _this, uint16_t wIndex, unsigned int dwFatigue, char wStatus)
        {
           return TimeLimitMgrUpdatePlayerStatus60_user(_this, wIndex, dwFatigue, wStatus, TimeLimitMgrUpdatePlayerStatus60_next);
        };
        
        void TimeLimitMgrdtor_TimeLimitMgr64_wrapper(struct TimeLimitMgr* _this)
        {
           TimeLimitMgrdtor_TimeLimitMgr64_user(_this, TimeLimitMgrdtor_TimeLimitMgr64_next);
        };
        
        ::std::array<hook_record, 31> TimeLimitMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x14040e500L,
                (LPVOID *)&TimeLimitMgrChack_Time2_user,
                (LPVOID *)&TimeLimitMgrChack_Time2_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrChack_Time2_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)())&TimeLimitMgr::Chack_Time)
            },
            _hook_record {
                (LPVOID)0x14040e860L,
                (LPVOID *)&TimeLimitMgrCheckPlayerStatus4_user,
                (LPVOID *)&TimeLimitMgrCheckPlayerStatus4_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrCheckPlayerStatus4_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitMgr::*)(uint16_t, unsigned int, char*, unsigned int*))&TimeLimitMgr::CheckPlayerStatus)
            },
            _hook_record {
                (LPVOID)0x14040dc30L,
                (LPVOID *)&TimeLimitMgrClacLastLogoutTimeSec6_user,
                (LPVOID *)&TimeLimitMgrClacLastLogoutTimeSec6_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrClacLastLogoutTimeSec6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(TimeLimitMgr::*)(unsigned int))&TimeLimitMgr::ClacLastLogoutTimeSec)
            },
            _hook_record {
                (LPVOID)0x14040d8f0L,
                (LPVOID *)&TimeLimitMgrClacLastLogoutTimeToFatigue8_user,
                (LPVOID *)&TimeLimitMgrClacLastLogoutTimeToFatigue8_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrClacLastLogoutTimeToFatigue8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(TimeLimitMgr::*)(unsigned int))&TimeLimitMgr::ClacLastLogoutTimeToFatigue)
            },
            _hook_record {
                (LPVOID)0x14040e480L,
                (LPVOID *)&TimeLimitMgrDelete_All10_user,
                (LPVOID *)&TimeLimitMgrDelete_All10_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrDelete_All10_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)())&TimeLimitMgr::Delete_All)
            },
            _hook_record {
                (LPVOID)0x14040e3b0L,
                (LPVOID *)&TimeLimitMgrFind_Data12_user,
                (LPVOID *)&TimeLimitMgrFind_Data12_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrFind_Data12_wrapper),
                (LPVOID)cast_pointer_function((struct Player_TL_Status*(TimeLimitMgr::*)(unsigned int))&TimeLimitMgr::Find_Data)
            },
            _hook_record {
                (LPVOID)0x14040e360L,
                (LPVOID *)&TimeLimitMgrFind_Data14_user,
                (LPVOID *)&TimeLimitMgrFind_Data14_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrFind_Data14_wrapper),
                (LPVOID)cast_pointer_function((struct Player_TL_Status*(TimeLimitMgr::*)(uint16_t))&TimeLimitMgr::Find_Data)
            },
            _hook_record {
                (LPVOID)0x1400f0760L,
                (LPVOID *)&TimeLimitMgrGetEndPlayTime16_user,
                (LPVOID *)&TimeLimitMgrGetEndPlayTime16_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrGetEndPlayTime16_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(TimeLimitMgr::*)())&TimeLimitMgr::GetEndPlayTime)
            },
            _hook_record {
                (LPVOID)0x14029da20L,
                (LPVOID *)&TimeLimitMgrGetPeriodCnt18_user,
                (LPVOID *)&TimeLimitMgrGetPeriodCnt18_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrGetPeriodCnt18_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(TimeLimitMgr::*)())&TimeLimitMgr::GetPeriodCnt)
            },
            _hook_record {
                (LPVOID)0x1400f0740L,
                (LPVOID *)&TimeLimitMgrGetPlayFDegree20_user,
                (LPVOID *)&TimeLimitMgrGetPlayFDegree20_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrGetPlayFDegree20_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(TimeLimitMgr::*)())&TimeLimitMgr::GetPlayFDegree)
            },
            _hook_record {
                (LPVOID)0x14040ed20L,
                (LPVOID *)&TimeLimitMgrGetPlayerData22_user,
                (LPVOID *)&TimeLimitMgrGetPlayerData22_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrGetPlayerData22_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(TimeLimitMgr::*)(uint16_t, char*, long double*))&TimeLimitMgr::GetPlayerData)
            },
            _hook_record {
                (LPVOID)0x14040ebf0L,
                (LPVOID *)&TimeLimitMgrGetPlayerPenalty24_user,
                (LPVOID *)&TimeLimitMgrGetPlayerPenalty24_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrGetPlayerPenalty24_wrapper),
                (LPVOID)cast_pointer_function((long double(TimeLimitMgr::*)(uint16_t))&TimeLimitMgr::GetPlayerPenalty)
            },
            _hook_record {
                (LPVOID)0x14040eca0L,
                (LPVOID *)&TimeLimitMgrGetPlayerStatus26_user,
                (LPVOID *)&TimeLimitMgrGetPlayerStatus26_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrGetPlayerStatus26_wrapper),
                (LPVOID)cast_pointer_function((char(TimeLimitMgr::*)(uint16_t))&TimeLimitMgr::GetPlayerStatus)
            },
            _hook_record {
                (LPVOID)0x14040d4e0L,
                (LPVOID *)&TimeLimitMgrInitializeTLMgr28_user,
                (LPVOID *)&TimeLimitMgrInitializeTLMgr28_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrInitializeTLMgr28_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)())&TimeLimitMgr::InitializeTLMgr)
            },
            _hook_record {
                (LPVOID)0x14040ea70L,
                (LPVOID *)&TimeLimitMgrInsertPlayerStatus30_user,
                (LPVOID *)&TimeLimitMgrInsertPlayerStatus30_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrInsertPlayerStatus30_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)(uint16_t, unsigned int, char, unsigned int, unsigned int, bool))&TimeLimitMgr::InsertPlayerStatus)
            },
            _hook_record {
                (LPVOID)0x14040ce50L,
                (LPVOID *)&TimeLimitMgrInstance32_user,
                (LPVOID *)&TimeLimitMgrInstance32_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrInstance32_wrapper),
                (LPVOID)cast_pointer_function((struct TimeLimitMgr*(*)())&TimeLimitMgr::Instance)
            },
            _hook_record {
                (LPVOID)0x14040cf10L,
                (LPVOID *)&TimeLimitMgrLoadTLINIFile34_user,
                (LPVOID *)&TimeLimitMgrLoadTLINIFile34_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrLoadTLINIFile34_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)())&TimeLimitMgr::LoadTLINIFile)
            },
            _hook_record {
                (LPVOID)0x14040e2d0L,
                (LPVOID *)&TimeLimitMgrPop_Data36_user,
                (LPVOID *)&TimeLimitMgrPop_Data36_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrPop_Data36_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)(unsigned int, uint16_t))&TimeLimitMgr::Pop_Data)
            },
            _hook_record {
                (LPVOID)0x14040e1f0L,
                (LPVOID *)&TimeLimitMgrPush_Data38_user,
                (LPVOID *)&TimeLimitMgrPush_Data38_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrPush_Data38_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)(struct Player_TL_Status*, uint16_t))&TimeLimitMgr::Push_Data)
            },
            _hook_record {
                (LPVOID)0x14040d610L,
                (LPVOID *)&TimeLimitMgrReInitFatigue40_user,
                (LPVOID *)&TimeLimitMgrReInitFatigue40_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrReInitFatigue40_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)())&TimeLimitMgr::ReInitFatigue)
            },
            _hook_record {
                (LPVOID)0x14040d6c0L,
                (LPVOID *)&TimeLimitMgrReSetPercent42_user,
                (LPVOID *)&TimeLimitMgrReSetPercent42_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrReSetPercent42_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)(uint16_t))&TimeLimitMgr::ReSetPercent)
            },
            _hook_record {
                (LPVOID)0x14040edb0L,
                (LPVOID *)&TimeLimitMgrSetConfig44_user,
                (LPVOID *)&TimeLimitMgrSetConfig44_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrSetConfig44_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitMgr::*)(uint16_t, uint16_t, uint16_t, uint16_t, uint16_t))&TimeLimitMgr::SetConfig)
            },
            _hook_record {
                (LPVOID)0x14029dab0L,
                (LPVOID *)&TimeLimitMgrSetLogoutFDegree46_user,
                (LPVOID *)&TimeLimitMgrSetLogoutFDegree46_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrSetLogoutFDegree46_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)(unsigned int))&TimeLimitMgr::SetLogoutFDegree)
            },
            _hook_record {
                (LPVOID)0x14029da80L,
                (LPVOID *)&TimeLimitMgrSetPlayFDegree48_user,
                (LPVOID *)&TimeLimitMgrSetPlayFDegree48_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrSetPlayFDegree48_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)(unsigned int))&TimeLimitMgr::SetPlayFDegree)
            },
            _hook_record {
                (LPVOID)0x14029daf0L,
                (LPVOID *)&TimeLimitMgrSetTLEnable50_user,
                (LPVOID *)&TimeLimitMgrSetTLEnable50_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrSetTLEnable50_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)(uint16_t))&TimeLimitMgr::SetTLEnable)
            },
            _hook_record {
                (LPVOID)0x14029da40L,
                (LPVOID *)&TimeLimitMgrSetTime52_user,
                (LPVOID *)&TimeLimitMgrSetTime52_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrSetTime52_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)(unsigned int, uint16_t))&TimeLimitMgr::SetTime)
            },
            _hook_record {
                (LPVOID)0x14040e0d0L,
                (LPVOID *)&TimeLimitMgrSumMinuteBetweenSec54_user,
                (LPVOID *)&TimeLimitMgrSumMinuteBetweenSec54_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrSumMinuteBetweenSec54_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(TimeLimitMgr::*)(struct tm*))&TimeLimitMgr::SumMinuteBetweenSec)
            },
            _hook_record {
                (LPVOID)0x14040df50L,
                (LPVOID *)&TimeLimitMgrSumMinuteOne56_user,
                (LPVOID *)&TimeLimitMgrSumMinuteOne56_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrSumMinuteOne56_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(TimeLimitMgr::*)(struct _SYSTEMTIME*))&TimeLimitMgr::SumMinuteOne)
            },
            _hook_record {
                (LPVOID)0x14040ccd0L,
                (LPVOID *)&TimeLimitMgrctor_TimeLimitMgr58_user,
                (LPVOID *)&TimeLimitMgrctor_TimeLimitMgr58_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrctor_TimeLimitMgr58_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)())&TimeLimitMgr::ctor_TimeLimitMgr)
            },
            _hook_record {
                (LPVOID)0x14040eb20L,
                (LPVOID *)&TimeLimitMgrUpdatePlayerStatus60_user,
                (LPVOID *)&TimeLimitMgrUpdatePlayerStatus60_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrUpdatePlayerStatus60_wrapper),
                (LPVOID)cast_pointer_function((bool(TimeLimitMgr::*)(uint16_t, unsigned int, char))&TimeLimitMgr::UpdatePlayerStatus)
            },
            _hook_record {
                (LPVOID)0x14040cd40L,
                (LPVOID *)&TimeLimitMgrdtor_TimeLimitMgr64_user,
                (LPVOID *)&TimeLimitMgrdtor_TimeLimitMgr64_next,
                (LPVOID)cast_pointer_function(TimeLimitMgrdtor_TimeLimitMgr64_wrapper),
                (LPVOID)cast_pointer_function((void(TimeLimitMgr::*)())&TimeLimitMgr::dtor_TimeLimitMgr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
