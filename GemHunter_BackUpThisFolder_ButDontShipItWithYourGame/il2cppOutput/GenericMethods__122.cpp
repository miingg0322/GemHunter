#include "pch-cpp.hpp"






struct Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195;
struct Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629;
struct TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_pinvoke
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_com
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643  : public MulticastDelegate_t
{
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields
{
	ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 ___s_GlobalConverters;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeConverter_2_Invoke_m356DB9561E631F0E4DEE75AE0072F6894A22FEA4_gshared_inline (TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643* __this, uint16_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m06EFB74956153378835585E9CFA30AF5B6CC08E5_gshared_inline (uint16_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m276A2CED652A44FECD10AD8A920CEC7685BCB168_gshared (uint16_t* ___0_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertNullable_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m6EDA776AAEECA8BE16E587CCA469B1C2986B6AE3_gshared (uint16_t* ___0_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertEnum_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mDA6C27633E60BEE77618B3898F07E5EF451462DB_gshared (uint16_t* ___0_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5714A1312739076561FC1861B469E94B8C1BE46B_gshared (uint16_t ___0_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeConverter_2_Invoke_m356DB9561E631F0E4DEE75AE0072F6894A22FEA4_inline (TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643* __this, uint16_t* ___0_value, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643*, uint16_t*, const RuntimeMethod*))TypeConverter_2_Invoke_m356DB9561E631F0E4DEE75AE0072F6894A22FEA4_gshared_inline)(__this, ___0_value, method);
}
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m06EFB74956153378835585E9CFA30AF5B6CC08E5_inline (uint16_t* ___0_from, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* (*) (uint16_t*, const RuntimeMethod*))UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m06EFB74956153378835585E9CFA30AF5B6CC08E5_gshared_inline)(___0_from, method);
}
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m276A2CED652A44FECD10AD8A920CEC7685BCB168 (uint16_t* ___0_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m276A2CED652A44FECD10AD8A920CEC7685BCB168_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertNullable_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m6EDA776AAEECA8BE16E587CCA469B1C2986B6AE3 (uint16_t* ___0_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))TypeConversion_TryConvertNullable_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m6EDA776AAEECA8BE16E587CCA469B1C2986B6AE3_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertEnum_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mDA6C27633E60BEE77618B3898F07E5EF451462DB (uint16_t* ___0_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))TypeConversion_TryConvertEnum_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mDA6C27633E60BEE77618B3898F07E5EF451462DB_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5714A1312739076561FC1861B469E94B8C1BE46B (uint16_t ___0_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5714A1312739076561FC1861B469E94B8C1BE46B_gshared)(___0_source, ___1_destination, method);
}
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* UnsafeUtilityInternal_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mDBE3F225613227F2D60DA24CD63925806F8494F9_inline (uint16_t* ___0_from, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* (*) (uint16_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m65D76273BEC3F54F42815A78957DDB62F55A3627_gshared (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* ___0_registry, uint16_t* ___1_source, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___2_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	//<source_info:<no-source>:1>
	Delegate_t* V_0 = NULL;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643* V_2 = NULL;
	uint16_t V_3 = 0;
	{
		ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* L_0 = ___0_registry;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD(L_0, L_2, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Delegate_t* L_6 = V_0;
		V_2 = ((TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 4)));
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_7 = ___2_destination;
		TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643* L_8 = V_2;
		uint16_t* L_9 = ___1_source;
		NullCheck(L_8);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_10;
		L_10 = TypeConverter_2_Invoke_m356DB9561E631F0E4DEE75AE0072F6894A22FEA4_inline(L_8, L_9, NULL);
		*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_7)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_7)->___value), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0034:
	{
		bool L_11 = (il2cpp_rgctx_data(method->rgctx_data, 3)) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_12 = ___2_destination;
		uint16_t* L_13 = ___1_source;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_14;
		L_14 = UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m06EFB74956153378835585E9CFA30AF5B6CC08E5_inline(L_13, NULL);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_15 = (*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_14);
		*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_12)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_12)->___value), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0062:
	{
		uint16_t* L_16 = ___1_source;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_17 = ___2_destination;
		bool L_18;
		L_18 = PrimitivesConverters_TryConvertPrimitiveOrString_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m276A2CED652A44FECD10AD8A920CEC7685BCB168(L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		return (bool)1;
	}

IL_006d:
	{
		uint16_t* L_19 = ___1_source;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_20 = ___2_destination;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvertNullable_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m6EDA776AAEECA8BE16E587CCA469B1C2986B6AE3(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		return (bool)1;
	}

IL_0078:
	{
		uint16_t* L_22 = ___1_source;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_23 = ___2_destination;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_24;
		L_24 = TypeConversion_TryConvertEnum_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mDA6C27633E60BEE77618B3898F07E5EF451462DB(L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 9));
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		return (bool)1;
	}

IL_0083:
	{
		uint16_t* L_25 = ___1_source;
		uint16_t L_26 = (*(uint16_t*)L_25);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_27 = ___2_destination;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_28;
		L_28 = TypeConversion_TryConvertToUnityEngineObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m5714A1312739076561FC1861B469E94B8C1BE46B(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		return (bool)1;
	}

IL_0093:
	{
	}
	{
	}
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_29 = ___2_destination;
		il2cpp_codegen_initobj(L_29, sizeof(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826));
		return (bool)0;
	}
}
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90407
// Method Definition Index: 90404
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeConverter_2_Invoke_m356DB9561E631F0E4DEE75AE0072F6894A22FEA4_gshared_inline (TypeConverter_2_tC99308AF09426AA3E46516357642EEAA9E64F643* __this, uint16_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*FunctionPointerType) (RuntimeObject*, uint16_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 47244
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* UnsafeUtility_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m06EFB74956153378835585E9CFA30AF5B6CC08E5_gshared_inline (uint16_t* ___0_from, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint16_t* L_0 = ___0_from;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_1;
		L_1 = UnsafeUtilityInternal_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mDBE3F225613227F2D60DA24CD63925806F8494F9_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 96659
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
