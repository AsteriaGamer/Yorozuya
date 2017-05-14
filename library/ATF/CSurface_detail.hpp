// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CSurface_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CSurfacector_CSurface2_ptr CSurfacector_CSurface2_next(nullptr);
        static info::CSurfacector_CSurface2_clbk CSurfacector_CSurface2_user(nullptr);
        static info::CSurfaceConvertGDIColor4_ptr CSurfaceConvertGDIColor4_next(nullptr);
        static info::CSurfaceConvertGDIColor4_clbk CSurfaceConvertGDIColor4_user(nullptr);
        static info::CSurfaceCreate6_ptr CSurfaceCreate6_next(nullptr);
        static info::CSurfaceCreate6_clbk CSurfaceCreate6_user(nullptr);
        static info::CSurfaceCreate8_ptr CSurfaceCreate8_next(nullptr);
        static info::CSurfaceCreate8_clbk CSurfaceCreate8_user(nullptr);
        static info::CSurfaceDestroy10_ptr CSurfaceDestroy10_next(nullptr);
        static info::CSurfaceDestroy10_clbk CSurfaceDestroy10_user(nullptr);
        static info::CSurfaceDrawBitmap12_ptr CSurfaceDrawBitmap12_next(nullptr);
        static info::CSurfaceDrawBitmap12_clbk CSurfaceDrawBitmap12_user(nullptr);
        static info::CSurfaceDrawBitmap14_ptr CSurfaceDrawBitmap14_next(nullptr);
        static info::CSurfaceDrawBitmap14_clbk CSurfaceDrawBitmap14_user(nullptr);
        static info::CSurfaceDrawTextA16_ptr CSurfaceDrawTextA16_next(nullptr);
        static info::CSurfaceDrawTextA16_clbk CSurfaceDrawTextA16_user(nullptr);
        static info::CSurfaceFillColor18_ptr CSurfaceFillColor18_next(nullptr);
        static info::CSurfaceFillColor18_clbk CSurfaceFillColor18_user(nullptr);
        static info::CSurfaceGetBitMaskInfo20_ptr CSurfaceGetBitMaskInfo20_next(nullptr);
        static info::CSurfaceGetBitMaskInfo20_clbk CSurfaceGetBitMaskInfo20_user(nullptr);
        static info::CSurfaceGetDDSurfaceDesc22_ptr CSurfaceGetDDSurfaceDesc22_next(nullptr);
        static info::CSurfaceGetDDSurfaceDesc22_clbk CSurfaceGetDDSurfaceDesc22_user(nullptr);
        static info::CSurfaceGetDDrawSurface24_ptr CSurfaceGetDDrawSurface24_next(nullptr);
        static info::CSurfaceGetDDrawSurface24_clbk CSurfaceGetDDrawSurface24_user(nullptr);
        static info::CSurfaceIsColorKeyed26_ptr CSurfaceIsColorKeyed26_next(nullptr);
        static info::CSurfaceIsColorKeyed26_clbk CSurfaceIsColorKeyed26_user(nullptr);
        static info::CSurfaceSetColorKey28_ptr CSurfaceSetColorKey28_next(nullptr);
        static info::CSurfaceSetColorKey28_clbk CSurfaceSetColorKey28_user(nullptr);
        static info::CSurfacedtor_CSurface32_ptr CSurfacedtor_CSurface32_next(nullptr);
        static info::CSurfacedtor_CSurface32_clbk CSurfacedtor_CSurface32_user(nullptr);
        
        static void CSurfacector_CSurface2_wrapper(struct CSurface* _this)
        {
           CSurfacector_CSurface2_user(_this, CSurfacector_CSurface2_next);
        };
        static unsigned int CSurfaceConvertGDIColor4_wrapper(struct CSurface* _this, unsigned int dwGDIColor)
        {
           return CSurfaceConvertGDIColor4_user(_this, dwGDIColor, CSurfaceConvertGDIColor4_next);
        };
        static HRESULT CSurfaceCreate6_wrapper(struct CSurface* _this, struct IDirectDraw7* pDD, struct _DDSURFACEDESC2* pddsd)
        {
           return CSurfaceCreate6_user(_this, pDD, pddsd, CSurfaceCreate6_next);
        };
        static HRESULT CSurfaceCreate8_wrapper(struct CSurface* _this, struct IDirectDrawSurface7* pdds)
        {
           return CSurfaceCreate8_user(_this, pdds, CSurfaceCreate8_next);
        };
        static HRESULT CSurfaceDestroy10_wrapper(struct CSurface* _this)
        {
           return CSurfaceDestroy10_user(_this, CSurfaceDestroy10_next);
        };
        static HRESULT CSurfaceDrawBitmap12_wrapper(struct CSurface* _this, struct HBITMAP__* hBMP, unsigned int dwBMPOriginX, unsigned int dwBMPOriginY, unsigned int dwBMPWidth, unsigned int dwBMPHeight)
        {
           return CSurfaceDrawBitmap12_user(_this, hBMP, dwBMPOriginX, dwBMPOriginY, dwBMPWidth, dwBMPHeight, CSurfaceDrawBitmap12_next);
        };
        static HRESULT CSurfaceDrawBitmap14_wrapper(struct CSurface* _this, char* strBMP, unsigned int dwDesiredWidth, unsigned int dwDesiredHeight)
        {
           return CSurfaceDrawBitmap14_user(_this, strBMP, dwDesiredWidth, dwDesiredHeight, CSurfaceDrawBitmap14_next);
        };
        static HRESULT CSurfaceDrawTextA16_wrapper(struct CSurface* _this, struct HFONT__* hFont, char* strText, unsigned int dwOriginX, unsigned int dwOriginY, unsigned int crBackground, unsigned int crForeground)
        {
           return CSurfaceDrawTextA16_user(_this, hFont, strText, dwOriginX, dwOriginY, crBackground, crForeground, CSurfaceDrawTextA16_next);
        };
        static HRESULT CSurfaceFillColor18_wrapper(struct CSurface* _this, unsigned int crColor)
        {
           return CSurfaceFillColor18_user(_this, crColor, CSurfaceFillColor18_next);
        };
        static HRESULT CSurfaceGetBitMaskInfo20_wrapper(unsigned int dwBitMask, unsigned int* pdwShift, unsigned int* pdwBits)
        {
           return CSurfaceGetBitMaskInfo20_user(dwBitMask, pdwShift, pdwBits, CSurfaceGetBitMaskInfo20_next);
        };
        static struct _DDSURFACEDESC2* CSurfaceGetDDSurfaceDesc22_wrapper(struct CSurface* _this)
        {
           return CSurfaceGetDDSurfaceDesc22_user(_this, CSurfaceGetDDSurfaceDesc22_next);
        };
        static struct IDirectDrawSurface7* CSurfaceGetDDrawSurface24_wrapper(struct CSurface* _this)
        {
           return CSurfaceGetDDrawSurface24_user(_this, CSurfaceGetDDrawSurface24_next);
        };
        static int CSurfaceIsColorKeyed26_wrapper(struct CSurface* _this)
        {
           return CSurfaceIsColorKeyed26_user(_this, CSurfaceIsColorKeyed26_next);
        };
        static HRESULT CSurfaceSetColorKey28_wrapper(struct CSurface* _this, unsigned int dwColorKey)
        {
           return CSurfaceSetColorKey28_user(_this, dwColorKey, CSurfaceSetColorKey28_next);
        };
        static void CSurfacedtor_CSurface32_wrapper(struct CSurface* _this)
        {
           CSurfacedtor_CSurface32_user(_this, CSurfacedtor_CSurface32_next);
        };
        
        static hook_record CSurface_functions[] = {
        {   (LPVOID)0x140434d80L,
            (LPVOID *)&CSurfacector_CSurface2_user,
            (LPVOID *)&CSurfacector_CSurface2_next,
            (LPVOID)cast_pointer_function(CSurfacector_CSurface2_wrapper),
            (LPVOID)cast_pointer_function((void(CSurface::*)())&CSurface::ctor_CSurface) },
        {   (LPVOID)0x1404355e0L,
            (LPVOID *)&CSurfaceConvertGDIColor4_user,
            (LPVOID *)&CSurfaceConvertGDIColor4_next,
            (LPVOID)cast_pointer_function(CSurfaceConvertGDIColor4_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CSurface::*)(unsigned int))&CSurface::ConvertGDIColor) },
        {   (LPVOID)0x140434ec0L,
            (LPVOID *)&CSurfaceCreate6_user,
            (LPVOID *)&CSurfaceCreate6_next,
            (LPVOID)cast_pointer_function(CSurfaceCreate6_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CSurface::*)(struct IDirectDraw7*, struct _DDSURFACEDESC2*))&CSurface::Create) },
        {   (LPVOID)0x140434e10L,
            (LPVOID *)&CSurfaceCreate8_user,
            (LPVOID *)&CSurfaceCreate8_next,
            (LPVOID)cast_pointer_function(CSurfaceCreate8_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CSurface::*)(struct IDirectDrawSurface7*))&CSurface::Create) },
        {   (LPVOID)0x140434f80L,
            (LPVOID *)&CSurfaceDestroy10_user,
            (LPVOID *)&CSurfaceDestroy10_next,
            (LPVOID)cast_pointer_function(CSurfaceDestroy10_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CSurface::*)())&CSurface::Destroy) },
        {   (LPVOID)0x140434fe0L,
            (LPVOID *)&CSurfaceDrawBitmap12_user,
            (LPVOID *)&CSurfaceDrawBitmap12_next,
            (LPVOID)cast_pointer_function(CSurfaceDrawBitmap12_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CSurface::*)(struct HBITMAP__*, unsigned int, unsigned int, unsigned int, unsigned int))&CSurface::DrawBitmap) },
        {   (LPVOID)0x140435410L,
            (LPVOID *)&CSurfaceDrawBitmap14_user,
            (LPVOID *)&CSurfaceDrawBitmap14_next,
            (LPVOID)cast_pointer_function(CSurfaceDrawBitmap14_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CSurface::*)(char*, unsigned int, unsigned int))&CSurface::DrawBitmap) },
        {   (LPVOID)0x140435290L,
            (LPVOID *)&CSurfaceDrawTextA16_user,
            (LPVOID *)&CSurfaceDrawTextA16_next,
            (LPVOID)cast_pointer_function(CSurfaceDrawTextA16_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CSurface::*)(struct HFONT__*, char*, unsigned int, unsigned int, unsigned int, unsigned int))&CSurface::DrawTextA) },
        {   (LPVOID)0x140435800L,
            (LPVOID *)&CSurfaceFillColor18_user,
            (LPVOID *)&CSurfaceFillColor18_next,
            (LPVOID)cast_pointer_function(CSurfaceFillColor18_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CSurface::*)(unsigned int))&CSurface::FillColor) },
        {   (LPVOID)0x1404358b0L,
            (LPVOID *)&CSurfaceGetBitMaskInfo20_user,
            (LPVOID *)&CSurfaceGetBitMaskInfo20_next,
            (LPVOID)cast_pointer_function(CSurfaceGetBitMaskInfo20_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(*)(unsigned int, unsigned int*, unsigned int*))&CSurface::GetBitMaskInfo) },
        {   (LPVOID)0x1401a13f0L,
            (LPVOID *)&CSurfaceGetDDSurfaceDesc22_user,
            (LPVOID *)&CSurfaceGetDDSurfaceDesc22_next,
            (LPVOID)cast_pointer_function(CSurfaceGetDDSurfaceDesc22_wrapper),
            (LPVOID)cast_pointer_function((struct _DDSURFACEDESC2*(CSurface::*)())&CSurface::GetDDSurfaceDesc) },
        {   (LPVOID)0x14019c4f0L,
            (LPVOID *)&CSurfaceGetDDrawSurface24_user,
            (LPVOID *)&CSurfaceGetDDrawSurface24_next,
            (LPVOID)cast_pointer_function(CSurfaceGetDDrawSurface24_wrapper),
            (LPVOID)cast_pointer_function((struct IDirectDrawSurface7*(CSurface::*)())&CSurface::GetDDrawSurface) },
        {   (LPVOID)0x140436390L,
            (LPVOID *)&CSurfaceIsColorKeyed26_user,
            (LPVOID *)&CSurfaceIsColorKeyed26_next,
            (LPVOID)cast_pointer_function(CSurfaceIsColorKeyed26_wrapper),
            (LPVOID)cast_pointer_function((int(CSurface::*)())&CSurface::IsColorKeyed) },
        {   (LPVOID)0x140435530L,
            (LPVOID *)&CSurfaceSetColorKey28_user,
            (LPVOID *)&CSurfaceSetColorKey28_next,
            (LPVOID)cast_pointer_function(CSurfaceSetColorKey28_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CSurface::*)(unsigned int))&CSurface::SetColorKey) },
        {   (LPVOID)0x140434db0L,
            (LPVOID *)&CSurfacedtor_CSurface32_user,
            (LPVOID *)&CSurfacedtor_CSurface32_next,
            (LPVOID)cast_pointer_function(CSurfacedtor_CSurface32_wrapper),
            (LPVOID)cast_pointer_function((void(CSurface::*)())&CSurface::dtor_CSurface) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE