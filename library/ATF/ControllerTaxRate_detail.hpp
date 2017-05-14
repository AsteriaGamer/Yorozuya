// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ControllerTaxRate_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::ControllerTaxRatector_ControllerTaxRate2_ptr ControllerTaxRatector_ControllerTaxRate2_next(nullptr);
        static info::ControllerTaxRatector_ControllerTaxRate2_clbk ControllerTaxRatector_ControllerTaxRate2_user(nullptr);
        static info::ControllerTaxRatecalcTaxRate7_ptr ControllerTaxRatecalcTaxRate7_next(nullptr);
        static info::ControllerTaxRatecalcTaxRate7_clbk ControllerTaxRatecalcTaxRate7_user(nullptr);
        static info::ControllerTaxRatecheckLimitTaxRate9_ptr ControllerTaxRatecheckLimitTaxRate9_next(nullptr);
        static info::ControllerTaxRatecheckLimitTaxRate9_clbk ControllerTaxRatecheckLimitTaxRate9_user(nullptr);
        static info::ControllerTaxRategetCurTaxRate11_ptr ControllerTaxRategetCurTaxRate11_next(nullptr);
        static info::ControllerTaxRategetCurTaxRate11_clbk ControllerTaxRategetCurTaxRate11_user(nullptr);
        static info::ControllerTaxRatesetCurTaxRate13_ptr ControllerTaxRatesetCurTaxRate13_next(nullptr);
        static info::ControllerTaxRatesetCurTaxRate13_clbk ControllerTaxRatesetCurTaxRate13_user(nullptr);
        static info::ControllerTaxRatesetLimitTaxRate15_ptr ControllerTaxRatesetLimitTaxRate15_next(nullptr);
        static info::ControllerTaxRatesetLimitTaxRate15_clbk ControllerTaxRatesetLimitTaxRate15_user(nullptr);
        static info::ControllerTaxRatedtor_ControllerTaxRate17_ptr ControllerTaxRatedtor_ControllerTaxRate17_next(nullptr);
        static info::ControllerTaxRatedtor_ControllerTaxRate17_clbk ControllerTaxRatedtor_ControllerTaxRate17_user(nullptr);
        
        static void ControllerTaxRatector_ControllerTaxRate2_wrapper(struct ControllerTaxRate* _this)
        {
           ControllerTaxRatector_ControllerTaxRate2_user(_this, ControllerTaxRatector_ControllerTaxRate2_next);
        };
        static unsigned int ControllerTaxRatecalcTaxRate7_wrapper(struct ControllerTaxRate* _this, unsigned int dalant)
        {
           return ControllerTaxRatecalcTaxRate7_user(_this, dalant, ControllerTaxRatecalcTaxRate7_next);
        };
        static bool ControllerTaxRatecheckLimitTaxRate9_wrapper(struct ControllerTaxRate* _this, float fTaxRate)
        {
           return ControllerTaxRatecheckLimitTaxRate9_user(_this, fTaxRate, ControllerTaxRatecheckLimitTaxRate9_next);
        };
        static float ControllerTaxRategetCurTaxRate11_wrapper(struct ControllerTaxRate* _this)
        {
           return ControllerTaxRategetCurTaxRate11_user(_this, ControllerTaxRategetCurTaxRate11_next);
        };
        static void ControllerTaxRatesetCurTaxRate13_wrapper(struct ControllerTaxRate* _this, float fTaxRate)
        {
           ControllerTaxRatesetCurTaxRate13_user(_this, fTaxRate, ControllerTaxRatesetCurTaxRate13_next);
        };
        static void ControllerTaxRatesetLimitTaxRate15_wrapper(struct ControllerTaxRate* _this, float fMin, float fMax)
        {
           ControllerTaxRatesetLimitTaxRate15_user(_this, fMin, fMax, ControllerTaxRatesetLimitTaxRate15_next);
        };
        static void ControllerTaxRatedtor_ControllerTaxRate17_wrapper(struct ControllerTaxRate* _this)
        {
           ControllerTaxRatedtor_ControllerTaxRate17_user(_this, ControllerTaxRatedtor_ControllerTaxRate17_next);
        };
        
        static hook_record ControllerTaxRate_functions[] = {
        {   (LPVOID)0x1402d96e0L,
            (LPVOID *)&ControllerTaxRatector_ControllerTaxRate2_user,
            (LPVOID *)&ControllerTaxRatector_ControllerTaxRate2_next,
            (LPVOID)cast_pointer_function(ControllerTaxRatector_ControllerTaxRate2_wrapper),
            (LPVOID)cast_pointer_function((void(ControllerTaxRate::*)())&ControllerTaxRate::ctor_ControllerTaxRate) },
        {   (LPVOID)0x1402d98c0L,
            (LPVOID *)&ControllerTaxRatecalcTaxRate7_user,
            (LPVOID *)&ControllerTaxRatecalcTaxRate7_next,
            (LPVOID)cast_pointer_function(ControllerTaxRatecalcTaxRate7_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(ControllerTaxRate::*)(unsigned int))&ControllerTaxRate::calcTaxRate) },
        {   (LPVOID)0x1402d9b80L,
            (LPVOID *)&ControllerTaxRatecheckLimitTaxRate9_user,
            (LPVOID *)&ControllerTaxRatecheckLimitTaxRate9_next,
            (LPVOID)cast_pointer_function(ControllerTaxRatecheckLimitTaxRate9_wrapper),
            (LPVOID)cast_pointer_function((bool(ControllerTaxRate::*)(float))&ControllerTaxRate::checkLimitTaxRate) },
        {   (LPVOID)0x1402d9950L,
            (LPVOID *)&ControllerTaxRategetCurTaxRate11_user,
            (LPVOID *)&ControllerTaxRategetCurTaxRate11_next,
            (LPVOID)cast_pointer_function(ControllerTaxRategetCurTaxRate11_wrapper),
            (LPVOID)cast_pointer_function((float(ControllerTaxRate::*)())&ControllerTaxRate::getCurTaxRate) },
        {   (LPVOID)0x1402d9b50L,
            (LPVOID *)&ControllerTaxRatesetCurTaxRate13_user,
            (LPVOID *)&ControllerTaxRatesetCurTaxRate13_next,
            (LPVOID)cast_pointer_function(ControllerTaxRatesetCurTaxRate13_wrapper),
            (LPVOID)cast_pointer_function((void(ControllerTaxRate::*)(float))&ControllerTaxRate::setCurTaxRate) },
        {   (LPVOID)0x1402d9870L,
            (LPVOID *)&ControllerTaxRatesetLimitTaxRate15_user,
            (LPVOID *)&ControllerTaxRatesetLimitTaxRate15_next,
            (LPVOID)cast_pointer_function(ControllerTaxRatesetLimitTaxRate15_wrapper),
            (LPVOID)cast_pointer_function((void(ControllerTaxRate::*)(float, float))&ControllerTaxRate::setLimitTaxRate) },
        {   (LPVOID)0x1402d9730L,
            (LPVOID *)&ControllerTaxRatedtor_ControllerTaxRate17_user,
            (LPVOID *)&ControllerTaxRatedtor_ControllerTaxRate17_next,
            (LPVOID)cast_pointer_function(ControllerTaxRatedtor_ControllerTaxRate17_wrapper),
            (LPVOID)cast_pointer_function((void(ControllerTaxRate::*)())&ControllerTaxRate::dtor_ControllerTaxRate) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE