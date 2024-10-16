﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>

#include "icalls/System/System.Net.Sockets/SocketException.h"

template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>
struct Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Collections.Generic.IEqualityComparer`1<System.Threading.Thread>
struct IEqualityComparer_1_tDDAAA260364110462C075E50E4623348C5AA1268;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t80970C26B61C899A37E146F69BC51E2443270FC1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Threading.Thread,System.Diagnostics.StackTrace>
struct KeyCollection_t680178B5E16E74DDA4B763692AF82BE84A13BE1C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Int32>
struct TaskSocketAsyncEventArgs_1_tBF4E736DC8FCB94FF74068992FE40D092F521E90;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Net.Sockets.Socket>
struct Task_1_tCE998B52193474E1E5055E937912C252EFFF111F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Threading.Thread,System.Diagnostics.StackTrace>
struct ValueCollection_tCC2B72D213C2E613E730B1FE330436D4E958A8F4;
// System.Collections.Generic.Dictionary`2/Entry<System.Threading.Thread,System.Diagnostics.StackTrace>[]
struct EntryU5BU5D_t3390CB5BCEED5561F8F18C9F69C877CD34A46B21;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Threading.Thread[]
struct ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF;
// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE;
// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C;
// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.IOAsyncResult
struct IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Buffers.IPinnable
struct IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB;
// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED;
// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
// System.Net.Sockets.LingerOption
struct LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC;
// System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340;
// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B;
// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24;
// System.Net.Sockets.Socket/<>c
struct U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// System.Net.Sockets.SocketAsyncResult/<>c
struct U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405;
IL2CPP_EXTERN_C String_t* _stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D;
IL2CPP_EXTERN_C String_t* _stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA;
IL2CPP_EXTERN_C String_t* _stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064;
IL2CPP_EXTERN_C String_t* _stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7;
IL2CPP_EXTERN_C String_t* _stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983;
IL2CPP_EXTERN_C String_t* _stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3;
IL2CPP_EXTERN_C String_t* _stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72;
IL2CPP_EXTERN_C String_t* _stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229;
IL2CPP_EXTERN_C String_t* _stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123;
IL2CPP_EXTERN_C String_t* _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
IL2CPP_EXTERN_C String_t* _stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30;
IL2CPP_EXTERN_C String_t* _stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472;
IL2CPP_EXTERN_C String_t* _stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99;
IL2CPP_EXTERN_C String_t* _stringLiteral49FB20AF7D832AF20AD2F4170339D473684018D4;
IL2CPP_EXTERN_C String_t* _stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985;
IL2CPP_EXTERN_C String_t* _stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78;
IL2CPP_EXTERN_C String_t* _stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E;
IL2CPP_EXTERN_C String_t* _stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31;
IL2CPP_EXTERN_C String_t* _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
IL2CPP_EXTERN_C String_t* _stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D;
IL2CPP_EXTERN_C String_t* _stringLiteral5CAB08554552B91BA981CD02709F3608049743F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E;
IL2CPP_EXTERN_C String_t* _stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886;
IL2CPP_EXTERN_C String_t* _stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B;
IL2CPP_EXTERN_C String_t* _stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524;
IL2CPP_EXTERN_C String_t* _stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF;
IL2CPP_EXTERN_C String_t* _stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B;
IL2CPP_EXTERN_C String_t* _stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A62F4EEAA031F30B545A398D12F81D6413DE012;
IL2CPP_EXTERN_C String_t* _stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA;
IL2CPP_EXTERN_C String_t* _stringLiteral8398C464CEF2A8E224363DAF635848402299705A;
IL2CPP_EXTERN_C String_t* _stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA;
IL2CPP_EXTERN_C String_t* _stringLiteral89228C2272C203A431928EA4D77EC3641DC74018;
IL2CPP_EXTERN_C String_t* _stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00;
IL2CPP_EXTERN_C String_t* _stringLiteral98086E81726E63C07D5EE51033D818164107DDF6;
IL2CPP_EXTERN_C String_t* _stringLiteral9B2CD8C019DA477ED4CED9E62631D4E318780064;
IL2CPP_EXTERN_C String_t* _stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAC705511F599E168CB4A19DE96F050E694A04892;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E;
IL2CPP_EXTERN_C String_t* _stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172;
IL2CPP_EXTERN_C String_t* _stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2;
IL2CPP_EXTERN_C String_t* _stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A;
IL2CPP_EXTERN_C String_t* _stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B;
IL2CPP_EXTERN_C String_t* _stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87;
IL2CPP_EXTERN_C String_t* _stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57;
IL2CPP_EXTERN_C String_t* _stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7;
IL2CPP_EXTERN_C String_t* _stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF;
IL2CPP_EXTERN_C String_t* _stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B;
IL2CPP_EXTERN_C String_t* _stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D;
IL2CPP_EXTERN_C String_t* _stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
IL2CPP_EXTERN_C String_t* _stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D;
IL2CPP_EXTERN_C String_t* _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331;
IL2CPP_EXTERN_C String_t* _stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3;
IL2CPP_EXTERN_C String_t* _stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E;
IL2CPP_EXTERN_C String_t* _stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033;
IL2CPP_EXTERN_C String_t* _stringLiteralF9714C70F08B15BEF4414BD33A16130BD670348F;
IL2CPP_EXTERN_C String_t* _stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE;
IL2CPP_EXTERN_C String_t* _stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m021BDE42D4C8CFA7729AE1FA4645832CB8510A45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m43BD8FD04F14C57EA9B7F4017447E918FA3B2557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m50735B02E2653B889CED4DFEFA0C22917F620C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5B51F010936EF5BBF6820068B9143D37CB2D2D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6D733CC71CDE13E8737D066B069A9372CF3BABC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m579F59E32FB57F80500F3D341A737BEC441918BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE729A688F942830177F032C45AE3FD4EB5E5DD7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F800AC3A9BEE2C4459A42828FB152CD7A848A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAD8AB2F66B018A6AC6744664D44E4C95F93DF9C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m005D5A092A56062F7E23CE7234826D77A54AAFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m6BC6C5F209825F38868B72599159757677635886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1104DB0524C8D81E9C97C6068CC22A52CCE146EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m60371F3C4A4481F126B9BDBFDD9D69F464780693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_Pin_mEB11D0F8C8EB46D23F5B487EC428AA067637F873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeSocketHandle_RegisterForBlockingSyscall_mFCDDEAB42C472D9A8E46B76C0BAECEB7D1832A98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeSocketHandle_ReleaseHandle_m6861A54261EEC98F3DB4BB27251AA7ED6BD4DCE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskSocketAsyncEventArgs_1__ctor_mBDDC293E03F391AA6A73AD5F75511875CD4149DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m0E6C3891D0501FEF5BF1A72B7AA4D6310CE082DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__367_10_m6C7764F04456B7F5F6AF4C89020F9179B76C8060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__367_13_m5A14C5CE0B6C00EBC98A0D10C2F670E9F8E5FDC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__367_15_mD30BB7B50BADC326CF0BCD23DCDF15B6791C24CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__367_17_m402C11E460133671C680B46BAE5EF0108245E12B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__367_3_m02CCCD8CCE3176AB8A9DAA6BAA575BDE5F2D57D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__367_6_mFB25C6CBDC7BA018A88FCECD1FB04117D137F8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__367_8_m71E6A84E783DE7F080A6652C4151F897EA1E32C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_com;;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>
struct Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3390CB5BCEED5561F8F18C9F69C877CD34A46B21* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t680178B5E16E74DDA4B763692AF82BE84A13BE1C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCC2B72D213C2E613E730B1FE330436D4E958A8F4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.CollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Collections.HashtableExtensions
struct HashtableExtensions_t856DEECAB5172E908DD4944C65112B8D863DC779  : public RuntimeObject
{
};

// System.IOAsyncResult
struct IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374  : public RuntimeObject
{
	// System.AsyncCallback System.IOAsyncResult::async_callback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___async_callback_0;
	// System.Object System.IOAsyncResult::async_state
	RuntimeObject* ___async_state_1;
	// System.Threading.ManualResetEvent System.IOAsyncResult::wait_handle
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___wait_handle_2;
	// System.Boolean System.IOAsyncResult::completed_synchronously
	bool ___completed_synchronously_3;
	// System.Boolean System.IOAsyncResult::completed
	bool ___completed_4;
};
// Native definition for P/Invoke marshalling of System.IOAsyncResult
struct IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshaled_pinvoke
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
// Native definition for COM marshalling of System.IOAsyncResult
struct IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshaled_com
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.Sockets.LingerOption
struct LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98  : public RuntimeObject
{
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::lingerTime
	int32_t ___lingerTime_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Net.Sockets.MulticastOption
struct MulticastOption_t6DBC11706A7AE3B49A790A67619A09268D7EB4A1  : public RuntimeObject
{
};

// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_currentCount
	int32_t ___m_currentCount_0;
	// System.Int32 System.Threading.SemaphoreSlim::m_maxCount
	int32_t ___m_maxCount_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_waitCount
	int32_t ___m_waitCount_2;
	// System.Object System.Threading.SemaphoreSlim::m_lockObj
	RuntimeObject* ___m_lockObj_3;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_waitHandle
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_waitHandle_4;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim::m_asyncHead
	TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24* ___m_asyncHead_5;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim::m_asyncTail
	TaskNode_t082B7F2BBC9759BA9B6AD5F3760FE76BD5C6BA24* ___m_asyncTail_6;
};

struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.SemaphoreSlim::s_trueTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_trueTask_7;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.SemaphoreSlim::s_falseTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_falseTask_8;
	// System.Action`1<System.Object> System.Threading.SemaphoreSlim::s_cancellationTokenCanceledEventHandler
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_cancellationTokenCanceledEventHandler_9;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_13;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_14;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_15;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_16;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_17;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_18;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_19;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_20;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_21;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_22;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_23;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_24;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_25;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_26;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_27;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_40;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_41;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_42;
};

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames_2;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_3;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_4;
};

struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_5;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
};

struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.Net.Sockets.Socket/<>c
struct U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36  : public RuntimeObject
{
};

struct U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36_StaticFields
{
	// System.Net.Sockets.Socket/<>c System.Net.Sockets.Socket/<>c::<>9
	U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* ___U3CU3E9_0;
};

// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C  : public RuntimeObject
{
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket/CachedEventArgs::TaskAccept
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___TaskAccept_0;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket/CachedEventArgs::TaskReceive
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___TaskReceive_1;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket/CachedEventArgs::TaskSend
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___TaskSend_2;
};

// System.Net.Sockets.SocketAsyncResult/<>c
struct U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45  : public RuntimeObject
{
};

struct U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields
{
	// System.Net.Sockets.SocketAsyncResult/<>c System.Net.Sockets.SocketAsyncResult/<>c::<>9
	U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* ___U3CU3E9_0;
	// System.Threading.WaitCallback System.Net.Sockets.SocketAsyncResult/<>c::<>9__27_0
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___U3CU3E9__27_0_1;
};

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Threading.Thread>
struct Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____current_3;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9_StaticFields
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::s_values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___s_values_2;
};

// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;
};

// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t* ___type_3;
};

// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::disposed
	bool ___disposed_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.SocketAsyncEventArgs::in_progress
	int32_t ___in_progress_2;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::remote_ep
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remote_ep_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::current_socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___current_socket_4;
	// System.Net.Sockets.SocketAsyncResult System.Net.Sockets.SocketAsyncEventArgs::socket_async_result
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* ___socket_async_result_5;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CAcceptSocketU3Ek__BackingField_6;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_7;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_8;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___Completed_9;
};

// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.TypeConverterAttribute::<ConverterTypeName>k__BackingField
	String_t* ___U3CConverterTypeNameU3Ek__BackingField_1;
};

struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields
{
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* ___Default_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Sockets.Socket>
struct AsyncTaskMethodBuilder_1_t80349F578B92358FF136535BF1BCE759FA15D19F 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tCE998B52193474E1E5055E937912C252EFFF111F* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t80349F578B92358FF136535BF1BCE759FA15D19F_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tCE998B52193474E1E5055E937912C252EFFF111F* ___s_defaultResultTask_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5_0;
	// System.Int64 <PrivateImplementationDetails>::1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_3;
};

// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C  : public CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0
{
};

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340  : public IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374
{
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_5;
	// System.Net.Sockets.SocketOperation System.Net.Sockets.SocketAsyncResult::operation
	int32_t ___operation_6;
	// System.Exception System.Net.Sockets.SocketAsyncResult::DelayedException
	Exception_t* ___DelayedException_7;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncResult::EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___EndPoint_8;
	// System.Memory`1<System.Byte> System.Net.Sockets.SocketAsyncResult::Buffer
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___Buffer_9;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Offset
	int32_t ___Offset_10;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Size
	int32_t ___Size_11;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncResult::SockFlags
	int32_t ___SockFlags_12;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptSocket_13;
	// System.Net.IPAddress[] System.Net.Sockets.SocketAsyncResult::Addresses
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___Addresses_14;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Port
	int32_t ___Port_15;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncResult::Buffers
	RuntimeObject* ___Buffers_16;
	// System.Boolean System.Net.Sockets.SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_17;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::CurrentAddress
	int32_t ___CurrentAddress_18;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptedSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptedSocket_19;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Total
	int32_t ___Total_20;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::error
	int32_t ___error_21;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::EndCalled
	int32_t ___EndCalled_22;
};
// Native definition for P/Invoke marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_pinvoke : public IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshaled_pinvoke
{
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_pinvoke* ___DelayedException_7;
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___EndPoint_8;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptSocket_13;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};
// Native definition for COM marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_com : public IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshaled_com
{
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_com* ___DelayedException_7;
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___EndPoint_8;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptSocket_13;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// System.Net.Sockets.Socket/WSABUF
struct WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B 
{
	// System.Int32 System.Net.Sockets.Socket/WSABUF::len
	int32_t ___len_0;
	// System.IntPtr System.Net.Sockets.Socket/WSABUF::buf
	intptr_t ___buf_1;
};

// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Int32>
struct TaskSocketAsyncEventArgs_1_tBF4E736DC8FCB94FF74068992FE40D092F521E90  : public SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1::_builder
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ____builder_10;
	// System.Boolean System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1::_accessed
	bool ____accessed_11;
};

// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401  : public SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1::_builder
	AsyncTaskMethodBuilder_1_t80349F578B92358FF136535BF1BCE759FA15D19F ____builder_10;
	// System.Boolean System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1::_accessed
	bool ____accessed_11;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD 
{
	// System.Void* System.Buffers.MemoryHandle::_pointer
	void* ____pointer_0;
	// System.Runtime.InteropServices.GCHandle System.Buffers.MemoryHandle::_handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	// System.Buffers.IPinnable System.Buffers.MemoryHandle::_pinnable
	RuntimeObject* ____pinnable_2;
};
// Native definition for P/Invoke marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke
{
	void* ____pointer_0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	RuntimeObject* ____pinnable_2;
};
// Native definition for COM marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com
{
	void* ____pointer_0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	RuntimeObject* ____pinnable_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859  : public MulticastDelegate_t
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};

// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
	// System.Collections.Generic.List`1<System.Threading.Thread> System.Net.Sockets.SafeSocketHandle::blocking_threads
	List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* ___blocking_threads_6;
	// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace> System.Net.Sockets.SafeSocketHandle::threads_stacktraces
	Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* ___threads_stacktraces_7;
	// System.Boolean System.Net.Sockets.SafeSocketHandle::in_cleanup
	bool ___in_cleanup_8;
};

struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_StaticFields
{
	// System.Boolean System.Net.Sockets.SafeSocketHandle::THROW_ON_ABORT_RETRIES
	bool ___THROW_ON_ABORT_RETRIES_9;
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9  : public TaskSocketAsyncEventArgs_1_tBF4E736DC8FCB94FF74068992FE40D092F521E90
{
	// System.Boolean System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs::_wrapExceptionsInIOExceptions
	bool ____wrapExceptionsInIOExceptions_12;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
};

// Unity.ThrowStub
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(const Exception_t& unmarshaled, Exception_t_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(const Exception_t_marshaled_pinvoke& marshaled, Exception_t& unmarshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(Exception_t_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com(const Exception_t& unmarshaled, Exception_t_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com_back(const Exception_t_marshaled_com& marshaled, Exception_t& unmarshaled);
IL2CPP_EXTERN_C void Exception_t_marshal_com_cleanup(Exception_t_marshaled_com& marshaled);

// System.Void System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskSocketAsyncEventArgs_1__ctor_mBDDC293E03F391AA6A73AD5F75511875CD4149DE_gshared (TaskSocketAsyncEventArgs_1_tBF4E736DC8FCB94FF74068992FE40D092F521E90* __this, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Buffers.MemoryHandle System.Memory`1<System.Byte>::Pin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_mEB11D0F8C8EB46D23F5B487EC428AA067637F873_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;

// System.Void System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Int32>::.ctor()
inline void TaskSocketAsyncEventArgs_1__ctor_mBDDC293E03F391AA6A73AD5F75511875CD4149DE (TaskSocketAsyncEventArgs_1_tBF4E736DC8FCB94FF74068992FE40D092F521E90* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskSocketAsyncEventArgs_1_tBF4E736DC8FCB94FF74068992FE40D092F521E90*, const RuntimeMethod*))TaskSocketAsyncEventArgs_1__ctor_mBDDC293E03F391AA6A73AD5F75511875CD4149DE_gshared)(__this, method);
}
// System.Void System.Net.Sockets.Socket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBED1A732D3342D1A48A4088765AA6159F66308A3 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::CompleteAccept(System.Net.Sockets.Socket,System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_CompleteAccept_m1318F59CE726ED625516D2FE6769493F4D4F9C3D (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___s0, TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___saea1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::CompleteSendReceive(System.Net.Sockets.Socket,System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_CompleteSendReceive_m56B142FD1AA39E5AFE655A9AAB5B531AA9CDF14C (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___s0, Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___saea1, bool ___isReceive2, const RuntimeMethod* method) ;
// System.Object System.IOAsyncResult::get_AsyncState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m1D23CC1BEB47E20FA336837BF97C292AE6B17629 (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocketAsyncEventArgs_get_AcceptSocket_mF12CD5B1067314F3970759A5AE7C94BF1070A4CE_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_CurrentSocket()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_AddressFamily_m42C390D31345314080EC35356ACFBBFF7E1123E5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_SocketType_mAFBEF108992F069AF0B8AD26D47EBBEADB8D2661_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_ProtocolType_m364A0E823BF3EA78DAFC1ED3A6B39658FB6A23BB_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Net.Sockets.SafeSocketHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m91002BA76E3B56D33CDEB6D30EFE923F92822CE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___family0, int32_t ___type1, int32_t ___proto2, SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___safe_handle3, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_AcceptSocket_m1F265F9F17EE63050B267DFE9B5CA0F3E487B93B_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Complete_internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* Socket_Accept_m11B031FF408E1899034B993B352178D9D6B37C1A (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Accept(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Accept_mAF83623B54FEA675F0F16C29EACE1F24DE6C02FF (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___acceptSocket0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mD191B47C619B02AB538B7A00721E689AAFBBD3EA (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___s0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Memory`1<System.Byte>,System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_m42AB6119254FA391A818CADF23C60441ECA29152 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, int32_t* ___errorCode4, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m85EF6089B3B9ECB2A9737E9C694BCCFFEAE48CF1 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___s0, int32_t ___total1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_EndConnect_m10F5B4F43A68F96891DB3AEF493AB160CD8104D6 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_GetSocketOption_m39C453F9FA4D1EC664C660851CED73271B1162A2 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___optionLevel0, int32_t ___optionName1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::BeginMConnect(System.Net.Sockets.SocketAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_BeginMConnect_mACF037091CD1CDEBF28695402C2CE7B8E230A6AE (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* ___sockares0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::EndDisconnect(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_EndDisconnect_mCD874CA31D96229FBF311AB941DFB1FAE4897BE8 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Disconnect_mFECF870A7A5604A9AFD79DBB6354F1697A96C422 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, bool ___reuseSocket0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBytesTransferred(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_SetBytesTransferred_m5ACAA13E707A9D5B8F75FD06DD54AB6F21F60585 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, int32_t, int32_t, const RuntimeMethod*))Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Buffers.MemoryHandle System.Memory`1<System.Byte>::Pin()
inline MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_mEB11D0F8C8EB46D23F5B487EC428AA067637F873 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_Pin_mEB11D0F8C8EB46D23F5B487EC428AA067637F873_gshared)(__this, method);
}
// System.Void System.Buffers.MemoryHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle_Dispose_m1F3EAA54B49EACFC7E489AEF1FF630553FEBE229 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, const RuntimeMethod* method) ;
// System.Void* System.Buffers.MemoryHandle::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* MemoryHandle_get_Pointer_mB37B69B8014746F855683C47FF2E6EC46D656CA8_inline (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_internal_mFFD3DE5D5B14A0730765CE470002536254B94789 (SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___safeHandle0, uint8_t* ___buffer1, int32_t ___count2, int32_t ___flags3, int32_t* ___error4, bool ___blocking5, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, int32_t ___total0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_mF4189DF1BB210034B41CC593C0FEC2F21D8DFF47 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___buffers0, int32_t ___socketFlags1, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::EndReceiveFrom_internal(System.Net.Sockets.SocketAsyncResult,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndReceiveFrom_internal_m460268E3D25241DA2EFCBBCA8B9A553AD07C6590 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* ___sockares0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___ares1, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Memory`1<System.Byte>,System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Net.Sockets.SocketError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_m6C9B4FF70B221818FD01FBE94E5635B169686B70 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** ___remoteEP4, int32_t* ___errorCode5, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m5E9DDE94C8009DE11B8CE2EF1611A5CE8A900AC3 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, int32_t ___socketError0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndSend_mC636AB62DC23FA2E8BDB612F5CDB203E6CAE4D17 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_m3174031DF8ADFDAF158BEB0D8AC5CBB445F8D21C (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___buffers0, int32_t ___socketFlags1, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::EndSendTo(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndSendTo_mC35D110ED10CFAFEF443A1AEFCDEA438DE0101EC (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_icall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_WSAGetLastError_icall_m44B3CDD4C14F19AD07549E0FFF2CB9497B5897BD (const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m1B3DF3F51BBF050C18F933B36027A8A4902668C4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.String System.Exception::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Win32Exception_get_NativeErrorCode_m33C1D176D9178C36DA32F8FEC251B923EE53CE5E_inline (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.LingerOption::set_Enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LingerOption_set_Enabled_mEDF2FED046EA58F9C23BEF3BF1184C3A890419DB_inline (LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.LingerOption::set_LingerTime(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LingerOption_set_LingerTime_mDC6B06F96C04C5A69E19912EBB37DC5BDE5A6DFB_inline (LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89 (SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629* __this, bool ___ownsHandle0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>::.ctor()
inline void Dictionary_2__ctor_m50735B02E2653B889CED4DFEFA0C22917F620C78 (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Net.Sockets.Socket::Blocking_icall(System.IntPtr,System.Boolean,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Blocking_icall_m822EDC3A6E0C02C7351B93395BFC0D6103997323 (intptr_t ___socket0, bool ___block1, int32_t* ___error2, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Shutdown_icall(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Shutdown_icall_m3AD0F420C6DB7C30FBC8741BEA5D1F0D3ED7F14D (intptr_t ___socket0, int32_t ___how1, int32_t* ___error2, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Threading.Thread>::GetEnumerator()
inline Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936 List_1_GetEnumerator_mAD8AB2F66B018A6AC6744664D44E4C95F93DF9C5 (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936 (*) (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Threading.Thread>::Dispose()
inline void Enumerator_Dispose_m6D733CC71CDE13E8737D066B069A9372CF3BABC9 (Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Threading.Thread>::get_Current()
inline Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Enumerator_get_Current_mE729A688F942830177F032C45AE3FD4EB5E5DD7B_inline (Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936* __this, const RuntimeMethod* method)
{
	return ((  Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* (*) (Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>::get_Item(TKey)
inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* Dictionary_2_get_Item_m5B51F010936EF5BBF6820068B9143D37CB2D2D84 (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* __this, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___key0, const RuntimeMethod* method)
{
	return ((  StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* (*) (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED*, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Threading.Thread>::MoveNext()
inline bool Enumerator_MoveNext_m579F59E32FB57F80500F3D341A737BEC441918BE (Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Threading.Thread>::get_Count()
inline int32_t List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_inline (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Threading.Thread>::get_Item(System.Int32)
inline Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* List_1_get_Item_m60371F3C4A4481F126B9BDBFDD9D69F464780693 (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* (*) (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB (const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::cancel_blocking_socket_operation(System.Threading.Thread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_cancel_blocking_socket_operation_mF7D69972B1CC9D769A3E5BF9946125C5CC661172 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m2EB745280938351E12D82BB27C011DB8F0EEDD83 (RuntimeObject* ___obj0, int32_t ___millisecondsTimeout1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close_icall(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_icall_mBF92507692212E88F568DED543121A71DC710701 (intptr_t ___socket0, int32_t* ___error1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::.ctor()
inline void List_1__ctor_m1104DB0524C8D81E9C97C6068CC22A52CCE146EC (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::Add(T)
inline void List_1_Add_m5F800AC3A9BEE2C4459A42828FB152CD7A848A8C_inline (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* __this, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m269D00E49783BC3205FD5C7E879888884D72107C (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, bool ___fNeedFileInfo0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>::Add(TKey,TValue)
inline void Dictionary_2_Add_m021BDE42D4C8CFA7729AE1FA4645832CB8510A45 (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* __this, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___key0, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED*, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Threading.Thread>::Remove(T)
inline bool List_1_Remove_m6BC6C5F209825F38868B72599159757677635886 (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* __this, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Thread>::IndexOf(T)
inline int32_t List_1_IndexOf_m005D5A092A56062F7E23CE7234826D77A54AAFC2 (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* __this, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>::Remove(TKey)
inline bool Dictionary_2_Remove_m43BD8FD04F14C57EA9B7F4017447E918FA3B2557 (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* __this, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED*, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void System.Threading.Monitor::Pulse(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Pulse_mCCD5C110AC8E4CD538E367C3414CA4E93F045419 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8 (String_t* ___variable0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult__ctor_m2123FFF2C2A56DB840E109348FEEA575B5B691E4 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_Dispose_mA5B8D8ADB8521BC9219061C13CB7C07BD02E16DB (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_BytesTransferred_mAB2EB75BE1BB7B97DBEFCAF3DD42E26BC787D625_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mF0FFF25301C90C9B2E0769E48203543140B6A01C_inline (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* __this, RuntimeObject* ___sender0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED*, RuntimeObject*, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.IntPtr System.Net.Sockets.Socket::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Socket_get_Handle_mBF42AC5E9403C23BE532F17EE337BF9F150A0256 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.IOAsyncResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOAsyncResult__ctor_mAA7211B9E6FDF23D0012354FEE350B6B5EB786F4 (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_CleanedUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_CleanedUp_m8F6EDAE37C56CBC282D3EAF9D93B5726EEC85988 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.IOAsyncResult::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOAsyncResult_set_IsCompleted_m72D907352B8AC32DF47864E4F4EDFADEC825A6F9 (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.IOAsyncResult::get_CompletedSynchronously()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IOAsyncResult_get_CompletedSynchronously_m26279BC02AFFE83009A7EEABFFF58EEB2D12CD24_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) ;
// System.AsyncCallback System.IOAsyncResult::get_AsyncCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::UnsafeQueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_m86EDB21C1D2C34E8F3409D542EF4CAC6ACF69497 (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Int32 System.Threading.SemaphoreSlim::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SemaphoreSlim_Release_m4F3CB668D91DEE067A67266C266FEE5AADF56148 (SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* __this, const RuntimeMethod* method) ;
// System.Void System.IOAsyncResult::set_CompletedSynchronously(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC11B6F52B2C5BA43E6B14CF8338841CAA0ABF26 (U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* __this, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Attribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_m776667F265B8ABFFF13E3DD51B1BC5C2B5611F43 (const RuntimeMethod* method) ;
// System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Win32Exception_GetErrorMessage_mE857D9093D6D366D960BD8A8FCCF22DF6FB92728 (int32_t ___error0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_m289660079DD06ADACDAABE3BC8948AF7C73A8602 (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_m3B89FDD35A0B6E96CE69B2FAD48FB832402167AC (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
inline void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline)(__this, ___obj0, ___start1, ___length2, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32TaskSocketAsyncEventArgs__ctor_m2D28C3F386AE7BDAC321D2E13CA613FCCC9F7D60 (Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskSocketAsyncEventArgs_1__ctor_mBDDC293E03F391AA6A73AD5F75511875CD4149DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskSocketAsyncEventArgs_1__ctor_mBDDC293E03F391AA6A73AD5F75511875CD4149DE(__this, TaskSocketAsyncEventArgs_1__ctor_mBDDC293E03F391AA6A73AD5F75511875CD4149DE_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Sockets.Socket/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m038CF32946815BC1EC22307A7B49E3CA24C281AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* L_0 = (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36*)il2cpp_codegen_object_new(U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBED1A732D3342D1A48A4088765AA6159F66308A3(L_0, NULL);
		((U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBED1A732D3342D1A48A4088765AA6159F66308A3 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_0(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_0_m374195043B44F151293B98C58D3C36A426D54285 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___s0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___s0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = ___e1;
		il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		Socket_CompleteAccept_m1318F59CE726ED625516D2FE6769493F4D4F9C3D(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_0, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), ((TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401*)CastclassClass((RuntimeObject*)L_1, TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_1(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_1_mB75869C75ACBA247A3EF6650633CC7101DD531BC (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___s0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___s0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = ___e1;
		il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		Socket_CompleteSendReceive_m56B142FD1AA39E5AFE655A9AAB5B531AA9CDF14C(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_0, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), ((Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9*)CastclassSealed((RuntimeObject*)L_1, Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9_il2cpp_TypeInfo_var)), (bool)1, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_2(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_2_m02D7CD9BE2BFEC708C85C3B8A9D67BAA4DD92FD8 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___s0, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___s0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = ___e1;
		il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		Socket_CompleteSendReceive_m56B142FD1AA39E5AFE655A9AAB5B531AA9CDF14C(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_0, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), ((Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9*)CastclassSealed((RuntimeObject*)L_1, Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9_il2cpp_TypeInfo_var)), (bool)0, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_3(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_3_m02CCCD8CCE3176AB8A9DAA6BAA575BDE5F2D57D6 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___ares0;
		RuntimeObject* L_1;
		L_1 = IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)CastclassClass((RuntimeObject*)L_1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = V_0;
		int32_t* L_3 = (&L_2->___in_progress_2);
		il2cpp_codegen_memory_barrier();
		int32_t L_4;
		L_4 = Interlocked_Exchange_m1D23CC1BEB47E20FA336837BF97C292AE6B17629(L_3, 0, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B2CD8C019DA477ED4CED9E62631D4E318780064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__367_3_m02CCCD8CCE3176AB8A9DAA6BAA575BDE5F2D57D6_RuntimeMethod_var)));
	}

IL_002b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = V_0;
					Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7;
					L_7 = SocketAsyncEventArgs_get_AcceptSocket_mF12CD5B1067314F3970759A5AE7C94BF1070A4CE_inline(L_6, NULL);
					if (L_7)
					{
						goto IL_0092;
					}
				}
				{
					SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = V_0;
					SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_9 = V_0;
					Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10;
					L_10 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_9, NULL);
					int32_t L_11;
					L_11 = Socket_get_AddressFamily_m42C390D31345314080EC35356ACFBBFF7E1123E5_inline(L_10, NULL);
					SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_12 = V_0;
					Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_13;
					L_13 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_12, NULL);
					int32_t L_14;
					L_14 = Socket_get_SocketType_mAFBEF108992F069AF0B8AD26D47EBBEADB8D2661_inline(L_13, NULL);
					SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_15 = V_0;
					Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_16;
					L_16 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_15, NULL);
					int32_t L_17;
					L_17 = Socket_get_ProtocolType_m364A0E823BF3EA78DAFC1ED3A6B39658FB6A23BB_inline(L_16, NULL);
					Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_18 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
					Socket__ctor_m91002BA76E3B56D33CDEB6D30EFE923F92822CE4(L_18, L_11, L_14, L_17, (SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE*)NULL, NULL);
					SocketAsyncEventArgs_set_AcceptSocket_m1F265F9F17EE63050B267DFE9B5CA0F3E487B93B_inline(L_8, L_18, NULL);
				}

IL_0092:
				{
					SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_19 = V_0;
					SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0(L_19, NULL);
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_20 = V_0;
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_21 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_22;
				L_22 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_21, NULL);
				RuntimeObject* L_23 = ___ares0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_24;
				L_24 = Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09(L_22, L_23, NULL);
				SocketAsyncEventArgs_set_AcceptSocket_m1F265F9F17EE63050B267DFE9B5CA0F3E487B93B_inline(L_20, L_24, NULL);
				goto IL_0099;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0040_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_004f_1;
				}
				throw e;
			}

CATCH_0040_1:
			{// begin catch(System.Net.Sockets.SocketException)
				V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_25 = V_0;
				SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_26 = V_1;
				int32_t L_27;
				L_27 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_26, NULL);
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_25, L_27, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0099;
			}// end catch (depth: 2)

CATCH_004f_1:
			{// begin catch(System.ObjectDisposedException)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_28 = V_0;
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_28, ((int32_t)995), NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0099;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_4(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_4_m802B9387C24EC09B0909D35D8AE9962F52B6C188 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* L_0 = ___ares0;
		V_0 = ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var));
		V_1 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL;
	}
	try
	{// begin try (depth: 1)
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_1 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = L_1->___AcceptSocket_13;
			if (L_2)
			{
				goto IL_001f_1;
			}
		}
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_3 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = L_3->___socket_5;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5;
			L_5 = Socket_Accept_m11B031FF408E1899034B993B352178D9D6B37C1A(L_4, NULL);
			V_1 = L_5;
			goto IL_0032_1;
		}

IL_001f_1:
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_6 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = L_6->___AcceptSocket_13;
			V_1 = L_7;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_8 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9 = L_8->___socket_5;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10 = V_1;
			Socket_Accept_mAF83623B54FEA675F0F16C29EACE1F24DE6C02FF(L_9, L_10, NULL);
		}

IL_0032_1:
		{
			goto IL_003e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_11 = V_0;
		Exception_t* L_12 = V_2;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_11, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0045;
	}// end catch (depth: 1)

IL_003e:
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_13 = V_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = V_1;
		SocketAsyncResult_Complete_mD191B47C619B02AB538B7A00721E689AAFBBD3EA(L_13, L_14, NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_5(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_5_m695C3A5FBD0C51D71C6D5E1D1699AC01A91BF528 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* L_0 = ___ares0;
		V_0 = ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var));
		V_1 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL;
	}
	try
	{// begin try (depth: 1)
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_1 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = L_1->___AcceptSocket_13;
			if (L_2)
			{
				goto IL_001f_1;
			}
		}
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_3 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = L_3->___socket_5;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5;
			L_5 = Socket_Accept_m11B031FF408E1899034B993B352178D9D6B37C1A(L_4, NULL);
			V_1 = L_5;
			goto IL_0032_1;
		}

IL_001f_1:
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_6 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = L_6->___AcceptSocket_13;
			V_1 = L_7;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_8 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9 = L_8->___socket_5;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10 = V_1;
			Socket_Accept_mAF83623B54FEA675F0F16C29EACE1F24DE6C02FF(L_9, L_10, NULL);
		}

IL_0032_1:
		{
			goto IL_003e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_11 = V_0;
		Exception_t* L_12 = V_3;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_11, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0093;
	}// end catch (depth: 1)

IL_003e:
	{
		V_2 = 0;
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_13 = V_0;
		int32_t L_14 = L_13->___Size_11;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	try
	{// begin try (depth: 1)
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = V_1;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_16 = V_0;
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_17 = L_16->___Buffer_9;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_18 = V_0;
			int32_t L_19 = L_18->___Offset_10;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_20 = V_0;
			int32_t L_21 = L_20->___Size_11;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_22 = V_0;
			int32_t L_23 = L_22->___SockFlags_12;
			int32_t L_24;
			L_24 = Socket_Receive_m42AB6119254FA391A818CADF23C60441ECA29152(L_15, L_17, L_19, L_21, L_23, (&V_4), NULL);
			V_2 = L_24;
			int32_t L_25 = V_4;
			if (!L_25)
			{
				goto IL_007d_1;
			}
		}
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_26 = V_0;
			int32_t L_27 = V_4;
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_28 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
			SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_28, L_27, NULL);
			SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_26, L_28, NULL);
			goto IL_0093;
		}

IL_007d_1:
		{
			goto IL_008b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007f;
		}
		throw e;
	}

CATCH_007f:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_29 = V_0;
		Exception_t* L_30 = V_5;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_29, L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0093;
	}// end catch (depth: 1)

IL_008b:
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_31 = V_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_32 = V_1;
		int32_t L_33 = V_2;
		SocketAsyncResult_Complete_m85EF6089B3B9ECB2A9737E9C694BCCFFEAE48CF1(L_31, L_32, L_33, NULL);
	}

IL_0093:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_6(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_6_mFB25C6CBDC7BA018A88FCECD1FB04117D137F8F6 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___ares0;
		RuntimeObject* L_1;
		L_1 = IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)CastclassClass((RuntimeObject*)L_1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = V_0;
		int32_t* L_3 = (&L_2->___in_progress_2);
		il2cpp_codegen_memory_barrier();
		int32_t L_4;
		L_4 = Interlocked_Exchange_m1D23CC1BEB47E20FA336837BF97C292AE6B17629(L_3, 0, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B2CD8C019DA477ED4CED9E62631D4E318780064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__367_6_mFB25C6CBDC7BA018A88FCECD1FB04117D137F8F6_RuntimeMethod_var)));
	}

IL_002b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = V_0;
				SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8;
				L_8 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_7, NULL);
				RuntimeObject* L_9 = ___ares0;
				Socket_EndConnect_m10F5B4F43A68F96891DB3AEF493AB160CD8104D6(L_8, L_9, NULL);
				goto IL_005e;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_003a_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0049_1;
				}
				throw e;
			}

CATCH_003a_1:
			{// begin catch(System.Net.Sockets.SocketException)
				V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_10 = V_0;
				SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_11 = V_1;
				int32_t L_12;
				L_12 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_11, NULL);
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_10, L_12, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_005e;
			}// end catch (depth: 2)

CATCH_0049_1:
			{// begin catch(System.ObjectDisposedException)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_13 = V_0;
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_13, ((int32_t)995), NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_005e;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_7(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_7_m624ACE294D17E142E9B57F7D3DB735CEDEBEFE7C (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* L_0 = ___ares0;
		V_0 = ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_1 = V_0;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_2 = L_1->___EndPoint_8;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_3 = V_0;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_4 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_4, ((int32_t)10049), NULL);
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_3, L_4, NULL);
		return;
	}

IL_0020:
	{
	}
	try
	{// begin try (depth: 1)
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_5 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = L_5->___socket_5;
			RuntimeObject* L_7;
			L_7 = Socket_GetSocketOption_m39C453F9FA4D1EC664C660851CED73271B1162A2(L_6, ((int32_t)65535), ((int32_t)4103), NULL);
			V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_7, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
			int32_t L_8 = V_1;
			if (L_8)
			{
				goto IL_0083_1;
			}
		}
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_9 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10 = L_9->___socket_5;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_11 = V_0;
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_12 = L_11->___EndPoint_8;
			L_10->___seed_endpoint_20 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___seed_endpoint_20), (void*)L_12);
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_13 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = L_13->___socket_5;
			L_14->___is_connected_25 = (bool)1;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_15 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_16 = L_15->___socket_5;
			L_16->___is_bound_24 = (bool)1;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_17 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_18 = L_17->___socket_5;
			L_18->___connect_in_progress_27 = (bool)0;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_19 = V_0;
			L_19->___error_21 = 0;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_20 = V_0;
			SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(L_20, NULL);
			goto IL_00e2;
		}

IL_0083_1:
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_21 = V_0;
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_22 = L_21->___Addresses_14;
			if (L_22)
			{
				goto IL_00a5_1;
			}
		}
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_23 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_24 = L_23->___socket_5;
			L_24->___connect_in_progress_27 = (bool)0;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_25 = V_0;
			int32_t L_26 = V_1;
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_27 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
			SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_27, L_26, NULL);
			SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_25, L_27, NULL);
			goto IL_00e2;
		}

IL_00a5_1:
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_28 = V_0;
			int32_t L_29 = L_28->___CurrentAddress_18;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_30 = V_0;
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_31 = L_30->___Addresses_14;
			if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
			{
				goto IL_00c3_1;
			}
		}
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_32 = V_0;
			int32_t L_33 = V_1;
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_34 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
			SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_34, L_33, NULL);
			SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_32, L_34, NULL);
			goto IL_00e2;
		}

IL_00c3_1:
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_35 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
			bool L_36;
			L_36 = Socket_BeginMConnect_mACF037091CD1CDEBF28695402C2CE7B8E230A6AE(L_35, NULL);
			goto IL_00e2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		throw e;
	}

CATCH_00cc:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_37 = V_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_38 = L_37->___socket_5;
		L_38->___connect_in_progress_27 = (bool)0;
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_39 = V_0;
		Exception_t* L_40 = V_2;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_39, L_40, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e2;
	}// end catch (depth: 1)

IL_00e2:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_8(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_8_m71E6A84E783DE7F080A6652C4151F897EA1E32C0 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___ares0;
		RuntimeObject* L_1;
		L_1 = IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)CastclassClass((RuntimeObject*)L_1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = V_0;
		int32_t* L_3 = (&L_2->___in_progress_2);
		il2cpp_codegen_memory_barrier();
		int32_t L_4;
		L_4 = Interlocked_Exchange_m1D23CC1BEB47E20FA336837BF97C292AE6B17629(L_3, 0, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B2CD8C019DA477ED4CED9E62631D4E318780064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__367_8_m71E6A84E783DE7F080A6652C4151F897EA1E32C0_RuntimeMethod_var)));
	}

IL_002b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = V_0;
				SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8;
				L_8 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_7, NULL);
				RuntimeObject* L_9 = ___ares0;
				Socket_EndDisconnect_mCD874CA31D96229FBF311AB941DFB1FAE4897BE8(L_8, L_9, NULL);
				goto IL_005e;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_003a_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0049_1;
				}
				throw e;
			}

CATCH_003a_1:
			{// begin catch(System.Net.Sockets.SocketException)
				V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_10 = V_0;
				SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_11 = V_1;
				int32_t L_12;
				L_12 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_11, NULL);
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_10, L_12, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_005e;
			}// end catch (depth: 2)

CATCH_0049_1:
			{// begin catch(System.ObjectDisposedException)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_13 = V_0;
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_13, ((int32_t)995), NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_005e;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_9(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_9_mF99985871CC04F99411C3EE2D1354FF13B0EEDB2 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* L_0 = ___ares0;
		V_0 = ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var));
	}
	try
	{// begin try (depth: 1)
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_1 = V_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = L_1->___socket_5;
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_3 = V_0;
		bool L_4 = L_3->___ReuseSocket_17;
		Socket_Disconnect_mFECF870A7A5604A9AFD79DBB6354F1697A96C422(L_2, L_4, NULL);
		goto IL_0024;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_5 = V_0;
		Exception_t* L_6 = V_1;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_5, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}// end catch (depth: 1)

IL_0024:
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_7 = V_0;
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(L_7, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_10(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_10_m6C7764F04456B7F5F6AF4C89020F9179B76C8060 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___ares0;
		RuntimeObject* L_1;
		L_1 = IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)CastclassClass((RuntimeObject*)L_1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = V_0;
		int32_t* L_3 = (&L_2->___in_progress_2);
		il2cpp_codegen_memory_barrier();
		int32_t L_4;
		L_4 = Interlocked_Exchange_m1D23CC1BEB47E20FA336837BF97C292AE6B17629(L_3, 0, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B2CD8C019DA477ED4CED9E62631D4E318780064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__367_10_m6C7764F04456B7F5F6AF4C89020F9179B76C8060_RuntimeMethod_var)));
	}

IL_002b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = V_0;
				SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = V_0;
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9;
				L_9 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_8, NULL);
				RuntimeObject* L_10 = ___ares0;
				int32_t L_11;
				L_11 = Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364(L_9, L_10, NULL);
				SocketAsyncEventArgs_SetBytesTransferred_m5ACAA13E707A9D5B8F75FD06DD54AB6F21F60585(L_7, L_11, NULL);
				goto IL_0064;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0040_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_004f_1;
				}
				throw e;
			}

CATCH_0040_1:
			{// begin catch(System.Net.Sockets.SocketException)
				V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_12 = V_0;
				SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_13 = V_1;
				int32_t L_14;
				L_14 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_13, NULL);
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_12, L_14, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0064;
			}// end catch (depth: 2)

CATCH_004f_1:
			{// begin catch(System.ObjectDisposedException)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_15 = V_0;
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_15, ((int32_t)995), NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0064;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_11(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_11_mF302618690648FDA9BDAEAD4AA9231336E68386A (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_Pin_mEB11D0F8C8EB46D23F5B487EC428AA067637F873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* V_0 = NULL;
	int32_t V_1 = 0;
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD V_2;
	memset((&V_2), 0, sizeof(V_2));
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* L_0 = ___ares0;
		V_0 = ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var));
		V_1 = 0;
	}
	try
	{// begin try (depth: 1)
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_1 = V_0;
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_2 = (&L_1->___Buffer_9);
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_3 = V_0;
			int32_t L_4 = L_3->___Offset_10;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_5 = V_0;
			int32_t L_6 = L_5->___Size_11;
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_7;
			L_7 = Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_inline(L_2, L_4, L_6, Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var);
			V_3 = L_7;
			MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_8;
			L_8 = Memory_1_Pin_mEB11D0F8C8EB46D23F5B487EC428AA067637F873((&V_3), Memory_1_Pin_mEB11D0F8C8EB46D23F5B487EC428AA067637F873_RuntimeMethod_var);
			V_2 = L_8;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0060_1:
				{// begin finally (depth: 2)
					MemoryHandle_Dispose_m1F3EAA54B49EACFC7E489AEF1FF630553FEBE229((&V_2), NULL);
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_9 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_10 = L_9->___socket_5;
				SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* L_11 = L_10->___m_Handle_19;
				void* L_12;
				L_12 = MemoryHandle_get_Pointer_mB37B69B8014746F855683C47FF2E6EC46D656CA8_inline((&V_2), NULL);
				SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_13 = V_0;
				int32_t L_14 = L_13->___Size_11;
				SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_15 = V_0;
				int32_t L_16 = L_15->___SockFlags_12;
				SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_17 = V_0;
				int32_t* L_18 = (&L_17->___error_21);
				SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_19 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_20 = L_19->___socket_5;
				bool L_21 = L_20->___is_blocking_23;
				il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
				int32_t L_22;
				L_22 = Socket_Receive_internal_mFFD3DE5D5B14A0730765CE470002536254B94789(L_11, (uint8_t*)L_12, L_14, L_16, L_18, L_21, NULL);
				V_1 = L_22;
				goto IL_006e_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_006e_1:
		{
			goto IL_007c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0070;
		}
		throw e;
	}

CATCH_0070:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_23 = V_0;
		Exception_t* L_24 = V_4;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_23, L_24, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_007c:
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_25 = V_0;
		int32_t L_26 = V_1;
		SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E(L_25, L_26, NULL);
	}

IL_0083:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_12(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_12_m98E24FD18071B79AC0F0557EC4F838AC497892C0 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* L_0 = ___ares0;
		V_0 = ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var));
		V_1 = 0;
	}
	try
	{// begin try (depth: 1)
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_1 = V_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = L_1->___socket_5;
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_3 = V_0;
		RuntimeObject* L_4 = L_3->___Buffers_16;
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_5 = V_0;
		int32_t L_6 = L_5->___SockFlags_12;
		int32_t L_7;
		L_7 = Socket_Receive_mF4189DF1BB210034B41CC593C0FEC2F21D8DFF47(L_2, L_4, L_6, NULL);
		V_1 = L_7;
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_8 = V_0;
		Exception_t* L_9 = V_2;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_8, L_9, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0034;
	}// end catch (depth: 1)

IL_002d:
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_10 = V_0;
		int32_t L_11 = V_1;
		SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E(L_10, L_11, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_13(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_13_m5A14C5CE0B6C00EBC98A0D10C2F670E9F8E5FDC7 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___ares0;
		RuntimeObject* L_1;
		L_1 = IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)CastclassClass((RuntimeObject*)L_1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = V_0;
		int32_t* L_3 = (&L_2->___in_progress_2);
		il2cpp_codegen_memory_barrier();
		int32_t L_4;
		L_4 = Interlocked_Exchange_m1D23CC1BEB47E20FA336837BF97C292AE6B17629(L_3, 0, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B2CD8C019DA477ED4CED9E62631D4E318780064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__367_13_m5A14C5CE0B6C00EBC98A0D10C2F670E9F8E5FDC7_RuntimeMethod_var)));
	}

IL_002b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = V_0;
				SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = V_0;
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9;
				L_9 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_8, NULL);
				RuntimeObject* L_10 = ___ares0;
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_11 = V_0;
				int32_t L_12;
				L_12 = Socket_EndReceiveFrom_internal_m460268E3D25241DA2EFCBBCA8B9A553AD07C6590(L_9, ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_10, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), L_11, NULL);
				SocketAsyncEventArgs_SetBytesTransferred_m5ACAA13E707A9D5B8F75FD06DD54AB6F21F60585(L_7, L_12, NULL);
				goto IL_006a;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0046_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0055_1;
				}
				throw e;
			}

CATCH_0046_1:
			{// begin catch(System.Net.Sockets.SocketException)
				V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_13 = V_0;
				SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_14 = V_1;
				int32_t L_15;
				L_15 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_14, NULL);
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_13, L_15, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_006a;
			}// end catch (depth: 2)

CATCH_0055_1:
			{// begin catch(System.ObjectDisposedException)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_16 = V_0;
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_16, ((int32_t)995), NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_006a;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_14(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_14_m2502D94E58E7B239017969E7BDD16DAA9473DB87 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* L_0 = ___ares0;
		V_0 = ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var));
		V_1 = 0;
	}
	try
	{// begin try (depth: 1)
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_1 = V_0;
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = L_1->___socket_5;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_3 = V_0;
			Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_4 = L_3->___Buffer_9;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_5 = V_0;
			int32_t L_6 = L_5->___Offset_10;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_7 = V_0;
			int32_t L_8 = L_7->___Size_11;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_9 = V_0;
			int32_t L_10 = L_9->___SockFlags_12;
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_11 = V_0;
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** L_12 = (&L_11->___EndPoint_8);
			int32_t L_13;
			L_13 = Socket_ReceiveFrom_m6C9B4FF70B221818FD01FBE94E5635B169686B70(L_2, L_4, L_6, L_8, L_10, L_12, (&V_2), NULL);
			V_1 = L_13;
			int32_t L_14 = V_2;
			if (!L_14)
			{
				goto IL_0046_1;
			}
		}
		{
			SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_15 = V_0;
			int32_t L_16 = V_2;
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_17 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
			SocketException__ctor_m5E9DDE94C8009DE11B8CE2EF1611A5CE8A900AC3(L_17, L_16, NULL);
			SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_15, L_17, NULL);
			goto IL_0059;
		}

IL_0046_1:
		{
			goto IL_0052;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_18 = V_0;
		Exception_t* L_19 = V_3;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_18, L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0059;
	}// end catch (depth: 1)

IL_0052:
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_20 = V_0;
		int32_t L_21 = V_1;
		SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E(L_20, L_21, NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_15(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_15_mD30BB7B50BADC326CF0BCD23DCDF15B6791C24CB (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___ares0;
		RuntimeObject* L_1;
		L_1 = IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)CastclassClass((RuntimeObject*)L_1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = V_0;
		int32_t* L_3 = (&L_2->___in_progress_2);
		il2cpp_codegen_memory_barrier();
		int32_t L_4;
		L_4 = Interlocked_Exchange_m1D23CC1BEB47E20FA336837BF97C292AE6B17629(L_3, 0, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B2CD8C019DA477ED4CED9E62631D4E318780064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__367_15_mD30BB7B50BADC326CF0BCD23DCDF15B6791C24CB_RuntimeMethod_var)));
	}

IL_002b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = V_0;
				SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = V_0;
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9;
				L_9 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_8, NULL);
				RuntimeObject* L_10 = ___ares0;
				int32_t L_11;
				L_11 = Socket_EndSend_mC636AB62DC23FA2E8BDB612F5CDB203E6CAE4D17(L_9, L_10, NULL);
				SocketAsyncEventArgs_SetBytesTransferred_m5ACAA13E707A9D5B8F75FD06DD54AB6F21F60585(L_7, L_11, NULL);
				goto IL_0064;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0040_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_004f_1;
				}
				throw e;
			}

CATCH_0040_1:
			{// begin catch(System.Net.Sockets.SocketException)
				V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_12 = V_0;
				SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_13 = V_1;
				int32_t L_14;
				L_14 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_13, NULL);
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_12, L_14, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0064;
			}// end catch (depth: 2)

CATCH_004f_1:
			{// begin catch(System.ObjectDisposedException)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_15 = V_0;
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_15, ((int32_t)995), NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0064;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_16(System.IOAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_16_m52CF050F4CEBCFEDD8DF4BB9E89D14D69BC554E2 (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* L_0 = ___ares0;
		V_0 = ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var));
		V_1 = 0;
	}
	try
	{// begin try (depth: 1)
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_1 = V_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = L_1->___socket_5;
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_3 = V_0;
		RuntimeObject* L_4 = L_3->___Buffers_16;
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_5 = V_0;
		int32_t L_6 = L_5->___SockFlags_12;
		int32_t L_7;
		L_7 = Socket_Send_m3174031DF8ADFDAF158BEB0D8AC5CBB445F8D21C(L_2, L_4, L_6, NULL);
		V_1 = L_7;
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_8 = V_0;
		Exception_t* L_9 = V_2;
		SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513(L_8, L_9, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0034;
	}// end catch (depth: 1)

IL_002d:
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_10 = V_0;
		int32_t L_11 = V_1;
		SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E(L_10, L_11, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__367_17(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__367_17_m402C11E460133671C680B46BAE5EF0108245E12B (U3CU3Ec_t2A746C2CE96C006F02DFF9268F32EEF14A047D36* __this, RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* V_0 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___ares0;
		RuntimeObject* L_1;
		L_1 = IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC*)CastclassClass((RuntimeObject*)L_1, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_2 = V_0;
		int32_t* L_3 = (&L_2->___in_progress_2);
		il2cpp_codegen_memory_barrier();
		int32_t L_4;
		L_4 = Interlocked_Exchange_m1D23CC1BEB47E20FA336837BF97C292AE6B17629(L_3, 0, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B2CD8C019DA477ED4CED9E62631D4E318780064)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__367_17_m402C11E460133671C680B46BAE5EF0108245E12B_RuntimeMethod_var)));
	}

IL_002b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_6 = V_0;
				SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = V_0;
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_8 = V_0;
				Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9;
				L_9 = SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline(L_8, NULL);
				RuntimeObject* L_10 = ___ares0;
				int32_t L_11;
				L_11 = Socket_EndSendTo_mC35D110ED10CFAFEF443A1AEFCDEA438DE0101EC(L_9, L_10, NULL);
				SocketAsyncEventArgs_SetBytesTransferred_m5ACAA13E707A9D5B8F75FD06DD54AB6F21F60585(L_7, L_11, NULL);
				goto IL_0064;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0040_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_004f_1;
				}
				throw e;
			}

CATCH_0040_1:
			{// begin catch(System.Net.Sockets.SocketException)
				V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_12 = V_0;
				SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_13 = V_1;
				int32_t L_14;
				L_14 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_13, NULL);
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_12, L_14, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0064;
			}// end catch (depth: 2)

CATCH_004f_1:
			{// begin catch(System.ObjectDisposedException)
				SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_15 = V_0;
				SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline(L_15, ((int32_t)995), NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0064;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_icall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_WSAGetLastError_icall_m44B3CDD4C14F19AD07549E0FFF2CB9497B5897BD (const RuntimeMethod* method) 
{
	typedef int32_t (*SocketException_WSAGetLastError_icall_m44B3CDD4C14F19AD07549E0FFF2CB9497B5897BD_ftn) ();
	using namespace il2cpp::icalls;
	return ((SocketException_WSAGetLastError_icall_m44B3CDD4C14F19AD07549E0FFF2CB9497B5897BD_ftn)System::System::Net::Sockets::SocketException::WSAGetLastError_icall) ();
}
// System.Void System.Net.Sockets.SocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_mDDA59569C2C05AB013AF9670BD6EC070086239AB (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = SocketException_WSAGetLastError_icall_m44B3CDD4C14F19AD07549E0FFF2CB9497B5897BD(NULL);
		Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m0F0444CE9F1E2BF7AF1D0A89DC29FD973AE743AC (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___error0;
		String_t* L_1 = ___message1;
		Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, int32_t ___errorCode0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___errorCode0;
		Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketException::.ctor(System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m5E9DDE94C8009DE11B8CE2EF1611A5CE8A900AC3 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, int32_t ___socketError0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___socketError0;
		Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m830447309D5813D7FDE050DB3A075BDCE787B046 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___serializationInfo0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___streamingContext1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___serializationInfo0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___streamingContext1;
		Win32Exception__ctor_m1B3DF3F51BBF050C18F933B36027A8A4902668C4(__this, L_0, L_1, NULL);
		return;
	}
}
// System.String System.Net.Sockets.SocketException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SocketException_get_Message_mA34986089059D346C42DB47FB8BD331856BE0492 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___m_EndPoint_19;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1;
		L_1 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2;
		L_2 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_3 = __this->___m_EndPoint_19;
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_4, NULL);
		return L_5;
	}
}
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Win32Exception_get_NativeErrorCode_m33C1D176D9178C36DA32F8FEC251B923EE53CE5E_inline(__this, NULL);
		return (int32_t)(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Sockets.LingerOption::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LingerOption__ctor_m0BECD7DEA12AC52917D065B27818677F4DE7CEBC (LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98* __this, bool ___enable0, int32_t ___seconds1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___enable0;
		LingerOption_set_Enabled_mEDF2FED046EA58F9C23BEF3BF1184C3A890419DB_inline(__this, L_0, NULL);
		int32_t L_1 = ___seconds1;
		LingerOption_set_LingerTime_mDC6B06F96C04C5A69E19912EBB37DC5BDE5A6DFB_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.LingerOption::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LingerOption_set_Enabled_mEDF2FED046EA58F9C23BEF3BF1184C3A890419DB (LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___enabled_0 = L_0;
		return;
	}
}
// System.Void System.Net.Sockets.LingerOption::set_LingerTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LingerOption_set_LingerTime_mDC6B06F96C04C5A69E19912EBB37DC5BDE5A6DFB (LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___lingerTime_1 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Sockets.SafeSocketHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeSocketHandle__ctor_mA17D19F4D9F5F0D3C29A0C46702E85B9C9D87295 (SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* __this, intptr_t ___preexistingHandle0, bool ___ownsHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m50735B02E2653B889CED4DFEFA0C22917F620C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___ownsHandle1;
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, L_0, NULL);
		intptr_t L_1 = ___preexistingHandle0;
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
		bool L_2 = ((SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_StaticFields*)il2cpp_codegen_static_fields_for(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var))->___THROW_ON_ABORT_RETRIES_9;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* L_3 = (Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED*)il2cpp_codegen_object_new(Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m50735B02E2653B889CED4DFEFA0C22917F620C78(L_3, Dictionary_2__ctor_m50735B02E2653B889CED4DFEFA0C22917F620C78_RuntimeMethod_var);
		__this->___threads_stacktraces_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threads_stacktraces_7), (void*)L_3);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean System.Net.Sockets.SafeSocketHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeSocketHandle_ReleaseHandle_m6861A54261EEC98F3DB4BB27251AA7ED6BD4DCE3 (SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5B51F010936EF5BBF6820068B9143D37CB2D2D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6D733CC71CDE13E8737D066B069A9372CF3BABC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m579F59E32FB57F80500F3D341A737BEC441918BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE729A688F942830177F032C45AE3FD4EB5E5DD7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAD8AB2F66B018A6AC6744664D44E4C95F93DF9C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60371F3C4A4481F126B9BDBFDD9D69F464780693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FB20AF7D832AF20AD2F4170339D473684018D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A62F4EEAA031F30B545A398D12F81D6413DE012);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	StringBuilder_t* V_4 = NULL;
	Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_6 = NULL;
	{
		V_0 = 0;
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		Socket_Blocking_icall_m822EDC3A6E0C02C7351B93395BFC0D6103997323(L_0, (bool)0, (&V_0), NULL);
		intptr_t L_1 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		Socket_Shutdown_icall_m3AD0F420C6DB7C30FBC8741BEA5D1F0D3ED7F14D(L_1, 2, (&V_0), NULL);
		List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_2 = __this->___blocking_threads_6;
		if (!L_2)
		{
			goto IL_0161;
		}
	}
	{
		List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_3 = __this->___blocking_threads_6;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0157:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0160;
					}
				}
				{
					List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_5 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
				}

IL_0160:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_6 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_6, (&V_2), NULL);
				V_3 = 0;
				goto IL_0144_1;
			}

IL_0041_1:
			{
				int32_t L_7 = V_3;
				int32_t L_8 = L_7;
				V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
				if ((((int32_t)L_8) < ((int32_t)((int32_t)10))))
				{
					goto IL_00d8_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
				bool L_9 = ((SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_StaticFields*)il2cpp_codegen_static_fields_for(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var))->___THROW_ON_ABORT_RETRIES_9;
				if (!L_9)
				{
					goto IL_0155_1;
				}
			}
			{
				StringBuilder_t* L_10 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_10, NULL);
				V_4 = L_10;
				StringBuilder_t* L_11 = V_4;
				StringBuilder_t* L_12;
				L_12 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_11, _stringLiteral7A62F4EEAA031F30B545A398D12F81D6413DE012, NULL);
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_13 = __this->___blocking_threads_6;
				Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936 L_14;
				L_14 = List_1_GetEnumerator_mAD8AB2F66B018A6AC6744664D44E4C95F93DF9C5(L_13, List_1_GetEnumerator_mAD8AB2F66B018A6AC6744664D44E4C95F93DF9C5_RuntimeMethod_var);
				V_5 = L_14;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b5_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m6D733CC71CDE13E8737D066B069A9372CF3BABC9((&V_5), Enumerator_Dispose_m6D733CC71CDE13E8737D066B069A9372CF3BABC9_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00aa_2;
					}

IL_007a_2:
					{
						Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_15;
						L_15 = Enumerator_get_Current_mE729A688F942830177F032C45AE3FD4EB5E5DD7B_inline((&V_5), Enumerator_get_Current_mE729A688F942830177F032C45AE3FD4EB5E5DD7B_RuntimeMethod_var);
						V_6 = L_15;
						StringBuilder_t* L_16 = V_4;
						StringBuilder_t* L_17;
						L_17 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_16, _stringLiteral49FB20AF7D832AF20AD2F4170339D473684018D4, NULL);
						StringBuilder_t* L_18 = V_4;
						Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* L_19 = __this->___threads_stacktraces_7;
						Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_20 = V_6;
						StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_21;
						L_21 = Dictionary_2_get_Item_m5B51F010936EF5BBF6820068B9143D37CB2D2D84(L_19, L_20, Dictionary_2_get_Item_m5B51F010936EF5BBF6820068B9143D37CB2D2D84_RuntimeMethod_var);
						String_t* L_22;
						L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
						StringBuilder_t* L_23;
						L_23 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_18, L_22, NULL);
					}

IL_00aa_2:
					{
						bool L_24;
						L_24 = Enumerator_MoveNext_m579F59E32FB57F80500F3D341A737BEC441918BE((&V_5), Enumerator_MoveNext_m579F59E32FB57F80500F3D341A737BEC441918BE_RuntimeMethod_var);
						if (L_24)
						{
							goto IL_007a_2;
						}
					}
					{
						goto IL_00c3_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00c3_1:
			{
				StringBuilder_t* L_25 = V_4;
				StringBuilder_t* L_26;
				L_26 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_25, NULL);
				StringBuilder_t* L_27 = V_4;
				String_t* L_28;
				L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
				Exception_t* L_29 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_29, L_28, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeSocketHandle_ReleaseHandle_m6861A54261EEC98F3DB4BB27251AA7ED6BD4DCE3_RuntimeMethod_var)));
			}

IL_00d8_1:
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_30 = __this->___blocking_threads_6;
				int32_t L_31;
				L_31 = List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_inline(L_30, List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_RuntimeMethod_var);
				if ((!(((uint32_t)L_31) == ((uint32_t)1))))
				{
					goto IL_00fb_1;
				}
			}
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_32 = __this->___blocking_threads_6;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_33;
				L_33 = List_1_get_Item_m60371F3C4A4481F126B9BDBFDD9D69F464780693(L_32, 0, List_1_get_Item_m60371F3C4A4481F126B9BDBFDD9D69F464780693_RuntimeMethod_var);
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_34;
				L_34 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
				if ((!(((RuntimeObject*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)L_33) == ((RuntimeObject*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)L_34))))
				{
					goto IL_00fb_1;
				}
			}
			{
				goto IL_0161;
			}

IL_00fb_1:
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_35 = __this->___blocking_threads_6;
				Enumerator_tDF821B4E909C93A3769A3FA70C611EE7BDE6D936 L_36;
				L_36 = List_1_GetEnumerator_mAD8AB2F66B018A6AC6744664D44E4C95F93DF9C5(L_35, List_1_GetEnumerator_mAD8AB2F66B018A6AC6744664D44E4C95F93DF9C5_RuntimeMethod_var);
				V_5 = L_36;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0121_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m6D733CC71CDE13E8737D066B069A9372CF3BABC9((&V_5), Enumerator_Dispose_m6D733CC71CDE13E8737D066B069A9372CF3BABC9_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0116_2;
					}

IL_010a_2:
					{
						Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_37;
						L_37 = Enumerator_get_Current_mE729A688F942830177F032C45AE3FD4EB5E5DD7B_inline((&V_5), Enumerator_get_Current_mE729A688F942830177F032C45AE3FD4EB5E5DD7B_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
						Socket_cancel_blocking_socket_operation_mF7D69972B1CC9D769A3E5BF9946125C5CC661172(L_37, NULL);
					}

IL_0116_2:
					{
						bool L_38;
						L_38 = Enumerator_MoveNext_m579F59E32FB57F80500F3D341A737BEC441918BE((&V_5), Enumerator_MoveNext_m579F59E32FB57F80500F3D341A737BEC441918BE_RuntimeMethod_var);
						if (L_38)
						{
							goto IL_010a_2;
						}
					}
					{
						goto IL_012f_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_012f_1:
			{
				__this->___in_cleanup_8 = (bool)1;
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_39 = __this->___blocking_threads_6;
				bool L_40;
				L_40 = Monitor_Wait_m2EB745280938351E12D82BB27C011DB8F0EEDD83(L_39, ((int32_t)100), NULL);
			}

IL_0144_1:
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_41 = __this->___blocking_threads_6;
				int32_t L_42;
				L_42 = List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_inline(L_41, List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_RuntimeMethod_var);
				if ((((int32_t)L_42) > ((int32_t)0)))
				{
					goto IL_0041_1;
				}
			}

IL_0155_1:
			{
				goto IL_0161;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0161:
	{
		intptr_t L_43 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		Socket_Close_icall_mBF92507692212E88F568DED543121A71DC710701(L_43, (&V_0), NULL);
		int32_t L_44 = V_0;
		return (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Net.Sockets.SafeSocketHandle::RegisterForBlockingSyscall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeSocketHandle_RegisterForBlockingSyscall_mFCDDEAB42C472D9A8E46B76C0BAECEB7D1832A98 (SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m021BDE42D4C8CFA7729AE1FA4645832CB8510A45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F800AC3A9BEE2C4459A42828FB152CD7A848A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1104DB0524C8D81E9C97C6068CC22A52CCE146EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* V_1 = NULL;
	bool V_2 = false;
	{
		List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_0 = __this->___blocking_threads_6;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D** L_1 = (&__this->___blocking_threads_6);
		List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_2 = (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*)il2cpp_codegen_object_new(List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D_il2cpp_TypeInfo_var);
		List_1__ctor_m1104DB0524C8D81E9C97C6068CC22A52CCE146EC(L_2, List_1__ctor_m1104DB0524C8D81E9C97C6068CC22A52CCE146EC_RuntimeMethod_var);
		List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_3;
		L_3 = InterlockedCompareExchangeImpl<List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*>(L_1, L_2, (List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D*)NULL);
	}

IL_001a:
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_4 = __this->___blocking_threads_6;
					V_1 = L_4;
					V_2 = (bool)0;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0066:
						{// begin finally (depth: 2)
							{
								bool L_5 = V_2;
								if (!L_5)
								{
									goto IL_006f;
								}
							}
							{
								List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_6 = V_1;
								Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
							}

IL_006f:
							{
								return;
							}
						}// end finally (depth: 2)
					});
					try
					{// begin try (depth: 2)
						{
							List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_7 = V_1;
							Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_2), NULL);
							List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_8 = __this->___blocking_threads_6;
							Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9;
							L_9 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
							List_1_Add_m5F800AC3A9BEE2C4459A42828FB152CD7A848A8C_inline(L_8, L_9, List_1_Add_m5F800AC3A9BEE2C4459A42828FB152CD7A848A8C_RuntimeMethod_var);
							il2cpp_codegen_runtime_class_init_inline(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
							bool L_10 = ((SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_StaticFields*)il2cpp_codegen_static_fields_for(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var))->___THROW_ON_ABORT_RETRIES_9;
							if (!L_10)
							{
								goto IL_0064_1;
							}
						}
						{
							Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* L_11 = __this->___threads_stacktraces_7;
							Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_12;
							L_12 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
							StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_13 = (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853*)il2cpp_codegen_object_new(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
							StackTrace__ctor_m269D00E49783BC3205FD5C7E879888884D72107C(L_13, (bool)1, NULL);
							Dictionary_2_Add_m021BDE42D4C8CFA7729AE1FA4645832CB8510A45(L_11, L_12, L_13, Dictionary_2_Add_m021BDE42D4C8CFA7729AE1FA4645832CB8510A45_RuntimeMethod_var);
						}

IL_0064_1:
						{
							goto IL_0070;
						}
					}// end try (depth: 2)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0070:
				{
					bool L_14 = V_0;
					if (!L_14)
					{
						goto IL_0079;
					}
				}
				{
					SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(__this, NULL);
				}

IL_0079:
				{
					bool L_15;
					L_15 = SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273(__this, NULL);
					if (!L_15)
					{
						goto IL_008c;
					}
				}
				{
					SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_16 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)));
					SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_16, ((int32_t)10004), NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SafeSocketHandle_RegisterForBlockingSyscall_mFCDDEAB42C472D9A8E46B76C0BAECEB7D1832A98_RuntimeMethod_var)));
				}

IL_008c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(__this, (&V_0), NULL);
			goto IL_008d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		return;
	}
}
// System.Void System.Net.Sockets.SafeSocketHandle::UnRegisterForBlockingSyscall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeSocketHandle_UnRegisterForBlockingSyscall_m806E8BB959EDBB3B78061C5628A6F2F6EB6800B4 (SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m43BD8FD04F14C57EA9B7F4017447E918FA3B2557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m005D5A092A56062F7E23CE7234826D77A54AAFC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6BC6C5F209825F38868B72599159757677635886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* V_0 = NULL;
	bool V_1 = false;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_2 = NULL;
	{
		List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_0 = __this->___blocking_threads_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4;
				L_4 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
				V_2 = L_4;
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_5 = __this->___blocking_threads_6;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = V_2;
				bool L_7;
				L_7 = List_1_Remove_m6BC6C5F209825F38868B72599159757677635886(L_5, L_6, List_1_Remove_m6BC6C5F209825F38868B72599159757677635886_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
				bool L_8 = ((SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_StaticFields*)il2cpp_codegen_static_fields_for(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var))->___THROW_ON_ABORT_RETRIES_9;
				if (!L_8)
				{
					goto IL_0047_1;
				}
			}
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_9 = __this->___blocking_threads_6;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_10 = V_2;
				int32_t L_11;
				L_11 = List_1_IndexOf_m005D5A092A56062F7E23CE7234826D77A54AAFC2(L_9, L_10, List_1_IndexOf_m005D5A092A56062F7E23CE7234826D77A54AAFC2_RuntimeMethod_var);
				if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
				{
					goto IL_0047_1;
				}
			}
			{
				Dictionary_2_t7422864FC6442AAC5C652136E3EDEF5F9AC328ED* L_12 = __this->___threads_stacktraces_7;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_13 = V_2;
				bool L_14;
				L_14 = Dictionary_2_Remove_m43BD8FD04F14C57EA9B7F4017447E918FA3B2557(L_12, L_13, Dictionary_2_Remove_m43BD8FD04F14C57EA9B7F4017447E918FA3B2557_RuntimeMethod_var);
			}

IL_0047_1:
			{
				bool L_15 = __this->___in_cleanup_8;
				if (!L_15)
				{
					goto IL_0067_1;
				}
			}
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_16 = __this->___blocking_threads_6;
				int32_t L_17;
				L_17 = List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_inline(L_16, List_1_get_Count_m5C2C4F7F515869E497B68E132BF2A2029A73C932_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0067_1;
				}
			}
			{
				List_1_tC6F988464EEDD8B37B6AA2E9D311D598FC07845D* L_18 = __this->___blocking_threads_6;
				Monitor_Pulse_mCCD5C110AC8E4CD538E367C3414CA4E93F045419(L_18, NULL);
			}

IL_0067_1:
			{
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// System.Void System.Net.Sockets.SafeSocketHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeSocketHandle__cctor_m7691BE9F87F473365D4973842102E05614970DE8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9714C70F08B15BEF4414BD33A16130BD670348F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Environment_GetEnvironmentVariable_mFA1E83F28F2E74EF3312F9D4B582FFBE38804ED8(_stringLiteralF9714C70F08B15BEF4414BD33A16130BD670348F, NULL);
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331, NULL);
		((SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_StaticFields*)il2cpp_codegen_static_fields_for(SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE_il2cpp_TypeInfo_var))->___THROW_ON_ABORT_RETRIES_9 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocketAsyncEventArgs_get_AcceptSocket_mF12CD5B1067314F3970759A5AE7C94BF1070A4CE (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CAcceptSocketU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_AcceptSocket_m1F265F9F17EE63050B267DFE9B5CA0F3E487B93B (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CAcceptSocketU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAcceptSocketU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_BytesTransferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_BytesTransferred_m18A255B3F69597D990A7287AAC5310DCDE9B77AE (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBytesTransferredU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_BytesTransferred_mAB2EB75BE1BB7B97DBEFCAF3DD42E26BC787D625 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CBytesTransferredU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_RemoteEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_RemoteEndPoint_m63E183C33AA5B60D8331A1CEC30A008B6AC7206F (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___remote_ep_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remote_ep_3), (void*)L_0);
		return;
	}
}
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::get_SocketError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_SocketError_m0609040BBEA9BB0C0C6161A7B9A0B5EF50A6346B (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSocketErrorU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSocketErrorU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs__ctor_m14B163B655DD0353E9E022305674A77BF5958D79 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, bool ___flowExecutionContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* L_0 = (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)il2cpp_codegen_object_new(SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		SocketAsyncResult__ctor_m2123FFF2C2A56DB840E109348FEEA575B5B691E4(L_0, NULL);
		__this->___socket_async_result_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_async_result_5), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_Finalize_m59E3BE36B99D1B090D58EBA606D6750E040D6D01 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SocketAsyncEventArgs_Dispose_mA5B8D8ADB8521BC9219061C13CB7C07BD02E16DB(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_Dispose_mA5B8D8ADB8521BC9219061C13CB7C07BD02E16DB (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		__this->___disposed_1 = (bool)1;
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___in_progress_2;
		il2cpp_codegen_memory_barrier();
		return;
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_Dispose_m6DCE1086200FEDE70AFC93B221810F02334FCEA1 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_Dispose_mA5B8D8ADB8521BC9219061C13CB7C07BD02E16DB(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBytesTransferred(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_SetBytesTransferred_m5ACAA13E707A9D5B8F75FD06DD54AB6F21F60585 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		SocketAsyncEventArgs_set_BytesTransferred_mAB2EB75BE1BB7B97DBEFCAF3DD42E26BC787D625_inline(__this, L_0, NULL);
		return;
	}
}
// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_CurrentSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___current_socket_4;
		return L_0;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Complete_internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_Complete_internal_m80E7F9C012A9FF94E68C09B05314042FA80549B0 (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_memory_barrier();
		__this->___in_progress_2 = 0;
		VirtualActionInvoker1< SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* >::Invoke(5 /* System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs) */, __this, __this);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_OnCompleted_mA73590353C7D619F0A57E5D65C7D6CF1EF41AD6C (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ___e0, const RuntimeMethod* method) 
{
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* V_0 = NULL;
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_0 = ___e0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_1 = ___e0;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_2 = L_1->___Completed_9;
		V_0 = L_2;
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* L_4 = V_0;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_5 = ___e0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = L_5->___current_socket_4;
		SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* L_7 = ___e0;
		EventHandler_1_Invoke_mF0FFF25301C90C9B2E0769E48203543140B6A01C_inline(L_4, L_6, L_7, NULL);
	}

IL_001b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: System.Net.Sockets.SocketAsyncResult
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke(const SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340& unmarshaled, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_pinvoke& marshaled)
{
	Exception_t* ___socket_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'socket' of type 'SocketAsyncResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___socket_5Exception, NULL);
}
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back(const SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_pinvoke& marshaled, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340& unmarshaled)
{
	Exception_t* ___socket_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'socket' of type 'SocketAsyncResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___socket_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Net.Sockets.SocketAsyncResult
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup(SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.Net.Sockets.SocketAsyncResult
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_com(const SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340& unmarshaled, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_com& marshaled)
{
	Exception_t* ___socket_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'socket' of type 'SocketAsyncResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___socket_5Exception, NULL);
}
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_com_back(const SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_com& marshaled, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340& unmarshaled)
{
	Exception_t* ___socket_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'socket' of type 'SocketAsyncResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___socket_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Net.Sockets.SocketAsyncResult
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_com_cleanup(SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshaled_com& marshaled)
{
}
// System.IntPtr System.Net.Sockets.SocketAsyncResult::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SocketAsyncResult_get_Handle_mBEAD04497226B5110889462C480B2BBF93AAD430 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_5;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0);
	}

IL_000e:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = __this->___socket_5;
		intptr_t L_2;
		L_2 = Socket_get_Handle_mBF42AC5E9403C23BE532F17EE337BF9F150A0256(L_1, NULL);
		return L_2;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult__ctor_m2123FFF2C2A56DB840E109348FEEA575B5B691E4 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	{
		IOAsyncResult__ctor_mAA7211B9E6FDF23D0012354FEE350B6B5EB786F4(__this, NULL);
		return;
	}
}
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncResult::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketAsyncResult_get_ErrorCode_m2CFEB18E19F49775804758830C58B1B068CF936C (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_0 = NULL;
	{
		Exception_t* L_0 = __this->___DelayedException_7;
		V_0 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IsInstClass((RuntimeObject*)L_0, SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_2 = V_0;
		int32_t L_3;
		L_3 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_2, NULL);
		return L_3;
	}

IL_0016:
	{
		int32_t L_4 = __this->___error_21;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = __this->___error_21;
		return (int32_t)(L_5);
	}

IL_0025:
	{
		return (int32_t)(0);
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::CheckIfThrowDelayedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___DelayedException_7;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = __this->___socket_5;
		L_1->___is_connected_25 = (bool)0;
		Exception_t* L_2 = __this->___DelayedException_7;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_3 = __this->___error_21;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = __this->___socket_5;
		L_4->___is_connected_25 = (bool)0;
		int32_t L_5 = __this->___error_21;
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_6 = (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)));
		SocketException__ctor_mC09AA11941DA13359416179634B151A3FE2B9A64(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketAsyncResult_CheckIfThrowDelayedException_m25275FD1C77F37FB2CFDE46BDC669CF9B31031C9_RuntimeMethod_var)));
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	int32_t V_1 = 0;
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* G_B7_0 = NULL;
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* G_B6_0 = NULL;
	{
		int32_t L_0 = __this->___operation_6;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = __this->___socket_5;
		bool L_2;
		L_2 = Socket_get_CleanedUp_m8F6EDAE37C56CBC282D3EAF9D93B5726EEC85988(L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = __this->___socket_5;
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_6 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_6, L_5, NULL);
		__this->___DelayedException_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DelayedException_7), (void*)L_6);
	}

IL_0031:
	{
		IOAsyncResult_set_IsCompleted_m72D907352B8AC32DF47864E4F4EDFADEC825A6F9(__this, (bool)1, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = __this->___socket_5;
		V_0 = L_7;
		int32_t L_8 = __this->___operation_6;
		V_1 = L_8;
		bool L_9;
		L_9 = IOAsyncResult_get_CompletedSynchronously_m26279BC02AFFE83009A7EEABFFF58EEB2D12CD24_inline(__this, NULL);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_10;
		L_10 = IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_11 = ((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0075;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* L_13 = ((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_14 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76_RuntimeMethod_var), NULL);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_15 = L_14;
		((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1), (void*)L_15);
		G_B7_0 = L_15;
	}

IL_0075:
	{
		bool L_16;
		L_16 = ThreadPool_UnsafeQueueUserWorkItem_m86EDB21C1D2C34E8F3409D542EF4CAC6ACF69497(G_B7_0, __this, NULL);
	}

IL_007c:
	{
		int32_t L_17 = V_1;
		switch (L_17)
		{
			case 0:
			{
				goto IL_00b3;
			}
			case 1:
			{
				goto IL_00cc;
			}
			case 2:
			{
				goto IL_00b3;
			}
			case 3:
			{
				goto IL_00b3;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_00c0;
			}
			case 6:
			{
				goto IL_00cc;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00cc;
			}
			case 9:
			{
				goto IL_00cc;
			}
			case 10:
			{
				goto IL_00b3;
			}
			case 11:
			{
				goto IL_00c0;
			}
		}
	}
	{
		return;
	}

IL_00b3:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_18 = V_0;
		SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* L_19 = L_18->___ReadSem_21;
		int32_t L_20;
		L_20 = SemaphoreSlim_Release_m4F3CB668D91DEE067A67266C266FEE5AADF56148(L_19, NULL);
		return;
	}

IL_00c0:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_21 = V_0;
		SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* L_22 = L_21->___WriteSem_22;
		int32_t L_23;
		L_23 = SemaphoreSlim_Release_m4F3CB668D91DEE067A67266C266FEE5AADF56148(L_22, NULL);
	}

IL_00cc:
	{
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m218F8233E7ADB1AFFE69406F6337E09726E640D2 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, bool ___synch0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___synch0;
		IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D_inline(__this, L_0, NULL);
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mC5E61EFDC26D56DCFD98A8600B185043FA285B6E (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, int32_t ___total0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___total0;
		__this->___Total_20 = L_0;
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m6F201277AC561C7A755617A4963735B70D178B12 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Exception_t* ___e0, bool ___synch1, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___e0;
		__this->___DelayedException_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DelayedException_7), (void*)L_0);
		bool L_1 = ___synch1;
		IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D_inline(__this, L_1, NULL);
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m49FA96276F9EBB207D8194440AE89300DDDAC513 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___e0;
		__this->___DelayedException_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DelayedException_7), (void*)L_0);
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_mD191B47C619B02AB538B7A00721E689AAFBBD3EA (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___s0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___s0;
		__this->___AcceptedSocket_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AcceptedSocket_19), (void*)L_0);
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncResult_Complete_m85EF6089B3B9ECB2A9737E9C694BCCFFEAE48CF1 (SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___s0, int32_t ___total1, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___s0;
		__this->___AcceptedSocket_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AcceptedSocket_19), (void*)L_0);
		int32_t L_1 = ___total1;
		__this->___Total_20 = L_1;
		SocketAsyncResult_Complete_mE0BFD66E710CA1E69D16B0283A5C637BDE354CAA(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0F0A7E1C51C668515103160DCC4D3F3ED8B7C5C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* L_0 = (U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45*)il2cpp_codegen_object_new(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAC11B6F52B2C5BA43E6B14CF8338841CAA0ABF26(L_0, NULL);
		((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC11B6F52B2C5BA43E6B14CF8338841CAA0ABF26 (U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Net.Sockets.SocketAsyncResult/<>c::<Complete>b__27_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCompleteU3Eb__27_0_m267CAA8BCD77C0263EF3DAC0336FC29A937D2C76 (U3CU3Ec_tB9FAB1E6994B42B67246693CD6E523D26D4BCC45* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___state0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_1;
		L_1 = IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC_inline(((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_0, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		RuntimeObject* L_2 = ___state0;
		AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline(L_1, ((SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340*)CastclassSealed((RuntimeObject*)L_2, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_Multicast(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* currentDelegate = reinterpret_cast<LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859*>(delegatesToInvoke[i]);
		typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInst(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStatic(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, method);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStaticInvoker(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_ClosedStaticInvoker(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenVirtual(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	return VirtualFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInterface(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericVirtual(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(method, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericInterface(LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker4< X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(method, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4);
}
// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalCertificateSelectionCallback__ctor_mE4F3A8BFF483881C2634112BB581CA4B07809805 (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C_Multicast;
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* LocalCertificateSelectionCallback_Invoke_mED43EE6E88B8C653C7D68966F86751B70907591C (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* __this, RuntimeObject* ___sender0, String_t* ___targetHost1, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___localCertificates2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___remoteCertificate3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___acceptableIssuers4, const RuntimeMethod* method) 
{
	typedef X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___targetHost1, ___localCertificates2, ___remoteCertificate3, ___acceptableIssuers4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_Multicast(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* currentDelegate = reinterpret_cast<RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInst(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3, method);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStatic(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3, method);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStaticInvoker(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< bool, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_ClosedStaticInvoker(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< bool, RuntimeObject*, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenVirtual(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	return VirtualFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInterface(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericVirtual(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(method, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericInterface(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker3< bool, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t >::Invoke(method, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3);
}
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83_Multicast;
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCertificateValidationCallback_Invoke_m5256BF7D3B9BFFFAA959191FD5117C393F670D83 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___certificate1, ___chain2, ___sslPolicyErrors3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorBrowsableAttribute__ctor_mE6105AD9666A4DF03DB2590C687EAC6B12D908CE (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___state0;
		__this->___browsableState_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditorBrowsableAttribute_Equals_m2DFA6ADDE69D95657A8257840C01FCAF74A6B02F (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)IsInstSealed((RuntimeObject*)L_1, EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var));
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_3 = V_0;
		int32_t L_4 = L_3->___browsableState_0;
		int32_t L_5 = __this->___browsableState_0;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EditorBrowsableAttribute_GetHashCode_m1AE50FA45B338D71189AA3C249DB56406DEC798C (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.ArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayConverter__ctor_mAA6B57C16F167FF104B8E23402DE87ACA5E13A2B (ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C* __this, const RuntimeMethod* method) 
{
	{
		CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.BooleanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanConverter__ctor_m50990A1CB60D3557199985EF164FF1E8AFCADC87 (BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DecimalConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalConverter__ctor_mC1E815EF17DE8DBD91FB472C83A4F38514704B46 (DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DoubleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleConverter__ctor_m3CA5201BA68AB510BB2112A6755FCFEAB6DE53BA (DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int16Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int16Converter__ctor_m3803A7772B21F49200FC142C193A40DC286C9DFF (Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int32Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Converter__ctor_m88220DA12F6ED6FE4D1232B73C20DECE9EFC63FF (Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int64Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int64Converter__ctor_m3C124DB065F27F6BEAB7ABAF4B3D13E6A9F3E94C (Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.SingleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleConverter__ctor_m463B63EB8D945D2D43E5B8099D8F0EC24AEBDA7A (SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.StringConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConverter__ctor_m074D8686ED6ABC0E64C20D1EFD4406F215E7187A (StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TimeSpanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanConverter__ctor_m7319DCEEDA2578B340AD4FEEE010AE5CEFAC9BD5 (TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_m0E1A55E1BD368F0AABCAF766BBCE1D275777A52A (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___type0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverterAttribute_Equals_mA3BF2C8CFA0AE8B5D0F52E066B1141AA53B4E015 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)IsInstSealed((RuntimeObject*)L_0, TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_2 = V_0;
		String_t* L_3;
		L_3 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(L_2, NULL);
		String_t* L_4;
		L_4 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConverterAttribute_GetHashCode_m23ACA2A297447E17150BF490188919676FBD8A01 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__cctor_mB9A8C9E5E62F8A8D81E250D0B53D359860D7C04A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_0 = (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)il2cpp_codegen_object_new(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9(L_0, NULL);
		((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter__ctor_m3E3C7D81C8092A5591BAA556288B2A3E22DCA99B (EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		Type_t* L_0 = ___type0;
		__this->___type_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_3), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Win32Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m0B20F25EC4A56A122FF766429AF40AF6292E11B1 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetLastWin32Error_m776667F265B8ABFFF13E3DD51B1BC5C2B5611F43(NULL);
		Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___error0;
		int32_t L_1 = ___error0;
		String_t* L_2;
		L_2 = Win32Exception_GetErrorMessage_mE857D9093D6D366D960BD8A8FCCF22DF6FB92728(L_1, NULL);
		Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4(__this, L_0, L_2, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message1;
		ExternalException__ctor_m289660079DD06ADACDAABE3BC8948AF7C73A8602(__this, L_0, NULL);
		int32_t L_1 = ___error0;
		__this->___nativeErrorCode_18 = L_1;
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m1B3DF3F51BBF050C18F933B36027A8A4902668C4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		ExternalException__ctor_m3B89FDD35A0B6E96CE69B2FAD48FB832402167AC(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		int32_t L_3;
		L_3 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_2, _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836, NULL);
		__this->___nativeErrorCode_18 = L_3;
		return;
	}
}
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Win32Exception_get_NativeErrorCode_m33C1D176D9178C36DA32F8FEC251B923EE53CE5E (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___nativeErrorCode_18;
		return L_0;
	}
}
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		int32_t L_3 = __this->___nativeErrorCode_18;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_5 = ___context1;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_4, L_5, NULL);
		return;
	}
}
// System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Win32Exception_GetErrorMessage_mE857D9093D6D366D960BD8A8FCCF22DF6FB92728 (int32_t ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CAB08554552B91BA981CD02709F3608049743F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8398C464CEF2A8E224363DAF635848402299705A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89228C2272C203A431928EA4D77EC3641DC74018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98086E81726E63C07D5EE51033D818164107DDF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC705511F599E168CB4A19DE96F050E694A04892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___error0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)120))))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_1 = ___error0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)33))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_2 = ___error0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_02f1;
			}
			case 1:
			{
				goto IL_04e9;
			}
			case 2:
			{
				goto IL_02f7;
			}
			case 3:
			{
				goto IL_02fd;
			}
			case 4:
			{
				goto IL_0303;
			}
			case 5:
			{
				goto IL_0309;
			}
			case 6:
			{
				goto IL_030f;
			}
			case 7:
			{
				goto IL_04e9;
			}
			case 8:
			{
				goto IL_04e9;
			}
			case 9:
			{
				goto IL_04e9;
			}
			case 10:
			{
				goto IL_04e9;
			}
			case 11:
			{
				goto IL_04e9;
			}
			case 12:
			{
				goto IL_04e9;
			}
			case 13:
			{
				goto IL_0315;
			}
			case 14:
			{
				goto IL_031b;
			}
			case 15:
			{
				goto IL_04e9;
			}
			case 16:
			{
				goto IL_04e9;
			}
			case 17:
			{
				goto IL_0321;
			}
			case 18:
			{
				goto IL_0327;
			}
		}
	}
	{
		int32_t L_3 = ___error0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)24))))
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_4 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)31))))
		{
			case 0:
			{
				goto IL_0333;
			}
			case 1:
			{
				goto IL_0339;
			}
			case 2:
			{
				goto IL_033f;
			}
		}
	}
	{
		goto IL_04e9;
	}

IL_0081:
	{
		int32_t L_5 = ___error0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)55))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_6 = ___error0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)50))))
		{
			goto IL_0345;
		}
	}
	{
		int32_t L_7 = ___error0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)55))))
		{
			goto IL_034b;
		}
	}
	{
		goto IL_04e9;
	}

IL_009b:
	{
		int32_t L_8 = ___error0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)87))))
		{
			goto IL_0351;
		}
	}
	{
		int32_t L_9 = ___error0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)120))))
		{
			goto IL_0357;
		}
	}
	{
		goto IL_04e9;
	}

IL_00b0:
	{
		int32_t L_10 = ___error0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)267))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_11 = ___error0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)127))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_12 = ___error0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)123))))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_13 = ___error0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)127))))
		{
			goto IL_0363;
		}
	}
	{
		goto IL_04e9;
	}

IL_00d2:
	{
		int32_t L_14 = ___error0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)183))))
		{
			goto IL_0369;
		}
	}
	{
		int32_t L_15 = ___error0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)267))))
		{
			goto IL_036f;
		}
	}
	{
		goto IL_04e9;
	}

IL_00ed:
	{
		int32_t L_16 = ___error0;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)6000))))
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_17 = ___error0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)995))))
		{
			goto IL_0375;
		}
	}
	{
		int32_t L_18 = ___error0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)6000))))
		{
			goto IL_037b;
		}
	}
	{
		goto IL_04e9;
	}

IL_0110:
	{
		int32_t L_19 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)10004))))
		{
			case 0:
			{
				goto IL_0381;
			}
			case 1:
			{
				goto IL_04e9;
			}
			case 2:
			{
				goto IL_04e9;
			}
			case 3:
			{
				goto IL_04e9;
			}
			case 4:
			{
				goto IL_04e9;
			}
			case 5:
			{
				goto IL_0387;
			}
			case 6:
			{
				goto IL_04e9;
			}
			case 7:
			{
				goto IL_04e9;
			}
			case 8:
			{
				goto IL_04e9;
			}
			case 9:
			{
				goto IL_038d;
			}
			case 10:
			{
				goto IL_0393;
			}
			case 11:
			{
				goto IL_04e9;
			}
			case 12:
			{
				goto IL_04e9;
			}
			case 13:
			{
				goto IL_04e9;
			}
			case 14:
			{
				goto IL_04e9;
			}
			case 15:
			{
				goto IL_04e9;
			}
			case 16:
			{
				goto IL_04e9;
			}
			case 17:
			{
				goto IL_04e9;
			}
			case 18:
			{
				goto IL_0399;
			}
			case 19:
			{
				goto IL_04e9;
			}
			case 20:
			{
				goto IL_039f;
			}
			case 21:
			{
				goto IL_04e9;
			}
			case 22:
			{
				goto IL_04e9;
			}
			case 23:
			{
				goto IL_04e9;
			}
			case 24:
			{
				goto IL_04e9;
			}
			case 25:
			{
				goto IL_04e9;
			}
			case 26:
			{
				goto IL_04e9;
			}
			case 27:
			{
				goto IL_04e9;
			}
			case 28:
			{
				goto IL_04e9;
			}
			case 29:
			{
				goto IL_04e9;
			}
			case 30:
			{
				goto IL_04e9;
			}
			case 31:
			{
				goto IL_03a5;
			}
			case 32:
			{
				goto IL_03ab;
			}
			case 33:
			{
				goto IL_03b1;
			}
			case 34:
			{
				goto IL_03b7;
			}
			case 35:
			{
				goto IL_03bd;
			}
			case 36:
			{
				goto IL_03c3;
			}
			case 37:
			{
				goto IL_03c9;
			}
			case 38:
			{
				goto IL_03cf;
			}
			case 39:
			{
				goto IL_03d5;
			}
			case 40:
			{
				goto IL_03db;
			}
			case 41:
			{
				goto IL_03e1;
			}
			case 42:
			{
				goto IL_03e7;
			}
			case 43:
			{
				goto IL_03ed;
			}
			case 44:
			{
				goto IL_03f3;
			}
			case 45:
			{
				goto IL_03f9;
			}
			case 46:
			{
				goto IL_03ff;
			}
			case 47:
			{
				goto IL_0405;
			}
			case 48:
			{
				goto IL_040b;
			}
			case 49:
			{
				goto IL_0411;
			}
			case 50:
			{
				goto IL_0417;
			}
			case 51:
			{
				goto IL_041d;
			}
			case 52:
			{
				goto IL_0423;
			}
			case 53:
			{
				goto IL_0429;
			}
			case 54:
			{
				goto IL_042f;
			}
			case 55:
			{
				goto IL_0435;
			}
			case 56:
			{
				goto IL_043b;
			}
			case 57:
			{
				goto IL_0441;
			}
			case 58:
			{
				goto IL_0447;
			}
			case 59:
			{
				goto IL_044d;
			}
			case 60:
			{
				goto IL_0453;
			}
			case 61:
			{
				goto IL_0459;
			}
			case 62:
			{
				goto IL_045f;
			}
			case 63:
			{
				goto IL_0465;
			}
			case 64:
			{
				goto IL_046b;
			}
			case 65:
			{
				goto IL_0471;
			}
			case 66:
			{
				goto IL_0477;
			}
			case 67:
			{
				goto IL_047d;
			}
			case 68:
			{
				goto IL_04e9;
			}
			case 69:
			{
				goto IL_04e9;
			}
			case 70:
			{
				goto IL_04e9;
			}
			case 71:
			{
				goto IL_04e9;
			}
			case 72:
			{
				goto IL_04e9;
			}
			case 73:
			{
				goto IL_04e9;
			}
			case 74:
			{
				goto IL_04e9;
			}
			case 75:
			{
				goto IL_04e9;
			}
			case 76:
			{
				goto IL_04e9;
			}
			case 77:
			{
				goto IL_04e9;
			}
			case 78:
			{
				goto IL_04e9;
			}
			case 79:
			{
				goto IL_04e9;
			}
			case 80:
			{
				goto IL_04e9;
			}
			case 81:
			{
				goto IL_04e9;
			}
			case 82:
			{
				goto IL_04e9;
			}
			case 83:
			{
				goto IL_04e9;
			}
			case 84:
			{
				goto IL_04e9;
			}
			case 85:
			{
				goto IL_04e9;
			}
			case 86:
			{
				goto IL_04e9;
			}
			case 87:
			{
				goto IL_0483;
			}
			case 88:
			{
				goto IL_0489;
			}
			case 89:
			{
				goto IL_048f;
			}
			case 90:
			{
				goto IL_04e9;
			}
			case 91:
			{
				goto IL_04e9;
			}
			case 92:
			{
				goto IL_04e9;
			}
			case 93:
			{
				goto IL_04e9;
			}
			case 94:
			{
				goto IL_04e9;
			}
			case 95:
			{
				goto IL_04e9;
			}
			case 96:
			{
				goto IL_04e9;
			}
			case 97:
			{
				goto IL_0495;
			}
			case 98:
			{
				goto IL_049b;
			}
			case 99:
			{
				goto IL_04a1;
			}
			case 100:
			{
				goto IL_04a7;
			}
			case 101:
			{
				goto IL_04ad;
			}
			case 102:
			{
				goto IL_04b3;
			}
			case 103:
			{
				goto IL_04b9;
			}
			case 104:
			{
				goto IL_04bf;
			}
			case 105:
			{
				goto IL_04c5;
			}
			case 106:
			{
				goto IL_04e9;
			}
			case 107:
			{
				goto IL_04e9;
			}
			case 108:
			{
				goto IL_04cb;
			}
		}
	}
	{
		int32_t L_20 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)11001))))
		{
			case 0:
			{
				goto IL_04d1;
			}
			case 1:
			{
				goto IL_04d7;
			}
			case 2:
			{
				goto IL_04dd;
			}
			case 3:
			{
				goto IL_04e3;
			}
		}
	}
	{
		goto IL_04e9;
	}

IL_02f1:
	{
		return _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
	}

IL_02f7:
	{
		return _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
	}

IL_02fd:
	{
		return _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
	}

IL_0303:
	{
		return _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
	}

IL_0309:
	{
		return _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
	}

IL_030f:
	{
		return _stringLiteral5CAB08554552B91BA981CD02709F3608049743F1;
	}

IL_0315:
	{
		return _stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1;
	}

IL_031b:
	{
		return _stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA;
	}

IL_0321:
	{
		return _stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D;
	}

IL_0327:
	{
		return _stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE;
	}

IL_032d:
	{
		return _stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B;
	}

IL_0333:
	{
		return _stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7;
	}

IL_0339:
	{
		return _stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23;
	}

IL_033f:
	{
		return _stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6;
	}

IL_0345:
	{
		return _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
	}

IL_034b:
	{
		return _stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229;
	}

IL_0351:
	{
		return _stringLiteral89228C2272C203A431928EA4D77EC3641DC74018;
	}

IL_0357:
	{
		return _stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5;
	}

IL_035d:
	{
		return _stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C;
	}

IL_0363:
	{
		return _stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B;
	}

IL_0369:
	{
		return _stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5;
	}

IL_036f:
	{
		return _stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A;
	}

IL_0375:
	{
		return _stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58;
	}

IL_037b:
	{
		return _stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D;
	}

IL_0381:
	{
		return _stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA;
	}

IL_0387:
	{
		return _stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3;
	}

IL_038d:
	{
		return _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
	}

IL_0393:
	{
		return _stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57;
	}

IL_0399:
	{
		return _stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0;
	}

IL_039f:
	{
		return _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
	}

IL_03a5:
	{
		return _stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B;
	}

IL_03ab:
	{
		return _stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87;
	}

IL_03b1:
	{
		return _stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE;
	}

IL_03b7:
	{
		return _stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2;
	}

IL_03bd:
	{
		return _stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983;
	}

IL_03c3:
	{
		return _stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7;
	}

IL_03c9:
	{
		return _stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31;
	}

IL_03cf:
	{
		return _stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472;
	}

IL_03d5:
	{
		return _stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99;
	}

IL_03db:
	{
		return _stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE;
	}

IL_03e1:
	{
		return _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
	}

IL_03e7:
	{
		return _stringLiteral8398C464CEF2A8E224363DAF635848402299705A;
	}

IL_03ed:
	{
		return _stringLiteral98086E81726E63C07D5EE51033D818164107DDF6;
	}

IL_03f3:
	{
		return _stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC;
	}

IL_03f9:
	{
		return _stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF;
	}

IL_03ff:
	{
		return _stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F;
	}

IL_0405:
	{
		return _stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3;
	}

IL_040b:
	{
		return _stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF;
	}

IL_0411:
	{
		return _stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E;
	}

IL_0417:
	{
		return _stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524;
	}

IL_041d:
	{
		return _stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E;
	}

IL_0423:
	{
		return _stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE;
	}

IL_0429:
	{
		return _stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E;
	}

IL_042f:
	{
		return _stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA;
	}

IL_0435:
	{
		return _stringLiteralAC705511F599E168CB4A19DE96F050E694A04892;
	}

IL_043b:
	{
		return _stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D;
	}

IL_0441:
	{
		return _stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892;
	}

IL_0447:
	{
		return _stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78;
	}

IL_044d:
	{
		return _stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6;
	}

IL_0453:
	{
		return _stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172;
	}

IL_0459:
	{
		return _stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E;
	}

IL_045f:
	{
		return _stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4;
	}

IL_0465:
	{
		return _stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901;
	}

IL_046b:
	{
		return _stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A;
	}

IL_0471:
	{
		return _stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405;
	}

IL_0477:
	{
		return _stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F;
	}

IL_047d:
	{
		return _stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA;
	}

IL_0483:
	{
		return _stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886;
	}

IL_0489:
	{
		return _stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123;
	}

IL_048f:
	{
		return _stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3;
	}

IL_0495:
	{
		return _stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985;
	}

IL_049b:
	{
		return _stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30;
	}

IL_04a1:
	{
		return _stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72;
	}

IL_04a7:
	{
		return _stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E;
	}

IL_04ad:
	{
		return _stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D;
	}

IL_04b3:
	{
		return _stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B;
	}

IL_04b9:
	{
		return _stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064;
	}

IL_04bf:
	{
		return _stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A;
	}

IL_04c5:
	{
		return _stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A;
	}

IL_04cb:
	{
		return _stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00;
	}

IL_04d1:
	{
		return _stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7;
	}

IL_04d7:
	{
		return _stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D;
	}

IL_04dd:
	{
		return _stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033;
	}

IL_04e3:
	{
		return _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
	}

IL_04e9:
	{
		int32_t L_21 = ___error0;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31, L_23, NULL);
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC09A19935970846B38570D03608F0E5F25E2020C (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___parentElement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ProxyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.Ipv6Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.NetSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___parent0, RuntimeObject* ___configContext1, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___section2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m0E6C3891D0501FEF5BF1A72B7AA4D6310CE082DD (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m0E6C3891D0501FEF5BF1A72B7AA4D6310CE082DD_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IOAsyncResult_get_AsyncState_m8F7E705BB64B9C38D1F9EE7C746AAD46DDF1616A_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___async_state_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocketAsyncEventArgs_get_AcceptSocket_mF12CD5B1067314F3970759A5AE7C94BF1070A4CE_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___U3CAcceptSocketU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* SocketAsyncEventArgs_get_CurrentSocket_m1FA3256E04EA21BDF5B2ACC9813165D21E614F43_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___current_socket_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_AddressFamily_m42C390D31345314080EC35356ACFBBFF7E1123E5_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___addressFamily_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_SocketType_mAFBEF108992F069AF0B8AD26D47EBBEADB8D2661_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___socketType_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_ProtocolType_m364A0E823BF3EA78DAFC1ED3A6B39658FB6A23BB_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___protocolType_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_AcceptSocket_m1F265F9F17EE63050B267DFE9B5CA0F3E487B93B_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___value0, const RuntimeMethod* method) 
{
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___value0;
		__this->___U3CAcceptSocketU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAcceptSocketU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_SocketError_m0E7EC931E1FDA4014BCB6A5E7D5E3E216B80BFB2_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSocketErrorU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* MemoryHandle_get_Pointer_mB37B69B8014746F855683C47FF2E6EC46D656CA8_inline (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____pointer_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Win32Exception_get_NativeErrorCode_m33C1D176D9178C36DA32F8FEC251B923EE53CE5E_inline (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___nativeErrorCode_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LingerOption_set_Enabled_mEDF2FED046EA58F9C23BEF3BF1184C3A890419DB_inline (LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___enabled_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LingerOption_set_LingerTime_mDC6B06F96C04C5A69E19912EBB37DC5BDE5A6DFB_inline (LingerOption_t0053FF52A038EABFF91A11997A93ACC04C85AB98* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___lingerTime_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		__this->___handle_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_BytesTransferred_mAB2EB75BE1BB7B97DBEFCAF3DD42E26BC787D625_inline (SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CBytesTransferredU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IOAsyncResult_get_CompletedSynchronously_m26279BC02AFFE83009A7EEABFFF58EEB2D12CD24_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___completed_synchronously_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* IOAsyncResult_get_AsyncCallback_mC6150F5FC2CEE8FDC22EACD9B9BC72544FE801CC_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, const RuntimeMethod* method) 
{
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_0 = __this->___async_callback_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IOAsyncResult_set_CompletedSynchronously_m29ECF9F6388C1F9A12AF83DF8CD19D9FFB4B4D6D_inline (IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___completed_synchronously_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ar0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___start0;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___length1;
		int32_t L_5 = V_1;
		int32_t L_6 = ___start0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))))))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_001e:
	{
		RuntimeObject* L_7 = (RuntimeObject*)__this->____object_0;
		int32_t L_8 = (int32_t)__this->____index_1;
		int32_t L_9 = ___start0;
		int32_t L_10 = ___length1;
		int32_t L_11 = V_0;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_inline((&L_12), L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), ((int32_t)(L_10|((int32_t)(L_11&((int32_t)-2147483648LL))))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___obj0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____object_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)L_0);
		int32_t L_1 = ___start1;
		__this->____index_1 = L_1;
		int32_t L_2 = ___length2;
		__this->____length_2 = L_2;
		return;
	}
}
