#include <R3CameraDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::R3CameraGetDist1_ptr R3CameraGetDist1_next(nullptr);
        Info::R3CameraGetDist1_clbk R3CameraGetDist1_user(nullptr);
        
        Info::R3CameraGetPh2_ptr R3CameraGetPh2_next(nullptr);
        Info::R3CameraGetPh2_clbk R3CameraGetPh2_user(nullptr);
        
        Info::R3CameraGetPoint3_ptr R3CameraGetPoint3_next(nullptr);
        Info::R3CameraGetPoint3_clbk R3CameraGetPoint3_user(nullptr);
        
        Info::R3CameraGetPos4_ptr R3CameraGetPos4_next(nullptr);
        Info::R3CameraGetPos4_clbk R3CameraGetPos4_user(nullptr);
        
        Info::R3CameraGetSmoothTarPoint5_ptr R3CameraGetSmoothTarPoint5_next(nullptr);
        Info::R3CameraGetSmoothTarPoint5_clbk R3CameraGetSmoothTarPoint5_user(nullptr);
        
        Info::R3CameraGetTh6_ptr R3CameraGetTh6_next(nullptr);
        Info::R3CameraGetTh6_clbk R3CameraGetTh6_user(nullptr);
        
        Info::R3CameraGetViewMatrix7_ptr R3CameraGetViewMatrix7_next(nullptr);
        Info::R3CameraGetViewMatrix7_clbk R3CameraGetViewMatrix7_user(nullptr);
        
        Info::R3CameraMakeCameraAndViewMatrix8_ptr R3CameraMakeCameraAndViewMatrix8_next(nullptr);
        Info::R3CameraMakeCameraAndViewMatrix8_clbk R3CameraMakeCameraAndViewMatrix8_user(nullptr);
        
        Info::R3CameraMakeViewMatrix9_ptr R3CameraMakeViewMatrix9_next(nullptr);
        Info::R3CameraMakeViewMatrix9_clbk R3CameraMakeViewMatrix9_user(nullptr);
        
        Info::R3CameraSetBspPtr10_ptr R3CameraSetBspPtr10_next(nullptr);
        Info::R3CameraSetBspPtr10_clbk R3CameraSetBspPtr10_user(nullptr);
        
        Info::R3CameraSetDist11_ptr R3CameraSetDist11_next(nullptr);
        Info::R3CameraSetDist11_clbk R3CameraSetDist11_user(nullptr);
        
        Info::R3CameraSetMatrix12_ptr R3CameraSetMatrix12_next(nullptr);
        Info::R3CameraSetMatrix12_clbk R3CameraSetMatrix12_user(nullptr);
        
        Info::R3CameraSetPoint13_ptr R3CameraSetPoint13_next(nullptr);
        Info::R3CameraSetPoint13_clbk R3CameraSetPoint13_user(nullptr);
        
        Info::R3CameraSetPos14_ptr R3CameraSetPos14_next(nullptr);
        Info::R3CameraSetPos14_clbk R3CameraSetPos14_user(nullptr);
        
        Info::R3CameraSetSmoothDistLoop15_ptr R3CameraSetSmoothDistLoop15_next(nullptr);
        Info::R3CameraSetSmoothDistLoop15_clbk R3CameraSetSmoothDistLoop15_user(nullptr);
        
        Info::R3CameraSetSmoothPointLoop16_ptr R3CameraSetSmoothPointLoop16_next(nullptr);
        Info::R3CameraSetSmoothPointLoop16_clbk R3CameraSetSmoothPointLoop16_user(nullptr);
        
        Info::R3CameraSetSmoothTarPoint17_ptr R3CameraSetSmoothTarPoint17_next(nullptr);
        Info::R3CameraSetSmoothTarPoint17_clbk R3CameraSetSmoothTarPoint17_user(nullptr);
        
        Info::R3CameraSetSmoothThPhLoop18_ptr R3CameraSetSmoothThPhLoop18_next(nullptr);
        Info::R3CameraSetSmoothThPhLoop18_clbk R3CameraSetSmoothThPhLoop18_user(nullptr);
        
        Info::R3CameraSetSmoothValue19_ptr R3CameraSetSmoothValue19_next(nullptr);
        Info::R3CameraSetSmoothValue19_clbk R3CameraSetSmoothValue19_user(nullptr);
        
        Info::R3CameraSetThPh20_ptr R3CameraSetThPh20_next(nullptr);
        Info::R3CameraSetThPh20_clbk R3CameraSetThPh20_user(nullptr);
        
        Info::R3CameraSetViewMatrix21_ptr R3CameraSetViewMatrix21_next(nullptr);
        Info::R3CameraSetViewMatrix21_clbk R3CameraSetViewMatrix21_user(nullptr);
        
        
        Info::R3Cameradtor_R3Camera22_ptr R3Cameradtor_R3Camera22_next(nullptr);
        Info::R3Cameradtor_R3Camera22_clbk R3Cameradtor_R3Camera22_user(nullptr);
        
        float R3CameraGetDist1_wrapper(struct R3Camera* _this)
        {
           return R3CameraGetDist1_user(_this, R3CameraGetDist1_next);
        };
        float R3CameraGetPh2_wrapper(struct R3Camera* _this)
        {
           return R3CameraGetPh2_user(_this, R3CameraGetPh2_next);
        };
        void R3CameraGetPoint3_wrapper(struct R3Camera* _this, float* arg_0)
        {
           R3CameraGetPoint3_user(_this, arg_0, R3CameraGetPoint3_next);
        };
        void R3CameraGetPos4_wrapper(struct R3Camera* _this, float* arg_0)
        {
           R3CameraGetPos4_user(_this, arg_0, R3CameraGetPos4_next);
        };
        void R3CameraGetSmoothTarPoint5_wrapper(struct R3Camera* _this, float* arg_0)
        {
           R3CameraGetSmoothTarPoint5_user(_this, arg_0, R3CameraGetSmoothTarPoint5_next);
        };
        float R3CameraGetTh6_wrapper(struct R3Camera* _this)
        {
           return R3CameraGetTh6_user(_this, R3CameraGetTh6_next);
        };
        struct D3DXMATRIX* R3CameraGetViewMatrix7_wrapper(struct R3Camera* _this)
        {
           return R3CameraGetViewMatrix7_user(_this, R3CameraGetViewMatrix7_next);
        };
        void R3CameraMakeCameraAndViewMatrix8_wrapper(struct R3Camera* _this)
        {
           R3CameraMakeCameraAndViewMatrix8_user(_this, R3CameraMakeCameraAndViewMatrix8_next);
        };
        void R3CameraMakeViewMatrix9_wrapper(struct R3Camera* _this, struct D3DXMATRIX* arg_0)
        {
           R3CameraMakeViewMatrix9_user(_this, arg_0, R3CameraMakeViewMatrix9_next);
        };
        void R3CameraSetBspPtr10_wrapper(struct R3Camera* _this, void* arg_0)
        {
           R3CameraSetBspPtr10_user(_this, arg_0, R3CameraSetBspPtr10_next);
        };
        void R3CameraSetDist11_wrapper(struct R3Camera* _this, float arg_0)
        {
           R3CameraSetDist11_user(_this, arg_0, R3CameraSetDist11_next);
        };
        void R3CameraSetMatrix12_wrapper(struct R3Camera* _this, struct Matrix4* arg_0)
        {
           R3CameraSetMatrix12_user(_this, arg_0, R3CameraSetMatrix12_next);
        };
        void R3CameraSetPoint13_wrapper(struct R3Camera* _this, float arg_0, float arg_1, float arg_2)
        {
           R3CameraSetPoint13_user(_this, arg_0, arg_1, arg_2, R3CameraSetPoint13_next);
        };
        void R3CameraSetPos14_wrapper(struct R3Camera* _this, float arg_0, float arg_1, float arg_2)
        {
           R3CameraSetPos14_user(_this, arg_0, arg_1, arg_2, R3CameraSetPos14_next);
        };
        void R3CameraSetSmoothDistLoop15_wrapper(struct R3Camera* _this, float arg_0)
        {
           R3CameraSetSmoothDistLoop15_user(_this, arg_0, R3CameraSetSmoothDistLoop15_next);
        };
        void R3CameraSetSmoothPointLoop16_wrapper(struct R3Camera* _this, float arg_0, float arg_1, float arg_2)
        {
           R3CameraSetSmoothPointLoop16_user(_this, arg_0, arg_1, arg_2, R3CameraSetSmoothPointLoop16_next);
        };
        void R3CameraSetSmoothTarPoint17_wrapper(struct R3Camera* _this, float arg_0, float arg_1, float arg_2)
        {
           R3CameraSetSmoothTarPoint17_user(_this, arg_0, arg_1, arg_2, R3CameraSetSmoothTarPoint17_next);
        };
        void R3CameraSetSmoothThPhLoop18_wrapper(struct R3Camera* _this, float arg_0, float arg_1)
        {
           R3CameraSetSmoothThPhLoop18_user(_this, arg_0, arg_1, R3CameraSetSmoothThPhLoop18_next);
        };
        void R3CameraSetSmoothValue19_wrapper(struct R3Camera* _this, float arg_0, float arg_1)
        {
           R3CameraSetSmoothValue19_user(_this, arg_0, arg_1, R3CameraSetSmoothValue19_next);
        };
        void R3CameraSetThPh20_wrapper(struct R3Camera* _this, float arg_0, float arg_1)
        {
           R3CameraSetThPh20_user(_this, arg_0, arg_1, R3CameraSetThPh20_next);
        };
        void R3CameraSetViewMatrix21_wrapper(struct R3Camera* _this)
        {
           R3CameraSetViewMatrix21_user(_this, R3CameraSetViewMatrix21_next);
        };
        
        int64_t R3Cameradtor_R3Camera22_wrapper(struct R3Camera* _this)
        {
           return R3Cameradtor_R3Camera22_user(_this, R3Cameradtor_R3Camera22_next);
        };
        
        ::std::array<hook_record, 22> R3Camera_functions = 
        {
            _hook_record {
                (LPVOID)0x1405134f0L,
                (LPVOID *)&R3CameraGetDist1_user,
                (LPVOID *)&R3CameraGetDist1_next,
                (LPVOID)cast_pointer_function(R3CameraGetDist1_wrapper),
                (LPVOID)cast_pointer_function((float(R3Camera::*)())&R3Camera::GetDist)
            },
            _hook_record {
                (LPVOID)0x1405134e0L,
                (LPVOID *)&R3CameraGetPh2_user,
                (LPVOID *)&R3CameraGetPh2_next,
                (LPVOID)cast_pointer_function(R3CameraGetPh2_wrapper),
                (LPVOID)cast_pointer_function((float(R3Camera::*)())&R3Camera::GetPh)
            },
            _hook_record {
                (LPVOID)0x140513500L,
                (LPVOID *)&R3CameraGetPoint3_user,
                (LPVOID *)&R3CameraGetPoint3_next,
                (LPVOID)cast_pointer_function(R3CameraGetPoint3_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float*))&R3Camera::GetPoint)
            },
            _hook_record {
                (LPVOID)0x140513520L,
                (LPVOID *)&R3CameraGetPos4_user,
                (LPVOID *)&R3CameraGetPos4_next,
                (LPVOID)cast_pointer_function(R3CameraGetPos4_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float*))&R3Camera::GetPos)
            },
            _hook_record {
                (LPVOID)0x1405135c0L,
                (LPVOID *)&R3CameraGetSmoothTarPoint5_user,
                (LPVOID *)&R3CameraGetSmoothTarPoint5_next,
                (LPVOID)cast_pointer_function(R3CameraGetSmoothTarPoint5_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float*))&R3Camera::GetSmoothTarPoint)
            },
            _hook_record {
                (LPVOID)0x1405134d0L,
                (LPVOID *)&R3CameraGetTh6_user,
                (LPVOID *)&R3CameraGetTh6_next,
                (LPVOID)cast_pointer_function(R3CameraGetTh6_wrapper),
                (LPVOID)cast_pointer_function((float(R3Camera::*)())&R3Camera::GetTh)
            },
            _hook_record {
                (LPVOID)0x140513540L,
                (LPVOID *)&R3CameraGetViewMatrix7_user,
                (LPVOID *)&R3CameraGetViewMatrix7_next,
                (LPVOID)cast_pointer_function(R3CameraGetViewMatrix7_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXMATRIX*(R3Camera::*)())&R3Camera::GetViewMatrix)
            },
            _hook_record {
                (LPVOID)0x140513a60L,
                (LPVOID *)&R3CameraMakeCameraAndViewMatrix8_user,
                (LPVOID *)&R3CameraMakeCameraAndViewMatrix8_next,
                (LPVOID)cast_pointer_function(R3CameraMakeCameraAndViewMatrix8_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)())&R3Camera::MakeCameraAndViewMatrix)
            },
            _hook_record {
                (LPVOID)0x1405136f0L,
                (LPVOID *)&R3CameraMakeViewMatrix9_user,
                (LPVOID *)&R3CameraMakeViewMatrix9_next,
                (LPVOID)cast_pointer_function(R3CameraMakeViewMatrix9_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(struct D3DXMATRIX*))&R3Camera::MakeViewMatrix)
            },
            _hook_record {
                (LPVOID)0x1405136e0L,
                (LPVOID *)&R3CameraSetBspPtr10_user,
                (LPVOID *)&R3CameraSetBspPtr10_next,
                (LPVOID)cast_pointer_function(R3CameraSetBspPtr10_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(void*))&R3Camera::SetBspPtr)
            },
            _hook_record {
                (LPVOID)0x140513590L,
                (LPVOID *)&R3CameraSetDist11_user,
                (LPVOID *)&R3CameraSetDist11_next,
                (LPVOID)cast_pointer_function(R3CameraSetDist11_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float))&R3Camera::SetDist)
            },
            _hook_record {
                (LPVOID)0x140513ae0L,
                (LPVOID *)&R3CameraSetMatrix12_user,
                (LPVOID *)&R3CameraSetMatrix12_next,
                (LPVOID)cast_pointer_function(R3CameraSetMatrix12_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(struct Matrix4*))&R3Camera::SetMatrix)
            },
            _hook_record {
                (LPVOID)0x140513550L,
                (LPVOID *)&R3CameraSetPoint13_user,
                (LPVOID *)&R3CameraSetPoint13_next,
                (LPVOID)cast_pointer_function(R3CameraSetPoint13_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float, float, float))&R3Camera::SetPoint)
            },
            _hook_record {
                (LPVOID)0x140513570L,
                (LPVOID *)&R3CameraSetPos14_user,
                (LPVOID *)&R3CameraSetPos14_next,
                (LPVOID)cast_pointer_function(R3CameraSetPos14_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float, float, float))&R3Camera::SetPos)
            },
            _hook_record {
                (LPVOID)0x140513b30L,
                (LPVOID *)&R3CameraSetSmoothDistLoop15_user,
                (LPVOID *)&R3CameraSetSmoothDistLoop15_next,
                (LPVOID)cast_pointer_function(R3CameraSetSmoothDistLoop15_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float))&R3Camera::SetSmoothDistLoop)
            },
            _hook_record {
                (LPVOID)0x1405135e0L,
                (LPVOID *)&R3CameraSetSmoothPointLoop16_user,
                (LPVOID *)&R3CameraSetSmoothPointLoop16_next,
                (LPVOID)cast_pointer_function(R3CameraSetSmoothPointLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float, float, float))&R3Camera::SetSmoothPointLoop)
            },
            _hook_record {
                (LPVOID)0x1405135a0L,
                (LPVOID *)&R3CameraSetSmoothTarPoint17_user,
                (LPVOID *)&R3CameraSetSmoothTarPoint17_next,
                (LPVOID)cast_pointer_function(R3CameraSetSmoothTarPoint17_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float, float, float))&R3Camera::SetSmoothTarPoint)
            },
            _hook_record {
                (LPVOID)0x140513630L,
                (LPVOID *)&R3CameraSetSmoothThPhLoop18_user,
                (LPVOID *)&R3CameraSetSmoothThPhLoop18_next,
                (LPVOID)cast_pointer_function(R3CameraSetSmoothThPhLoop18_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float, float))&R3Camera::SetSmoothThPhLoop)
            },
            _hook_record {
                (LPVOID)0x1405136c0L,
                (LPVOID *)&R3CameraSetSmoothValue19_user,
                (LPVOID *)&R3CameraSetSmoothValue19_next,
                (LPVOID)cast_pointer_function(R3CameraSetSmoothValue19_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float, float))&R3Camera::SetSmoothValue)
            },
            _hook_record {
                (LPVOID)0x140513580L,
                (LPVOID *)&R3CameraSetThPh20_user,
                (LPVOID *)&R3CameraSetThPh20_next,
                (LPVOID)cast_pointer_function(R3CameraSetThPh20_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)(float, float))&R3Camera::SetThPh)
            },
            _hook_record {
                (LPVOID)0x140513b00L,
                (LPVOID *)&R3CameraSetViewMatrix21_user,
                (LPVOID *)&R3CameraSetViewMatrix21_next,
                (LPVOID)cast_pointer_function(R3CameraSetViewMatrix21_wrapper),
                (LPVOID)cast_pointer_function((void(R3Camera::*)())&R3Camera::SetViewMatrix)
            },
            _hook_record {
                (LPVOID)0x1405134c0L,
                (LPVOID *)&R3Cameradtor_R3Camera22_user,
                (LPVOID *)&R3Cameradtor_R3Camera22_next,
                (LPVOID)cast_pointer_function(R3Cameradtor_R3Camera22_wrapper),
                (LPVOID)cast_pointer_function((int64_t(R3Camera::*)())&R3Camera::dtor_R3Camera)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
