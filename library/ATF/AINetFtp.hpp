// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "AINet.hpp"
#include "AINetFile.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  AINetFtp : AINet
    {
        void *m_hConnect;
        unsigned int m_dwContext;
    public:
        AINetFtp()
			: AINet(nullptr, 0, nullptr, nullptr, 0)
        {
            using org_ptr = void (WINAPIV*)(struct AINetFtp*);
            (org_ptr(0x140432660L))(this);
        };
        void ctor_AINetFtp()
        {
            using org_ptr = void (WINAPIV*)(struct AINetFtp*);
            (org_ptr(0x140432660L))(this);
        };
        void Close()
        {
            using org_ptr = void (WINAPIV*)(struct AINetFtp*);
            (org_ptr(0x140432840L))(this);
        };
        int CreateDirectoryA(char* pstrDirName)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*);
            return (org_ptr(0x140432a70L))(this, pstrDirName);
        };
        int GetCurrentDirectoryA(char* pstrDirName, unsigned int* lpdwLen)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*, unsigned int*);
            return (org_ptr(0x140432b60L))(this, pstrDirName, lpdwLen);
        };
        int GetFile(char* pstrRemoteFile, char* pstrLocalFile, int bFailIfExists, unsigned int dwAttributes, unsigned int dwFlags, unsigned int dwContext)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*, char*, int, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140432920L))(this, pstrRemoteFile, pstrLocalFile, bFailIfExists, dwAttributes, dwFlags, dwContext);
        };
        int Open(char* pstrServer, char* pstrUserName, char* pstrPassword, uint16_t nPort, int bPassive, unsigned int dwContext)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*, char*, char*, uint16_t, int, unsigned int);
            return (org_ptr(0x140432770L))(this, pstrServer, pstrUserName, pstrPassword, nPort, bPassive, dwContext);
        };
        struct AINetFile* OpenFile(char* pstrFileName, unsigned int dwAccess, unsigned int dwFlags, unsigned int dwContext)
        {
            using org_ptr = struct AINetFile* (WINAPIV*)(struct AINetFtp*, char*, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140432bc0L))(this, pstrFileName, dwAccess, dwFlags, dwContext);
        };
        int PutFile(char* pstrLocalFile, char* pstrRemoteFile, unsigned int dwFlags, unsigned int dwContext)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*, char*, unsigned int, unsigned int);
            return (org_ptr(0x1404328a0L))(this, pstrLocalFile, pstrRemoteFile, dwFlags, dwContext);
        };
        int Remove(char* pstrFileName)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*);
            return (org_ptr(0x1404329c0L))(this, pstrFileName);
        };
        int RemoveDirectoryA(char* pstrDirName)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*);
            return (org_ptr(0x140432ac0L))(this, pstrDirName);
        };
        int Rename(char* pstrExisting, char* pstrNew)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*, char*);
            return (org_ptr(0x140432a10L))(this, pstrExisting, pstrNew);
        };
        int SetCurrentDirectoryA(char* pstrDirName)
        {
            using org_ptr = int (WINAPIV*)(struct AINetFtp*, char*);
            return (org_ptr(0x140432b10L))(this, pstrDirName);
        };
        ~AINetFtp()
        {
            using org_ptr = void (WINAPIV*)(struct AINetFtp*);
            (org_ptr(0x1404326e0L))(this);
        };
        void dtor_AINetFtp()
        {
            using org_ptr = void (WINAPIV*)(struct AINetFtp*);
            (org_ptr(0x1404326e0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE