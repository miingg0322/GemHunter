#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hash128_Compute_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF165CA96D6134863BA274A5B45F3BD7BFE0B85CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tE257C9EE611157309D7ACCC51455CAB4CCC46C19 
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871  : public RuntimeObject
{
	Type_t* ___m_Type;
	String_t* ___m_SerializableType;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct ValueTuple_2_tFC99489AD3AE2D8EF5977165B652F7D083CB0D28 
{
	uint64_t ___Item1;
	uint64_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___m_Hash128;
		};
		#pragma pack(pop, tp)
		struct
		{
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___m_Hash128_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___m_Value0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___m_Value0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_Value1_OffsetPadding[8];
			uint64_t ___m_Value1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_Value1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___m_Value1_forAlignmentOnly;
		};
	};
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mE85264CEA879577FC94A0E73EB7D21654731E229 (ValueTuple_2_tFC99489AD3AE2D8EF5977165B652F7D083CB0D28* __this, uint64_t ___0_item1, uint64_t ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Hash128_Compute_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF165CA96D6134863BA274A5B45F3BD7BFE0B85CD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGUID_Equals_m083F2CA938FFBB8E1F8AEA5AE60B8D489CA099D0 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGUID_Equals_mB6E9A3E0D2AF5D7A1A256AB36912F01EC814AC22 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializableGUID_GetHashCode_m1DA80EF3491E2D9BF685EF2478D748B5FF42C368 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mE85264CEA879577FC94A0E73EB7D21654731E229 (ValueTuple_2_tFC99489AD3AE2D8EF5977165B652F7D083CB0D28* __this, uint64_t ___0_item1, uint64_t ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hash128_get_isValid_mFFEDF59D52D132E018CDF33516ADCAB44954B7F0 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Hash128_ToString_m35513B62830C8CE59346AF87AC2B587FA1570DCE (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGUID_ToString_mB8907B658AD731352BB6981BB9B85F445D37606E (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Hash128_Compute_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF165CA96D6134863BA274A5B45F3BD7BFE0B85CD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGUID__ctor_m1D977169AEC93A68A830321658064EA523A3214C (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_hash, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Hash128_Parse_mA918076817FF18F2172F1427AFA472C0A8321E47 (String_t* ___0_hashString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType__ctor_m5F3B370355264DE49DB0A6443BE62C134AAACBDC (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType_AssignTypeToString_m45D1559641073DE0D604D5743BBE9E08E19D55FB (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SerializableType_get_Type_mACDC95A1FB3BDE2F3282BF49B83ED4BD2F3C9AD3 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableType_op_Equality_mF9939FB8D78424A18C4B4FF2B216BD3B0D1E7AD0 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* ___0_left, SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableType_get_text_m87BFA5C087F635BC7FC85BFF4BD07105C6F890DB (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) ;
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
// Method Definition Index: 97912
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGUID_Equals_m083F2CA938FFBB8E1F8AEA5AE60B8D489CA099D0 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint64_t L_0 = __this->___m_Value0;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_1 = ___0_other;
		uint64_t L_2 = L_1.___m_Value0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->___m_Value1;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_4 = ___0_other;
		uint64_t L_5 = L_4.___m_Value1;
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SerializableGUID_Equals_m083F2CA938FFBB8E1F8AEA5AE60B8D489CA099D0_AdjustorThunk (RuntimeObject* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C ___0_other, const RuntimeMethod* method)
{
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C>(__this);
	bool _returnValue;
	_returnValue = SerializableGUID_Equals_m083F2CA938FFBB8E1F8AEA5AE60B8D489CA099D0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 97913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGUID_Equals_mB6E9A3E0D2AF5D7A1A256AB36912F01EC814AC22 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C*)UnBox(L_1, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_il2cpp_TypeInfo_var)));
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_2 = V_0;
		bool L_3;
		L_3 = SerializableGUID_Equals_m083F2CA938FFBB8E1F8AEA5AE60B8D489CA099D0(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SerializableGUID_Equals_mB6E9A3E0D2AF5D7A1A256AB36912F01EC814AC22_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C>(__this);
	bool _returnValue;
	_returnValue = SerializableGUID_Equals_mB6E9A3E0D2AF5D7A1A256AB36912F01EC814AC22(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 97914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializableGUID_GetHashCode_m1DA80EF3491E2D9BF685EF2478D748B5FF42C368 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___m_Value0);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->___m_Value1);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t SerializableGUID_GetHashCode_m1DA80EF3491E2D9BF685EF2478D748B5FF42C368_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C>(__this);
	int32_t _returnValue;
	_returnValue = SerializableGUID_GetHashCode_m1DA80EF3491E2D9BF685EF2478D748B5FF42C368(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 97915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGUID_op_Equality_mBA72A9EA06812771B9C490C047272F7E2886D7E2 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C ___0_left, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_0 = ___0_left;
		uint64_t L_1 = L_0.___m_Value0;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_2 = ___1_right;
		uint64_t L_3 = L_2.___m_Value0;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_4 = ___0_left;
		uint64_t L_5 = L_4.___m_Value1;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_6 = ___1_right;
		uint64_t L_7 = L_6.___m_Value1;
		return (bool)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 97916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGUID_op_Inequality_m3DF43BED02F659FB81D22D029EBD98D3AB0F8C89 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C ___0_left, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_0 = ___0_left;
		uint64_t L_1 = L_0.___m_Value0;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_2 = ___1_right;
		uint64_t L_3 = L_2.___m_Value0;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_4 = ___0_left;
		uint64_t L_5 = L_4.___m_Value1;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_6 = ___1_right;
		uint64_t L_7 = L_6.___m_Value1;
		return (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// Method Definition Index: 97917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tFC99489AD3AE2D8EF5977165B652F7D083CB0D28 SerializableGUID_ToParts_m0B615F4A041BBDD196DB659FE0CCA04362AAD049 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint64_t L_0 = __this->___m_Value0;
		uint64_t L_1 = __this->___m_Value1;
		ValueTuple_2_tFC99489AD3AE2D8EF5977165B652F7D083CB0D28 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_mE85264CEA879577FC94A0E73EB7D21654731E229((&L_2), L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 97918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SerializableGUID_get_m_Value0Signed_m0E9312141504B07D0B3D3E793DD21BD7C0156FC2 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint64_t L_0 = __this->___m_Value0;
		return ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)(std::numeric_limits<int64_t>::min)())));
	}
}
// Method Definition Index: 97919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGUID_set_m_Value0Signed_mB276153CE844B6368DDE0BB3EA52027864DE95DF (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int64_t L_0 = ___0_value;
		__this->___m_Value0 = ((int64_t)il2cpp_codegen_subtract(L_0, ((int64_t)(std::numeric_limits<int64_t>::min)())));
		return;
	}
}
// Method Definition Index: 97920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SerializableGUID_get_m_Value1Signed_m373D32852AA7BFE54AA5EF897E6105E002BB86E6 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint64_t L_0 = __this->___m_Value1;
		return ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)(std::numeric_limits<int64_t>::min)())));
	}
}
// Method Definition Index: 97921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGUID_set_m_Value1Signed_m93E40FCAEAEE654D6F917C051A0C69ED7E8386A5 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int64_t L_0 = ___0_value;
		__this->___m_Value1 = ((int64_t)il2cpp_codegen_subtract(L_0, ((int64_t)(std::numeric_limits<int64_t>::min)())));
		return;
	}
}
// Method Definition Index: 97922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGUID_get_Valid_mD096A68A1A953A53BA89B0F25BE6C40F395CB716 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* L_0 = (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(&__this->___m_Hash128);
		bool L_1;
		L_1 = Hash128_get_isValid_mFFEDF59D52D132E018CDF33516ADCAB44954B7F0(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 97923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGUID_ToString_mB8907B658AD731352BB6981BB9B85F445D37606E (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* L_0 = (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(&__this->___m_Hash128);
		String_t* L_1;
		L_1 = Hash128_ToString_m35513B62830C8CE59346AF87AC2B587FA1570DCE(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SerializableGUID_ToString_mB8907B658AD731352BB6981BB9B85F445D37606E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C>(__this);
	String_t* _returnValue;
	_returnValue = SerializableGUID_ToString_mB8907B658AD731352BB6981BB9B85F445D37606E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 97924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C SerializableGUID_Generate_m70B0D1F13C7B015B83D583296C53EEC0492BFF8F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128_Compute_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF165CA96D6134863BA274A5B45F3BD7BFE0B85CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&V_0), NULL);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_2;
		L_2 = Hash128_Compute_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF165CA96D6134863BA274A5B45F3BD7BFE0B85CD(L_1, Hash128_Compute_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF165CA96D6134863BA274A5B45F3BD7BFE0B85CD_RuntimeMethod_var);
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_3;
		memset((&L_3), 0, sizeof(L_3));
		SerializableGUID__ctor_m1D977169AEC93A68A830321658064EA523A3214C((&L_3), L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 97925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGUID__ctor_m1D977169AEC93A68A830321658064EA523A3214C (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_hash, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Value0 = L_0;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Value1 = L_1;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_2 = ___0_hash;
		__this->___m_Hash128 = L_2;
		return;
	}
}
// Method Definition Index: 97926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGUID__ctor_m3AB237F3DC0621B9B460B091AA66AED3D1827E21 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, String_t* ___0_hashString, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Value0 = L_0;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Value1 = L_1;
		String_t* L_2 = ___0_hashString;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_3;
		L_3 = Hash128_Parse_mA918076817FF18F2172F1427AFA472C0A8321E47(L_2, NULL);
		__this->___m_Hash128 = L_3;
		return;
	}
}
// Method Definition Index: 97927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGUID__ctor_mE4AB70CA64118B046433B83A5F3B3DF5809E15F7 (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* __this, uint64_t ___0_a, uint64_t ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* L_0 = (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(&__this->___m_Hash128);
		il2cpp_codegen_initobj(L_0, sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		uint64_t L_1 = ___0_a;
		__this->___m_Value0 = L_1;
		uint64_t L_2 = ___1_b;
		__this->___m_Value1 = L_2;
		return;
	}
}
// Method Definition Index: 97928
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 SerializableGUID_op_Implicit_mF21FDA930D9F34379439DECC6C6D8D7A4E011A4B (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C ___0_sGuid, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_0 = ___0_sGuid;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_1 = L_0.___m_Hash128;
		return L_1;
	}
}
// Method Definition Index: 97929
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C SerializableGUID_op_Implicit_m70038BDCD24115B83501030A39A29E7CCFD4BB11 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_hash, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_hash;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_1;
		memset((&L_1), 0, sizeof(L_1));
		SerializableGUID__ctor_m1D977169AEC93A68A830321658064EA523A3214C((&L_1), L_0, NULL);
		return L_1;
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
// Method Definition Index: 97930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* SerializableType_op_Implicit_mF27319E1B4AF3AF11839D7673DD60A7104A323AA (Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = ___0_value;
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_1 = (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871*)il2cpp_codegen_object_new(SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871_il2cpp_TypeInfo_var);
		SerializableType__ctor_m5F3B370355264DE49DB0A6443BE62C134AAACBDC(L_1, L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 97931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SerializableType_op_Implicit_m51721E7335B679E1FF711BF8FF02971F0AD697A1 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Type_t*)NULL;
	}

IL_0005:
	{
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_1 = ___0_value;
		NullCheck(L_1);
		Type_t* L_2 = L_1->___m_Type;
		return L_2;
	}
}
// Method Definition Index: 97932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType__ctor_m67A0B9D2EC74CA2DF1B1665E606E315A59724344 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 97933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType__ctor_m5F3B370355264DE49DB0A6443BE62C134AAACBDC (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Type_t* L_0 = ___0_type;
		__this->___m_Type = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Type), (void*)L_0);
		SerializableType_AssignTypeToString_m45D1559641073DE0D604D5743BBE9E08E19D55FB(__this, NULL);
		return;
	}
}
// Method Definition Index: 97934
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType__ctor_m09098CEC146347AF6012803682F06451E046A829 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, String_t* ___0_typeText, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_typeText;
		__this->___m_SerializableType = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SerializableType), (void*)L_0);
		SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960(__this, NULL);
		return;
	}
}
// Method Definition Index: 97935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType_OnBeforeSerialize_mE50F5E11E7B34D0D7580B1431640FA8CCD7B9B58 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SerializableType_AssignTypeToString_m45D1559641073DE0D604D5743BBE9E08E19D55FB(__this, NULL);
		return;
	}
}
// Method Definition Index: 97936
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType_OnAfterDeserialize_mAF33F45AAC65A6D0197B06A9B746C58DB76E4039 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960(__this, NULL);
		return;
	}
}
// Method Definition Index: 97937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType_AssignTypeToString_m45D1559641073DE0D604D5743BBE9E08E19D55FB (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = __this->___m_Type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Type_t* L_2 = __this->___m_Type;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_2);
		__this->___m_SerializableType = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SerializableType), (void*)L_3);
	}

IL_001f:
	{
		return;
	}
}
// Method Definition Index: 97938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___m_SerializableType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(L_0, SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960_RuntimeMethod_var);
		__this->___m_Type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Type), (void*)L_1);
		return;
	}
}
// Method Definition Index: 97939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableType_Equals_m04E4C539AF08EBAE2016636F99B5EF89E2EA7C1B (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* V_1 = NULL;
	Type_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		V_0 = (Type_t*)NULL;
		RuntimeObject* L_1 = ___0_obj;
		V_1 = ((SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871*)IsInstClass((RuntimeObject*)L_1, SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871_il2cpp_TypeInfo_var));
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_3 = V_1;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = SerializableType_get_Type_mACDC95A1FB3BDE2F3282BF49B83ED4BD2F3C9AD3(L_3, NULL);
		V_0 = L_4;
		goto IL_002e;
	}

IL_001b:
	{
		RuntimeObject* L_5 = ___0_obj;
		V_2 = ((Type_t*)IsInstClass((RuntimeObject*)L_5, Type_t_il2cpp_TypeInfo_var));
		Type_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		Type_t* L_7 = V_2;
		V_0 = L_7;
		goto IL_002e;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___0_obj;
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		Type_t* L_9;
		L_9 = SerializableType_get_Type_mACDC95A1FB3BDE2F3282BF49B83ED4BD2F3C9AD3(__this, NULL);
		Type_t* L_10 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_10, NULL);
		return L_11;
	}
}
// Method Definition Index: 97940
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableType_op_Equality_mF9939FB8D78424A18C4B4FF2B216BD3B0D1E7AD0 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* ___0_left, SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_0 = ___0_left;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_1 = ___0_left;
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_2 = ___1_right;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_1, L_2);
		return L_3;
	}

IL_000b:
	{
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_4 = ___1_right;
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_5 = ___1_right;
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_6 = ___0_left;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_5, L_6);
		return L_7;
	}

IL_0016:
	{
		return (bool)1;
	}
}
// Method Definition Index: 97941
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableType_op_Inequality_mBE1C923BCC3BC4C172D02FF923DD1B57B1D339DB (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* ___0_left, SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_0 = ___0_left;
		SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* L_1 = ___1_right;
		bool L_2;
		L_2 = SerializableType_op_Equality_mF9939FB8D78424A18C4B4FF2B216BD3B0D1E7AD0(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 97942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializableType_GetHashCode_m99671D4FACA2AB754BFBA3FFF49604180D188BBD (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = __this->___m_Type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = __this->___m_SerializableType;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960(__this, NULL);
	}

IL_0021:
	{
		Type_t* L_4 = __this->___m_Type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, (Type_t*)NULL, NULL);
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		Type_t* L_6 = __this->___m_Type;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_6);
		return L_7;
	}
}
// Method Definition Index: 97943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableType_ToString_m3B68E73809F6B165B2CAD2F49D603921A9DE9890 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0;
		L_0 = SerializableType_get_text_m87BFA5C087F635BC7FC85BFF4BD07105C6F890DB(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 97944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableType_get_text_m87BFA5C087F635BC7FC85BFF4BD07105C6F890DB (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___m_SerializableType;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Type_t* L_2 = __this->___m_Type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, (Type_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		SerializableType_AssignTypeToString_m45D1559641073DE0D604D5743BBE9E08E19D55FB(__this, NULL);
	}

IL_0021:
	{
		String_t* L_4 = __this->___m_SerializableType;
		return L_4;
	}
}
// Method Definition Index: 97945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SerializableType_get_Type_mACDC95A1FB3BDE2F3282BF49B83ED4BD2F3C9AD3 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = __this->___m_Type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = __this->___m_SerializableType;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		SerializableType_ReadTypeFromString_m76ECB774E60AA034B50DAA01C0E8AEF228C45960(__this, NULL);
	}

IL_0021:
	{
		Type_t* L_4 = __this->___m_Type;
		return L_4;
	}
}
// Method Definition Index: 97946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableType_set_Type_m79B254C5C79A81AFA74FD7E0E71F96FD8FDF2618 (SerializableType_t672DF4EB04E7A13B0BF82BEBEB89536124BD5871* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = ___0_value;
		__this->___m_Type = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Type), (void*)L_0);
		SerializableType_AssignTypeToString_m45D1559641073DE0D604D5743BBE9E08E19D55FB(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
