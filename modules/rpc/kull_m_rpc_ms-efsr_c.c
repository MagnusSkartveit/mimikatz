/*	Benjamin DELPY `gentilkiwi`
	https://blog.gentilkiwi.com
	benjamin@gentilkiwi.com
	Licence : https://creativecommons.org/licenses/by/4.0/
*/
#include "kull_m_rpc_ms-efsr.h"

const UUID EFSR_ObjectUUID = {0xdf1941c5, 0xfe89, 0x4e79, {0xbf, 0x10, 0x46, 0x36, 0x57, 0xac, 0xf4, 0x4d}};

#if defined(_M_X64) || defined(_M_ARM64) // TODO:ARM64
extern const UCHAR ms2Defsr__MIDL_ProcFormatString[283];
#elif defined(_M_IX86)
extern const UCHAR ms2Defsr__MIDL_ProcFormatString[271];
#endif
extern const UCHAR ms2Defsr__MIDL_TypeFormatString[55];

const RPC_CLIENT_INTERFACE efsrpc___RpcClientInterface = {sizeof(RPC_CLIENT_INTERFACE), {{0xc681d488, 0xd850, 0x11d0, {0x8c, 0x52, 0x00, 0xc0, 0x4f, 0xd9, 0x0f, 0x7e}}, {1, 0}}, NDR_TSI_20, 0, 0, NULL, 0, 0, 0x00000001};
RPC_IF_HANDLE efsrpc_v1_0_c_ifspec = (RPC_IF_HANDLE)&efsrpc___RpcClientInterface;
RPC_BINDING_HANDLE efsrpc__MIDL_AutoBindHandle;
const MIDL_STUB_DESC efsrpc_StubDesc = {(void *) &efsrpc___RpcClientInterface, MIDL_user_allocate, MIDL_user_free, &efsrpc__MIDL_AutoBindHandle, 0, 0, 0, 0, ms2Defsr__MIDL_TypeFormatString, 1, 0x60000, 0, 0x8000253, 0, 0, 0, 0x1, 0, 0, 0};

#if defined(_M_X64) || defined(_M_ARM64) // TODO:ARM64
long EfsRpcOpenFileRaw(handle_t binding_h, PEXIMPORT_CONTEXT_HANDLE* hContext, wchar_t* FileName, long Flags)
{
    return (long) NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 0, binding_h, hContext, FileName, Flags).Simple;
}
long EfsRpcReadFileRaw(PEXIMPORT_CONTEXT_HANDLE hContext, EFS_EXIM_PIPE* EfsOutPipe)
{
    return (long) NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 54, hContext, EfsOutPipe).Simple;
}
long EfsRpcWriteFileRaw(PEXIMPORT_CONTEXT_HANDLE hContext, EFS_EXIM_PIPE* EfsInPipe)
{
    return (long) NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 104, hContext, EfsInPipe).Simple;
}
void EfsRpcCloseRaw(PEXIMPORT_CONTEXT_HANDLE* hContext)
{
    NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 154, hContext);
}
long EfsRpcEncryptFileSrv(handle_t binding_h, wchar_t* FileName)
{
    return (long) NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 192, binding_h, FileName).Simple;
}
long EfsRpcDecryptFileSrv(handle_t binding_h, wchar_t* FileName, unsigned long OpenFlag)
{
	return (long) NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 234, binding_h, FileName, OpenFlag).Simple;
}

const UCHAR ms2Defsr__MIDL_ProcFormatString[] = {
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, 0x40, 0x00, 0x46, 0x04, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01,
	0x08, 0x00, 0x06, 0x00, 0x0b, 0x01, 0x10, 0x00, 0x0c, 0x00, 0x48, 0x00, 0x18, 0x00, 0x08, 0x00, 0x70, 0x00, 0x20, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00,
	0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x08, 0x00, 0x4c, 0x03, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x41, 0x08, 0x00,
	0x18, 0x00, 0x70, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x18, 0x00, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x08, 0x00, 0x4c, 0x03, 0x0a, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x0c, 0x01, 0x08, 0x00, 0x26, 0x00, 0x70, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00,
	0x03, 0x00, 0x08, 0x00, 0x30, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x40, 0x01, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x32, 0x00,
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x18, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x46, 0x02, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01,
	0x08, 0x00, 0x0c, 0x00, 0x70, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x20, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x46, 0x03, 0x0a, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x08, 0x00, 0x0c, 0x00, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x70, 0x00, 0x18, 0x00, 0x08, 0x00, 0x00,
};
#elif defined(_M_IX86)
#pragma optimize("", off) 
#pragma warning(push)
#pragma warning(disable:4100)
long EfsRpcOpenFileRaw(handle_t binding_h, PEXIMPORT_CONTEXT_HANDLE* hContext, wchar_t* FileName, long Flags)
{
    return (long) NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 0, &binding_h).Simple;
}
long EfsRpcReadFileRaw(PEXIMPORT_CONTEXT_HANDLE hContext, EFS_EXIM_PIPE* EfsOutPipe)
{
	return (long)NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 52, &hContext).Simple;
}
long EfsRpcWriteFileRaw(PEXIMPORT_CONTEXT_HANDLE hContext, EFS_EXIM_PIPE* EfsInPipe)
{
	return (long)NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 100, &hContext).Simple;
}
void EfsRpcCloseRaw(PEXIMPORT_CONTEXT_HANDLE *hContext)
{
	NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 148, &hContext);
}
long EfsRpcEncryptFileSrv(handle_t binding_h, wchar_t* FileName)
{
	return (long)NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 184, &binding_h).Simple;
}
long EfsRpcDecryptFileSrv(handle_t binding_h, wchar_t* FileName, unsigned long OpenFlag)
{
	return (long)NdrClientCall2(&efsrpc_StubDesc, ms2Defsr__MIDL_ProcFormatString + 224, &binding_h).Simple;
}
#pragma warning(pop)
#pragma optimize("", on)
const UCHAR ms2Defsr__MIDL_ProcFormatString[] = {
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, 0x40, 0x00, 0x46, 0x04, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01, 0x04, 0x00,
	0x06, 0x00, 0x0b, 0x01, 0x08, 0x00, 0x0c, 0x00, 0x48, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x70, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0c, 0x00, 0x30, 0x40,
	0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x08, 0x00, 0x4c, 0x03, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x41, 0x04, 0x00, 0x18, 0x00, 0x70, 0x00,
	0x08, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0c, 0x00, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x08, 0x00, 0x4c, 0x03, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x0c, 0x01, 0x04, 0x00, 0x26, 0x00, 0x70, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x30, 0xe0,
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x40, 0x01, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x32, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
	0x0c, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x46, 0x02, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x04, 0x00, 0x0c, 0x00, 0x70, 0x00, 0x08, 0x00, 0x08, 0x00,
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x10, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x46, 0x03, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x04, 0x00,
	0x0c, 0x00, 0x48, 0x00, 0x08, 0x00, 0x08, 0x00, 0x70, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 
};
#endif
const UCHAR ms2Defsr__MIDL_TypeFormatString[] = {
	0x00, 0x00, 0x11, 0x04, 0x02, 0x00, 0x30, 0xa0, 0x00, 0x00, 0x11, 0x08, 0x25, 0x5c, 0x30, 0x41, 0x00, 0x00, 0x11, 0x04, 0x04, 0x00, 0x02, 0x5c, 0xb5, 0x00, 0xfc, 0xff, 0x01, 0x00, 0x01, 0x00,
	0x11, 0x00, 0x04, 0x00, 0x02, 0x5c, 0xb5, 0x00, 0xfc, 0xff, 0x01, 0x00, 0x01, 0x00, 0x11, 0x04, 0x02, 0x00, 0x30, 0xe1, 0x00, 0x00, 0x00,
};