#include <CNationSettingDataBRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataBRctor_CNationSettingDataBR2_ptr CNationSettingDataBRctor_CNationSettingDataBR2_next(nullptr);
        Info::CNationSettingDataBRctor_CNationSettingDataBR2_clbk CNationSettingDataBRctor_CNationSettingDataBR2_user(nullptr);
        
        Info::CNationSettingDataBRCheckEnterWorldRequest4_ptr CNationSettingDataBRCheckEnterWorldRequest4_next(nullptr);
        Info::CNationSettingDataBRCheckEnterWorldRequest4_clbk CNationSettingDataBRCheckEnterWorldRequest4_user(nullptr);
        
        Info::CNationSettingDataBRCreateBilling6_ptr CNationSettingDataBRCreateBilling6_next(nullptr);
        Info::CNationSettingDataBRCreateBilling6_clbk CNationSettingDataBRCreateBilling6_user(nullptr);
        
        Info::CNationSettingDataBRCreateWorker8_ptr CNationSettingDataBRCreateWorker8_next(nullptr);
        Info::CNationSettingDataBRCreateWorker8_clbk CNationSettingDataBRCreateWorker8_user(nullptr);
        
        Info::CNationSettingDataBRGetCashItemPrice10_ptr CNationSettingDataBRGetCashItemPrice10_next(nullptr);
        Info::CNationSettingDataBRGetCashItemPrice10_clbk CNationSettingDataBRGetCashItemPrice10_user(nullptr);
        
        Info::CNationSettingDataBRGetItemName12_ptr CNationSettingDataBRGetItemName12_next(nullptr);
        Info::CNationSettingDataBRGetItemName12_clbk CNationSettingDataBRGetItemName12_user(nullptr);
        
        Info::CNationSettingDataBRInit14_ptr CNationSettingDataBRInit14_next(nullptr);
        Info::CNationSettingDataBRInit14_clbk CNationSettingDataBRInit14_user(nullptr);
        
        Info::CNationSettingDataBRLoop16_ptr CNationSettingDataBRLoop16_next(nullptr);
        Info::CNationSettingDataBRLoop16_clbk CNationSettingDataBRLoop16_user(nullptr);
        
        Info::CNationSettingDataBRReadSystemPass18_ptr CNationSettingDataBRReadSystemPass18_next(nullptr);
        Info::CNationSettingDataBRReadSystemPass18_clbk CNationSettingDataBRReadSystemPass18_user(nullptr);
        
        
        void CNationSettingDataBRctor_CNationSettingDataBR2_wrapper(struct CNationSettingDataBR* _this)
        {
           CNationSettingDataBRctor_CNationSettingDataBR2_user(_this, CNationSettingDataBRctor_CNationSettingDataBR2_next);
        };
        bool CNationSettingDataBRCheckEnterWorldRequest4_wrapper(struct CNationSettingDataBR* _this, int n, char* pBuf)
        {
           return CNationSettingDataBRCheckEnterWorldRequest4_user(_this, n, pBuf, CNationSettingDataBRCheckEnterWorldRequest4_next);
        };
        struct CBilling* CNationSettingDataBRCreateBilling6_wrapper(struct CNationSettingDataBR* _this)
        {
           return CNationSettingDataBRCreateBilling6_user(_this, CNationSettingDataBRCreateBilling6_next);
        };
        struct CashDbWorker* CNationSettingDataBRCreateWorker8_wrapper(struct CNationSettingDataBR* _this)
        {
           return CNationSettingDataBRCreateWorker8_user(_this, CNationSettingDataBRCreateWorker8_next);
        };
        int CNationSettingDataBRGetCashItemPrice10_wrapper(struct CNationSettingDataBR* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataBRGetCashItemPrice10_user(_this, pFld, CNationSettingDataBRGetCashItemPrice10_next);
        };
        char* CNationSettingDataBRGetItemName12_wrapper(struct CNationSettingDataBR* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataBRGetItemName12_user(_this, pFld, CNationSettingDataBRGetItemName12_next);
        };
        int CNationSettingDataBRInit14_wrapper(struct CNationSettingDataBR* _this)
        {
           return CNationSettingDataBRInit14_user(_this, CNationSettingDataBRInit14_next);
        };
        void CNationSettingDataBRLoop16_wrapper(struct CNationSettingDataBR* _this)
        {
           CNationSettingDataBRLoop16_user(_this, CNationSettingDataBRLoop16_next);
        };
        bool CNationSettingDataBRReadSystemPass18_wrapper(struct CNationSettingDataBR* _this)
        {
           return CNationSettingDataBRReadSystemPass18_user(_this, CNationSettingDataBRReadSystemPass18_next);
        };
        
        ::std::array<hook_record, 9> CNationSettingDataBR_functions = 
        {
            _hook_record {
                (LPVOID)0x14022f6a0L,
                (LPVOID *)&CNationSettingDataBRctor_CNationSettingDataBR2_user,
                (LPVOID *)&CNationSettingDataBRctor_CNationSettingDataBR2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRctor_CNationSettingDataBR2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataBR::*)())&CNationSettingDataBR::ctor_CNationSettingDataBR)
            },
            _hook_record {
                (LPVOID)0x14022f000L,
                (LPVOID *)&CNationSettingDataBRCheckEnterWorldRequest4_user,
                (LPVOID *)&CNationSettingDataBRCheckEnterWorldRequest4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRCheckEnterWorldRequest4_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataBR::*)(int, char*))&CNationSettingDataBR::CheckEnterWorldRequest)
            },
            _hook_record {
                (LPVOID)0x14022ef50L,
                (LPVOID *)&CNationSettingDataBRCreateBilling6_user,
                (LPVOID *)&CNationSettingDataBRCreateBilling6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRCreateBilling6_wrapper),
                (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataBR::*)())&CNationSettingDataBR::CreateBilling)
            },
            _hook_record {
                (LPVOID)0x14022eea0L,
                (LPVOID *)&CNationSettingDataBRCreateWorker8_user,
                (LPVOID *)&CNationSettingDataBRCreateWorker8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRCreateWorker8_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataBR::*)())&CNationSettingDataBR::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x14022f020L,
                (LPVOID *)&CNationSettingDataBRGetCashItemPrice10_user,
                (LPVOID *)&CNationSettingDataBRGetCashItemPrice10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRGetCashItemPrice10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataBR::*)(struct _CashShop_str_fld*))&CNationSettingDataBR::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x14022ee80L,
                (LPVOID *)&CNationSettingDataBRGetItemName12_user,
                (LPVOID *)&CNationSettingDataBRGetItemName12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRGetItemName12_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataBR::*)(struct _NameTxt_fld*))&CNationSettingDataBR::GetItemName)
            },
            _hook_record {
                (LPVOID)0x14022ecd0L,
                (LPVOID *)&CNationSettingDataBRInit14_user,
                (LPVOID *)&CNationSettingDataBRInit14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRInit14_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataBR::*)())&CNationSettingDataBR::Init)
            },
            _hook_record {
                (LPVOID)0x14022ee70L,
                (LPVOID *)&CNationSettingDataBRLoop16_user,
                (LPVOID *)&CNationSettingDataBRLoop16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataBR::*)())&CNationSettingDataBR::Loop)
            },
            _hook_record {
                (LPVOID)0x14022f040L,
                (LPVOID *)&CNationSettingDataBRReadSystemPass18_user,
                (LPVOID *)&CNationSettingDataBRReadSystemPass18_next,
                (LPVOID)cast_pointer_function(CNationSettingDataBRReadSystemPass18_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataBR::*)())&CNationSettingDataBR::ReadSystemPass)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
