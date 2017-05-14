// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCashDbWorkerRU_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CCashDbWorkerRUctor_CCashDbWorkerRU2_ptr CCashDbWorkerRUctor_CCashDbWorkerRU2_next(nullptr);
        static info::CCashDbWorkerRUctor_CCashDbWorkerRU2_clbk CCashDbWorkerRUctor_CCashDbWorkerRU2_user(nullptr);
        static info::CCashDbWorkerRURelease4_ptr CCashDbWorkerRURelease4_next(nullptr);
        static info::CCashDbWorkerRURelease4_clbk CCashDbWorkerRURelease4_user(nullptr);
        static info::CCashDbWorkerRU_init_database6_ptr CCashDbWorkerRU_init_database6_next(nullptr);
        static info::CCashDbWorkerRU_init_database6_clbk CCashDbWorkerRU_init_database6_user(nullptr);
        static info::CCashDbWorkerRU_wait_tsk_cash_rollback8_ptr CCashDbWorkerRU_wait_tsk_cash_rollback8_next(nullptr);
        static info::CCashDbWorkerRU_wait_tsk_cash_rollback8_clbk CCashDbWorkerRU_wait_tsk_cash_rollback8_user(nullptr);
        static info::CCashDbWorkerRU_wait_tsk_cash_select10_ptr CCashDbWorkerRU_wait_tsk_cash_select10_next(nullptr);
        static info::CCashDbWorkerRU_wait_tsk_cash_select10_clbk CCashDbWorkerRU_wait_tsk_cash_select10_user(nullptr);
        static info::CCashDbWorkerRU_wait_tsk_cash_update12_ptr CCashDbWorkerRU_wait_tsk_cash_update12_next(nullptr);
        static info::CCashDbWorkerRU_wait_tsk_cash_update12_clbk CCashDbWorkerRU_wait_tsk_cash_update12_user(nullptr);
        static info::CCashDbWorkerRUdtor_CCashDbWorkerRU17_ptr CCashDbWorkerRUdtor_CCashDbWorkerRU17_next(nullptr);
        static info::CCashDbWorkerRUdtor_CCashDbWorkerRU17_clbk CCashDbWorkerRUdtor_CCashDbWorkerRU17_user(nullptr);
        
        static void CCashDbWorkerRUctor_CCashDbWorkerRU2_wrapper(struct CCashDbWorkerRU* _this)
        {
           CCashDbWorkerRUctor_CCashDbWorkerRU2_user(_this, CCashDbWorkerRUctor_CCashDbWorkerRU2_next);
        };
        static void CCashDbWorkerRURelease4_wrapper(struct CCashDbWorkerRU* _this)
        {
           CCashDbWorkerRURelease4_user(_this, CCashDbWorkerRURelease4_next);
        };
        static bool CCashDbWorkerRU_init_database6_wrapper(struct CCashDbWorkerRU* _this)
        {
           return CCashDbWorkerRU_init_database6_user(_this, CCashDbWorkerRU_init_database6_next);
        };
        static int CCashDbWorkerRU_wait_tsk_cash_rollback8_wrapper(struct CCashDbWorkerRU* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerRU_wait_tsk_cash_rollback8_user(_this, pkTsk, CCashDbWorkerRU_wait_tsk_cash_rollback8_next);
        };
        static int CCashDbWorkerRU_wait_tsk_cash_select10_wrapper(struct CCashDbWorkerRU* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerRU_wait_tsk_cash_select10_user(_this, pkTsk, CCashDbWorkerRU_wait_tsk_cash_select10_next);
        };
        static int CCashDbWorkerRU_wait_tsk_cash_update12_wrapper(struct CCashDbWorkerRU* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerRU_wait_tsk_cash_update12_user(_this, pkTsk, CCashDbWorkerRU_wait_tsk_cash_update12_next);
        };
        static void CCashDbWorkerRUdtor_CCashDbWorkerRU17_wrapper(struct CCashDbWorkerRU* _this)
        {
           CCashDbWorkerRUdtor_CCashDbWorkerRU17_user(_this, CCashDbWorkerRUdtor_CCashDbWorkerRU17_next);
        };
        
        static hook_record CCashDbWorkerRU_functions[] = {
        {   (LPVOID)0x14022ea70L,
            (LPVOID *)&CCashDbWorkerRUctor_CCashDbWorkerRU2_user,
            (LPVOID *)&CCashDbWorkerRUctor_CCashDbWorkerRU2_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerRUctor_CCashDbWorkerRU2_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerRU::*)())&CCashDbWorkerRU::ctor_CCashDbWorkerRU) },
        {   (LPVOID)0x1403208d0L,
            (LPVOID *)&CCashDbWorkerRURelease4_user,
            (LPVOID *)&CCashDbWorkerRURelease4_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerRURelease4_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerRU::*)())&CCashDbWorkerRU::Release) },
        {   (LPVOID)0x140320be0L,
            (LPVOID *)&CCashDbWorkerRU_init_database6_user,
            (LPVOID *)&CCashDbWorkerRU_init_database6_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerRU_init_database6_wrapper),
            (LPVOID)cast_pointer_function((bool(CCashDbWorkerRU::*)())&CCashDbWorkerRU::_init_database) },
        {   (LPVOID)0x140320a80L,
            (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_rollback8_user,
            (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_rollback8_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerRU_wait_tsk_cash_rollback8_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerRU::*)(struct Task*))&CCashDbWorkerRU::_wait_tsk_cash_rollback) },
        {   (LPVOID)0x140320930L,
            (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_select10_user,
            (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_select10_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerRU_wait_tsk_cash_select10_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerRU::*)(struct Task*))&CCashDbWorkerRU::_wait_tsk_cash_select) },
        {   (LPVOID)0x1403209a0L,
            (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_update12_user,
            (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_update12_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerRU_wait_tsk_cash_update12_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerRU::*)(struct Task*))&CCashDbWorkerRU::_wait_tsk_cash_update) },
        {   (LPVOID)0x14022eb40L,
            (LPVOID *)&CCashDbWorkerRUdtor_CCashDbWorkerRU17_user,
            (LPVOID *)&CCashDbWorkerRUdtor_CCashDbWorkerRU17_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerRUdtor_CCashDbWorkerRU17_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerRU::*)())&CCashDbWorkerRU::dtor_CCashDbWorkerRU) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE