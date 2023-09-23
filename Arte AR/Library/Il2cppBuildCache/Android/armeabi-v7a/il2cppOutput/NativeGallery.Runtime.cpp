#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32Enum>>
struct Func_2_tED7578086478CDE88DBC2FFFDCB01FEA9F167392;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.Texture2D>>
struct Func_2_t69E68B55496F4413792BAA446B637320D0DE872A;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<NativeGallery/Permission>>
struct Func_2_tE3CE1EB23CCA31D7D3B657D242F66B72078695F7;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>
struct TaskCompletionSource_1_tFEFD2FEC3619B04450B0DCBC20CD7229C2D07354;
// System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>
struct TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D;
// System.Threading.Tasks.TaskFactory`1<System.Int32Enum>
struct TaskFactory_1_tB258CD0C610C65E36B1AC1470D310CC8290BDA75;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Texture2D>
struct TaskFactory_1_tDCE249C293A57CC650CFD2905621E979D1B2CE6B;
// System.Threading.Tasks.TaskFactory`1<NativeGallery/Permission>
struct TaskFactory_1_t05291EC876FF62DB085D5D61CF6013A4CCEB3589;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F;
// System.Threading.Tasks.Task`1<NativeGallery/Permission>
struct Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NativeGalleryNamespace.NGCallbackHelper
struct NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3;
// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2;
// NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid
struct NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2;
// NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B;
// NativeGallery/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33;
// NativeGallery/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498;
// NativeGallery/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD;
// NativeGallery/MediaPickCallback
struct MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E;
// NativeGallery/PermissionCallback
struct PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Permission_t45AE01CA9353CE8BBBD7E64489942D119598714B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381;
IL2CPP_EXTERN_C String_t* _stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D;
IL2CPP_EXTERN_C String_t* _stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148;
IL2CPP_EXTERN_C String_t* _stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949;
IL2CPP_EXTERN_C String_t* _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F;
IL2CPP_EXTERN_C String_t* _stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4;
IL2CPP_EXTERN_C String_t* _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteral98C4991DBD0370C554791D1BED854533606B6973;
IL2CPP_EXTERN_C String_t* _stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5;
IL2CPP_EXTERN_C String_t* _stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D;
IL2CPP_EXTERN_C String_t* _stringLiteralE3287997374A5B6321B447152239EBE224279EB6;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC;
IL2CPP_EXTERN_C String_t* _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m393756D1697D8960DE6A5D558849A2875C01F683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m3ACC73FD2E7D0F7FE5F6F6A7FFF0B4D1B054876F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m4D1027DE2E564A6CB9747EFE357CA50B37D062B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m43FEF3CB9919EB71456DF0C8E2A65B2EDDE2733F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m517ACC11F6E57897463057312881836CA67EA311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m715FF262082E0C50F26E3799B244EDAFF31F3EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m6ADA7BFEC224D0041737DE5613CC36C48CF0B371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mB08B5887F3732634DB06D0F2B76337E730ABB1FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m3DA646A6829D957827E10F0BF6E35DB12E4AF7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mDC73BE74E3CF09714347DAD8FB4EFD4E258DA0BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m019567531E62C83E522319756EBFF98F0701B663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53_mF9E506AD8FE8BA0B422A1075B62327131974F51B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetImageProperties_mA64E8E11D9E791545D15A523024C0C2376547304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetVideoProperties_m091E45231186EB0CB51F80494D5122C29F128973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveImageToGallery_mD6D45685707A63EF228664AE0C5D02FA7C595D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m0535E36EE3949DE0DEC0683D2169E693B27AC025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m542979D6D2D029F345F3FCB0E42E0FB09912C254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mAD31D1CDC70818AC6C92E4D441535A67813E7F80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m87EEC1BF34AA87D5B6B562DC6F7FD82A5B89531D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m3D0C4E4E5E17A335F15674ECFA524431D304E013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mDC748FA3121FA20ABCB4507C2BEFE1032EA33467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6ABB4B5617489363B2982D27BBDA769BC9D99FA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_SetPixelData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m365302D7DAECFCF19B28C4DE485FFD2779B0EB4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageAtPathAsyncU3Ed__60_MoveNext_mA298ABEE6914BB1F1286D474D526E6F9ED35DDA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CRequestPermissionAsyncU3Eb__0_mDE19164E7C6FE0BFCBD5A360530B170478C97C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnPermissionResultU3Eb__0_mA56A4725FAB64E15E981F12AEC196DA1D3E2104E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mE9DA6562334F438448796D3E955F5C49588D2B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m1BF6AE2C11256457708BA3178F764757C9A9E6A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass60_0_U3CLoadImageAtPathAsyncU3Eb__0_mFDB5A1475BAA831BEF204BCC0757A6568796D0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass62_0_U3CGetVideoThumbnailAsyncU3Eb__0_m7CFD0690322BB891A63478E168E48BFF50B3B293_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t411BACD4FC2847752D77E1C49F873858F0F59B15 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>
struct  TaskCompletionSource_1_tFEFD2FEC3619B04450B0DCBC20CD7229C2D07354  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_tFEFD2FEC3619B04450B0DCBC20CD7229C2D07354, ___m_task_0)); }
	inline Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>
struct  TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D, ___m_task_0)); }
	inline Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NativeGallery
struct  NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF  : public RuntimeObject
{
public:

public:
};

struct NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass NativeGallery::m_ajc
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeGallery::m_context
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___m_context_1;
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_2;
	// System.String NativeGallery::m_selectedMediaPath
	String_t* ___m_selectedMediaPath_3;

public:
	inline static int32_t get_offset_of_m_ajc_0() { return static_cast<int32_t>(offsetof(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields, ___m_ajc_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_m_ajc_0() const { return ___m_ajc_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_m_ajc_0() { return &___m_ajc_0; }
	inline void set_m_ajc_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___m_ajc_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ajc_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields, ___m_context_1)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_m_context_1() const { return ___m_context_1; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_context_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_temporaryImagePath_2() { return static_cast<int32_t>(offsetof(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields, ___m_temporaryImagePath_2)); }
	inline String_t* get_m_temporaryImagePath_2() const { return ___m_temporaryImagePath_2; }
	inline String_t** get_address_of_m_temporaryImagePath_2() { return &___m_temporaryImagePath_2; }
	inline void set_m_temporaryImagePath_2(String_t* value)
	{
		___m_temporaryImagePath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_temporaryImagePath_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedMediaPath_3() { return static_cast<int32_t>(offsetof(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields, ___m_selectedMediaPath_3)); }
	inline String_t* get_m_selectedMediaPath_3() const { return ___m_selectedMediaPath_3; }
	inline String_t** get_address_of_m_selectedMediaPath_3() { return &___m_selectedMediaPath_3; }
	inline void set_m_selectedMediaPath_3(String_t* value)
	{
		___m_selectedMediaPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectedMediaPath_3), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B  : public RuntimeObject
{
public:
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<>4__this
	NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * ___U3CU3E4__this_0;
	// System.String NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::path
	String_t* ___path_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B, ___U3CU3E4__this_0)); }
	inline NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_1), (void*)value);
	}
};


// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2  : public RuntimeObject
{
public:
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<>4__this
	NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * ___U3CU3E4__this_0;
	// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::result
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___result_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2, ___U3CU3E4__this_0)); }
	inline NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2, ___result_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_result_1() const { return ___result_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B  : public RuntimeObject
{
public:
	// NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid/<>c__DisplayClass3_0::<>4__this
	NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * ___U3CU3E4__this_0;
	// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid/<>c__DisplayClass3_0::result
	int32_t ___result_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B, ___U3CU3E4__this_0)); }
	inline NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}
};


// NativeGallery/<>c__DisplayClass26_0
struct  U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission> NativeGallery/<>c__DisplayClass26_0::tcs
	TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * ___tcs_0;

public:
	inline static int32_t get_offset_of_tcs_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33, ___tcs_0)); }
	inline TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * get_tcs_0() const { return ___tcs_0; }
	inline TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D ** get_address_of_tcs_0() { return &___tcs_0; }
	inline void set_tcs_0(TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * value)
	{
		___tcs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_0), (void*)value);
	}
};


// NativeGallery/<>c__DisplayClass60_0
struct  U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498  : public RuntimeObject
{
public:
	// System.String NativeGallery/<>c__DisplayClass60_0::imagePath
	String_t* ___imagePath_0;
	// System.String NativeGallery/<>c__DisplayClass60_0::temporaryImagePath
	String_t* ___temporaryImagePath_1;
	// System.Int32 NativeGallery/<>c__DisplayClass60_0::maxSize
	int32_t ___maxSize_2;

public:
	inline static int32_t get_offset_of_imagePath_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498, ___imagePath_0)); }
	inline String_t* get_imagePath_0() const { return ___imagePath_0; }
	inline String_t** get_address_of_imagePath_0() { return &___imagePath_0; }
	inline void set_imagePath_0(String_t* value)
	{
		___imagePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imagePath_0), (void*)value);
	}

	inline static int32_t get_offset_of_temporaryImagePath_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498, ___temporaryImagePath_1)); }
	inline String_t* get_temporaryImagePath_1() const { return ___temporaryImagePath_1; }
	inline String_t** get_address_of_temporaryImagePath_1() { return &___temporaryImagePath_1; }
	inline void set_temporaryImagePath_1(String_t* value)
	{
		___temporaryImagePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temporaryImagePath_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxSize_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498, ___maxSize_2)); }
	inline int32_t get_maxSize_2() const { return ___maxSize_2; }
	inline int32_t* get_address_of_maxSize_2() { return &___maxSize_2; }
	inline void set_maxSize_2(int32_t value)
	{
		___maxSize_2 = value;
	}
};


// NativeGallery/<>c__DisplayClass62_0
struct  U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD  : public RuntimeObject
{
public:
	// System.String NativeGallery/<>c__DisplayClass62_0::videoPath
	String_t* ___videoPath_0;
	// System.String NativeGallery/<>c__DisplayClass62_0::temporaryImagePath
	String_t* ___temporaryImagePath_1;
	// System.Int32 NativeGallery/<>c__DisplayClass62_0::maxSize
	int32_t ___maxSize_2;
	// System.Double NativeGallery/<>c__DisplayClass62_0::captureTimeInSeconds
	double ___captureTimeInSeconds_3;

public:
	inline static int32_t get_offset_of_videoPath_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD, ___videoPath_0)); }
	inline String_t* get_videoPath_0() const { return ___videoPath_0; }
	inline String_t** get_address_of_videoPath_0() { return &___videoPath_0; }
	inline void set_videoPath_0(String_t* value)
	{
		___videoPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_temporaryImagePath_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD, ___temporaryImagePath_1)); }
	inline String_t* get_temporaryImagePath_1() const { return ___temporaryImagePath_1; }
	inline String_t** get_address_of_temporaryImagePath_1() { return &___temporaryImagePath_1; }
	inline void set_temporaryImagePath_1(String_t* value)
	{
		___temporaryImagePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temporaryImagePath_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxSize_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD, ___maxSize_2)); }
	inline int32_t get_maxSize_2() const { return ___maxSize_2; }
	inline int32_t* get_address_of_maxSize_2() { return &___maxSize_2; }
	inline void set_maxSize_2(int32_t value)
	{
		___maxSize_2 = value;
	}

	inline static int32_t get_offset_of_captureTimeInSeconds_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD, ___captureTimeInSeconds_3)); }
	inline double get_captureTimeInSeconds_3() const { return ___captureTimeInSeconds_3; }
	inline double* get_address_of_captureTimeInSeconds_3() { return &___captureTimeInSeconds_3; }
	inline void set_captureTimeInSeconds_3(double value)
	{
		___captureTimeInSeconds_3 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>
struct  TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17, ___m_task_0)); }
	inline Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.YieldAwaitable
struct  YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA__padding[1];
	};

public:
};


// NativeGallery/VideoProperties
struct  VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 
{
public:
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31, ___duration_2)); }
	inline int64_t get_duration_2() const { return ___duration_2; }
	inline int64_t* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(int64_t value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31, ___rotation_3)); }
	inline float get_rotation_3() const { return ___rotation_3; }
	inline float* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(float value)
	{
		___rotation_3 = value;
	}
};


// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct  YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE__padding[1];
	};

public:
};

struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields
{
public:
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___s_sendOrPostCallbackRunAction_1;

public:
	inline static int32_t get_offset_of_s_waitCallbackRunAction_0() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_waitCallbackRunAction_0)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_s_waitCallbackRunAction_0() const { return ___s_waitCallbackRunAction_0; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_s_waitCallbackRunAction_0() { return &___s_waitCallbackRunAction_0; }
	inline void set_s_waitCallbackRunAction_0(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___s_waitCallbackRunAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_waitCallbackRunAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_sendOrPostCallbackRunAction_1() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_sendOrPostCallbackRunAction_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_s_sendOrPostCallbackRunAction_1() const { return ___s_sendOrPostCallbackRunAction_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_s_sendOrPostCallbackRunAction_1() { return &___s_sendOrPostCallbackRunAction_1; }
	inline void set_s_sendOrPostCallbackRunAction_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___s_sendOrPostCallbackRunAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sendOrPostCallbackRunAction_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>
struct  AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1, ___m_task_2)); }
	inline Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAttributes
struct  FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// NativeGallery/ImageOrientation
struct  ImageOrientation_t6472ECEC7C1FE106D8F35C475FE0F855AC65D9EB 
{
public:
	// System.Int32 NativeGallery/ImageOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageOrientation_t6472ECEC7C1FE106D8F35C475FE0F855AC65D9EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/MediaType
struct  MediaType_t491ED19A465C78FA6115DE4738481316110FA0EE 
{
public:
	// System.Int32 NativeGallery/MediaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaType_t491ED19A465C78FA6115DE4738481316110FA0EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/Permission
struct  Permission_t45AE01CA9353CE8BBBD7E64489942D119598714B 
{
public:
	// System.Int32 NativeGallery/Permission::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Permission_t45AE01CA9353CE8BBBD7E64489942D119598714B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/PermissionType
struct  PermissionType_t96A1BC6A1D8C6C060121660FDFD10B08A2A7467D 
{
public:
	// System.Int32 NativeGallery/PermissionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionType_t96A1BC6A1D8C6C060121660FDFD10B08A2A7467D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct  Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Int32Enum>
struct  Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB258CD0C610C65E36B1AC1470D310CC8290BDA75 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tED7578086478CDE88DBC2FFFDCB01FEA9F167392 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tB258CD0C610C65E36B1AC1470D310CC8290BDA75 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tB258CD0C610C65E36B1AC1470D310CC8290BDA75 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tB258CD0C610C65E36B1AC1470D310CC8290BDA75 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tED7578086478CDE88DBC2FFFDCB01FEA9F167392 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tED7578086478CDE88DBC2FFFDCB01FEA9F167392 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tED7578086478CDE88DBC2FFFDCB01FEA9F167392 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct  Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F, ___m_result_22)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_result_22() const { return ___m_result_22; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tDCE249C293A57CC650CFD2905621E979D1B2CE6B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t69E68B55496F4413792BAA446B637320D0DE872A * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tDCE249C293A57CC650CFD2905621E979D1B2CE6B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tDCE249C293A57CC650CFD2905621E979D1B2CE6B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tDCE249C293A57CC650CFD2905621E979D1B2CE6B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t69E68B55496F4413792BAA446B637320D0DE872A * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t69E68B55496F4413792BAA446B637320D0DE872A ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t69E68B55496F4413792BAA446B637320D0DE872A * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<NativeGallery/Permission>
struct  Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t05291EC876FF62DB085D5D61CF6013A4CCEB3589 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tE3CE1EB23CCA31D7D3B657D242F66B72078695F7 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t05291EC876FF62DB085D5D61CF6013A4CCEB3589 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t05291EC876FF62DB085D5D61CF6013A4CCEB3589 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t05291EC876FF62DB085D5D61CF6013A4CCEB3589 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tE3CE1EB23CCA31D7D3B657D242F66B72078695F7 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tE3CE1EB23CCA31D7D3B657D242F66B72078695F7 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tE3CE1EB23CCA31D7D3B657D242F66B72078695F7 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.MonoIOStat
struct  MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct  NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// NativeGallery/MediaPickCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callback
	MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback_4;
	// NativeGallery/MediaPickMultipleCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackMultiple
	MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callbackMultiple_5;
	// NativeGalleryNamespace.NGCallbackHelper NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackHelper
	NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * ___callbackHelper_6;

public:
	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3, ___callback_4)); }
	inline MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * get_callback_4() const { return ___callback_4; }
	inline MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_callbackMultiple_5() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3, ___callbackMultiple_5)); }
	inline MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * get_callbackMultiple_5() const { return ___callbackMultiple_5; }
	inline MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C ** get_address_of_callbackMultiple_5() { return &___callbackMultiple_5; }
	inline void set_callbackMultiple_5(MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * value)
	{
		___callbackMultiple_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMultiple_5), (void*)value);
	}

	inline static int32_t get_offset_of_callbackHelper_6() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3, ___callbackHelper_6)); }
	inline NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * get_callbackHelper_6() const { return ___callbackHelper_6; }
	inline NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 ** get_address_of_callbackHelper_6() { return &___callbackHelper_6; }
	inline void set_callbackHelper_6(NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * value)
	{
		___callbackHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackHelper_6), (void*)value);
	}
};


// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct  NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// System.Object NativeGalleryNamespace.NGPermissionCallbackAndroid::threadLock
	RuntimeObject * ___threadLock_4;
	// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_threadLock_4() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2, ___threadLock_4)); }
	inline RuntimeObject * get_threadLock_4() const { return ___threadLock_4; }
	inline RuntimeObject ** get_address_of_threadLock_4() { return &___threadLock_4; }
	inline void set_threadLock_4(RuntimeObject * value)
	{
		___threadLock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadLock_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2, ___U3CResultU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultU3Ek__BackingField_5() const { return ___U3CResultU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultU3Ek__BackingField_5() { return &___U3CResultU3Ek__BackingField_5; }
	inline void set_U3CResultU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultU3Ek__BackingField_5 = value;
	}
};


// NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid
struct  NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// NativeGallery/PermissionCallback NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid::callback
	PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * ___callback_4;
	// NativeGalleryNamespace.NGCallbackHelper NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid::callbackHelper
	NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * ___callbackHelper_5;

public:
	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B, ___callback_4)); }
	inline PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * get_callback_4() const { return ___callback_4; }
	inline PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_callbackHelper_5() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B, ___callbackHelper_5)); }
	inline NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * get_callbackHelper_5() const { return ___callbackHelper_5; }
	inline NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 ** get_address_of_callbackHelper_5() { return &___callbackHelper_5; }
	inline void set_callbackHelper_5(NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * value)
	{
		___callbackHelper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackHelper_5), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// NativeGallery/<GetVideoThumbnailAsync>d__62
struct  U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 
{
public:
	// System.Int32 NativeGallery/<GetVideoThumbnailAsync>d__62::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> NativeGallery/<GetVideoThumbnailAsync>d__62::<>t__builder
	AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  ___U3CU3Et__builder_1;
	// System.String NativeGallery/<GetVideoThumbnailAsync>d__62::videoPath
	String_t* ___videoPath_2;
	// System.Int32 NativeGallery/<GetVideoThumbnailAsync>d__62::maxSize
	int32_t ___maxSize_3;
	// System.Double NativeGallery/<GetVideoThumbnailAsync>d__62::captureTimeInSeconds
	double ___captureTimeInSeconds_4;
	// NativeGallery/<>c__DisplayClass62_0 NativeGallery/<GetVideoThumbnailAsync>d__62::<>8__1
	U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * ___U3CU3E8__1_5;
	// System.Boolean NativeGallery/<GetVideoThumbnailAsync>d__62::markTextureNonReadable
	bool ___markTextureNonReadable_6;
	// System.Boolean NativeGallery/<GetVideoThumbnailAsync>d__62::generateMipmaps
	bool ___generateMipmaps_7;
	// System.Boolean NativeGallery/<GetVideoThumbnailAsync>d__62::linearColorSpace
	bool ___linearColorSpace_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NativeGallery/<GetVideoThumbnailAsync>d__62::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D> NativeGallery/<GetVideoThumbnailAsync>d__62::<>u__2
	TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  ___U3CU3Eu__2_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_videoPath_2() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___videoPath_2)); }
	inline String_t* get_videoPath_2() const { return ___videoPath_2; }
	inline String_t** get_address_of_videoPath_2() { return &___videoPath_2; }
	inline void set_videoPath_2(String_t* value)
	{
		___videoPath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoPath_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___maxSize_3)); }
	inline int32_t get_maxSize_3() const { return ___maxSize_3; }
	inline int32_t* get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(int32_t value)
	{
		___maxSize_3 = value;
	}

	inline static int32_t get_offset_of_captureTimeInSeconds_4() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___captureTimeInSeconds_4)); }
	inline double get_captureTimeInSeconds_4() const { return ___captureTimeInSeconds_4; }
	inline double* get_address_of_captureTimeInSeconds_4() { return &___captureTimeInSeconds_4; }
	inline void set_captureTimeInSeconds_4(double value)
	{
		___captureTimeInSeconds_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E8__1_5() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___U3CU3E8__1_5)); }
	inline U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * get_U3CU3E8__1_5() const { return ___U3CU3E8__1_5; }
	inline U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD ** get_address_of_U3CU3E8__1_5() { return &___U3CU3E8__1_5; }
	inline void set_U3CU3E8__1_5(U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * value)
	{
		___U3CU3E8__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_markTextureNonReadable_6() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___markTextureNonReadable_6)); }
	inline bool get_markTextureNonReadable_6() const { return ___markTextureNonReadable_6; }
	inline bool* get_address_of_markTextureNonReadable_6() { return &___markTextureNonReadable_6; }
	inline void set_markTextureNonReadable_6(bool value)
	{
		___markTextureNonReadable_6 = value;
	}

	inline static int32_t get_offset_of_generateMipmaps_7() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___generateMipmaps_7)); }
	inline bool get_generateMipmaps_7() const { return ___generateMipmaps_7; }
	inline bool* get_address_of_generateMipmaps_7() { return &___generateMipmaps_7; }
	inline void set_generateMipmaps_7(bool value)
	{
		___generateMipmaps_7 = value;
	}

	inline static int32_t get_offset_of_linearColorSpace_8() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___linearColorSpace_8)); }
	inline bool get_linearColorSpace_8() const { return ___linearColorSpace_8; }
	inline bool* get_address_of_linearColorSpace_8() { return &___linearColorSpace_8; }
	inline void set_linearColorSpace_8(bool value)
	{
		___linearColorSpace_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___U3CU3Eu__1_9)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_10() { return static_cast<int32_t>(offsetof(U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9, ___U3CU3Eu__2_10)); }
	inline TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  get_U3CU3Eu__2_10() const { return ___U3CU3Eu__2_10; }
	inline TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 * get_address_of_U3CU3Eu__2_10() { return &___U3CU3Eu__2_10; }
	inline void set_U3CU3Eu__2_10(TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  value)
	{
		___U3CU3Eu__2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
	}
};


// NativeGallery/<LoadImageAtPathAsync>d__60
struct  U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 
{
public:
	// System.Int32 NativeGallery/<LoadImageAtPathAsync>d__60::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> NativeGallery/<LoadImageAtPathAsync>d__60::<>t__builder
	AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  ___U3CU3Et__builder_1;
	// System.String NativeGallery/<LoadImageAtPathAsync>d__60::imagePath
	String_t* ___imagePath_2;
	// System.Int32 NativeGallery/<LoadImageAtPathAsync>d__60::maxSize
	int32_t ___maxSize_3;
	// System.Boolean NativeGallery/<LoadImageAtPathAsync>d__60::linearColorSpace
	bool ___linearColorSpace_4;
	// System.Boolean NativeGallery/<LoadImageAtPathAsync>d__60::markTextureNonReadable
	bool ___markTextureNonReadable_5;
	// System.Boolean NativeGallery/<LoadImageAtPathAsync>d__60::generateMipmaps
	bool ___generateMipmaps_6;
	// NativeGallery/<>c__DisplayClass60_0 NativeGallery/<LoadImageAtPathAsync>d__60::<>8__1
	U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * ___U3CU3E8__1_7;
	// System.String NativeGallery/<LoadImageAtPathAsync>d__60::<loadPath>5__2
	String_t* ___U3CloadPathU3E5__2_8;
	// UnityEngine.Texture2D NativeGallery/<LoadImageAtPathAsync>d__60::<result>5__3
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CresultU3E5__3_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NativeGallery/<LoadImageAtPathAsync>d__60::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_10;
	// UnityEngine.Networking.UnityWebRequest NativeGallery/<LoadImageAtPathAsync>d__60::<www>5__4
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__4_11;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation NativeGallery/<LoadImageAtPathAsync>d__60::<asyncOperation>5__5
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * ___U3CasyncOperationU3E5__5_12;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter NativeGallery/<LoadImageAtPathAsync>d__60::<>u__2
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__2_13;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_imagePath_2() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___imagePath_2)); }
	inline String_t* get_imagePath_2() const { return ___imagePath_2; }
	inline String_t** get_address_of_imagePath_2() { return &___imagePath_2; }
	inline void set_imagePath_2(String_t* value)
	{
		___imagePath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imagePath_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___maxSize_3)); }
	inline int32_t get_maxSize_3() const { return ___maxSize_3; }
	inline int32_t* get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(int32_t value)
	{
		___maxSize_3 = value;
	}

	inline static int32_t get_offset_of_linearColorSpace_4() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___linearColorSpace_4)); }
	inline bool get_linearColorSpace_4() const { return ___linearColorSpace_4; }
	inline bool* get_address_of_linearColorSpace_4() { return &___linearColorSpace_4; }
	inline void set_linearColorSpace_4(bool value)
	{
		___linearColorSpace_4 = value;
	}

	inline static int32_t get_offset_of_markTextureNonReadable_5() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___markTextureNonReadable_5)); }
	inline bool get_markTextureNonReadable_5() const { return ___markTextureNonReadable_5; }
	inline bool* get_address_of_markTextureNonReadable_5() { return &___markTextureNonReadable_5; }
	inline void set_markTextureNonReadable_5(bool value)
	{
		___markTextureNonReadable_5 = value;
	}

	inline static int32_t get_offset_of_generateMipmaps_6() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___generateMipmaps_6)); }
	inline bool get_generateMipmaps_6() const { return ___generateMipmaps_6; }
	inline bool* get_address_of_generateMipmaps_6() { return &___generateMipmaps_6; }
	inline void set_generateMipmaps_6(bool value)
	{
		___generateMipmaps_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E8__1_7() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CU3E8__1_7)); }
	inline U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * get_U3CU3E8__1_7() const { return ___U3CU3E8__1_7; }
	inline U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 ** get_address_of_U3CU3E8__1_7() { return &___U3CU3E8__1_7; }
	inline void set_U3CU3E8__1_7(U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * value)
	{
		___U3CU3E8__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloadPathU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CloadPathU3E5__2_8)); }
	inline String_t* get_U3CloadPathU3E5__2_8() const { return ___U3CloadPathU3E5__2_8; }
	inline String_t** get_address_of_U3CloadPathU3E5__2_8() { return &___U3CloadPathU3E5__2_8; }
	inline void set_U3CloadPathU3E5__2_8(String_t* value)
	{
		___U3CloadPathU3E5__2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadPathU3E5__2_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresultU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CresultU3E5__3_9)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CresultU3E5__3_9() const { return ___U3CresultU3E5__3_9; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CresultU3E5__3_9() { return &___U3CresultU3E5__3_9; }
	inline void set_U3CresultU3E5__3_9(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CresultU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3E5__3_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_10() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CU3Eu__1_10)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_10() const { return ___U3CU3Eu__1_10; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_10() { return &___U3CU3Eu__1_10; }
	inline void set_U3CU3Eu__1_10(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__4_11() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CwwwU3E5__4_11)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__4_11() const { return ___U3CwwwU3E5__4_11; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__4_11() { return &___U3CwwwU3E5__4_11; }
	inline void set_U3CwwwU3E5__4_11(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__4_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__4_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CasyncOperationU3E5__5_12() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CasyncOperationU3E5__5_12)); }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * get_U3CasyncOperationU3E5__5_12() const { return ___U3CasyncOperationU3E5__5_12; }
	inline UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 ** get_address_of_U3CasyncOperationU3E5__5_12() { return &___U3CasyncOperationU3E5__5_12; }
	inline void set_U3CasyncOperationU3E5__5_12(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * value)
	{
		___U3CasyncOperationU3E5__5_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CasyncOperationU3E5__5_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_13() { return static_cast<int32_t>(offsetof(U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7, ___U3CU3Eu__2_13)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__2_13() const { return ___U3CU3Eu__2_13; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__2_13() { return &___U3CU3Eu__2_13; }
	inline void set_U3CU3Eu__2_13(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__2_13 = value;
	}
};


// NativeGallery/ImageProperties
struct  ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 
{
public:
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_mimeType_2() { return static_cast<int32_t>(offsetof(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2, ___mimeType_2)); }
	inline String_t* get_mimeType_2() const { return ___mimeType_2; }
	inline String_t** get_address_of_mimeType_2() { return &___mimeType_2; }
	inline void set_mimeType_2(String_t* value)
	{
		___mimeType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimeType_2), (void*)value);
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2, ___orientation_3)); }
	inline int32_t get_orientation_3() const { return ___orientation_3; }
	inline int32_t* get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(int32_t value)
	{
		___orientation_3 = value;
	}
};

// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// System.Func`1<System.String>
struct  Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// NativeGallery/MediaPickCallback
struct  MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/MediaPickMultipleCallback
struct  MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/MediaSaveCallback
struct  MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/PermissionCallback
struct  PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.FileNotFoundException
struct  FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// NativeGalleryNamespace.NGCallbackHelper
struct  NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action NativeGalleryNamespace.NGCallbackHelper::mainThreadAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___mainThreadAction_4;

public:
	inline static int32_t get_offset_of_mainThreadAction_4() { return static_cast<int32_t>(offsetof(NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53, ___mainThreadAction_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_mainThreadAction_4() const { return ___mainThreadAction_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_mainThreadAction_4() { return &___mainThreadAction_4; }
	inline void set_mainThreadAction_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___mainThreadAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainThreadAction_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m9A5F4E482FADDB9C7CCDAF94E391CE834AD8B6D3_gshared (TaskCompletionSource_1_tFEFD2FEC3619B04450B0DCBC20CD7229C2D07354 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * TaskCompletionSource_1_get_Task_mAE8B55209748A9464617D11A81F3FEFA1AA53B9C_gshared_inline (TaskCompletionSource_1_tFEFD2FEC3619B04450B0DCBC20CD7229C2D07354 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NativeGallery/<LoadImageAtPathAsync>d__60>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mA1FC75C4CE5DAE35E2DF396389FF6D3F893D538B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NativeGallery/<GetVideoThumbnailAsync>d__62>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m0386AFAE0006B0F5FD47E7FFDBA627926C1E8B49_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32Enum>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mBA51563E9724B8FC81375D5114C0DD7F12D8D0F4_gshared (TaskCompletionSource_1_tFEFD2FEC3619B04450B0DCBC20CD7229C2D07354 * __this, int32_t ___result0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<T> NativeGallery::TryCallNativeAndroidFunctionOnSeparateThread<System.Object>(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisRuntimeObject_m6C1D5778D6364F2732E500C4C58CD2E6E8D81D28_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___function0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,NativeGallery/<GetVideoThumbnailAsync>d__62>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m668879DEF46C53E07588176365DA150F260843B9_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,NativeGallery/<LoadImageAtPathAsync>d__60>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mCF7C8B06D0447583C2E67C0AF4F9B7086620F5B0_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NativeGallery/<LoadImageAtPathAsync>d__60>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mB89D403084AFFACC0AC7B5EC3C9659BDA7E2EB41_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * ___stateMachine1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_gshared (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixelData<System.Byte>(Unity.Collections.NativeArray`1<!!0>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixelData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m365302D7DAECFCF19B28C4DE485FFD2779B0EB4C_gshared (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___data0, int32_t ___mipLevel1, int32_t ___sourceDataStartIndex2, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGCallbackHelper>()
inline NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * GameObject_AddComponent_TisNGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53_mF9E506AD8FE8BA0B422A1075B62327131974F51B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3FBB9974BE9F5CAB4091E407BD8C5A9802A8427E (U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m20A9E0A0FF7ED9A71FD02C3FB8225BEA8188CE78_inline (NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___function0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC0E0BA01DE61691009913F7E3F013E3AD458621D (U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mE54C26B18D0FDD4F07EAF3BEFFDD9E8AE7C3760F_inline (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Pulse(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Pulse_m690EF6269492676F5A9A20430D3CC9363D54A17D (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m6941220476963626A39944044A0E4B04F46F63B7 (U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC (const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08 (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::CheckPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_m8B78C0DA8FC7CAA3D264826ABE3665A9B9A4E370 (int32_t ___permissionType0, int32_t ___mediaTypes1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m972DE3B10F49D0E20F9C2A50D4B7B10616B8F582 (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m1D5052703D6E0DA7D1E383571F8C9D4FBD6B0C1F_inline (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Monitor::Wait(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m7C55D48467F2FB3C2344DAA18BA01266AF24B4F0 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid::.ctor(NativeGallery/PermissionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAsyncAndroid__ctor_mA8AB248E1B931E994FDA9A192A8900DA7F6FE56E (NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * __this, PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * ___callback0, const RuntimeMethod* method);
// System.Void NativeGallery/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mD5920EA15DCE3174CB9F08CAE004FADFC7A9FFDE (U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>::.ctor()
inline void TaskCompletionSource_1__ctor_m3D0C4E4E5E17A335F15674ECFA524431D304E013 (TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m9A5F4E482FADDB9C7CCDAF94E391CE834AD8B6D3_gshared)(__this, method);
}
// System.Void NativeGallery/PermissionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback__ctor_m14E5B3C7B286F6F6D4D95B5702B7C7550B304E04 (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeGallery::RequestPermissionAsync(NativeGallery/PermissionCallback,NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_RequestPermissionAsync_m474C7789C4D11A57866F315CC783629C37002C81 (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * ___callback0, int32_t ___permissionType1, int32_t ___mediaTypes2, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>::get_Task()
inline Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649 * TaskCompletionSource_1_get_Task_mDC748FA3121FA20ABCB4507C2BEFE1032EA33467_inline (TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649 * (*) (TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mAE8B55209748A9464617D11A81F3FEFA1AA53B9C_gshared_inline)(__this, method);
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52 (const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback4, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared)(__this, ___methodName0, ___args1, method);
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD (String_t* ___path0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F (String_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_m63DF6C3DACB6C1BFF85C0499C831411CBCF23213 (int32_t ___permissionType0, int32_t ___mediaTypes1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m21B84D36CB93E48BEE308648FD808AA8D873E3C9 (String_t* ___filename0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m8AE158027AD276257E639FC977472E5C7DDF60C2 (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5 (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794 (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_m5E1E245FC0B1BC3B6E4743E07E0B4DD4DABB1F0F (NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * __this, MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callbackMultiple1, const RuntimeMethod* method);
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_m300C4C908DED803C7A82AA3E5F1B53779D410F67 (const RuntimeMethod* method);
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m85ECEBA1BA38DFD71D6E50E8D87708ABBF69D556 (const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___quality1, const RuntimeMethod* method);
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytesFromCopy_m3839EE6CDE867B40A71E898FEF4E96ED9784DE0D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40 (const RuntimeMethod* method);
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2 (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1E5C9BF6206ED40B23CDB28341B8A64E05C43683 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, bool ___markNonReadable2, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Create()
inline AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  AsyncTaskMethodBuilder_1_Create_m517ACC11F6E57897463057312881836CA67EA311 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<NativeGallery/<LoadImageAtPathAsync>d__60>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mDC73BE74E3CF09714347DAD8FB4EFD4E258DA0BA (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mA1FC75C4CE5DAE35E2DF396389FF6D3F893D538B_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::get_Task()
inline Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * AsyncTaskMethodBuilder_1_get_Task_m019567531E62C83E522319756EBFF98F0701B663 (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<NativeGallery/<GetVideoThumbnailAsync>d__62>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m3DA646A6829D957827E10F0BF6E35DB12E4AF7ED (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m0386AFAE0006B0F5FD47E7FFDBA627926C1E8B49_gshared)(__this, ___stateMachine0, method);
}
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031 (ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m889B15D32988B9193049C9B4CCF25E42B4F000A0 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method);
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616 (VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m38FFA5C31A6D37294017FD9DCC18E85CBC605C57 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void NativeGallery/PermissionCallback::Invoke(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback_Invoke_m0BD90CDE104B99C2342C7DEF7C118154541654A2 (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * __this, int32_t ___permission0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<NativeGallery/Permission>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m87EEC1BF34AA87D5B6B562DC6F7FD82A5B89531D (TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * __this, int32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D *, int32_t, const RuntimeMethod*))TaskCompletionSource_1_SetResult_mBA51563E9724B8FC81375D5114C0DD7F12D8D0F4_gshared)(__this, ___result0, method);
}
// System.Void NativeGallery/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m028B42E801232CE5D620B4ABC3B07942B960C740 (U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<T> NativeGallery::TryCallNativeAndroidFunctionOnSeparateThread<System.String>(System.Func`1<T>)
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m0535E36EE3949DE0DEC0683D2169E693B27AC025 (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, const RuntimeMethod*))NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisRuntimeObject_m6C1D5778D6364F2732E500C4C58CD2E6E8D81D28_gshared)(___function0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NativeGallery/<GetVideoThumbnailAsync>d__62>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m393756D1697D8960DE6A5D558849A2875C01F683 (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m668879DEF46C53E07588176365DA150F260843B9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * NativeGallery_LoadImageAtPathAsync_m50153D6F757CDB3FD59ABC4745C34B388F390FEF (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.Texture2D>::GetAwaiter()
inline TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  Task_1_GetAwaiter_m6ABB4B5617489363B2982D27BBDA769BC9D99FA0 (Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  (*) (Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mAD31D1CDC70818AC6C92E4D441535A67813E7F80 (TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>,NativeGallery/<GetVideoThumbnailAsync>d__62>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m4D1027DE2E564A6CB9747EFE357CA50B37D062B2 (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 * ___awaiter0, U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 *, U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m668879DEF46C53E07588176365DA150F260843B9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::GetResult()
inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TaskAwaiter_1_GetResult_m542979D6D2D029F345F3FCB0E42E0FB09912C254 (TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 * __this, const RuntimeMethod* method)
{
	return ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m715FF262082E0C50F26E3799B244EDAFF31F3EAD (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m6ADA7BFEC224D0041737DE5613CC36C48CF0B371 (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__62::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__62_MoveNext_m82FF8F333CD1FB10684CAD96FF0FFBD7EFA24B1F (U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mB08B5887F3732634DB06D0F2B76337E730ABB1FC (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__62::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__62_SetStateMachine_mA3DFD4B7F47657B11DD6373EAB525D17F98F693A (U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void NativeGallery/<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_m2126CD01B4F088BCEF4839D148162B85C444F652 (U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NativeGallery/<LoadImageAtPathAsync>d__60>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m3ACC73FD2E7D0F7FE5F6F6A7FFF0B4D1B054876F (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mCF7C8B06D0447583C2E67C0AF4F9B7086620F5B0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestTexture_GetTexture_mBE4B78548AD91FA2106846EA9EBBCC114E9DA1C3 (String_t* ___uri0, bool ___nonReadable1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B (const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8 (YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NativeGallery/<LoadImageAtPathAsync>d__60>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m43FEF3CB9919EB71456DF0C8E2A65B2EDDE2733F (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mB89D403084AFFACC0AC7B5EC3C9659BDA7E2EB41_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___www0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  (*) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_gshared)(__this, method);
}
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixelData<System.Byte>(Unity.Collections.NativeArray`1<!!0>,System.Int32,System.Int32)
inline void Texture2D_SetPixelData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m365302D7DAECFCF19B28C4DE485FFD2779B0EB4C (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___data0, int32_t ___mipLevel1, int32_t ___sourceDataStartIndex2, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 , int32_t, int32_t, const RuntimeMethod*))Texture2D_SetPixelData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m365302D7DAECFCF19B28C4DE485FFD2779B0EB4C_gshared)(__this, ___data0, ___mipLevel1, ___sourceDataStartIndex2, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void NativeGallery/<LoadImageAtPathAsync>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__60_MoveNext_mA298ABEE6914BB1F1286D474D526E6F9ED35DDA6 (U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * __this, const RuntimeMethod* method);
// System.Void NativeGallery/<LoadImageAtPathAsync>d__60::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__60_SetStateMachine_mF9AC75717820A473EE35F7AF6AA8CBA067C2E08E (U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void NativeGalleryNamespace.NGCallbackHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Awake_m7025553CFBA0BD139CA7401D6AF652F5B5CA3116 (NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Update_mF84B749574EB494A65C7450C987DBD5A16A979C2 (NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if( mainThreadAction != null )
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_mainThreadAction_4();
		if (!L_0)
		{
			goto IL_0028;
		}
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// System.Action temp = mainThreadAction;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_mainThreadAction_4();
		// mainThreadAction = null;
		__this->set_mainThreadAction_4((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// temp();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x28, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		// Destroy( gameObject );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m20A9E0A0FF7ED9A71FD02C3FB8225BEA8188CE78 (NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___function0, const RuntimeMethod* method)
{
	{
		// mainThreadAction = function;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___function0;
		__this->set_mainThreadAction_4(L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper__ctor_m17A26DEE834C678E21FEAF9276627C4790A01CF3 (NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_m5E1E245FC0B1BC3B6E4743E07E0B4DD4DABB1F0F (NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * __this, MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callbackMultiple1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53_mF9E506AD8FE8BA0B422A1075B62327131974F51B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGMediaReceiveCallbackAndroid( NativeGallery.MediaPickCallback callback, NativeGallery.MediaPickMultipleCallback callbackMultiple ) : base( "com.yasirkula.unity.NativeGalleryMediaReceiver" )
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381, /*hidden argument*/NULL);
		// this.callback = callback;
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		__this->set_callback_4(L_0);
		// this.callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_1 = ___callbackMultiple1;
		__this->set_callbackMultiple_5(L_1);
		// callbackHelper = new GameObject( "NGCallbackHelper" ).AddComponent<NGCallbackHelper>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26, /*hidden argument*/NULL);
		NullCheck(L_2);
		NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * L_3;
		L_3 = GameObject_AddComponent_TisNGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53_mF9E506AD8FE8BA0B422A1075B62327131974F51B(L_2, /*hidden argument*/GameObject_AddComponent_TisNGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53_mF9E506AD8FE8BA0B422A1075B62327131974F51B_RuntimeMethod_var);
		__this->set_callbackHelper_6(L_3);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMediaReceived_m1B0DB781C5B997FBF1D28FEBC4543ADBCD2C2A91 (NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mE9DA6562334F438448796D3E955F5C49588D2B23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B * L_0 = (U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m3FBB9974BE9F5CAB4091E407BD8C5A9802A8427E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B * L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		L_2->set_path_1(L_3);
		// callbackHelper.CallOnMainThread( () => callback( !string.IsNullOrEmpty( path ) ? path : null ) );
		NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * L_4 = __this->get_callbackHelper_6();
		U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mE9DA6562334F438448796D3E955F5C49588D2B23_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		NGCallbackHelper_CallOnMainThread_m20A9E0A0FF7ED9A71FD02C3FB8225BEA8188CE78_inline(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMultipleMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_mF987FD9AE683302E0D7CEA2A8793A95FB8E1745F (NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * __this, String_t* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m1BF6AE2C11256457708BA3178F764757C9A9E6A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * L_0 = (U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mC0E0BA01DE61691009913F7E3F013E3AD458621D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// string[] result = null;
		U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_result_1((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_3 = ___paths0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_00a1;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_5 = ___paths0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8;
		L_8 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_0049;
	}

IL_0037:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0045;
		}
	}
	{
		// validPathCount++;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0045:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0049:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_16 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_18 = V_2;
		if (L_18)
		{
			goto IL_005b;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_19;
		goto IL_009a;
	}

IL_005b:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_20 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_009a;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_22 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_22);
		V_4 = L_23;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_0090;
	}

IL_0071:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		bool L_28;
		L_28 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_008a;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = V_4;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = V_1;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		String_t* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_35);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (String_t*)L_35);
	}

IL_008a:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0090:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_37 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = V_1;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0071;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = V_4;
		V_1 = L_39;
	}

IL_009a:
	{
		// result = pathsSplit;
		U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * L_40 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = V_1;
		NullCheck(L_40);
		L_40->set_result_1(L_41);
	}

IL_00a1:
	{
		// callbackHelper.CallOnMainThread( () => callbackMultiple( ( result != null && result.Length > 0 ) ? result : null ) );
		NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * L_42 = __this->get_callbackHelper_6();
		U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * L_43 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_44 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_44, L_43, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m1BF6AE2C11256457708BA3178F764757C9A9E6A4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_42);
		NGCallbackHelper_CallOnMainThread_m20A9E0A0FF7ED9A71FD02C3FB8225BEA8188CE78_inline(L_42, L_44, /*hidden argument*/NULL);
		// }
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
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m1D5052703D6E0DA7D1E383571F8C9D4FBD6B0C1F (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mE54C26B18D0FDD4F07EAF3BEFFDD9E8AE7C3760F (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m972DE3B10F49D0E20F9C2A50D4B7B10616B8F582 (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGPermissionCallbackAndroid( object threadLock ) : base( "com.yasirkula.unity.NativeGalleryPermissionReceiver" )
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2, /*hidden argument*/NULL);
		// Result = -1;
		NGPermissionCallbackAndroid_set_Result_mE54C26B18D0FDD4F07EAF3BEFFDD9E8AE7C3760F_inline(__this, (-1), /*hidden argument*/NULL);
		// this.threadLock = threadLock;
		RuntimeObject * L_0 = ___threadLock0;
		__this->set_threadLock_4(L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::OnPermissionResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_OnPermissionResult_mF635992F7612BB1A5C6C42903F4C6D668CEA3A6D (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Result = result;
		int32_t L_0 = ___result0;
		NGPermissionCallbackAndroid_set_Result_mE54C26B18D0FDD4F07EAF3BEFFDD9E8AE7C3760F_inline(__this, L_0, /*hidden argument*/NULL);
		// lock( threadLock )
		RuntimeObject * L_1 = __this->get_threadLock_4();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// Monitor.Pulse( threadLock );
		RuntimeObject * L_3 = __this->get_threadLock_4();
		Monitor_Pulse_m690EF6269492676F5A9A20430D3CC9363D54A17D(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x2F, FINALLY_0025);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002e;
			}
		}

IL_0028:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(37)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
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
// System.Void NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid::.ctor(NativeGallery/PermissionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAsyncAndroid__ctor_mA8AB248E1B931E994FDA9A192A8900DA7F6FE56E (NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * __this, PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53_mF9E506AD8FE8BA0B422A1075B62327131974F51B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGPermissionCallbackAsyncAndroid( NativeGallery.PermissionCallback callback ) : base( "com.yasirkula.unity.NativeGalleryPermissionReceiver" )
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2, /*hidden argument*/NULL);
		// this.callback = callback;
		PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * L_0 = ___callback0;
		__this->set_callback_4(L_0);
		// callbackHelper = new GameObject( "NGCallbackHelper" ).AddComponent<NGCallbackHelper>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26, /*hidden argument*/NULL);
		NullCheck(L_1);
		NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * L_2;
		L_2 = GameObject_AddComponent_TisNGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53_mF9E506AD8FE8BA0B422A1075B62327131974F51B(L_1, /*hidden argument*/GameObject_AddComponent_TisNGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53_mF9E506AD8FE8BA0B422A1075B62327131974F51B_RuntimeMethod_var);
		__this->set_callbackHelper_5(L_2);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid::OnPermissionResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAsyncAndroid_OnPermissionResult_m272FFE9A181D071C56B63D31B936D9984108BB29 (NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * __this, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnPermissionResultU3Eb__0_mA56A4725FAB64E15E981F12AEC196DA1D3E2104E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B * L_0 = (U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m6941220476963626A39944044A0E4B04F46F63B7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B * L_2 = V_0;
		int32_t L_3 = ___result0;
		NullCheck(L_2);
		L_2->set_result_1(L_3);
		// callbackHelper.CallOnMainThread( () => callback( (NativeGallery.Permission) result ) );
		NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * L_4 = __this->get_callbackHelper_5();
		U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3COnPermissionResultU3Eb__0_mA56A4725FAB64E15E981F12AEC196DA1D3E2104E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		NGCallbackHelper_CallOnMainThread_m20A9E0A0FF7ED9A71FD02C3FB8225BEA8188CE78_inline(L_4, L_6, /*hidden argument*/NULL);
		// }
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
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_ajc_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeGallery" );
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->set_m_ajc_0(L_1);
	}

IL_0016:
	{
		// return m_ajc;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_ajc_0();
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if( m_context == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_context_1();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->set_m_context_1(L_3);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = V_0;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// return m_context;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_context_1();
		return L_6;
	}
}
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_2();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->set_m_temporaryImagePath_2(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_5 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_2();
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_m300C4C908DED803C7A82AA3E5F1B53779D410F67 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedMediaPath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_selectedMediaPath_3();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedMediaPath = Path.Combine( Application.temporaryCachePath, "pickedMedia" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->set_m_selectedMediaPath_3(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_selectedMediaPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_5 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_selectedMediaPath_3();
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_m8B78C0DA8FC7CAA3D264826ABE3665A9B9A4E370 (int32_t ___permissionType0, int32_t ___mediaTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = (Permission) AJC.CallStatic<int>( "CheckPermission", Context, permissionType == PermissionType.Read, (int) mediaTypes );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___permissionType0;
		bool L_6 = ((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0));
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___mediaTypes1;
		int32_t L_10 = ((int32_t)L_9);
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		NullCheck(L_0);
		int32_t L_12;
		L_12 = AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63(L_0, _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2, L_8, /*hidden argument*/AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var);
		V_0 = L_12;
		// if( result == Permission.Denied && (Permission) PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) == Permission.ShouldAsk )
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_14;
		L_14 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		// result = Permission.ShouldAsk;
		V_0 = 2;
	}

IL_0046:
	{
		// return result;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_m63DF6C3DACB6C1BFF85C0499C831411CBCF23213 (int32_t ___permissionType0, int32_t ___mediaTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if( CheckPermission( permissionType, mediaTypes ) == Permission.Granted )
		int32_t L_0 = ___permissionType0;
		int32_t L_1 = ___mediaTypes1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NativeGallery_CheckPermission_m8B78C0DA8FC7CAA3D264826ABE3665A9B9A4E370(L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		// return Permission.Granted;
		return (int32_t)(1);
	}

IL_000c:
	{
		// object threadLock = new object();
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		// lock( threadLock )
		RuntimeObject * L_4 = V_0;
		V_1 = L_4;
		V_2 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_5, (bool*)(&V_2), /*hidden argument*/NULL);
			// NGPermissionCallbackAndroid nativeCallback = new NGPermissionCallbackAndroid( threadLock );
			RuntimeObject * L_6 = V_0;
			NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * L_7 = (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 *)il2cpp_codegen_object_new(NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2_il2cpp_TypeInfo_var);
			NGPermissionCallbackAndroid__ctor_m972DE3B10F49D0E20F9C2A50D4B7B10616B8F582(L_7, L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			// AJC.CallStatic( "RequestPermission", Context, nativeCallback, permissionType == PermissionType.Read, (int) mediaTypes, PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) );
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_8;
			L_8 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11;
			L_11 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_10;
			NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * L_13 = V_3;
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_12;
			int32_t L_15 = ___permissionType0;
			bool L_16 = ((bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0));
			RuntimeObject * L_17 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_14;
			int32_t L_19 = ___mediaTypes1;
			int32_t L_20 = ((int32_t)L_19);
			RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_21);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_18;
			int32_t L_23;
			L_23 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, 2, /*hidden argument*/NULL);
			int32_t L_24 = L_23;
			RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_25);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_25);
			NullCheck(L_8);
			AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_8, _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6, L_22, /*hidden argument*/NULL);
			// if( nativeCallback.Result == -1 )
			NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * L_26 = V_3;
			NullCheck(L_26);
			int32_t L_27;
			L_27 = NGPermissionCallbackAndroid_get_Result_m1D5052703D6E0DA7D1E383571F8C9D4FBD6B0C1F_inline(L_26, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
			{
				goto IL_007e;
			}
		}

IL_0077:
		{
			// System.Threading.Monitor.Wait( threadLock );
			RuntimeObject * L_28 = V_0;
			bool L_29;
			L_29 = Monitor_Wait_m7C55D48467F2FB3C2344DAA18BA01266AF24B4F0(L_28, /*hidden argument*/NULL);
		}

IL_007e:
		{
			// if( (Permission) nativeCallback.Result != Permission.ShouldAsk && PlayerPrefs.GetInt( "NativeGalleryPermission", -1 ) != nativeCallback.Result )
			NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * L_30 = V_3;
			NullCheck(L_30);
			int32_t L_31;
			L_31 = NGPermissionCallbackAndroid_get_Result_m1D5052703D6E0DA7D1E383571F8C9D4FBD6B0C1F_inline(L_30, /*hidden argument*/NULL);
			if ((((int32_t)L_31) == ((int32_t)2)))
			{
				goto IL_00af;
			}
		}

IL_0087:
		{
			int32_t L_32;
			L_32 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, (-1), /*hidden argument*/NULL);
			NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * L_33 = V_3;
			NullCheck(L_33);
			int32_t L_34;
			L_34 = NGPermissionCallbackAndroid_get_Result_m1D5052703D6E0DA7D1E383571F8C9D4FBD6B0C1F_inline(L_33, /*hidden argument*/NULL);
			if ((((int32_t)L_32) == ((int32_t)L_34)))
			{
				goto IL_00af;
			}
		}

IL_009a:
		{
			// PlayerPrefs.SetInt( "NativeGalleryPermission", nativeCallback.Result );
			NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * L_35 = V_3;
			NullCheck(L_35);
			int32_t L_36;
			L_36 = NGPermissionCallbackAndroid_get_Result_m1D5052703D6E0DA7D1E383571F8C9D4FBD6B0C1F_inline(L_35, /*hidden argument*/NULL);
			PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, L_36, /*hidden argument*/NULL);
			// PlayerPrefs.Save();
			PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		}

IL_00af:
		{
			// return (Permission) nativeCallback.Result;
			NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * L_37 = V_3;
			NullCheck(L_37);
			int32_t L_38;
			L_38 = NGPermissionCallbackAndroid_get_Result_m1D5052703D6E0DA7D1E383571F8C9D4FBD6B0C1F_inline(L_37, /*hidden argument*/NULL);
			V_4 = L_38;
			IL2CPP_LEAVE(0xC3, FINALLY_00b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b9;
	}

FINALLY_00b9:
	{ // begin finally (depth: 1)
		{
			bool L_39 = V_2;
			if (!L_39)
			{
				goto IL_00c2;
			}
		}

IL_00bc:
		{
			RuntimeObject * L_40 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_40, /*hidden argument*/NULL);
		}

IL_00c2:
		{
			IL2CPP_END_FINALLY(185)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(185)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
	}

IL_00c3:
	{
		// }
		int32_t L_41 = V_4;
		return L_41;
	}
}
// System.Void NativeGallery::RequestPermissionAsync(NativeGallery/PermissionCallback,NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_RequestPermissionAsync_m474C7789C4D11A57866F315CC783629C37002C81 (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * ___callback0, int32_t ___permissionType1, int32_t ___mediaTypes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6);
		s_Il2CppMethodInitialized = true;
	}
	NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * V_0 = NULL;
	{
		// NGPermissionCallbackAsyncAndroid nativeCallback = new NGPermissionCallbackAsyncAndroid( callback );
		PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * L_0 = ___callback0;
		NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * L_1 = (NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B *)il2cpp_codegen_object_new(NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B_il2cpp_TypeInfo_var);
		NGPermissionCallbackAsyncAndroid__ctor_mA8AB248E1B931E994FDA9A192A8900DA7F6FE56E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// AJC.CallStatic( "RequestPermission", Context, nativeCallback, permissionType == PermissionType.Read, (int) mediaTypes, (int) Permission.ShouldAsk );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2;
		L_2 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
		L_5 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		int32_t L_9 = ___permissionType1;
		bool L_10 = ((bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0));
		RuntimeObject * L_11 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		int32_t L_13 = ___mediaTypes2;
		int32_t L_14 = ((int32_t)L_13);
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		int32_t L_17 = 2;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_2, _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<NativeGallery/Permission> NativeGallery::RequestPermissionAsync(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649 * NativeGallery_RequestPermissionAsync_m1CF59F7ACF1F7072098D1030F6215BB94635E7B2 (int32_t ___permissionType0, int32_t ___mediaTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m3D0C4E4E5E17A335F15674ECFA524431D304E013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mDC748FA3121FA20ABCB4507C2BEFE1032EA33467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_U3CRequestPermissionAsyncU3Eb__0_mDE19164E7C6FE0BFCBD5A360530B170478C97C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33 * L_0 = (U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass26_0__ctor_mD5920EA15DCE3174CB9F08CAE004FADFC7A9FFDE(L_0, /*hidden argument*/NULL);
		// TaskCompletionSource<Permission> tcs = new TaskCompletionSource<Permission>();
		U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33 * L_1 = L_0;
		TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * L_2 = (TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D *)il2cpp_codegen_object_new(TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m3D0C4E4E5E17A335F15674ECFA524431D304E013(L_2, /*hidden argument*/TaskCompletionSource_1__ctor_m3D0C4E4E5E17A335F15674ECFA524431D304E013_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_tcs_0(L_2);
		// RequestPermissionAsync( ( permission ) => tcs.SetResult( permission ), permissionType, mediaTypes );
		U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33 * L_3 = L_1;
		PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * L_4 = (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 *)il2cpp_codegen_object_new(PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9_il2cpp_TypeInfo_var);
		PermissionCallback__ctor_m14E5B3C7B286F6F6D4D95B5702B7C7550B304E04(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass26_0_U3CRequestPermissionAsyncU3Eb__0_mDE19164E7C6FE0BFCBD5A360530B170478C97C1C_RuntimeMethod_var), /*hidden argument*/NULL);
		int32_t L_5 = ___permissionType0;
		int32_t L_6 = ___mediaTypes1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		NativeGallery_RequestPermissionAsync_m474C7789C4D11A57866F315CC783629C37002C81(L_4, L_5, L_6, /*hidden argument*/NULL);
		// return tcs.Task;
		NullCheck(L_3);
		TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * L_7 = L_3->get_tcs_0();
		NullCheck(L_7);
		Task_1_t4234E3304A699DB3D82352B9C7EC0BD1E68F4649 * L_8;
		L_8 = TaskCompletionSource_1_get_Task_mDC748FA3121FA20ABCB4507C2BEFE1032EA33467_inline(L_7, /*hidden argument*/TaskCompletionSource_1_get_Task_mDC748FA3121FA20ABCB4507C2BEFE1032EA33467_RuntimeMethod_var);
		return L_8;
	}
}
// NativeGallery/Permission NativeGallery::ProcessPermission(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_ProcessPermission_mE28CD31728A0322028B4A12685541F773732F52B (int32_t ___permission0, const RuntimeMethod* method)
{
	{
		// return ( PermissionFreeMode && (int) permission == 3 ) ? Permission.Granted : permission;
		int32_t L_0 = ___permission0;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___permission0;
		return L_1;
	}

IL_0006:
	{
		return (int32_t)(1);
	}
}
// System.Void NativeGallery::TryExtendLimitedAccessPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_TryExtendLimitedAccessPermission_m2B35E817A7884F7D57E7F1F28713164295EA5A51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( IsMediaPickerBusy() )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52(/*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_mAC8B0F0946D6992BA20D78C16A3E673968793154 (const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void NativeGallery::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_mDCBB2E95AEF5253A5D78C9BEBC94DE37E7BEB0DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AJC.CallStatic( "OpenSettings", Context );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m6BF7ABFFAC8A0ED113561E944FB2E7A5EE02F58A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Image, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_0, L_1, L_2, 1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mB747E9517058062310766BD916203633DD44B622 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Image, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50(L_0, L_1, L_2, 1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mD6D45685707A63EF228664AE0C5D02FA7C595D5F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( image == null )
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'image' is null!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveImageToGallery_mD6D45685707A63EF228664AE0C5D02FA7C595D5F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if( filename.EndsWith( ".jpeg", StringComparison.OrdinalIgnoreCase ) || filename.EndsWith( ".jpg", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_3 = ___filename2;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_3, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, 5, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5 = ___filename2;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_5, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, 5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0030:
	{
		// return SaveToGallery( GetTextureBytes( image, true ), album, filename, MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D(L_7, (bool)1, /*hidden argument*/NULL);
		String_t* L_9 = ___album1;
		String_t* L_10 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_11 = ___callback3;
		int32_t L_12;
		L_12 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_8, L_9, L_10, 1, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0041:
	{
		// else if( filename.EndsWith( ".png", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_13 = ___filename2;
		NullCheck(L_13);
		bool L_14;
		L_14 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_13, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, 5, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename, MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D(L_15, (bool)0, /*hidden argument*/NULL);
		String_t* L_17 = ___album1;
		String_t* L_18 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_19 = ___callback3;
		int32_t L_20;
		L_20 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_16, L_17, L_18, 1, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0060:
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename + ".png", MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
		L_22 = NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D(L_21, (bool)0, /*hidden argument*/NULL);
		String_t* L_23 = ___album1;
		String_t* L_24 = ___filename2;
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_24, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_26 = ___callback3;
		int32_t L_27;
		L_27 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_22, L_23, L_25, 1, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_mA41161C2CCBB11BB0163A06859975A30248D2D94 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Video, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_0, L_1, L_2, 2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m3660CEB0CCFFE1837188792AAF35E4EFD9979D29 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Video, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50(L_0, L_1, L_2, 2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mB6D53E3AF8F61E4636F9E7746747475DA5ECCCD2 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Audio, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_0, L_1, L_2, 4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mF4F5AE4BBA4E6DE2F3911A0D3CE34F34888FB468 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Audio, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50(L_0, L_1, L_2, 4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m85ECEBA1BA38DFD71D6E50E8D87708ABBF69D556 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMedia" );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(L_0, _stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleMediaTypesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleMediaTypesFromGallery_m3624691D962119F3F38D5B72532C57073969DCA1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMediaTypes" );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(L_0, _stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		return L_2;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m41D0B22C57D3345FA65841F1D79C64CACCE3155D (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_mDB8D168EAE73ADEE6CCACC7B4AEB331F0061FBA7 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudioFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudioFromGallery_mAD92CCC0D9CB6B53AB1723C7CEF5A9AEA729DCA6 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E(L_0, 4, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediaFromGallery_mA4702D4BD6EC28CE465CCA16CCAD883D10647096 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		int32_t L_1 = ___mediaTypes1;
		String_t* L_2 = ___title2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_m9B862FB4AE0ACB95A1AFE69770924D9871A30128 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_m053B9715CFE8B25307E8ABFA094B8773E3373242 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudiosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudiosFromGallery_m7D3C58B28433BF75A5444A297D74628D5476996F (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A(L_0, 4, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediasFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediasFromGallery_mC910AE3E39146011845E0EF2C66EB949961C28A5 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_0 = ___callback0;
		int32_t L_1 = ___mediaTypes1;
		String_t* L_2 = ___title2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52 (const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// NativeGallery/MediaType NativeGallery::GetMediaTypeOfFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaTypeOfFile_mF13B09FC7045496EABC7C8707CC7710D7F9FF984 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_000a:
	{
		// string extension = Path.GetExtension( path );
		String_t* L_2 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if( string.IsNullOrEmpty( extension ) )
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_001b:
	{
		// if( extension[0] == '.' )
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0039;
		}
	}
	{
		// if( extension.Length == 1 )
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0031:
	{
		// extension = extension.Substring( 1 );
		String_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_10, 1, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0039:
	{
		// string mime = AJC.CallStatic<string>( "GetMimeTypeFromExtension", extension.ToLowerInvariant() );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_12;
		L_12 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		NullCheck(L_12);
		String_t* L_17;
		L_17 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_12, _stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949, L_14, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_1 = L_17;
		// if( string.IsNullOrEmpty( mime ) )
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0062;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0062:
	{
		// else if( mime.StartsWith( "image/" ) )
		String_t* L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_20, _stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		// return MediaType.Image;
		return (int32_t)(1);
	}

IL_0071:
	{
		// else if( mime.StartsWith( "video/" ) )
		String_t* L_22 = V_1;
		NullCheck(L_22);
		bool L_23;
		L_23 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_22, _stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0080;
		}
	}
	{
		// return MediaType.Video;
		return (int32_t)(2);
	}

IL_0080:
	{
		// else if( mime.StartsWith( "audio/" ) )
		String_t* L_24 = V_1;
		NullCheck(L_24);
		bool L_25;
		L_25 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_24, _stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008f;
		}
	}
	{
		// return MediaType.Audio;
		return (int32_t)(4);
	}

IL_008f:
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B13_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write, mediaType );
		int32_t L_0 = ___mediaType3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_m63DF6C3DACB6C1BFF85C0499C831411CBCF23213(1, L_0, /*hidden argument*/NULL);
		// if( result == Permission.Granted )
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B13_0 = L_2;
			goto IL_0076;
		}
	}
	{
		// if( mediaBytes == null || mediaBytes.Length == 0 )
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___mediaBytes0;
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___mediaBytes0;
		NullCheck(L_4);
		G_B3_0 = G_B2_0;
		if ((((RuntimeArray*)L_4)->max_length))
		{
			G_B4_0 = G_B2_0;
			goto IL_001d;
		}
	}

IL_0012:
	{
		// throw new ArgumentException( "Parameter 'mediaBytes' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_6 = ___album1;
		G_B5_0 = G_B4_0;
		if (!L_6)
		{
			G_B6_0 = G_B4_0;
			goto IL_0028;
		}
	}
	{
		String_t* L_7 = ___album1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (L_8)
		{
			G_B7_0 = G_B5_0;
			goto IL_0033;
		}
	}

IL_0028:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_10 = ___filename2;
		G_B8_0 = G_B7_0;
		if (!L_10)
		{
			G_B9_0 = G_B7_0;
			goto IL_003e;
		}
	}
	{
		String_t* L_11 = ___filename2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
		if (L_12)
		{
			G_B10_0 = G_B8_0;
			goto IL_0049;
		}
	}

IL_003e:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D_RuntimeMethod_var)));
	}

IL_0049:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_14 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_15, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_16)
		{
			G_B12_0 = G_B10_0;
			goto IL_0060;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, /*hidden argument*/NULL);
		G_B12_0 = G_B11_0;
	}

IL_0060:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_17 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = NativeGallery_GetTemporarySavePath_m21B84D36CB93E48BEE308648FD808AA8D873E3C9(L_17, /*hidden argument*/NULL);
		// File.WriteAllBytes( path, mediaBytes );
		String_t* L_19 = L_18;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___mediaBytes0;
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_19, L_20, /*hidden argument*/NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_21 = ___album1;
		int32_t L_22 = ___mediaType3;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_23 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m8AE158027AD276257E639FC977472E5C7DDF60C2(L_19, L_21, L_22, L_23, /*hidden argument*/NULL);
		G_B13_0 = G_B12_0;
	}

IL_0076:
	{
		// return result;
		return G_B13_0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write, mediaType );
		int32_t L_0 = ___mediaType3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_m63DF6C3DACB6C1BFF85C0499C831411CBCF23213(1, L_0, /*hidden argument*/NULL);
		// if( result == Permission.Granted )
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B14_0 = L_2;
			goto IL_009d;
		}
	}
	{
		// if( !File.Exists( existingMediaPath ) )
		String_t* L_3 = ___existingMediaPath0;
		bool L_4;
		L_4 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_3, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_0027;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + existingMediaPath );
		String_t* L_5 = ___existingMediaPath0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_7 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_8 = ___album1;
		G_B4_0 = G_B3_0;
		if (!L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		String_t* L_9 = ___album1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		if (L_10)
		{
			G_B6_0 = G_B4_0;
			goto IL_003d;
		}
	}

IL_0032:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50_RuntimeMethod_var)));
	}

IL_003d:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_12 = ___filename2;
		G_B7_0 = G_B6_0;
		if (!L_12)
		{
			G_B8_0 = G_B6_0;
			goto IL_0048;
		}
	}
	{
		String_t* L_13 = ___filename2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_13, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (L_14)
		{
			G_B9_0 = G_B7_0;
			goto IL_0053;
		}
	}

IL_0048:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_15 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50_RuntimeMethod_var)));
	}

IL_0053:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_16 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_17, /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
		if (!L_18)
		{
			G_B13_0 = G_B9_0;
			goto IL_0084;
		}
	}
	{
		// string originalExtension = Path.GetExtension( existingMediaPath );
		String_t* L_19 = ___existingMediaPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// if( string.IsNullOrEmpty( originalExtension ) )
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_21, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_22)
		{
			G_B12_0 = G_B10_0;
			goto IL_007b;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, /*hidden argument*/NULL);
		G_B13_0 = G_B11_0;
		goto IL_0084;
	}

IL_007b:
	{
		// filename += originalExtension;
		String_t* L_23 = ___filename2;
		String_t* L_24 = V_1;
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_23, L_24, /*hidden argument*/NULL);
		___filename2 = L_25;
		G_B13_0 = G_B12_0;
	}

IL_0084:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_26 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = NativeGallery_GetTemporarySavePath_m21B84D36CB93E48BEE308648FD808AA8D873E3C9(L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		// File.Copy( existingMediaPath, path, true );
		String_t* L_28 = ___existingMediaPath0;
		String_t* L_29 = V_0;
		File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794(L_28, L_29, (bool)1, /*hidden argument*/NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_30 = V_0;
		String_t* L_31 = ___album1;
		int32_t L_32 = ___mediaType3;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_33 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m8AE158027AD276257E639FC977472E5C7DDF60C2(L_30, L_31, L_32, L_33, /*hidden argument*/NULL);
		G_B14_0 = G_B13_0;
	}

IL_009d:
	{
		// return result;
		return G_B14_0;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m8AE158027AD276257E639FC977472E5C7DDF60C2 (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98C4991DBD0370C554791D1BED854533606B6973);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string savePath = AJC.CallStatic<string>( "SaveMedia", Context, (int) mediaType, path, album );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___mediaType2;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		String_t* L_9 = ___path0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_8;
		String_t* L_11 = ___album1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		NullCheck(L_0);
		String_t* L_12;
		L_12 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteral98C4991DBD0370C554791D1BED854533606B6973, L_10, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_12;
		// File.Delete( path );
		String_t* L_13 = ___path0;
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_13, /*hidden argument*/NULL);
		// if( callback != null )
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_14 = ___callback3;
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		// callback( !string.IsNullOrEmpty( savePath ), savePath );
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_15 = ___callback3;
		String_t* L_16 = V_0;
		bool L_17;
		L_17 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_16, /*hidden argument*/NULL);
		String_t* L_18 = V_0;
		NullCheck(L_15);
		MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D(L_15, (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0), L_18, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m21B84D36CB93E48BEE308648FD808AA8D873E3C9 (String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string saveDir = Path.Combine( Application.persistentDataPath, "NGallery" );
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF, /*hidden argument*/NULL);
		// Directory.CreateDirectory( saveDir );
		String_t* L_2 = L_1;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_3;
		L_3 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_2, /*hidden argument*/NULL);
		// return Path.Combine( saveDir, filename );
		String_t* L_4 = ___filename0;
		String_t* L_5;
		L_5 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read, mediaType );
		int32_t L_0 = ___mediaType1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_m63DF6C3DACB6C1BFF85C0499C831411CBCF23213(0, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_005c;
		}
	}
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( callback, null ), (int) mediaType, false, SelectedMediaPath, mime, title );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4;
		L_4 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_9 = ___callback0;
		NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * L_10 = (NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 *)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3_il2cpp_TypeInfo_var);
		NGMediaReceiveCallbackAndroid__ctor_m5E1E245FC0B1BC3B6E4743E07E0B4DD4DABB1F0F(L_10, L_9, (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C *)NULL, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_8;
		int32_t L_12 = ___mediaType1;
		int32_t L_13 = ((int32_t)L_12);
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_11;
		bool L_16 = ((bool)0);
		RuntimeObject * L_17 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_15;
		String_t* L_19;
		L_19 = NativeGallery_get_SelectedMediaPath_m300C4C908DED803C7A82AA3E5F1B53779D410F67(/*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_18;
		String_t* L_21 = ___mime2;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_20;
		String_t* L_23 = ___title3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_23);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_4, _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36, L_22, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// return result;
		int32_t L_24 = V_0;
		return L_24;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read, mediaType );
		int32_t L_0 = ___mediaType1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_m63DF6C3DACB6C1BFF85C0499C831411CBCF23213(0, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_006f;
		}
	}
	{
		// if( CanSelectMultipleFilesFromGallery() )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = NativeGallery_CanSelectMultipleFilesFromGallery_m85ECEBA1BA38DFD71D6E50E8D87708ABBF69D556(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( null, callback ), (int) mediaType, true, SelectedMediaPath, mime, title );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5;
		L_5 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_10 = ___callback0;
		NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * L_11 = (NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 *)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3_il2cpp_TypeInfo_var);
		NGMediaReceiveCallbackAndroid__ctor_m5E1E245FC0B1BC3B6E4743E07E0B4DD4DABB1F0F(L_11, (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 *)NULL, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_9;
		int32_t L_13 = ___mediaType1;
		int32_t L_14 = ((int32_t)L_13);
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		bool L_17 = ((bool)1);
		RuntimeObject * L_18 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_16;
		String_t* L_20;
		L_20 = NativeGallery_get_SelectedMediaPath_m300C4C908DED803C7A82AA3E5F1B53779D410F67(/*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_19;
		String_t* L_22 = ___mime2;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_21;
		String_t* L_24 = ___title3;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_24);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_5, _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36, L_23, /*hidden argument*/NULL);
		// }
		goto IL_006f;
	}

IL_0065:
	{
		// else if( callback != null )
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_25 = ___callback0;
		if (!L_25)
		{
			goto IL_006f;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_26 = ___callback0;
		NullCheck(L_26);
		MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27(L_26, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// return result;
		int32_t L_27 = V_0;
		return L_27;
	}
}
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___isJpeg1;
			if (L_0)
			{
				goto IL_000b;
			}
		}

IL_0003:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = ___texture0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
			L_2 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_1, /*hidden argument*/NULL);
			G_B3_0 = L_2;
			goto IL_0013;
		}

IL_000b:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___texture0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641(L_3, ((int32_t)100), /*hidden argument*/NULL);
			G_B3_0 = L_4;
		}

IL_0013:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0016;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0021;
		throw e;
	}

CATCH_0016:
	{ // begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___texture0;
		bool L_6 = ___isJpeg1;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = NativeGallery_GetTextureBytesFromCopy_m3839EE6CDE867B40A71E898FEF4E96ED9784DE0D(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_002c;
	} // end catch (depth: 1)

CATCH_0021:
	{ // begin catch(System.ArgumentException)
		// catch( ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ___texture0;
		bool L_9 = ___isJpeg1;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = NativeGallery_GetTextureBytesFromCopy_m3839EE6CDE867B40A71E898FEF4E96ED9784DE0D(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytesFromCopy_m3839EE6CDE867B40A71E898FEF4E96ED9784DE0D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Saving non-readable textures is slower than saving readable textures" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9, /*hidden argument*/NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5;
		L_5 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// Graphics.Blit( texture, rt );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___texture0;
				RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
				Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_6, L_7, /*hidden argument*/NULL);
				// RenderTexture.active = rt;
				RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_1;
				RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_8, /*hidden argument*/NULL);
				// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ___texture0;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ___texture0;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
				bool L_13 = ___isJpeg1;
				G_B2_0 = L_12;
				G_B2_1 = L_10;
				if (L_13)
				{
					G_B3_0 = L_12;
					G_B3_1 = L_10;
					goto IL_0043;
				}
			}

IL_0040:
			{
				G_B4_0 = 4;
				G_B4_1 = G_B2_0;
				G_B4_2 = G_B2_1;
				goto IL_0044;
			}

IL_0043:
			{
				G_B4_0 = 3;
				G_B4_1 = G_B3_0;
				G_B4_2 = G_B3_1;
			}

IL_0044:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
				Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_14, G_B4_2, G_B4_1, G_B4_0, (bool)0, /*hidden argument*/NULL);
				V_0 = L_14;
				// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_0;
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ___texture0;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = ___texture0;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
				Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
				memset((&L_20), 0, sizeof(L_20));
				Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_20), (0.0f), (0.0f), ((float)((float)L_17)), ((float)((float)L_19)), /*hidden argument*/NULL);
				NullCheck(L_15);
				Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E(L_15, L_20, 0, 0, (bool)0, /*hidden argument*/NULL);
				// sourceTexReadable.Apply( false, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = V_0;
				NullCheck(L_21);
				Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660(L_21, (bool)0, (bool)0, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x97, FINALLY_008a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_007b;
			throw e;
		}

CATCH_007b:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// Object.DestroyImmediate( sourceTexReadable );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_22, /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			IL2CPP_LEAVE(0xBE, FINALLY_008a);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		// RenderTexture.active = activeRT;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23 = V_2;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_23, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary( rt );
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = V_1;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_24, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_0097:
	{
	}

IL_0098:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
				bool L_25 = ___isJpeg1;
				if (L_25)
				{
					goto IL_00a3;
				}
			}

IL_009b:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27;
				L_27 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_26, /*hidden argument*/NULL);
				G_B11_0 = L_27;
				goto IL_00ab;
			}

IL_00a3:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
				L_29 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641(L_28, ((int32_t)100), /*hidden argument*/NULL);
				G_B11_0 = L_29;
			}

IL_00ab:
			{
				V_3 = G_B11_0;
				IL2CPP_LEAVE(0xBE, FINALLY_00b7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00ae;
			throw e;
		}

CATCH_00ae:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			IL2CPP_LEAVE(0xBE, FINALLY_00b7);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		// Object.DestroyImmediate( sourceTexReadable );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_30, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_3;
		return L_31;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_3 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___imagePath0;
		bool L_4;
		L_4 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___imagePath0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_7 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___maxSize1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9;
		L_9 = SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40(/*hidden argument*/NULL);
		___maxSize1 = L_9;
	}

IL_0037:
	{
		// string loadPath = AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, TemporaryImagePath, maxSize );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_10;
		L_10 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13;
		L_13 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_12;
		String_t* L_15 = ___imagePath0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_14;
		String_t* L_17;
		L_17 = NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2(/*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		int32_t L_19 = ___maxSize1;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		NullCheck(L_10);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_10, _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D, L_18, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_22;
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_23 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0093;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_0094;
	}

IL_0093:
	{
		G_B10_0 = 3;
	}

IL_0094:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_30 = V_2;
		bool L_31 = ___generateMipmaps3;
		bool L_32 = ___linearColorSpace4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_33, 2, 2, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = V_3;
				String_t* L_35 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36;
				L_36 = File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829(L_35, /*hidden argument*/NULL);
				bool L_37 = ___markTextureNonReadable2;
				bool L_38;
				L_38 = ImageConversion_LoadImage_m1E5C9BF6206ED40B23CDB28341B8A64E05C43683(L_34, L_36, L_37, /*hidden argument*/NULL);
				if (L_38)
				{
					goto IL_00cb;
				}
			}

IL_00b0:
			{
				// Debug.LogWarning( "Couldn't load image at path: " + loadPath );
				String_t* L_39 = V_0;
				String_t* L_40;
				L_40 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4, L_39, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_40, /*hidden argument*/NULL);
				// Object.DestroyImmediate( result );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_41 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_41, /*hidden argument*/NULL);
				// return null;
				V_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
				IL2CPP_LEAVE(0xF4, FINALLY_00dd);
			}

IL_00cb:
			{
				// }
				IL2CPP_LEAVE(0xF2, FINALLY_00dd);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00cd;
			throw e;
		}

CATCH_00cd:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// Object.DestroyImmediate( result );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_42 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_42, /*hidden argument*/NULL);
			// return null;
			V_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
			IL2CPP_LEAVE(0xF4, FINALLY_00dd);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00dd;
	}

FINALLY_00dd:
	{ // begin finally (depth: 1)
		{
			// if( loadPath != imagePath )
			String_t* L_43 = V_0;
			String_t* L_44 = ___imagePath0;
			bool L_45;
			L_45 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_43, L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_00f1;
			}
		}

IL_00e6:
		try
		{ // begin try (depth: 2)
			// File.Delete( loadPath );
			String_t* L_46 = V_0;
			File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_46, /*hidden argument*/NULL);
			// }
			goto IL_00f1;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00ee;
			throw e;
		}

CATCH_00ee:
		{ // begin catch(System.Object)
			// catch { }
			// catch { }
			goto IL_00f1;
		} // end catch (depth: 2)

IL_00f1:
		{
			// }
			IL2CPP_END_FINALLY(221)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(221)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF4, IL_00f4)
		IL2CPP_JUMP_TBL(0xF2, IL_00f2)
	}

IL_00f2:
	{
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_47 = V_3;
		return L_47;
	}

IL_00f4:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_48 = V_4;
		return L_48;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * NativeGallery_LoadImageAtPathAsync_m50153D6F757CDB3FD59ABC4745C34B388F390FEF (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m517ACC11F6E57897463057312881836CA67EA311_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mDC73BE74E3CF09714347DAD8FB4EFD4E258DA0BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m019567531E62C83E522319756EBFF98F0701B663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___imagePath0;
		(&V_0)->set_imagePath_2(L_0);
		int32_t L_1 = ___maxSize1;
		(&V_0)->set_maxSize_3(L_1);
		bool L_2 = ___markTextureNonReadable2;
		(&V_0)->set_markTextureNonReadable_5(L_2);
		bool L_3 = ___generateMipmaps3;
		(&V_0)->set_generateMipmaps_6(L_3);
		bool L_4 = ___linearColorSpace4;
		(&V_0)->set_linearColorSpace_4(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  L_5;
		L_5 = AsyncTaskMethodBuilder_1_Create_m517ACC11F6E57897463057312881836CA67EA311(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m517ACC11F6E57897463057312881836CA67EA311_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_5);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7  L_6 = V_0;
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  L_7 = L_6.get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mDC73BE74E3CF09714347DAD8FB4EFD4E258DA0BA((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)(&V_1), (U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_mDC73BE74E3CF09714347DAD8FB4EFD4E258DA0BA_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_8 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m019567531E62C83E522319756EBFF98F0701B663((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_8, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m019567531E62C83E522319756EBFF98F0701B663_RuntimeMethod_var);
		return L_9;
	}
}
// UnityEngine.Texture2D NativeGallery::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * NativeGallery_GetVideoThumbnail_mC2155D5F135A311F245450FFD6CE747849D16162 (String_t* ___videoPath0, int32_t ___maxSize1, double ___captureTimeInSeconds2, bool ___markTextureNonReadable3, bool ___generateMipmaps4, bool ___linearColorSpace5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___maxSize1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40(/*hidden argument*/NULL);
		___maxSize1 = L_1;
	}

IL_000b:
	{
		// string thumbnailPath = AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, TemporaryImagePath + ".png", false, maxSize, captureTimeInSeconds );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2;
		L_2 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5;
		L_5 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = ___videoPath0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		String_t* L_9;
		L_9 = NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2(/*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_9, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_8;
		bool L_12 = ((bool)0);
		RuntimeObject * L_13 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_11;
		int32_t L_15 = ___maxSize1;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_14;
		double L_19 = ___captureTimeInSeconds2;
		double L_20 = L_19;
		RuntimeObject * L_21 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		NullCheck(L_2);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_2, _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F, L_18, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_22;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_006f;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize, markTextureNonReadable, generateMipmaps, linearColorSpace );
		String_t* L_25 = V_0;
		int32_t L_26 = ___maxSize1;
		bool L_27 = ___markTextureNonReadable3;
		bool L_28 = ___generateMipmaps4;
		bool L_29 = ___linearColorSpace5;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30;
		L_30 = NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29(L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_006f:
	{
		// return null;
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::GetVideoThumbnailAsync(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * NativeGallery_GetVideoThumbnailAsync_m81D02A316E5A43C229CB2B1601BD85CEBB003E29 (String_t* ___videoPath0, int32_t ___maxSize1, double ___captureTimeInSeconds2, bool ___markTextureNonReadable3, bool ___generateMipmaps4, bool ___linearColorSpace5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m517ACC11F6E57897463057312881836CA67EA311_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m3DA646A6829D957827E10F0BF6E35DB12E4AF7ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m019567531E62C83E522319756EBFF98F0701B663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___videoPath0;
		(&V_0)->set_videoPath_2(L_0);
		int32_t L_1 = ___maxSize1;
		(&V_0)->set_maxSize_3(L_1);
		double L_2 = ___captureTimeInSeconds2;
		(&V_0)->set_captureTimeInSeconds_4(L_2);
		bool L_3 = ___markTextureNonReadable3;
		(&V_0)->set_markTextureNonReadable_6(L_3);
		bool L_4 = ___generateMipmaps4;
		(&V_0)->set_generateMipmaps_7(L_4);
		bool L_5 = ___linearColorSpace5;
		(&V_0)->set_linearColorSpace_8(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  L_6;
		L_6 = AsyncTaskMethodBuilder_1_Create_m517ACC11F6E57897463057312881836CA67EA311(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m517ACC11F6E57897463057312881836CA67EA311_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_6);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9  L_7 = V_0;
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1  L_8 = L_7.get_U3CU3Et__builder_1();
		V_1 = L_8;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m3DA646A6829D957827E10F0BF6E35DB12E4AF7ED((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)(&V_1), (U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m3DA646A6829D957827E10F0BF6E35DB12E4AF7ED_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_9 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * L_10;
		L_10 = AsyncTaskMethodBuilder_1_get_Task_m019567531E62C83E522319756EBFF98F0701B663((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_9, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m019567531E62C83E522319756EBFF98F0701B663_RuntimeMethod_var);
		return L_10;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2  NativeGallery_GetImageProperties_mA64E8E11D9E791545D15A523024C0C2376547304 (String_t* ___imagePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___imagePath0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_4 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetImageProperties_mA64E8E11D9E791545D15A523024C0C2376547304_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetImageProperties", Context, imagePath );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5;
		L_5 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		String_t* L_10 = ___imagePath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_5, _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0138;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17;
		L_17 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_5;
		if (!L_18)
		{
			goto IL_0138;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))) < ((int32_t)4)))
		{
			goto IL_0138;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_23, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0087;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0087:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_28, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_009b;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_009b:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		// if( mimeType.Length == 0 )
		String_t* L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0122;
		}
	}
	{
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_36 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_37;
		L_37 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		// if( extension == ".png" )
		String_t* L_39 = V_7;
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00d0;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_0122;
	}

IL_00d0:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_41 = V_7;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_43 = V_7;
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00f4;
		}
	}

IL_00ec:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_0122;
	}

IL_00f4:
	{
		// else if( extension == ".gif" )
		String_t* L_45 = V_7;
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_45, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_010a;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_0122;
	}

IL_010a:
	{
		// else if( extension == ".bmp" )
		String_t* L_47 = V_7;
		bool L_48;
		L_48 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_47, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0120;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_0122;
	}

IL_0120:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_0122:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = V_5;
		NullCheck(L_49);
		int32_t L_50 = 3;
		String_t* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		String_t* L_52;
		L_52 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_51, /*hidden argument*/NULL);
		bool L_53;
		L_53 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_52, (int32_t*)(&V_6), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0138;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_54 = V_6;
		V_4 = L_54;
	}

IL_0138:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		String_t* L_57 = V_3;
		int32_t L_58 = V_4;
		ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2  L_59;
		memset((&L_59), 0, sizeof(L_59));
		ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031((&L_59), L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		return L_59;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31  NativeGallery_GetVideoProperties_m091E45231186EB0CB51F80494D5122C29F128973 (String_t* ___videoPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___videoPath0;
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___videoPath0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_4 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetVideoProperties_m091E45231186EB0CB51F80494D5122C29F128973_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetVideoProperties", Context, videoPath );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5;
		L_5 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		String_t* L_10 = ___videoPath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_5, _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)((int64_t)0));
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00db;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17;
		L_17 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_5;
		if (!L_18)
		{
			goto IL_00db;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))) < ((int32_t)4)))
		{
			goto IL_00db;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_23, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0086;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0086:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_28, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_009a;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_009a:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_33, (int64_t*)(&V_3), /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00af;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)((int64_t)0));
	}

IL_00af:
	{
		// if( !float.TryParse( properties[3].Trim().Replace( ',', '.' ), NumberStyles.Float, CultureInfo.InvariantCulture, out rotation ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = 3;
		String_t* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_38, ((int32_t)44), ((int32_t)46), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_40;
		L_40 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_41;
		L_41 = Single_TryParse_m889B15D32988B9193049C9B4CCF25E42B4F000A0(L_39, ((int32_t)167), L_40, (float*)(&V_4), /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00db;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00db:
	{
		// if( rotation == -90f )
		float L_42 = V_4;
		if ((!(((float)L_42) == ((float)(-90.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00eb:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_43 = V_1;
		int32_t L_44 = V_2;
		int64_t L_45 = V_3;
		float L_46 = V_4;
		VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31  L_47;
		memset((&L_47), 0, sizeof(L_47));
		VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616((&L_47), L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Void NativeGallery::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__cctor_mA3529E9CA001078587952A9A327EF15E3C0DBD85 (const RuntimeMethod* method)
{
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3FBB9974BE9F5CAB4091E407BD8C5A9802A8427E (U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<OnMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mE9DA6562334F438448796D3E955F5C49588D2B23 (U3CU3Ec__DisplayClass4_0_t2422EA0766C56CE87C2C485B1666FB1294600D7B * __this, const RuntimeMethod* method)
{
	MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * G_B2_0 = NULL;
	MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * G_B3_1 = NULL;
	{
		// callbackHelper.CallOnMainThread( () => callback( !string.IsNullOrEmpty( path ) ? path : null ) );
		NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_1 = L_0->get_callback_4();
		String_t* L_2 = __this->get_path_1();
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (!L_3)
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001b:
	{
		String_t* L_4 = __this->get_path_1();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		NullCheck(G_B3_1);
		MediaPickCallback_Invoke_m38FFA5C31A6D37294017FD9DCC18E85CBC605C57(G_B3_1, G_B3_0, /*hidden argument*/NULL);
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC0E0BA01DE61691009913F7E3F013E3AD458621D (U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<OnMultipleMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m1BF6AE2C11256457708BA3178F764757C9A9E6A4 (U3CU3Ec__DisplayClass5_0_t86FF30F94C57DC31010C31A1CCE320519DD960A2 * __this, const RuntimeMethod* method)
{
	MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * G_B2_0 = NULL;
	MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * G_B1_0 = NULL;
	MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * G_B3_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_0 = NULL;
	MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * G_B4_1 = NULL;
	{
		// callbackHelper.CallOnMainThread( () => callbackMultiple( ( result != null && result.Length > 0 ) ? result : null ) );
		NGMediaReceiveCallbackAndroid_t2A5219E8E27088A63D97D8F1AEFC54312B9364B3 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_1 = L_0->get_callbackMultiple_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_result_1();
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_001c;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_result_1();
		NullCheck(L_3);
		G_B2_0 = G_B1_0;
		if ((((RuntimeArray*)L_3)->max_length))
		{
			G_B3_0 = G_B1_0;
			goto IL_001f;
		}
	}

IL_001c:
	{
		G_B4_0 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_0025;
	}

IL_001f:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = __this->get_result_1();
		G_B4_0 = L_4;
		G_B4_1 = G_B3_0;
	}

IL_0025:
	{
		NullCheck(G_B4_1);
		MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27(G_B4_1, G_B4_0, /*hidden argument*/NULL);
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
// System.Void NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m6941220476963626A39944044A0E4B04F46F63B7 (U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAsyncAndroid/<>c__DisplayClass3_0::<OnPermissionResult>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnPermissionResultU3Eb__0_mA56A4725FAB64E15E981F12AEC196DA1D3E2104E (U3CU3Ec__DisplayClass3_0_t4E5F946A2B0ABD9EA957BC4B1D921E5C02E07D8B * __this, const RuntimeMethod* method)
{
	{
		// callbackHelper.CallOnMainThread( () => callback( (NativeGallery.Permission) result ) );
		NGPermissionCallbackAsyncAndroid_t721C96F27C6069B588A8789B394A2A40E8E0826B * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * L_1 = L_0->get_callback_4();
		int32_t L_2 = __this->get_result_1();
		NullCheck(L_1);
		PermissionCallback_Invoke_m0BD90CDE104B99C2342C7DEF7C118154541654A2(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void NativeGallery/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mD5920EA15DCE3174CB9F08CAE004FADFC7A9FFDE (U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeGallery/<>c__DisplayClass26_0::<RequestPermissionAsync>b__0(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CRequestPermissionAsyncU3Eb__0_mDE19164E7C6FE0BFCBD5A360530B170478C97C1C (U3CU3Ec__DisplayClass26_0_t028C2FD922A6D602272D37870E940D52389A3F33 * __this, int32_t ___permission0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m87EEC1BF34AA87D5B6B562DC6F7FD82A5B89531D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestPermissionAsync( ( permission ) => tcs.SetResult( permission ), permissionType, mediaTypes );
		TaskCompletionSource_1_tB6CB11C9515641FC7500BF9363F8EE07076FAC5D * L_0 = __this->get_tcs_0();
		int32_t L_1 = ___permission0;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_m87EEC1BF34AA87D5B6B562DC6F7FD82A5B89531D(L_0, L_1, /*hidden argument*/TaskCompletionSource_1_SetResult_m87EEC1BF34AA87D5B6B562DC6F7FD82A5B89531D_RuntimeMethod_var);
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
// System.Void NativeGallery/<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_m2126CD01B4F088BCEF4839D148162B85C444F652 (U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String NativeGallery/<>c__DisplayClass60_0::<LoadImageAtPathAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass60_0_U3CLoadImageAtPathAsyncU3Eb__0_mFDB5A1475BAA831BEF204BCC0757A6568796D0A5 (U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string loadPath = await TryCallNativeAndroidFunctionOnSeparateThread( () => AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, temporaryImagePath, maxSize ) );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = __this->get_imagePath_0();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = __this->get_temporaryImagePath_1();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		int32_t L_9 = __this->get_maxSize_2();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		NullCheck(L_0);
		String_t* L_12;
		L_12 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D, L_8, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_12;
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
// System.Void NativeGallery/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m028B42E801232CE5D620B4ABC3B07942B960C740 (U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String NativeGallery/<>c__DisplayClass62_0::<GetVideoThumbnailAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass62_0_U3CGetVideoThumbnailAsyncU3Eb__0_m7CFD0690322BB891A63478E168E48BFF50B3B293 (U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string thumbnailPath = await TryCallNativeAndroidFunctionOnSeparateThread( () => AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, temporaryImagePath + ".png", false, maxSize, captureTimeInSeconds ) );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m5B02F30D7742634E9DEF60D9D3CF2139C178D1DC(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = NativeGallery_get_Context_m1974E14471F7CA9F897C51BA1376AD85CC07EB08(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = __this->get_videoPath_0();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = __this->get_temporaryImagePath_1();
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_6;
		bool L_10 = ((bool)0);
		RuntimeObject * L_11 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_9;
		int32_t L_13 = __this->get_maxSize_2();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		double L_17 = __this->get_captureTimeInSeconds_3();
		double L_18 = L_17;
		RuntimeObject * L_19 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_19);
		NullCheck(L_0);
		String_t* L_20;
		L_20 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F, L_16, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_20;
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
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__62::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__62_MoveNext_m82FF8F333CD1FB10684CAD96FF0FFBD7EFA24B1F (U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m393756D1697D8960DE6A5D558849A2875C01F683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m4D1027DE2E564A6CB9747EFE357CA50B37D062B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m6ADA7BFEC224D0041737DE5613CC36C48CF0B371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m0535E36EE3949DE0DEC0683D2169E693B27AC025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m542979D6D2D029F345F3FCB0E42E0FB09912C254_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mAD31D1CDC70818AC6C92E4D441535A67813E7F80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6ABB4B5617489363B2982D27BBDA769BC9D99FA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_0_U3CGetVideoThumbnailAsyncU3Eb__0_m7CFD0690322BB891A63478E168E48BFF50B3B293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00c8;
			}
		}

IL_000d:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0148;
			}
		}

IL_0014:
		{
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_3 = (U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass62_0__ctor_m028B42E801232CE5D620B4ABC3B07942B960C740(L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_5(L_3);
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_4 = __this->get_U3CU3E8__1_5();
			String_t* L_5 = __this->get_videoPath_2();
			NullCheck(L_4);
			L_4->set_videoPath_0(L_5);
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_6 = __this->get_U3CU3E8__1_5();
			int32_t L_7 = __this->get_maxSize_3();
			NullCheck(L_6);
			L_6->set_maxSize_2(L_7);
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_8 = __this->get_U3CU3E8__1_5();
			double L_9 = __this->get_captureTimeInSeconds_4();
			NullCheck(L_8);
			L_8->set_captureTimeInSeconds_3(L_9);
			// if( maxSize <= 0 )
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_10 = __this->get_U3CU3E8__1_5();
			NullCheck(L_10);
			int32_t L_11 = L_10->get_maxSize_2();
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_0070;
			}
		}

IL_0060:
		{
			// maxSize = SystemInfo.maxTextureSize;
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_12 = __this->get_U3CU3E8__1_5();
			int32_t L_13;
			L_13 = SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40(/*hidden argument*/NULL);
			NullCheck(L_12);
			L_12->set_maxSize_2(L_13);
		}

IL_0070:
		{
			// string temporaryImagePath = TemporaryImagePath; 
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_14 = __this->get_U3CU3E8__1_5();
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
			String_t* L_15;
			L_15 = NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2(/*hidden argument*/NULL);
			NullCheck(L_14);
			L_14->set_temporaryImagePath_1(L_15);
			// string thumbnailPath = await TryCallNativeAndroidFunctionOnSeparateThread( () => AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, temporaryImagePath + ".png", false, maxSize, captureTimeInSeconds ) );
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_16 = __this->get_U3CU3E8__1_5();
			Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_17 = (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *)il2cpp_codegen_object_new(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
			Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass62_0_U3CGetVideoThumbnailAsyncU3Eb__0_m7CFD0690322BB891A63478E168E48BFF50B3B293_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_18;
			L_18 = NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m0535E36EE3949DE0DEC0683D2169E693B27AC025(L_17, /*hidden argument*/NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m0535E36EE3949DE0DEC0683D2169E693B27AC025_RuntimeMethod_var);
			NullCheck(L_18);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_19;
			L_19 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_18, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_3 = L_19;
			bool L_20;
			L_20 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00e4;
			}
		}

IL_00a5:
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_22 = V_3;
			__this->set_U3CU3Eu__1_9(L_22);
			AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m393756D1697D8960DE6A5D558849A2875C01F683((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_23, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), (U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m393756D1697D8960DE6A5D558849A2875C01F683_RuntimeMethod_var);
			goto IL_01ae;
		}

IL_00c8:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_24 = __this->get_U3CU3Eu__1_9();
			V_3 = L_24;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_25 = __this->get_address_of_U3CU3Eu__1_9();
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
		}

IL_00e4:
		{
			String_t* L_27;
			L_27 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			V_2 = L_27;
			// if( !string.IsNullOrEmpty( thumbnailPath ) )
			String_t* L_28 = V_2;
			bool L_29;
			L_29 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_28, /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_016f;
			}
		}

IL_00f4:
		{
			// return await LoadImageAtPathAsync( thumbnailPath, maxSize, markTextureNonReadable, generateMipmaps, linearColorSpace );
			String_t* L_30 = V_2;
			U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD * L_31 = __this->get_U3CU3E8__1_5();
			NullCheck(L_31);
			int32_t L_32 = L_31->get_maxSize_2();
			bool L_33 = __this->get_markTextureNonReadable_6();
			bool L_34 = __this->get_generateMipmaps_7();
			bool L_35 = __this->get_linearColorSpace_8();
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
			Task_1_tE281281FB2D3957AFF8CBBF7C206E1AE2DAF9C2F * L_36;
			L_36 = NativeGallery_LoadImageAtPathAsync_m50153D6F757CDB3FD59ABC4745C34B388F390FEF(L_30, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
			NullCheck(L_36);
			TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  L_37;
			L_37 = Task_1_GetAwaiter_m6ABB4B5617489363B2982D27BBDA769BC9D99FA0(L_36, /*hidden argument*/Task_1_GetAwaiter_m6ABB4B5617489363B2982D27BBDA769BC9D99FA0_RuntimeMethod_var);
			V_4 = L_37;
			bool L_38;
			L_38 = TaskAwaiter_1_get_IsCompleted_mAD31D1CDC70818AC6C92E4D441535A67813E7F80((TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mAD31D1CDC70818AC6C92E4D441535A67813E7F80_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0165;
			}
		}

IL_0127:
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
			TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  L_40 = V_4;
			__this->set_U3CU3Eu__2_10(L_40);
			AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m4D1027DE2E564A6CB9747EFE357CA50B37D062B2((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_41, (TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 *)(&V_4), (U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17_TisU3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9_m4D1027DE2E564A6CB9747EFE357CA50B37D062B2_RuntimeMethod_var);
			goto IL_01ae;
		}

IL_0148:
		{
			TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17  L_42 = __this->get_U3CU3Eu__2_10();
			V_4 = L_42;
			TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 * L_43 = __this->get_address_of_U3CU3Eu__2_10();
			il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 ));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->set_U3CU3E1__state_0(L_44);
		}

IL_0165:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_45;
			L_45 = TaskAwaiter_1_GetResult_m542979D6D2D029F345F3FCB0E42E0FB09912C254((TaskAwaiter_1_tE9DA953FF431785E33B2091363C8CB873F198D17 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m542979D6D2D029F345F3FCB0E42E0FB09912C254_RuntimeMethod_var);
			V_1 = L_45;
			goto IL_0193;
		}

IL_016f:
		{
			// return null;
			V_1 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
			goto IL_0193;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0173;
		throw e;
	}

CATCH_0173:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_5((U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD *)NULL);
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_46 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_47 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m715FF262082E0C50F26E3799B244EDAFF31F3EAD((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_46, L_47, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m715FF262082E0C50F26E3799B244EDAFF31F3EAD_RuntimeMethod_var)));
		goto IL_01ae;
	} // end catch (depth: 1)

IL_0193:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_5((U3CU3Ec__DisplayClass62_0_tCD52AEC5F106D32B42D14B85542DCD54E08B6EFD *)NULL);
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_48 = __this->get_address_of_U3CU3Et__builder_1();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_49 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m6ADA7BFEC224D0041737DE5613CC36C48CF0B371((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_48, L_49, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m6ADA7BFEC224D0041737DE5613CC36C48CF0B371_RuntimeMethod_var);
	}

IL_01ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetVideoThumbnailAsyncU3Ed__62_MoveNext_m82FF8F333CD1FB10684CAD96FF0FFBD7EFA24B1F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * _thisAdjusted = reinterpret_cast<U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 *>(__this + _offset);
	U3CGetVideoThumbnailAsyncU3Ed__62_MoveNext_m82FF8F333CD1FB10684CAD96FF0FFBD7EFA24B1F(_thisAdjusted, method);
}
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__62::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__62_SetStateMachine_mA3DFD4B7F47657B11DD6373EAB525D17F98F693A (U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mB08B5887F3732634DB06D0F2B76337E730ABB1FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mB08B5887F3732634DB06D0F2B76337E730ABB1FC((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mB08B5887F3732634DB06D0F2B76337E730ABB1FC_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetVideoThumbnailAsyncU3Ed__62_SetStateMachine_mA3DFD4B7F47657B11DD6373EAB525D17F98F693A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 * _thisAdjusted = reinterpret_cast<U3CGetVideoThumbnailAsyncU3Ed__62_tA3F26C9765C59252FB850E3D3B3989D36997BFB9 *>(__this + _offset);
	U3CGetVideoThumbnailAsyncU3Ed__62_SetStateMachine_mA3DFD4B7F47657B11DD6373EAB525D17F98F693A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/<LoadImageAtPathAsync>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__60_MoveNext_mA298ABEE6914BB1F1286D474D526E6F9ED35DDA6 (U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m3ACC73FD2E7D0F7FE5F6F6A7FFF0B4D1B054876F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m43FEF3CB9919EB71456DF0C8E2A65B2EDDE2733F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m6ADA7BFEC224D0041737DE5613CC36C48CF0B371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m0535E36EE3949DE0DEC0683D2169E693B27AC025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_SetPixelData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m365302D7DAECFCF19B28C4DE485FFD2779B0EB4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass60_0_U3CLoadImageAtPathAsyncU3Eb__0_mFDB5A1475BAA831BEF204BCC0757A6568796D0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3287997374A5B6321B447152239EBE224279EB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_6 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_7 = NULL;
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_8;
	memset((&V_8), 0, sizeof(V_8));
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	Exception_t * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 14);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B15_0 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * G_B15_1 = NULL;
	String_t* G_B14_0 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	String_t* G_B16_1 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * G_B16_2 = NULL;
	int32_t G_B49_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0101;
			}
		}

IL_000d:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_016d;
			}
		}

IL_0014:
		{
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_3 = (U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass60_0__ctor_m2126CD01B4F088BCEF4839D148162B85C444F652(L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_7(L_3);
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_4 = __this->get_U3CU3E8__1_7();
			String_t* L_5 = __this->get_imagePath_2();
			NullCheck(L_4);
			L_4->set_imagePath_0(L_5);
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_6 = __this->get_U3CU3E8__1_7();
			int32_t L_7 = __this->get_maxSize_3();
			NullCheck(L_6);
			L_6->set_maxSize_2(L_7);
			// if( string.IsNullOrEmpty( imagePath ) )
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_8 = __this->get_U3CU3E8__1_7();
			NullCheck(L_8);
			String_t* L_9 = L_8->get_imagePath_0();
			bool L_10;
			L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005e;
			}
		}

IL_0053:
		{
			// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
			ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__60_MoveNext_mA298ABEE6914BB1F1286D474D526E6F9ED35DDA6_RuntimeMethod_var)));
		}

IL_005e:
		{
			// if( !File.Exists( imagePath ) )
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_12 = __this->get_U3CU3E8__1_7();
			NullCheck(L_12);
			String_t* L_13 = L_12->get_imagePath_0();
			bool L_14;
			L_14 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_008b;
			}
		}

IL_0070:
		{
			// throw new FileNotFoundException( "File not found at " + imagePath );
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_15 = __this->get_U3CU3E8__1_7();
			NullCheck(L_15);
			String_t* L_16 = L_15->get_imagePath_0();
			String_t* L_17;
			L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_16, /*hidden argument*/NULL);
			FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_18 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
			FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_18, L_17, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__60_MoveNext_mA298ABEE6914BB1F1286D474D526E6F9ED35DDA6_RuntimeMethod_var)));
		}

IL_008b:
		{
			// if( maxSize <= 0 )
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_19 = __this->get_U3CU3E8__1_7();
			NullCheck(L_19);
			int32_t L_20 = L_19->get_maxSize_2();
			if ((((int32_t)L_20) > ((int32_t)0)))
			{
				goto IL_00a9;
			}
		}

IL_0099:
		{
			// maxSize = SystemInfo.maxTextureSize;
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_21 = __this->get_U3CU3E8__1_7();
			int32_t L_22;
			L_22 = SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40(/*hidden argument*/NULL);
			NullCheck(L_21);
			L_21->set_maxSize_2(L_22);
		}

IL_00a9:
		{
			// string temporaryImagePath = TemporaryImagePath; 
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_23 = __this->get_U3CU3E8__1_7();
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
			String_t* L_24;
			L_24 = NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2(/*hidden argument*/NULL);
			NullCheck(L_23);
			L_23->set_temporaryImagePath_1(L_24);
			// string loadPath = await TryCallNativeAndroidFunctionOnSeparateThread( () => AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, temporaryImagePath, maxSize ) );
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_25 = __this->get_U3CU3E8__1_7();
			Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_26 = (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *)il2cpp_codegen_object_new(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
			Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA(L_26, L_25, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass60_0_U3CLoadImageAtPathAsyncU3Eb__0_mFDB5A1475BAA831BEF204BCC0757A6568796D0A5_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_27;
			L_27 = NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m0535E36EE3949DE0DEC0683D2169E693B27AC025(L_26, /*hidden argument*/NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m0535E36EE3949DE0DEC0683D2169E693B27AC025_RuntimeMethod_var);
			NullCheck(L_27);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_28;
			L_28 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_27, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_3 = L_28;
			bool L_29;
			L_29 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_011d;
			}
		}

IL_00de:
		{
			int32_t L_30 = 0;
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_31 = V_3;
			__this->set_U3CU3Eu__1_10(L_31);
			AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m3ACC73FD2E7D0F7FE5F6F6A7FFF0B4D1B054876F((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_32, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), (U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m3ACC73FD2E7D0F7FE5F6F6A7FFF0B4D1B054876F_RuntimeMethod_var);
			goto IL_0423;
		}

IL_0101:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_33 = __this->get_U3CU3Eu__1_10();
			V_3 = L_33;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_34 = __this->get_address_of_U3CU3Eu__1_10();
			il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->set_U3CU3E1__state_0(L_35);
		}

IL_011d:
		{
			String_t* L_36;
			L_36 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			V_2 = L_36;
			String_t* L_37 = V_2;
			__this->set_U3CloadPathU3E5__2_8(L_37);
			// Texture2D result = null;
			__this->set_U3CresultU3E5__3_9((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
			// if( !linearColorSpace )
			bool L_38 = __this->get_linearColorSpace_4();
			if (L_38)
			{
				goto IL_02d8;
			}
		}

IL_013e:
		{
			// using( UnityWebRequest www = UnityWebRequestTexture.GetTexture( "file:
			String_t* L_39 = __this->get_U3CloadPathU3E5__2_8();
			String_t* L_40;
			L_40 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_39, /*hidden argument*/NULL);
			bool L_41 = __this->get_markTextureNonReadable_5();
			G_B14_0 = L_40;
			G_B14_1 = __this;
			if (!L_41)
			{
				G_B15_0 = L_40;
				G_B15_1 = __this;
				goto IL_0162;
			}
		}

IL_0157:
		{
			bool L_42 = __this->get_generateMipmaps_6();
			G_B16_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			goto IL_0163;
		}

IL_0162:
		{
			G_B16_0 = 0;
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
		}

IL_0163:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_43;
			L_43 = UnityWebRequestTexture_GetTexture_mBE4B78548AD91FA2106846EA9EBBCC114E9DA1C3(G_B16_1, (bool)G_B16_0, /*hidden argument*/NULL);
			G_B16_2->set_U3CwwwU3E5__4_11(L_43);
		}

IL_016d:
		{
		}

IL_016e:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_44 = V_0;
				if ((((int32_t)L_44) == ((int32_t)1)))
				{
					goto IL_01c2;
				}
			}

IL_0172:
			{
				// UnityWebRequestAsyncOperation asyncOperation = www.SendWebRequest();
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_45 = __this->get_U3CwwwU3E5__4_11();
				NullCheck(L_45);
				UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_46;
				L_46 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_45, /*hidden argument*/NULL);
				__this->set_U3CasyncOperationU3E5__5_12(L_46);
				goto IL_01e6;
			}

IL_0185:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_47;
				L_47 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_5 = L_47;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_48;
				L_48 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
				V_4 = L_48;
				bool L_49;
				L_49 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
				if (L_49)
				{
					goto IL_01df;
				}
			}

IL_019e:
			{
				int32_t L_50 = 1;
				V_0 = L_50;
				__this->set_U3CU3E1__state_0(L_50);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_51 = V_4;
				__this->set_U3CU3Eu__2_13(L_51);
				AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_52 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m43FEF3CB9919EB71456DF0C8E2A65B2EDDE2733F((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_52, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7_m43FEF3CB9919EB71456DF0C8E2A65B2EDDE2733F_RuntimeMethod_var);
				IL2CPP_LEAVE(0x423, FINALLY_02b9);
			}

IL_01c2:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_53 = __this->get_U3CU3Eu__2_13();
				V_4 = L_53;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_54 = __this->get_address_of_U3CU3Eu__2_13();
				il2cpp_codegen_initobj(L_54, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_55 = (-1);
				V_0 = L_55;
				__this->set_U3CU3E1__state_0(L_55);
			}

IL_01df:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			}

IL_01e6:
			{
				// while( !asyncOperation.isDone )
				UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_56 = __this->get_U3CasyncOperationU3E5__5_12();
				NullCheck(L_56);
				bool L_57;
				L_57 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_56, /*hidden argument*/NULL);
				if (!L_57)
				{
					goto IL_0185;
				}
			}

IL_01f3:
			{
				// if( www.result != UnityWebRequest.Result.Success )
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_58 = __this->get_U3CwwwU3E5__4_11();
				NullCheck(L_58);
				int32_t L_59;
				L_59 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_58, /*hidden argument*/NULL);
				if ((((int32_t)L_59) == ((int32_t)1)))
				{
					goto IL_0220;
				}
			}

IL_0201:
			{
				// Debug.LogWarning( "Couldn't use UnityWebRequest to load image, falling back to LoadImage: " + www.error );
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_60 = __this->get_U3CwwwU3E5__4_11();
				NullCheck(L_60);
				String_t* L_61;
				L_61 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_60, /*hidden argument*/NULL);
				String_t* L_62;
				L_62 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE3287997374A5B6321B447152239EBE224279EB6, L_61, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_62, /*hidden argument*/NULL);
				// }
				goto IL_02b0;
			}

IL_0220:
			{
				// Texture2D texture = DownloadHandlerTexture.GetContent( www );
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_63 = __this->get_U3CwwwU3E5__4_11();
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_64;
				L_64 = DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6(L_63, /*hidden argument*/NULL);
				V_6 = L_64;
				// if( !generateMipmaps )
				bool L_65 = __this->get_generateMipmaps_6();
				if (L_65)
				{
					goto IL_023f;
				}
			}

IL_0235:
			{
				// result = texture;
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_66 = V_6;
				__this->set_U3CresultU3E5__3_9(L_66);
				goto IL_02b0;
			}

IL_023f:
			{
				// Texture2D mipmapTexture = null;
				V_7 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
			}

IL_0242:
			try
			{ // begin try (depth: 3)
				try
				{ // begin try (depth: 4)
					// NativeArray<byte> textureData = texture.GetRawTextureData<byte>();
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_67 = V_6;
					NullCheck(L_67);
					NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_68;
					L_68 = Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C(L_67, /*hidden argument*/Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_RuntimeMethod_var);
					V_8 = L_68;
					// mipmapTexture = new Texture2D( texture.width, texture.height, texture.format, true );
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_69 = V_6;
					NullCheck(L_69);
					int32_t L_70;
					L_70 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_69);
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_71 = V_6;
					NullCheck(L_71);
					int32_t L_72;
					L_72 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_71);
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_73 = V_6;
					NullCheck(L_73);
					int32_t L_74;
					L_74 = Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4(L_73, /*hidden argument*/NULL);
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_75 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
					Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_75, L_70, L_72, L_74, (bool)1, /*hidden argument*/NULL);
					V_7 = L_75;
					// mipmapTexture.SetPixelData( textureData, 0 );
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_76 = V_7;
					NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_77 = V_8;
					NullCheck(L_76);
					Texture2D_SetPixelData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m365302D7DAECFCF19B28C4DE485FFD2779B0EB4C(L_76, L_77, 0, 0, /*hidden argument*/Texture2D_SetPixelData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m365302D7DAECFCF19B28C4DE485FFD2779B0EB4C_RuntimeMethod_var);
					// mipmapTexture.Apply( true, markTextureNonReadable );
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_78 = V_7;
					bool L_79 = __this->get_markTextureNonReadable_5();
					NullCheck(L_78);
					Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660(L_78, (bool)1, L_79, /*hidden argument*/NULL);
					// result = mipmapTexture;
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_80 = V_7;
					__this->set_U3CresultU3E5__3_9(L_80);
					// }
					goto IL_02a2;
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__exception_local = (Exception_t *)e.ex;
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						goto CATCH_028b;
					throw e;
				}

CATCH_028b:
				{ // begin catch(System.Exception)
					{
						// Debug.LogException( e );
						IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
						Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
						// if( mipmapTexture )
						Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_81 = V_7;
						IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
						bool L_82;
						L_82 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_81, /*hidden argument*/NULL);
						if (!L_82)
						{
							goto IL_02a0;
						}
					}

IL_0299:
					{
						// Object.DestroyImmediate( mipmapTexture );
						Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_83 = V_7;
						IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
						Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_83, /*hidden argument*/NULL);
					}

IL_02a0:
					{
						// }
						goto IL_02a2;
					}
				} // end catch (depth: 4)

IL_02a2:
				{
					IL2CPP_LEAVE(0x2B0, FINALLY_02a4);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_02a4;
			}

FINALLY_02a4:
			{ // begin finally (depth: 3)
				{
					int32_t L_84 = V_0;
					if ((((int32_t)L_84) >= ((int32_t)0)))
					{
						goto IL_02af;
					}
				}

IL_02a8:
				{
					// Object.DestroyImmediate( texture );
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_85 = V_6;
					IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
					Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_85, /*hidden argument*/NULL);
				}

IL_02af:
				{
					IL2CPP_END_FINALLY(676)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(676)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
			}

IL_02b0:
			{
				// }
				__this->set_U3CasyncOperationU3E5__5_12((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)NULL);
				IL2CPP_LEAVE(0x2D1, FINALLY_02b9);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_02b9;
		}

FINALLY_02b9:
		{ // begin finally (depth: 2)
			{
				int32_t L_86 = V_0;
				if ((((int32_t)L_86) >= ((int32_t)0)))
				{
					goto IL_02d0;
				}
			}

IL_02bd:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_87 = __this->get_U3CwwwU3E5__4_11();
				if (!L_87)
				{
					goto IL_02d0;
				}
			}

IL_02c5:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_88 = __this->get_U3CwwwU3E5__4_11();
				NullCheck(L_88);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_88);
			}

IL_02d0:
			{
				IL2CPP_END_FINALLY(697)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(697)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x423, IL_0423)
			IL2CPP_JUMP_TBL(0x2D1, IL_02d1)
		}

IL_02d1:
		{
			__this->set_U3CwwwU3E5__4_11((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		}

IL_02d8:
		{
			// if( !result ) 
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_89 = __this->get_U3CresultU3E5__3_9();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_90;
			L_90 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_89, /*hidden argument*/NULL);
			if (L_90)
			{
				goto IL_03c3;
			}
		}

IL_02e8:
		{
			// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
			U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_91 = __this->get_U3CU3E8__1_7();
			NullCheck(L_91);
			String_t* L_92 = L_91->get_imagePath_0();
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_93;
			L_93 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_92, /*hidden argument*/NULL);
			NullCheck(L_93);
			String_t* L_94;
			L_94 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_93, /*hidden argument*/NULL);
			V_9 = L_94;
			// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
			String_t* L_95 = V_9;
			bool L_96;
			L_96 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_95, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
			if (L_96)
			{
				goto IL_031e;
			}
		}

IL_030d:
		{
			String_t* L_97 = V_9;
			bool L_98;
			L_98 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_97, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, /*hidden argument*/NULL);
			if (L_98)
			{
				goto IL_031e;
			}
		}

IL_031b:
		{
			G_B49_0 = 4;
			goto IL_031f;
		}

IL_031e:
		{
			G_B49_0 = 3;
		}

IL_031f:
		{
			V_10 = G_B49_0;
			// result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
			int32_t L_99 = V_10;
			bool L_100 = __this->get_generateMipmaps_6();
			bool L_101 = __this->get_linearColorSpace_4();
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_102 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
			Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_102, 2, 2, L_99, L_100, L_101, /*hidden argument*/NULL);
			__this->set_U3CresultU3E5__3_9(L_102);
		}

IL_033c:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_103 = __this->get_U3CresultU3E5__3_9();
					String_t* L_104 = __this->get_U3CloadPathU3E5__2_8();
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_105;
					L_105 = File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829(L_104, /*hidden argument*/NULL);
					bool L_106 = __this->get_markTextureNonReadable_5();
					bool L_107;
					L_107 = ImageConversion_LoadImage_m1E5C9BF6206ED40B23CDB28341B8A64E05C43683(L_103, L_105, L_106, /*hidden argument*/NULL);
					if (L_107)
					{
						goto IL_037e;
					}
				}

IL_035a:
				{
					// Debug.LogWarning( "Couldn't load image at path: " + loadPath );
					String_t* L_108 = __this->get_U3CloadPathU3E5__2_8();
					String_t* L_109;
					L_109 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4, L_108, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
					Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_109, /*hidden argument*/NULL);
					// Object.DestroyImmediate( result );
					Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_110 = __this->get_U3CresultU3E5__3_9();
					IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
					Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_110, /*hidden argument*/NULL);
					// return null;
					V_1 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
					IL2CPP_LEAVE(0x3FA, FINALLY_0396);
				}

IL_037e:
				{
					// }
					goto IL_0394;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0380;
				throw e;
			}

CATCH_0380:
			{ // begin catch(System.Exception)
				// Debug.LogException( e );
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)__exception_local), /*hidden argument*/NULL);
				// Object.DestroyImmediate( result );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_111 = __this->get_U3CresultU3E5__3_9();
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_111, /*hidden argument*/NULL);
				// return null;
				V_1 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
				IL2CPP_LEAVE(0x3FA, FINALLY_0396);
			} // end catch (depth: 3)

IL_0394:
			{
				IL2CPP_LEAVE(0x3C3, FINALLY_0396);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0396;
		}

FINALLY_0396:
		{ // begin finally (depth: 2)
			{
				int32_t L_112 = V_0;
				if ((((int32_t)L_112) >= ((int32_t)0)))
				{
					goto IL_03c2;
				}
			}

IL_039a:
			{
				// if( loadPath != imagePath )
				String_t* L_113 = __this->get_U3CloadPathU3E5__2_8();
				U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 * L_114 = __this->get_U3CU3E8__1_7();
				NullCheck(L_114);
				String_t* L_115 = L_114->get_imagePath_0();
				bool L_116;
				L_116 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_113, L_115, /*hidden argument*/NULL);
				if (!L_116)
				{
					goto IL_03c2;
				}
			}

IL_03b2:
			try
			{ // begin try (depth: 3)
				// File.Delete( loadPath );
				String_t* L_117 = __this->get_U3CloadPathU3E5__2_8();
				File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_117, /*hidden argument*/NULL);
				// }
				goto IL_03c2;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					goto CATCH_03bf;
				throw e;
			}

CATCH_03bf:
			{ // begin catch(System.Object)
				// catch { }
				// catch { }
				goto IL_03c2;
			} // end catch (depth: 3)

IL_03c2:
			{
				IL2CPP_END_FINALLY(918)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(918)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x3FA, IL_03fa)
			IL2CPP_JUMP_TBL(0x3C3, IL_03c3)
		}

IL_03c3:
		{
			// return result;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_118 = __this->get_U3CresultU3E5__3_9();
			V_1 = L_118;
			goto IL_03fa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_03cc;
		throw e;
	}

CATCH_03cc:
	{ // begin catch(System.Exception)
		V_11 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_7((U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 *)NULL);
		__this->set_U3CloadPathU3E5__2_8((String_t*)NULL);
		__this->set_U3CresultU3E5__3_9((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_119 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_120 = V_11;
		AsyncTaskMethodBuilder_1_SetException_m715FF262082E0C50F26E3799B244EDAFF31F3EAD((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_119, L_120, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m715FF262082E0C50F26E3799B244EDAFF31F3EAD_RuntimeMethod_var)));
		goto IL_0423;
	} // end catch (depth: 1)

IL_03fa:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_7((U3CU3Ec__DisplayClass60_0_t793F84E3775FA4740B28A2F2C86EFC841EF5C498 *)NULL);
		__this->set_U3CloadPathU3E5__2_8((String_t*)NULL);
		__this->set_U3CresultU3E5__3_9((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_121 = __this->get_address_of_U3CU3Et__builder_1();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_122 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m6ADA7BFEC224D0041737DE5613CC36C48CF0B371((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_121, L_122, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m6ADA7BFEC224D0041737DE5613CC36C48CF0B371_RuntimeMethod_var);
	}

IL_0423:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadImageAtPathAsyncU3Ed__60_MoveNext_mA298ABEE6914BB1F1286D474D526E6F9ED35DDA6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * _thisAdjusted = reinterpret_cast<U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 *>(__this + _offset);
	U3CLoadImageAtPathAsyncU3Ed__60_MoveNext_mA298ABEE6914BB1F1286D474D526E6F9ED35DDA6(_thisAdjusted, method);
}
// System.Void NativeGallery/<LoadImageAtPathAsync>d__60::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__60_SetStateMachine_mF9AC75717820A473EE35F7AF6AA8CBA067C2E08E (U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mB08B5887F3732634DB06D0F2B76337E730ABB1FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mB08B5887F3732634DB06D0F2B76337E730ABB1FC((AsyncTaskMethodBuilder_1_t8A74DB3E8C75C625FD49D0D011D3901BE142C8E1 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mB08B5887F3732634DB06D0F2B76337E730ABB1FC_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadImageAtPathAsyncU3Ed__60_SetStateMachine_mF9AC75717820A473EE35F7AF6AA8CBA067C2E08E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 * _thisAdjusted = reinterpret_cast<U3CLoadImageAtPathAsyncU3Ed__60_tFA99D24ADD0A1EE01A041D09BF390E1327EA7BE7 *>(__this + _offset);
	U3CLoadImageAtPathAsyncU3Ed__60_SetStateMachine_mF9AC75717820A473EE35F7AF6AA8CBA067C2E08E(_thisAdjusted, ___stateMachine0, method);
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
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_pinvoke(const ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2& unmarshaled, ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_pinvoke_back(const ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_pinvoke& marshaled, ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_pinvoke_cleanup(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_com(const ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2& unmarshaled, ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_com_back(const ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_com& marshaled, ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_com_cleanup(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031 (ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// this.mimeType = mimeType;
		String_t* L_2 = ___mimeType2;
		__this->set_mimeType_2(L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___orientation3;
		__this->set_orientation_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 * _thisAdjusted = reinterpret_cast<ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 *>(__this + _offset);
	ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031(_thisAdjusted, ___width0, ___height1, ___mimeType2, ___orientation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	il2cppPInvokeFunc(____path0_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m86BFB0E65A7C6553173CBE1ABD5E1E186F0F3C36 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m38FFA5C31A6D37294017FD9DCC18E85CBC605C57 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___path0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___path0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___path0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___path0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___path0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m001B29739C46A9FC0FF11FEA289846555946551D (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, String_t* ___path0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___path0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_m357D8F8272591A9C4ACDE29B61CCC955422E69DA (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___paths0' to native representation
	char** ____paths0_marshaled = NULL;
	if (___paths0 != NULL)
	{
		il2cpp_array_size_t ____paths0_Length = (___paths0)->max_length;
		____paths0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paths0_Length + 1);
		(____paths0_marshaled)[____paths0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_Length); i++)
		{
			(____paths0_marshaled)[i] = il2cpp_codegen_marshal_string((___paths0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paths0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____paths0_marshaled);

	// Marshaling cleanup of parameter '___paths0' native representation
	if (____paths0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paths0_marshaled_CleanupLoopCount = (___paths0 != NULL) ? (___paths0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paths0_marshaled)[i]);
			(____paths0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paths0_marshaled);
		____paths0_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_m13001DD08A7C1B755DF8FD3ECB02D1860C446A3A (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___paths0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___paths0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___paths0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(targetMethod, targetThis, ___paths0);
					else
						GenericVirtActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(targetMethod, targetThis, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___paths0);
					else
						VirtActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___paths0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m19A130D1CA50B0F975A4661C6EB8B9F08F53724E (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___paths0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_m6D807095FCD704863F0D5FCC239F0E0505BD09FE (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___path1' to native representation
	char* ____path1_marshaled = NULL;
	____path1_marshaled = il2cpp_codegen_marshal_string(___path1);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___success0), ____path1_marshaled);

	// Marshaling cleanup of parameter '___path1' native representation
	il2cpp_codegen_marshal_free(____path1_marshaled);
	____path1_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_mA1AAA2DFE762CB3F438D66355852B886817A7041 (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___success0, ___path1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___path1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___path1);
					else
						GenericVirtActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___path1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0, ___path1);
					else
						VirtActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0, ___path1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___path1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_m960CD9C1C066BA0A1D7AABA7F92EA7E2CF55A9C8 (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, bool ___success0, String_t* ___path1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___path1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_m8097D6FA452886D9AF98B1A4FDFCC16D43FAF89E (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * __this, int32_t ___permission0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___permission0);

}
// System.Void NativeGallery/PermissionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback__ctor_m14E5B3C7B286F6F6D4D95B5702B7C7550B304E04 (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/PermissionCallback::Invoke(NativeGallery/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback_Invoke_m0BD90CDE104B99C2342C7DEF7C118154541654A2 (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * __this, int32_t ___permission0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___permission0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___permission0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___permission0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___permission0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___permission0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___permission0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___permission0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___permission0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/PermissionCallback::BeginInvoke(NativeGallery/Permission,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PermissionCallback_BeginInvoke_mB1BCAE97F37993FEC046A7EFE0CB0D17FDFF60AA (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * __this, int32_t ___permission0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t45AE01CA9353CE8BBBD7E64489942D119598714B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Permission_t45AE01CA9353CE8BBBD7E64489942D119598714B_il2cpp_TypeInfo_var, &___permission0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeGallery/PermissionCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionCallback_EndInvoke_m1CA23CB82DAAC312CD4B29E12472354250585E1C (PermissionCallback_tA872EFC7BD34EB90EC98C6EC055E6F72E2017CA9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616 (VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// this.duration = duration;
		int64_t L_2 = ___duration2;
		__this->set_duration_2(L_2);
		// this.rotation = rotation;
		float L_3 = ___rotation3;
		__this->set_rotation_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 * _thisAdjusted = reinterpret_cast<VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 *>(__this + _offset);
	VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616(_thisAdjusted, ___width0, ___height1, ___duration2, ___rotation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m20A9E0A0FF7ED9A71FD02C3FB8225BEA8188CE78_inline (NGCallbackHelper_tE2D302C43461930EED516FCCCD3400D6A7F64E53 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___function0, const RuntimeMethod* method)
{
	{
		// mainThreadAction = function;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___function0;
		__this->set_mainThreadAction_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mE54C26B18D0FDD4F07EAF3BEFFDD9E8AE7C3760F_inline (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m1D5052703D6E0DA7D1E383571F8C9D4FBD6B0C1F_inline (NGPermissionCallbackAndroid_t5E25B110121B340243F3211147E1B9CB91653DA2 * __this, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * TaskCompletionSource_1_get_Task_mAE8B55209748A9464617D11A81F3FEFA1AA53B9C_gshared_inline (TaskCompletionSource_1_tFEFD2FEC3619B04450B0DCBC20CD7229C2D07354 * __this, const RuntimeMethod* method)
{
	{
		Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * L_0 = (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 *)__this->get_m_task_0();
		return (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
