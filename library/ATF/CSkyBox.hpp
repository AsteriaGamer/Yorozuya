// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CEntity.hpp>
#include <_ENTITY_M_GROUP.hpp>


START_ATF_NAMESPACE
    struct CSkyBox
    {
        int mIsSkyLoad;
        CEntity mEntity;
        _ENTITY_M_GROUP *mMatGroup;
        int mMatNum;
        int mMatGroupNum;
        __int16 mMatGroupSort[512];
    public:
        void DrawSkyBox(void* arg_0);
        int64_t GetUsedVertexBufferSize();
        void LoadSkyBox(char* arg_0);
        void ReleaseSkyBox();
        ~CSkyBox();
        int64_t dtor_CSkyBox();
    };
END_ATF_NAMESPACE
