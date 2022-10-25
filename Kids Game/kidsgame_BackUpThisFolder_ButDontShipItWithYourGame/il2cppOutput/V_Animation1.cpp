#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.List`1<V_AnimationSystem.UnitAnim>
struct List_1_tC19A7F1D5461027E40488519CBC93BFB8D0142EE;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// V_AnimationSystem.V_Skeleton_Anim[]
struct V_Skeleton_AnimU5BU5D_t17CB1F9F2EE2CF11CCF64E47D568F4C35145B209;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// V_AnimationSystem.UnitAnim
struct UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// V_AnimationSystem.V_UnitSkeleton/DelConvertLocalPositionToWorldPosition
struct DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E;
// V_AnimationSystem.V_UnitSkeleton/OnAnimComplete
struct OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10;
// V_AnimationSystem.V_UnitSkeleton/OnAnimInterrupted
struct OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C;
// V_AnimationSystem.V_UnitSkeleton/OnAnimTrigger
struct OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4;
// V_AnimationSystem.V_UnitSkeleton/OnPointerMove
struct OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t8500708EDE06CA6CD0FC53F307575A33B3A04443  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

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

// V_AnimationSystem.UnitAnim
struct UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7  : public RuntimeObject
{
	// System.String V_AnimationSystem.UnitAnim::name
	String_t* ___name_1;
	// System.Boolean V_AnimationSystem.UnitAnim::disableOverwrite
	bool ___disableOverwrite_2;
	// V_AnimationSystem.V_Skeleton_Anim[] V_AnimationSystem.UnitAnim::anims
	V_Skeleton_AnimU5BU5D_t17CB1F9F2EE2CF11CCF64E47D568F4C35145B209* ___anims_3;
};

struct UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7_StaticFields
{
	// System.Collections.Generic.List`1<V_AnimationSystem.UnitAnim> V_AnimationSystem.UnitAnim::unitAnimList
	List_1_tC19A7F1D5461027E40488519CBC93BFB8D0142EE* ___unitAnimList_5;
	// System.Boolean V_AnimationSystem.UnitAnim::isDirty
	bool ___isDirty_6;
	// V_AnimationSystem.UnitAnim V_AnimationSystem.UnitAnim::dMinion_IdleDown
	UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___dMinion_IdleDown_7;
	// V_AnimationSystem.UnitAnim V_AnimationSystem.UnitAnim::DefaultAnimation
	UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___DefaultAnimation_8;
	// V_AnimationSystem.UnitAnim V_AnimationSystem.UnitAnim::None
	UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___None_9;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// V_AnimationSystem.V_UnitSkeleton/DelConvertLocalPositionToWorldPosition
struct DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E  : public MulticastDelegate_t
{
};

// V_AnimationSystem.V_UnitSkeleton/OnAnimComplete
struct OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10  : public MulticastDelegate_t
{
};

// V_AnimationSystem.V_UnitSkeleton/OnAnimInterrupted
struct OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C  : public MulticastDelegate_t
{
};

// V_AnimationSystem.V_UnitSkeleton/OnAnimTrigger
struct OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4  : public MulticastDelegate_t
{
};

// V_AnimationSystem.V_UnitSkeleton/OnPointerMove
struct OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_Multicast(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* currentDelegate = reinterpret_cast<OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___unitAnim0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenInst(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	NullCheck(___unitAnim0);
	typedef void (*FunctionPointerType) (UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___unitAnim0, method);
}
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenStatic(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___unitAnim0, method);
}
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenStaticInvoker(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* >::Invoke(__this->___method_ptr_0, method, NULL, ___unitAnim0);
}
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_ClosedStaticInvoker(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___unitAnim0);
}
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenVirtual(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	NullCheck(___unitAnim0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___unitAnim0);
}
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenInterface(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	NullCheck(___unitAnim0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___unitAnim0);
}
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenGenericVirtual(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	NullCheck(___unitAnim0);
	GenericVirtualActionInvoker0::Invoke(method, ___unitAnim0);
}
void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenGenericInterface(OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method)
{
	NullCheck(___unitAnim0);
	GenericInterfaceActionInvoker0::Invoke(method, ___unitAnim0);
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimComplete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimComplete__ctor_m3D3E14CEE641BE2573C3475F65CCB623190EEC79 (OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0_Multicast;
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimComplete::Invoke(V_AnimationSystem.UnitAnim)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimComplete_Invoke_m594FAF62EC5C736C65CF168F6CE0BBAD7B9AEFA0 (OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___unitAnim0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult V_AnimationSystem.V_UnitSkeleton/OnAnimComplete::BeginInvoke(V_AnimationSystem.UnitAnim,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAnimComplete_BeginInvoke_m499430AFC56231837BD3A5AF4F3EC02F00DCEC7F (OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___unitAnim0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimComplete::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimComplete_EndInvoke_m74ED79C973885791D5D3F9130C68608168E49ABB (OnAnimComplete_tC20170B425854369251528C5A5A946F11EBDBE10* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_Multicast(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* currentDelegate = reinterpret_cast<OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenInst(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	NullCheck(___interruptedUnitAnim0);
	typedef void (*FunctionPointerType) (UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2, method);
}
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenStatic(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2, method);
}
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenStaticInvoker(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2);
}
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_ClosedStaticInvoker(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2);
}
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenVirtual(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	NullCheck(___interruptedUnitAnim0);
	VirtualActionInvoker2< UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2);
}
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenInterface(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	NullCheck(___interruptedUnitAnim0);
	InterfaceActionInvoker2< UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2);
}
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenGenericVirtual(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	NullCheck(___interruptedUnitAnim0);
	GenericVirtualActionInvoker2< UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool >::Invoke(method, ___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2);
}
void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenGenericInterface(OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method)
{
	NullCheck(___interruptedUnitAnim0);
	GenericInterfaceActionInvoker2< UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool >::Invoke(method, ___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2);
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimInterrupted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimInterrupted__ctor_m861CAD6E19929EF7DA2774FC9A4E94890685D4E4 (OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36_Multicast;
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimInterrupted::Invoke(V_AnimationSystem.UnitAnim,V_AnimationSystem.UnitAnim,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimInterrupted_Invoke_m18A9DE988328640BBC16651E13577F31328D1E36 (OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___interruptedUnitAnim0, ___unitAnim1, ___alreadyLooped2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult V_AnimationSystem.V_UnitSkeleton/OnAnimInterrupted::BeginInvoke(V_AnimationSystem.UnitAnim,V_AnimationSystem.UnitAnim,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAnimInterrupted_BeginInvoke_m91010F87EBC043586C6B272CD6C42721337F90A6 (OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___interruptedUnitAnim0, UnitAnim_tFADE2ED5099582CACEEC08EC78B0593E89B15BB7* ___unitAnim1, bool ___alreadyLooped2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___interruptedUnitAnim0;
	__d_args[1] = ___unitAnim1;
	__d_args[2] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___alreadyLooped2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimInterrupted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimInterrupted_EndInvoke_m114412F4F0F201B5101CE192DBFFF907BF3685D2 (OnAnimInterrupted_t8791D61FD3703D8384847D87912B7F8F9365871C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_Multicast(OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, String_t* ___trigger0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* currentDelegate = reinterpret_cast<OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___trigger0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_OpenInst(OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, String_t* ___trigger0, const RuntimeMethod* method)
{
	NullCheck(___trigger0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___trigger0, method);
}
void OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_OpenStatic(OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, String_t* ___trigger0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___trigger0, method);
}
void OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_OpenStaticInvoker(OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, String_t* ___trigger0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___trigger0);
}
void OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_ClosedStaticInvoker(OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, String_t* ___trigger0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___trigger0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4 (OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, String_t* ___trigger0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___trigger0' to native representation
	char* ____trigger0_marshaled = NULL;
	____trigger0_marshaled = il2cpp_codegen_marshal_string(___trigger0);

	// Native function invocation
	il2cppPInvokeFunc(____trigger0_marshaled);

	// Marshaling cleanup of parameter '___trigger0' native representation
	il2cpp_codegen_marshal_free(____trigger0_marshaled);
	____trigger0_marshaled = NULL;

}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimTrigger::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimTrigger__ctor_m261572852E6D7BAC77660CD32600F73F0BCFE4F9 (OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08_Multicast;
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimTrigger::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimTrigger_Invoke_mBA6E909075D8338677A111A167B3BC80CDBE9D08 (OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, String_t* ___trigger0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___trigger0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult V_AnimationSystem.V_UnitSkeleton/OnAnimTrigger::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAnimTrigger_BeginInvoke_m98777D2ED231955870395093443F2B11B1D96CFF (OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, String_t* ___trigger0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___trigger0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnAnimTrigger::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnimTrigger_EndInvoke_m6EA57A970288CB7481F369E61DD970AB273D95E4 (OnAnimTrigger_tC30AAF8FD1FEEB34B8035EC4E70FE69C47CAE6B4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_Multicast(DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* currentDelegate = reinterpret_cast<DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E*>(delegatesToInvoke[i]);
		typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_OpenInst(DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_OpenStatic(DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_OpenStaticInvoker(DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___position0);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_ClosedStaticInvoker(DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0);
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelegatePInvokeWrapper_DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E (DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (DEFAULT_CALL *PInvokeFunc)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 returnValue = il2cppPInvokeFunc(___position0);

	return returnValue;
}
// System.Void V_AnimationSystem.V_UnitSkeleton/DelConvertLocalPositionToWorldPosition::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelConvertLocalPositionToWorldPosition__ctor_m1C5F9EC21531D1E2B7B2BE9E17D707E3D5B9F0A4 (DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6_Multicast;
}
// UnityEngine.Vector3 V_AnimationSystem.V_UnitSkeleton/DelConvertLocalPositionToWorldPosition::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelConvertLocalPositionToWorldPosition_Invoke_m6EBD612EEB5FB1018F84AF13D4878160A054FAB6 (DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult V_AnimationSystem.V_UnitSkeleton/DelConvertLocalPositionToWorldPosition::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelConvertLocalPositionToWorldPosition_BeginInvoke_mA8E06CDFD04F946DD65C94E1B4908E9531F50F69 (DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// UnityEngine.Vector3 V_AnimationSystem.V_UnitSkeleton/DelConvertLocalPositionToWorldPosition::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelConvertLocalPositionToWorldPosition_EndInvoke_m4D9C39CD700B36B1D482879443951ED48C2058B6 (DelConvertLocalPositionToWorldPosition_tCF322CCC5EF2A205F4467366277B9528B4F2E82E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_Multicast(OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointer0, int32_t ___rot1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* currentDelegate = reinterpret_cast<OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pointer0, ___rot1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_OpenInst(OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointer0, int32_t ___rot1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___pointer0, ___rot1, method);
}
void OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_OpenStatic(OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointer0, int32_t ___rot1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___pointer0, ___rot1, method);
}
void OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_OpenStaticInvoker(OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointer0, int32_t ___rot1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pointer0, ___rot1);
}
void OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_ClosedStaticInvoker(OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointer0, int32_t ___rot1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pointer0, ___rot1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726 (OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointer0, int32_t ___rot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___pointer0, ___rot1);

}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnPointerMove::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPointerMove__ctor_m4ABD726942797B1A57EB1C5BEC2AA05991177F02 (OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6_Multicast;
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnPointerMove::Invoke(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPointerMove_Invoke_mA7ACF9E770AB901B037FF0C4F7B2B4FB9AD8C5E6 (OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointer0, int32_t ___rot1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pointer0, ___rot1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult V_AnimationSystem.V_UnitSkeleton/OnPointerMove::BeginInvoke(UnityEngine.Vector3,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPointerMove_BeginInvoke_m2F5F097507EFAFB015B95EA54C41B1212AF64F3D (OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointer0, int32_t ___rot1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___pointer0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___rot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void V_AnimationSystem.V_UnitSkeleton/OnPointerMove::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPointerMove_EndInvoke_m28F93ABFF71D84D38739D35CBB67115B80CF2085 (OnPointerMove_tCFD1EAE32578299D74E74781B715E8DFECB6E726* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m232D48BAD59B70F3BA063234E37A06BFEDFA7905 (String_t* ___s0, const RuntimeMethod* method) 
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
		NullCheck(L_1);
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
		NullCheck(L_7);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
