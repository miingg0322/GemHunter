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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct IDictionaryPropertyBag_3_tA63D6556F9F073A3F843A4BCAFAE2C98E160C503;
struct IDictionaryPropertyBag_3_t873F2D938FE68DCBD7EC26C421A7A540B65367CA;
struct IEnumerable_1_t862CF9F83ACF3424BBCD5F1BCA5A99C5F25019D0;
struct IEnumerator_1_t31F4798496AE4D80D32CA88D6E20B1B65B9CD6B8;
struct IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0;
struct IIndexedCollectionPropertyBagEnumerator_1_t49C74AE8A874DCA64C285159B63FD8A22802B73F;
struct IListPropertyBag_2_tE259AC027F0BDD83F23DF08E6164A4D0BC8AD5BC;
struct IListPropertyBag_2_t86CB5671A4D7D18F96A86EFB4E82FB86CC7C9F70;
struct IListPropertyBag_2_tBEE1AB029A6A35E5AD273ABD87C725386307C21F;
struct IListPropertyBag_2_tA5EC2FCEB060C918B2217EA536A9C5F6EC8AA4A9;
struct IListPropertyBag_2_tB74ABA11CFF3F108CC0DFF815573DBF3D9A4F5CC;
struct IListPropertyBag_2_tE7D3CBE4614791D577723B991B7034ADB8C61B51;
struct IListPropertyBag_2_t1609ECAF91438D317559116BD49EEF6B0C3CD033;
struct IListPropertyBag_2_tB352E1290C08ED2AC76F75C73D74BA9C0C551A4D;
struct IListPropertyBag_2_tA6E8BEEFB970402E6489BB8E08B3FC1953D7D192;
struct IPropertyBag_1_t1BDAF4760B5E0A4BCA0988494C8AB6AFBC88AF06;
struct IProperty_1_t7A1634D9DE438EA88AEF58A0215DBA4C028E3EBA;
struct List_1_t2090C40B30D8CCE56DD5458C2510E29535341BA5;
struct List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB;
struct List_1_t534D2333B268A3580A409E37E69D1D54668A35DB;
struct List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Exception_t;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4;
struct InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct JsonAdapter_t4387298CACEC425123A5D8C620C8888E8D4BD6C8;
struct JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E;
struct JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750;
struct String_t;
struct Type_t;
struct UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D4FC64881AC7B47448894410786C7886AE62FE6;
IL2CPP_EXTERN_C String_t* _stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0;
IL2CPP_EXTERN_C String_t* _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A;
IL2CPP_EXTERN_C String_t* _stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB  : public RuntimeObject
{
	DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3  : public RuntimeObject
{
};
struct TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F  : public RuntimeObject
{
};
struct TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310  : public RuntimeObject
{
};
struct TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728  : public RuntimeObject
{
};
struct TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3  : public RuntimeObject
{
};
struct TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751  : public RuntimeObject
{
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283  : public RuntimeObject
{
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B  : public RuntimeObject
{
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D  : public RuntimeObject
{
};
struct TypeTraits_1_tB439768C3A79904448564C831E2894C0B5B57EAB  : public RuntimeObject
{
};
struct TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445  : public RuntimeObject
{
};
struct TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED  : public RuntimeObject
{
};
struct JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E  : public RuntimeObject
{
	bool ___U3CIsLockedU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___m_DeserializationIndex;
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___m_SerializationIndex;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___m_References;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___m_Serialized;
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
struct Enumerator_tD1C118F1607179721DCB59F03C9547C8E14E6869 
{
	List_1_t2090C40B30D8CCE56DD5458C2510E29535341BA5* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 
{
	Il2CppSharedGenericObject* ___Value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Handle_tB95417622C3A6F71FD5157D3B61F37A84BF2A03F 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 
{
	int32_t ___Index;
	bool ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_pinvoke
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_com
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
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
struct JsonAdapterCollection_t3F341DE8D22201859E95D99E77B995BD2B97B1CE 
{
	JsonAdapter_t4387298CACEC425123A5D8C620C8888E8D4BD6C8* ___InternalAdapter;
	List_1_t534D2333B268A3580A409E37E69D1D54668A35DB* ___Global;
	List_1_t534D2333B268A3580A409E37E69D1D54668A35DB* ___UserDefined;
};
struct JsonAdapterCollection_t3F341DE8D22201859E95D99E77B995BD2B97B1CE_marshaled_pinvoke
{
	JsonAdapter_t4387298CACEC425123A5D8C620C8888E8D4BD6C8* ___InternalAdapter;
	List_1_t534D2333B268A3580A409E37E69D1D54668A35DB* ___Global;
	List_1_t534D2333B268A3580A409E37E69D1D54668A35DB* ___UserDefined;
};
struct JsonAdapterCollection_t3F341DE8D22201859E95D99E77B995BD2B97B1CE_marshaled_com
{
	JsonAdapter_t4387298CACEC425123A5D8C620C8888E8D4BD6C8* ___InternalAdapter;
	List_1_t534D2333B268A3580A409E37E69D1D54668A35DB* ___Global;
	List_1_t534D2333B268A3580A409E37E69D1D54668A35DB* ___UserDefined;
};
struct JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548 
{
	List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8* ___Global;
	List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8* ___UserDefined;
	RuntimeObject* ___UserData;
};
struct JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548_marshaled_pinvoke
{
	List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8* ___Global;
	List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8* ___UserDefined;
	Il2CppIUnknown* ___UserData;
};
struct JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548_marshaled_com
{
	List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8* ___Global;
	List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8* ___UserDefined;
	Il2CppIUnknown* ___UserData;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct UnsafeMemberView_tAE4B89ACAEF257063FD2EC4F6E8A4AE08D52DD3F 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 
{
	bool ___HasSerializedId;
	bool ___HasSerializedTypeInfo;
	bool ___HasSerializedVersion;
	bool ___HasElements;
	bool ___IsSerializedReference;
	int32_t ___SerializedId;
};
struct SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8_marshaled_pinvoke
{
	int32_t ___HasSerializedId;
	int32_t ___HasSerializedTypeInfo;
	int32_t ___HasSerializedVersion;
	int32_t ___HasElements;
	int32_t ___IsSerializedReference;
	int32_t ___SerializedId;
};
struct SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8_marshaled_com
{
	int32_t ___HasSerializedId;
	int32_t ___HasSerializedTypeInfo;
	int32_t ___HasSerializedVersion;
	int32_t ___HasElements;
	int32_t ___IsSerializedReference;
	int32_t ___SerializedId;
};
struct PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 
{
	JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23_marshaled_pinvoke
{
	JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23_marshaled_com
{
	JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	int32_t ___m_Start;
	int32_t ___m_End;
	int32_t ___m_Position;
};
struct EnumeratorType_tA911091C2B17DDD13B8F7E51B1192E36CF746D60 
{
	int32_t ___value__;
};
struct IndexedCollectionPropertyBagEnumerable_1_t66F9C7F101590403B8B91A4C6C53684C6F680AB9 
{
	RuntimeObject* ___m_Impl;
	PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerator_1_tA5278A38BE11B645635461F9F79CA164E512D8A5 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 ___m_Container;
	int32_t ___m_Position;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct EventType_t3FFE62D1C4B6CB4133305113E7D5F82EC9E35E08 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FilterFunctionType_tF29290365A61009BE6F2EF6C6C6218E72CB9F64A 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E  : public JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E
{
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___m_View;
	Type_t* ___m_SerializedType;
	bool ___m_DisableRootAdapters;
	bool ___m_DisableRootMigration;
	JsonAdapterCollection_t3F341DE8D22201859E95D99E77B995BD2B97B1CE ___m_Adapters;
	JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548 ___m_Migrations;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* ___m_SerializedReferences;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 ___m_Metadata;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* ___m_SerializedTypeProvider;
	bool ___m_HasPrimitiveOrStringGlobalAdapters;
	bool ___m_HasPrimitiveOrStringUserDefinedAdapters;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
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
struct SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	Handle_tB95417622C3A6F71FD5157D3B61F37A84BF2A03F ___m_Handle;
};
struct SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	Handle_tB95417622C3A6F71FD5157D3B61F37A84BF2A03F ___m_Handle;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TokenType_tC73238BE9B9245FCE073CA34272C2F4599CC450C 
{
	int32_t ___value__;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 ___m_Metadata;
};
struct SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6_marshaled_pinvoke
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8_marshaled_pinvoke ___m_Metadata;
};
struct SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6_marshaled_com
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8_marshaled_com ___m_Metadata;
};
struct SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD  : public RuntimeObject
{
	List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___Events;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___View;
	Type_t* ___SerializedType;
};
struct UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___m_View;
};
struct UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3_marshaled_pinvoke
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___m_View;
};
struct UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3_marshaled_com
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___m_View;
};
struct Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_tD1C118F1607179721DCB59F03C9547C8E14E6869 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tA5278A38BE11B645635461F9F79CA164E512D8A5 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t2090C40B30D8CCE56DD5458C2510E29535341BA5* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t66F9C7F101590403B8B91A4C6C53684C6F680AB9 ___m_IndexedCollectionPropertyBag;
};
struct DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 
{
	int32_t ___Type;
	RuntimeObject* ___Payload;
};
struct DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9_marshaled_pinvoke
{
	int32_t ___Type;
	Il2CppIUnknown* ___Payload;
};
struct DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9_marshaled_com
{
	int32_t ___Type;
	Il2CppIUnknown* ___Payload;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA  : public Exception_t
{
	Type_t* ___U3CTypeU3Ek__BackingField;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF  : public Exception_t
{
	Type_t* ___U3CTypeU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_pinvoke
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_com
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB_StaticFields
{
	DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE* ___s_emptyArray;
};
struct TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB439768C3A79904448564C831E2894C0B5B57EAB_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
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
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6_StaticFields
{
	PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6 ___U3CEmptyU3Ek__BackingField;
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
struct DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE  : public RuntimeArray
{
	ALIGN_FIELD (8) DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 m_Items[1];

	inline DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Payload), (void*)NULL);
	}
	inline DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Payload), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m5C3EFAD186C1F2BA43BD091F742B49DB710AD0DF_gshared (Il2CppSharedGenericObject** ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB1FFFDFF577ED92903E8B23F39775F9259F3C524 (int64_t* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m54FB90D7F3E2BEA5F177534FCE00025D07992A4C (uint64_t* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0AEFA72E2A8DEBAF05E289DCD1A2482D6F161C02 (float* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m6EA4354368FDD12E1D02FEEBC7834E82DC663E64 (bool* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m93EB07A80440B7E77671B54C1D8C08181E12A499_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0B54EBAF2ABDA1135735601C317AB5A4203E2719 (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mC59C4EE0DC659653D30A2DC16320CE7429647FC3 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppSharedGenericObject_m5B2656784F8E36FE7BD3EBFEFC574900280A34F8_gshared (RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A (RuntimeObject* ___0_visitor, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m6E77D8FDE5829CD5E9DBF76F9A010DE5A8DE6FD3_gshared (Il2CppSharedGenericObject** ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m1E6C076EF4C9209696BD80B32155BD9C70C61035 (int64_t* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m5607689597B2C6B7CCCBFA6FEA6CC1941AA177D9 (uint64_t* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m01FCED17BBC6EC20F36BDA910915701C5F126142 (float* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mB5EA20292E9B0F92BD9F620C11782500B675CECB (bool* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m648B789A6C0E45C15D1B380C236BAC1C31DE31FB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m86BE13A6D6D6D6029092068FD71B876AE3CDC01F (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m80CF846B2F7C3605EE8CA9ED79C51FC0B0EE6D3E (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4 (RuntimeObject* ___0_visitor, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m0898C10E252F835D65393A0676B829128AB16B7F_gshared (Il2CppSharedGenericObject** ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mC5701FDEE42FCFBE60426A285CD5EACAE0A6EE6D (int64_t* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mC86776A8C8171AB4D4C32DB7793BCAE6679E2412 (uint64_t* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mF13CD5A636E0F5ADD35A3E968BE63814A1B386F2 (float* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m49DE95E026EB40A1C5F8E0BC9DE4C549BD0C7E8D (bool* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m5DE8174C99598B7B1C34FA4821AD521697DF692D (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mCC361B1B25389A1E2C840FC9D636209590EEFA97 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1 (RuntimeObject* ___0_visitor, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD42A2FC7A66AFE273DE86A9E0C8084277366AC14_gshared (Il2CppSharedGenericObject** ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE5637DA318BC3674A920C4803AD3D6C31CDA51E9 (int64_t* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE123CFD2D490B0DA48161B3C1B09482DCB0719C6 (uint64_t* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFFA72B84D4871F6290544E30B3B2FD0C431D3E86 (float* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7F870E6B7F62936A3E8DA802B04EF4FA0689E06 (bool* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m59A8F4FC9532F4455A351CE61FC4311CFCB87D75 (uint16_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD7439B6E4D10C0C006EE025DCB96B158387F9D04 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, uint16_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mCE76A78AB3DC39DF0250359738EDDA6F88AF9361 (RuntimeObject* ___0_visitor, uint16_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m66B44DEB9C19401CDBF803878AC66A23F1F2DBD4_gshared (Il2CppSharedGenericObject** ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6646CD7D06CA427EBAC5F57BDBA88B7DC7D9D7B1 (int64_t* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBDF10AA81A0EF355CF7B5ABB03E18B1D00AA74A3 (uint64_t* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCDE72C1600D09FFD69DC455640BA7B01B4EE1F62 (float* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3D6EDCFB72FCDB6FE176592F9475BF92F0E3926A (bool* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m149B7B704E3E30B5F4ED24556032861A41F27888 (uint32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m222EBC4651C45C79CF9FCD77D6F0C23B90AEDD57 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBA24C2DAF435BB875C0D95A94F6249692DC4272A (RuntimeObject* ___0_visitor, uint32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m21C9ABBABC532BAB2028599C54DBD1BBE75B1F0B_gshared (Il2CppSharedGenericObject** ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFF3072E7CAE30AAC9291CA9151BE44F6CBE2981D (int64_t* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7E09EC472AF1579F5A1610A6F85CDA7C8FD66C09 (uint64_t* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m009C2F837492AA8190EBE870DF5B9446CD7740B6 (float* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m367BE2693E8625908E2F55BE54BA679B10815CA8 (bool* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8BBA5CFF71BC0E668B5F1694EC419DC3F6E1B430 (uint64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6D41AFAE9409985713937A0EFB5962EA2052D2A2 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, uint64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5B69B304CB0F9BAA4CD35E85C9AD866F6C96CEAD (RuntimeObject* ___0_visitor, uint64_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m90BE48A8CA49286E5C06ED0052EC9DB53D5009D4_gshared (Il2CppSharedGenericObject** ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5FAADC27EEB2D094924C2525D90E02DF2EFF1FCC (int64_t* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCBD632F036E5E94F573DCBF67D5B7E40D08BCF5F (uint64_t* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0EE5EB7176959E89172B75C6A66A98C60C964F39 (float* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCD35EE93E7426B3F56F45D42E29108F3AC43BB52 (bool* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m31E96844FB007E80BEBA15283C483CBF503D9425 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2CA2193B61237A0E73027170015C064CC82A3A8D (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m86391134C0A805647DED0CEC6F6AA3FBEB6A4F96 (RuntimeObject* ___0_visitor, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m55A6B01F3F2F7EF748D3D1FD55629DC1034FB33B_gshared (Il2CppSharedGenericObject** ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4282E468B0B4F5D11E6F4C463045002167D8DA24 (int64_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDED0C60E934F54E1A71D87ACDC0E4BF1F1DED9D8 (uint64_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m93B8890E522E37A9870EF7DDB6C4B51638E6A8E3 (float* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDF8B234D3F01C53D955E26D7044CF65A8607EF4B (bool* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3566B835EE860C23D56FF6382849108C1DAD8ADD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m257E054E5B3D0D7C6B5D4D465CA0B848C6147621 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE3B117E9CD2BEF9BEE2858069A392B02963737B6 (RuntimeObject* ___0_visitor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m481494F76264ED9B4EED04AE3FBE7037B560EE06_gshared (Il2CppSharedGenericObject** ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA5A0FFDE10E52CEEBCD23D07534BF58A34C83AF4 (int64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mD2ECCC4D44AB984D758045110E515B10304BF5F6 (uint64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m5A934F22DC4CDEC1261676B638625E60EB298D60 (float* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mF39706B386756C037B3CDBCBEAEB6FE027DEB39F (bool* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9D2DB957F055906BC5BAC59BFA7BC0BA08617789 (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9CAAAAD4F2EF5D3B547BF30477191D496B8490D0 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m34950CB76D9D51770C30AA4ACF7C6B99E5A50062 (RuntimeObject* ___0_visitor, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m1795146D981667D4F44E54DCC3BD727594DE77F4_gshared (Il2CppSharedGenericObject** ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCF31EF299FA4F217448AE83731AE069917EF780B (int64_t* ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEA198F375E5AA35D679C4337F8C419CD65202577 (uint64_t* ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF7C10CDAB64F868E147A8365BA6651E9891D0C7D (float* ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6904E00F2F748808E738C1ADEEAC7F627DFE29F3 (bool* ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mB8715953B15429CDB6A7D50697117EF2F2CA97C1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5BD077AC2F5567DE7C2A2ED8CF37E9277E8DE1A1 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4CB4219857ED92B6B7232C36EF664A6B9C453E91 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mBAE68E7AB2BE711D3D280CE8ED750B36FEA4D0AD (RuntimeObject* ___0_visitor, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mB51CE40477F1266EBEB6B78660EA107A79834262_gshared (Il2CppSharedGenericObject** ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppSharedGenericObject_mEE815CF21346DF5F95997FB3149451F16DCCDB66_gshared (int64_t* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppSharedGenericObject_mA93595DEDDF271964522FC644E2D1D52C4EB6D36_gshared (uint64_t* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppSharedGenericObject_m8365780B6A8275468BF4E685321F13EB541CD9BD_gshared (float* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppSharedGenericObject_m65CC551B4FF39A45DB59F6FA94CD18A378CBB953_gshared (bool* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisIl2CppSharedGenericObject_m75C113486F3A834AE7F037E41EE92BFD62ABB79C_gshared (Il2CppSharedGenericObject** ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisIl2CppSharedGenericObject_m5B92E4126837500C8C3208CE672B6D6B55C1696F_gshared (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m96EE72F46271BB08128E38B413BE7F33B39F035D_gshared (Il2CppSharedGenericObject** ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m5410DC5DD22A36989A0A6733AEFBE6B2DA13080F_gshared (int64_t* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCFA3BE9517FD86E7317D03163D9B8025C659C791_gshared (uint64_t* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m08D4436912E6FBA06E34537C6371948305541C9E_gshared (float* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mBBBB5C91A094658564EEE6805B00434016DF733C_gshared (bool* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m6AB44CE837733A74E8AA76A96997EBB6A3E45676_gshared (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m5044643F1CB98629414BC2BC8FA3DF5F257561A8_gshared (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9E87548B66AEBFBB89580925AA2D6A35D930A3B2_gshared (RuntimeObject* ___0_visitor, int32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Il2CppSharedGenericObject** ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m64D726446F8070E6195B055A73204FEB41DE684E (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m63944369FF6EC8B190FACB7B5910D8DCEC807391 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m2DF55F20D1B65B85181CA1C113D4EC5C5CC8FB49 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9BE4BF6F205B68D749830A9C339454E7775D2B09 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, int32_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m885E7EB07895C87040A686A35CFEC81BBD666836 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mD12A3C7734AFFD5C6297F33EA75D008304FFF6FF (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m610639040E05B9A88FBD352A9C9EB9218141966C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F PropertyCollection_1_GetEnumerator_m94472DB432071002798D5153C7DAE59C9F54BE3F_gshared (PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBF37D8DAF6AA278E39454040745D83F28183D226_gshared (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF40C6D080C23B00D5DFE96DED4D4E0CD0EF02CCA_gshared (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB7C492138984C907F8B89245F80866DBA2A8CE5D_gshared_inline (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m1FF26FCF29814DEDF2DF2275A6192229E5B915CC_gshared (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m0FD4220D31DC5A66521C09111D4980776C9235F4_gshared (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m5AB21F36646853720714FFD531B9407505F32F29_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m33721C3206790908F95C4F736E10D66AC606B185 (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863 (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022 (UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59* __this, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m163D1F2D28CEF34A0F805AE1E050698197CFA0A8 (String_t** ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m5C3EFAD186C1F2BA43BD091F742B49DB710AD0DF_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026 (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942 (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25 (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB1FFFDFF577ED92903E8B23F39775F9259F3C524 (int64_t* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7 (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m54FB90D7F3E2BEA5F177534FCE00025D07992A4C (uint64_t* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207 (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239 (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0AEFA72E2A8DEBAF05E289DCD1A2482D6F161C02 (float* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797 (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m6EA4354368FDD12E1D02FEEBC7834E82DC663E64 (bool* ___0_source, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E (UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64 (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B (UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m93EB07A80440B7E77671B54C1D8C08181E12A499_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A (DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9* __this, int32_t ___0_type, RuntimeObject* ___1_payload, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0B54EBAF2ABDA1135735601C317AB5A4203E2719 (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mC59C4EE0DC659653D30A2DC16320CE7429647FC3 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A (SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6* __this, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___0_visitor, SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 ___1_metadata, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA (SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F (UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3* __this, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___0_visitor, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308 (UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
inline bool PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject**, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppSharedGenericObject_m5B2656784F8E36FE7BD3EBFEFC574900280A34F8_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3 (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A (RuntimeObject* ___0_visitor, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m5A3AEEAD03D3AEDFB3AD3945D1D007507FD6B16C (String_t** ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m6E77D8FDE5829CD5E9DBF76F9A010DE5A8DE6FD3_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m1E6C076EF4C9209696BD80B32155BD9C70C61035 (int64_t* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m5607689597B2C6B7CCCBFA6FEA6CC1941AA177D9 (uint64_t* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m01FCED17BBC6EC20F36BDA910915701C5F126142 (float* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mB5EA20292E9B0F92BD9F620C11782500B675CECB (bool* ___0_source, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m648B789A6C0E45C15D1B380C236BAC1C31DE31FB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m86BE13A6D6D6D6029092068FD71B876AE3CDC01F (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m80CF846B2F7C3605EE8CA9ED79C51FC0B0EE6D3E (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4 (RuntimeObject* ___0_visitor, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mDEAEF019FEE23F3B2E54A410A16935F6665A7E87 (String_t** ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m0898C10E252F835D65393A0676B829128AB16B7F_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mC5701FDEE42FCFBE60426A285CD5EACAE0A6EE6D (int64_t* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mC86776A8C8171AB4D4C32DB7793BCAE6679E2412 (uint64_t* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mF13CD5A636E0F5ADD35A3E968BE63814A1B386F2 (float* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m49DE95E026EB40A1C5F8E0BC9DE4C549BD0C7E8D (bool* ___0_source, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m5DE8174C99598B7B1C34FA4821AD521697DF692D (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mCC361B1B25389A1E2C840FC9D636209590EEFA97 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1 (RuntimeObject* ___0_visitor, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8D6E4C2E84258A3BAC297E408CED374DACE0CA87 (String_t** ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, uint16_t*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD42A2FC7A66AFE273DE86A9E0C8084277366AC14_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE5637DA318BC3674A920C4803AD3D6C31CDA51E9 (int64_t* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE123CFD2D490B0DA48161B3C1B09482DCB0719C6 (uint64_t* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFFA72B84D4871F6290544E30B3B2FD0C431D3E86 (float* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7F870E6B7F62936A3E8DA802B04EF4FA0689E06 (bool* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m59A8F4FC9532F4455A351CE61FC4311CFCB87D75 (uint16_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD7439B6E4D10C0C006EE025DCB96B158387F9D04 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, uint16_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mCE76A78AB3DC39DF0250359738EDDA6F88AF9361 (RuntimeObject* ___0_visitor, uint16_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0AFF7B8D1E6398AA6B8A9AFEC95D98F146CC8773 (String_t** ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, uint32_t*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m66B44DEB9C19401CDBF803878AC66A23F1F2DBD4_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6646CD7D06CA427EBAC5F57BDBA88B7DC7D9D7B1 (int64_t* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBDF10AA81A0EF355CF7B5ABB03E18B1D00AA74A3 (uint64_t* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCDE72C1600D09FFD69DC455640BA7B01B4EE1F62 (float* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3D6EDCFB72FCDB6FE176592F9475BF92F0E3926A (bool* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m149B7B704E3E30B5F4ED24556032861A41F27888 (uint32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m222EBC4651C45C79CF9FCD77D6F0C23B90AEDD57 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBA24C2DAF435BB875C0D95A94F6249692DC4272A (RuntimeObject* ___0_visitor, uint32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6E1E001BEF2D4E84D1F5A0B83E443914576CD29B (String_t** ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, uint64_t*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m21C9ABBABC532BAB2028599C54DBD1BBE75B1F0B_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFF3072E7CAE30AAC9291CA9151BE44F6CBE2981D (int64_t* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7E09EC472AF1579F5A1610A6F85CDA7C8FD66C09 (uint64_t* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m009C2F837492AA8190EBE870DF5B9446CD7740B6 (float* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m367BE2693E8625908E2F55BE54BA679B10815CA8 (bool* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8BBA5CFF71BC0E668B5F1694EC419DC3F6E1B430 (uint64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6D41AFAE9409985713937A0EFB5962EA2052D2A2 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, uint64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5B69B304CB0F9BAA4CD35E85C9AD866F6C96CEAD (RuntimeObject* ___0_visitor, uint64_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9ACBCDD6F5085F87A39E0FE8E3D6A825C2EDB2EA (String_t** ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m90BE48A8CA49286E5C06ED0052EC9DB53D5009D4_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5FAADC27EEB2D094924C2525D90E02DF2EFF1FCC (int64_t* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCBD632F036E5E94F573DCBF67D5B7E40D08BCF5F (uint64_t* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0EE5EB7176959E89172B75C6A66A98C60C964F39 (float* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCD35EE93E7426B3F56F45D42E29108F3AC43BB52 (bool* ___0_source, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m31E96844FB007E80BEBA15283C483CBF503D9425 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2CA2193B61237A0E73027170015C064CC82A3A8D (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m86391134C0A805647DED0CEC6F6AA3FBEB6A4F96 (RuntimeObject* ___0_visitor, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m013EDD862B098D1B0EF41A3D28C386597CF9F2CE (String_t** ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m55A6B01F3F2F7EF748D3D1FD55629DC1034FB33B_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4282E468B0B4F5D11E6F4C463045002167D8DA24 (int64_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDED0C60E934F54E1A71D87ACDC0E4BF1F1DED9D8 (uint64_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m93B8890E522E37A9870EF7DDB6C4B51638E6A8E3 (float* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDF8B234D3F01C53D955E26D7044CF65A8607EF4B (bool* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3566B835EE860C23D56FF6382849108C1DAD8ADD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m257E054E5B3D0D7C6B5D4D465CA0B848C6147621 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE3B117E9CD2BEF9BEE2858069A392B02963737B6 (RuntimeObject* ___0_visitor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m396A3B8B0ED347AA7166B806F8EFBFA3CA676F55 (String_t** ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m481494F76264ED9B4EED04AE3FBE7037B560EE06_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA5A0FFDE10E52CEEBCD23D07534BF58A34C83AF4 (int64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mD2ECCC4D44AB984D758045110E515B10304BF5F6 (uint64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m5A934F22DC4CDEC1261676B638625E60EB298D60 (float* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mF39706B386756C037B3CDBCBEAEB6FE027DEB39F (bool* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9D2DB957F055906BC5BAC59BFA7BC0BA08617789 (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9CAAAAD4F2EF5D3B547BF30477191D496B8490D0 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m34950CB76D9D51770C30AA4ACF7C6B99E5A50062 (RuntimeObject* ___0_visitor, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD9F7482472E16AD409ADE6EE226BD8C4A3070BBA (String_t** ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m1795146D981667D4F44E54DCC3BD727594DE77F4_gshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCF31EF299FA4F217448AE83731AE069917EF780B (int64_t* ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEA198F375E5AA35D679C4337F8C419CD65202577 (uint64_t* ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF7C10CDAB64F868E147A8365BA6651E9891D0C7D (float* ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6904E00F2F748808E738C1ADEEAC7F627DFE29F3 (bool* ___0_source, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mB8715953B15429CDB6A7D50697117EF2F2CA97C1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5BD077AC2F5567DE7C2A2ED8CF37E9277E8DE1A1 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedReferences_AddDeserializedReference_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4CB4219857ED92B6B7232C36EF664A6B9C453E91 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mBAE68E7AB2BE711D3D280CE8ED750B36FEA4D0AD (RuntimeObject* ___0_visitor, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
inline bool TypeConversion_TryConvert_TisString_t_TisIl2CppSharedGenericObject_mFCE59DB57FA2C88AD8052A4B3AD65D019C3B0F96 (String_t** ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, Il2CppSharedGenericObject**, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mB51CE40477F1266EBEB6B78660EA107A79834262_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppSharedGenericObject_mEE815CF21346DF5F95997FB3149451F16DCCDB66 (int64_t* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (int64_t*, Il2CppSharedGenericObject**, const RuntimeMethod*))TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppSharedGenericObject_mEE815CF21346DF5F95997FB3149451F16DCCDB66_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppSharedGenericObject_mA93595DEDDF271964522FC644E2D1D52C4EB6D36 (uint64_t* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, Il2CppSharedGenericObject**, const RuntimeMethod*))TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppSharedGenericObject_mA93595DEDDF271964522FC644E2D1D52C4EB6D36_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppSharedGenericObject_m8365780B6A8275468BF4E685321F13EB541CD9BD (float* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (float*, Il2CppSharedGenericObject**, const RuntimeMethod*))TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppSharedGenericObject_m8365780B6A8275468BF4E685321F13EB541CD9BD_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppSharedGenericObject_m65CC551B4FF39A45DB59F6FA94CD18A378CBB953 (bool* ___0_source, Il2CppSharedGenericObject** ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (bool*, Il2CppSharedGenericObject**, const RuntimeMethod*))TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppSharedGenericObject_m65CC551B4FF39A45DB59F6FA94CD18A378CBB953_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_gshared_inline)(method);
}
inline void DefaultTypeConstruction_Construct_TisIl2CppSharedGenericObject_m75C113486F3A834AE7F037E41EE92BFD62ABB79C (Il2CppSharedGenericObject** ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (Il2CppSharedGenericObject**, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_Construct_TisIl2CppSharedGenericObject_m75C113486F3A834AE7F037E41EE92BFD62ABB79C_gshared)(___0_value, ___1_provider, method);
}
inline void SerializedReferences_AddDeserializedReference_TisIl2CppSharedGenericObject_m5B92E4126837500C8C3208CE672B6D6B55C1696F (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))SerializedReferences_AddDeserializedReference_TisIl2CppSharedGenericObject_m5B92E4126837500C8C3208CE672B6D6B55C1696F_gshared)(__this, ___0_id, ___1_value, method);
}
inline bool PropertyContainer_TryAccept_TisIl2CppSharedGenericObject_m5B2656784F8E36FE7BD3EBFEFC574900280A34F8 (RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppSharedGenericObject**, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppSharedGenericObject_m5B2656784F8E36FE7BD3EBFEFC574900280A34F8_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeConversion_TryConvert_TisString_t_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m80C4448802DEAE86AE92E79CEBB5EF1869E4E049 (String_t** ___0_source, int32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t**, int32_t*, const RuntimeMethod*))TypeConversion_TryConvert_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m96EE72F46271BB08128E38B413BE7F33B39F035D_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m5410DC5DD22A36989A0A6733AEFBE6B2DA13080F (int64_t* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (int64_t*, int32_t*, const RuntimeMethod*))TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m5410DC5DD22A36989A0A6733AEFBE6B2DA13080F_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCFA3BE9517FD86E7317D03163D9B8025C659C791 (uint64_t* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, int32_t*, const RuntimeMethod*))TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCFA3BE9517FD86E7317D03163D9B8025C659C791_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m08D4436912E6FBA06E34537C6371948305541C9E (float* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (float*, int32_t*, const RuntimeMethod*))TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m08D4436912E6FBA06E34537C6371948305541C9E_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mBBBB5C91A094658564EEE6805B00434016DF733C (bool* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (bool*, int32_t*, const RuntimeMethod*))TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mBBBB5C91A094658564EEE6805B00434016DF733C_gshared)(___0_source, ___1_destination, method);
}
inline bool TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_gshared_inline)(method);
}
inline void DefaultTypeConstruction_Construct_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m6AB44CE837733A74E8AA76A96997EBB6A3E45676 (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_Construct_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m6AB44CE837733A74E8AA76A96997EBB6A3E45676_gshared)(___0_value, ___1_provider, method);
}
inline void SerializedReferences_AddDeserializedReference_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m5044643F1CB98629414BC2BC8FA3DF5F257561A8 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750*, int32_t, int32_t, const RuntimeMethod*))SerializedReferences_AddDeserializedReference_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m5044643F1CB98629414BC2BC8FA3DF5F257561A8_gshared)(__this, ___0_id, ___1_value, method);
}
inline bool PropertyContainer_TryAccept_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9E87548B66AEBFBB89580925AA2D6A35D930A3B2 (RuntimeObject* ___0_visitor, int32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9E87548B66AEBFBB89580925AA2D6A35D930A3B2_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A (UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31 (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611 (UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850 (UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541* __this, String_t* ___0_name, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* ___1_value, const RuntimeMethod* method) ;
inline void JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Il2CppSharedGenericObject** ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppSharedGenericObject**, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02 UnsafeObjectView_GetEnumerator_m167F74CEACF84D7D778D935F51C7363EDA7887DE (UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD5BE201ED50D08962FA69208511B0E22B00333E (Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeMemberView_tAE4B89ACAEF257063FD2EC4F6E8A4AE08D52DD3F Enumerator_get_Current_mB9297BB2868750D8F98737907A7F3CB343BA9BB5 (Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E UnsafeMemberView_Key_mC6171CE59D0682D4771B6D16AAAAEA2B09A15FC6 (UnsafeMemberView_tAE4B89ACAEF257063FD2EC4F6E8A4AE08D52DD3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E UnsafeMemberView_Value_m2CCE2ED138D1C2ED3D15BD67DFDFAC119EE14AD2 (UnsafeMemberView_tAE4B89ACAEF257063FD2EC4F6E8A4AE08D52DD3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFFB3E2C355D8DD544660C14C596E80278DE3B1BE (Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m64D726446F8070E6195B055A73204FEB41DE684E (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedArrayView_System_Collections_Generic_IListU3CUnity_Behavior_Serialization_Json_SerializedValueViewU3E_set_Item_m35D14F28205D73314508B6FE5C3EC1E761F6B0C9 (SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* __this, int32_t ___0_index, SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedArrayView_System_Collections_Generic_ICollectionU3CUnity_Behavior_Serialization_Json_SerializedValueViewU3E_Clear_mB1D540B014D9B64A0ECE0DF5CA19F0DC6899288A (SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedArrayView_System_Collections_Generic_ICollectionU3CUnity_Behavior_Serialization_Json_SerializedValueViewU3E_Add_m79BFBC008B7A7341E8350D9472214D4A78366A5C (SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* __this, SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m63944369FF6EC8B190FACB7B5910D8DCEC807391 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m2DF55F20D1B65B85181CA1C113D4EC5C5CC8FB49 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9BE4BF6F205B68D749830A9C339454E7775D2B09 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, int32_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m885E7EB07895C87040A686A35CFEC81BBD666836 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mD12A3C7734AFFD5C6297F33EA75D008304FFF6FF (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m610639040E05B9A88FBD352A9C9EB9218141966C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F PropertyCollection_1_GetEnumerator_m94472DB432071002798D5153C7DAE59C9F54BE3F (PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F (*) (PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_m94472DB432071002798D5153C7DAE59C9F54BE3F_gshared)(__this, method);
}
inline void Enumerator_Dispose_mBF37D8DAF6AA278E39454040745D83F28183D226 (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F*, const RuntimeMethod*))Enumerator_Dispose_mBF37D8DAF6AA278E39454040745D83F28183D226_gshared)(__this, method);
}
inline bool Enumerator_MoveNext_mF40C6D080C23B00D5DFE96DED4D4E0CD0EF02CCA (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F*, const RuntimeMethod*))Enumerator_MoveNext_mF40C6D080C23B00D5DFE96DED4D4E0CD0EF02CCA_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mB7C492138984C907F8B89245F80866DBA2A8CE5D_inline (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F*, const RuntimeMethod*))Enumerator_get_Current_mB7C492138984C907F8B89245F80866DBA2A8CE5D_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C (JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* __this, RuntimeObject* ___0_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946 (PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline (JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* __this, const RuntimeMethod* method) ;
inline bool JsonMigrationCollection_TryMigrate_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m1FF26FCF29814DEDF2DF2275A6192229E5B915CC (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22*, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB*, const RuntimeMethod*))JsonMigrationCollection_TryMigrate_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m1FF26FCF29814DEDF2DF2275A6192229E5B915CC_gshared)(__this, ___0_view, ___1_value, ___2_reader, ___3_events, method);
}
inline void SerializedReferences_AddDeserializedReference_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m0FD4220D31DC5A66521C09111D4980776C9235F4 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, int32_t ___0_id, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750*, int32_t, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22, const RuntimeMethod*))SerializedReferences_AddDeserializedReference_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m0FD4220D31DC5A66521C09111D4980776C9235F4_gshared)(__this, ___0_id, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_IsPropertyExcludedFromSerialization_mB1BC9CBE6B1A4426B6C45608F7DA02985FE0D863 (RuntimeObject* ___0_property, const RuntimeMethod* method) ;
inline void JsonPropertyReader_AcceptProperty_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m5AB21F36646853720714FFD531B9407505F32F29 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22*, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541, RuntimeObject*, const RuntimeMethod*))JsonPropertyReader_AcceptProperty_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m5AB21F36646853720714FFD531B9407505F32F29_gshared)(__this, ___0_container, ___1_view, ___2_property, method);
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m33721C3206790908F95C4F736E10D66AC606B185 (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mDE51070B32FD497875FB26BD72050C8550F7E335 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m163D1F2D28CEF34A0F805AE1E050698197CFA0A8((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB1FFFDFF577ED92903E8B23F39775F9259F3C524((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m54FB90D7F3E2BEA5F177534FCE00025D07992A4C((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0AEFA72E2A8DEBAF05E289DCD1A2482D6F161C02((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m6EA4354368FDD12E1D02FEEBC7834E82DC663E64((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_m93EB07A80440B7E77671B54C1D8C08181E12A499_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_49 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0B54EBAF2ABDA1135735601C317AB5A4203E2719(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_69 = ___0_value;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_70 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mC59C4EE0DC659653D30A2DC16320CE7429647FC3(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_m93EB07A80440B7E77671B54C1D8C08181E12A499_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_78 = ___0_value;
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_79 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_78);
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_88 = ___0_value;
						Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_92 = ___0_value;
						Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_101 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_108 = ___0_value;
						Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_112 = ___0_value;
						Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mDE4489E8FB9A05CEC45786BEB12813F7CE6E91DC (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m5A3AEEAD03D3AEDFB3AD3945D1D007507FD6B16C((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m1E6C076EF4C9209696BD80B32155BD9C70C61035((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m5607689597B2C6B7CCCBFA6FEA6CC1941AA177D9((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m01FCED17BBC6EC20F36BDA910915701C5F126142((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mB5EA20292E9B0F92BD9F620C11782500B675CECB((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_m648B789A6C0E45C15D1B380C236BAC1C31DE31FB_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_49 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m86BE13A6D6D6D6029092068FD71B876AE3CDC01F(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_69 = ___0_value;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_70 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m80CF846B2F7C3605EE8CA9ED79C51FC0B0EE6D3E(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_m648B789A6C0E45C15D1B380C236BAC1C31DE31FB_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_78 = ___0_value;
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_79 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_78);
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_88 = ___0_value;
						Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_92 = ___0_value;
						Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_101 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_108 = ___0_value;
						Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_112 = ___0_value;
						Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m395A1558B82A3BB3155207060935B12E8ABA0F8F (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mDEAEF019FEE23F3B2E54A410A16935F6665A7E87((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mC5701FDEE42FCFBE60426A285CD5EACAE0A6EE6D((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mC86776A8C8171AB4D4C32DB7793BCAE6679E2412((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mF13CD5A636E0F5ADD35A3E968BE63814A1B386F2((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m49DE95E026EB40A1C5F8E0BC9DE4C549BD0C7E8D((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_49 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m5DE8174C99598B7B1C34FA4821AD521697DF692D(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_69 = ___0_value;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_70 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mCC361B1B25389A1E2C840FC9D636209590EEFA97(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_78 = ___0_value;
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_79 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_78);
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_88 = ___0_value;
						Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_92 = ___0_value;
						Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_101 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_108 = ___0_value;
						Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_112 = ___0_value;
						Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBA9A1B4FCE1F08749278B18B04D8FA6B67FCC9F4 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, uint16_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		uint16_t* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8D6E4C2E84258A3BAC297E408CED374DACE0CA87((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		uint16_t* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE5637DA318BC3674A920C4803AD3D6C31CDA51E9((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		uint16_t* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE123CFD2D490B0DA48161B3C1B09482DCB0719C6((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		uint16_t* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFFA72B84D4871F6290544E30B3B2FD0C431D3E86((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		uint16_t* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7F870E6B7F62936A3E8DA802B04EF4FA0689E06((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		uint16_t* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(uint16_t));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		uint16_t* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(uint16_t*)L_49 = ((*(uint16_t*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		uint16_t* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m59A8F4FC9532F4455A351CE61FC4311CFCB87D75(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		uint16_t* L_69 = ___0_value;
		uint16_t L_70 = (*(uint16_t*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD7439B6E4D10C0C006EE025DCB96B158387F9D04(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						uint16_t* L_78 = ___0_value;
						uint16_t L_79 = (*(uint16_t*)L_78);
						uint16_t L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						uint16_t* L_88 = ___0_value;
						Il2CppFakeBox<uint16_t> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						uint16_t* L_92 = ___0_value;
						Il2CppFakeBox<uint16_t> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						uint16_t* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(uint16_t*)L_101 = ((*(uint16_t*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						uint16_t* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mCE76A78AB3DC39DF0250359738EDDA6F88AF9361(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						uint16_t* L_108 = ___0_value;
						Il2CppFakeBox<uint16_t> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						uint16_t* L_112 = ___0_value;
						Il2CppFakeBox<uint16_t> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m92EC7B84B769E2B24340D6E2D7B3EAFD1CDA87C3 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, uint32_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		uint32_t* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0AFF7B8D1E6398AA6B8A9AFEC95D98F146CC8773((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		uint32_t* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m6646CD7D06CA427EBAC5F57BDBA88B7DC7D9D7B1((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		uint32_t* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBDF10AA81A0EF355CF7B5ABB03E18B1D00AA74A3((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		uint32_t* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCDE72C1600D09FFD69DC455640BA7B01B4EE1F62((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		uint32_t* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m3D6EDCFB72FCDB6FE176592F9475BF92F0E3926A((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		uint32_t* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(uint32_t));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		uint32_t* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(uint32_t*)L_49 = ((*(uint32_t*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		uint32_t* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m149B7B704E3E30B5F4ED24556032861A41F27888(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		uint32_t* L_69 = ___0_value;
		uint32_t L_70 = (*(uint32_t*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m222EBC4651C45C79CF9FCD77D6F0C23B90AEDD57(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						uint32_t* L_78 = ___0_value;
						uint32_t L_79 = (*(uint32_t*)L_78);
						uint32_t L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						uint32_t* L_88 = ___0_value;
						Il2CppFakeBox<uint32_t> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						uint32_t* L_92 = ___0_value;
						Il2CppFakeBox<uint32_t> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						uint32_t* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(uint32_t*)L_101 = ((*(uint32_t*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						uint32_t* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBA24C2DAF435BB875C0D95A94F6249692DC4272A(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						uint32_t* L_108 = ___0_value;
						Il2CppFakeBox<uint32_t> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						uint32_t* L_112 = ___0_value;
						Il2CppFakeBox<uint32_t> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m67C6FAFA65A3F1F798413766296EAEB0C6087DF6 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, uint64_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		uint64_t* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6E1E001BEF2D4E84D1F5A0B83E443914576CD29B((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		uint64_t* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mFF3072E7CAE30AAC9291CA9151BE44F6CBE2981D((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		uint64_t* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7E09EC472AF1579F5A1610A6F85CDA7C8FD66C09((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		uint64_t* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m009C2F837492AA8190EBE870DF5B9446CD7740B6((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		uint64_t* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m367BE2693E8625908E2F55BE54BA679B10815CA8((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		uint64_t* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(uint64_t));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		uint64_t* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(uint64_t*)L_49 = ((*(uint64_t*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		uint64_t* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8BBA5CFF71BC0E668B5F1694EC419DC3F6E1B430(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		uint64_t* L_69 = ___0_value;
		uint64_t L_70 = (*(uint64_t*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6D41AFAE9409985713937A0EFB5962EA2052D2A2(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						uint64_t* L_78 = ___0_value;
						uint64_t L_79 = (*(uint64_t*)L_78);
						uint64_t L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						uint64_t* L_88 = ___0_value;
						Il2CppFakeBox<uint64_t> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						uint64_t* L_92 = ___0_value;
						Il2CppFakeBox<uint64_t> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						uint64_t* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(uint64_t*)L_101 = ((*(uint64_t*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						uint64_t* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5B69B304CB0F9BAA4CD35E85C9AD866F6C96CEAD(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						uint64_t* L_108 = ___0_value;
						Il2CppFakeBox<uint64_t> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						uint64_t* L_112 = ___0_value;
						Il2CppFakeBox<uint64_t> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7FECB0DAC0BFB5324A9D18E9CFB6C03915EDB406 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9ACBCDD6F5085F87A39E0FE8E3D6A825C2EDB2EA((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5FAADC27EEB2D094924C2525D90E02DF2EFF1FCC((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCBD632F036E5E94F573DCBF67D5B7E40D08BCF5F((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0EE5EB7176959E89172B75C6A66A98C60C964F39((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCD35EE93E7426B3F56F45D42E29108F3AC43BB52((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_49 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m31E96844FB007E80BEBA15283C483CBF503D9425(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2CA2193B61237A0E73027170015C064CC82A3A8D(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_78 = ___0_value;
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_78);
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_88 = ___0_value;
						Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_92 = ___0_value;
						Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_101 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m86391134C0A805647DED0CEC6F6AA3FBEB6A4F96(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_108 = ___0_value;
						Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_112 = ___0_value;
						Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9FD1C30D5ECE02E73043D709BA3537DA2E71EBEA (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m013EDD862B098D1B0EF41A3D28C386597CF9F2CE((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4282E468B0B4F5D11E6F4C463045002167D8DA24((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDED0C60E934F54E1A71D87ACDC0E4BF1F1DED9D8((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m93B8890E522E37A9870EF7DDB6C4B51638E6A8E3((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDF8B234D3F01C53D955E26D7044CF65A8607EF4B((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_49 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3566B835EE860C23D56FF6382849108C1DAD8ADD(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_69 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m257E054E5B3D0D7C6B5D4D465CA0B848C6147621(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_78 = ___0_value;
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_78);
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_88 = ___0_value;
						Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = ___0_value;
						Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_101 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE3B117E9CD2BEF9BEE2858069A392B02963737B6(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_108 = ___0_value;
						Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_112 = ___0_value;
						Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m48F322F6DF11F2F853CB46B7E447FA7593567706 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m396A3B8B0ED347AA7166B806F8EFBFA3CA676F55((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA5A0FFDE10E52CEEBCD23D07534BF58A34C83AF4((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mD2ECCC4D44AB984D758045110E515B10304BF5F6((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m5A934F22DC4CDEC1261676B638625E60EB298D60((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mF39706B386756C037B3CDBCBEAEB6FE027DEB39F((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_49 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9D2DB957F055906BC5BAC59BFA7BC0BA08617789(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_69 = ___0_value;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_70 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m9CAAAAD4F2EF5D3B547BF30477191D496B8490D0(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_78 = ___0_value;
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_79 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_78);
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_88 = ___0_value;
						Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_92 = ___0_value;
						Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_101 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m34950CB76D9D51770C30AA4ACF7C6B99E5A50062(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_108 = ___0_value;
						Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_112 = ___0_value;
						Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0D3F8BAF4FA9C8CC3890212B308A28FEF5B16969 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD9F7482472E16AD409ADE6EE226BD8C4A3070BBA((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCF31EF299FA4F217448AE83731AE069917EF780B((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mEA198F375E5AA35D679C4337F8C419CD65202577((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF7C10CDAB64F868E147A8365BA6651E9891D0C7D((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6904E00F2F748808E738C1ADEEAC7F627DFE29F3((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_mB8715953B15429CDB6A7D50697117EF2F2CA97C1_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_49 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5BD077AC2F5567DE7C2A2ED8CF37E9277E8DE1A1(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_69 = ___0_value;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4CB4219857ED92B6B7232C36EF664A6B9C453E91(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_mB8715953B15429CDB6A7D50697117EF2F2CA97C1_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_78 = ___0_value;
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_78);
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_88 = ___0_value;
						Il2CppFakeBox<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_92 = ___0_value;
						Il2CppFakeBox<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_101 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mBAE68E7AB2BE711D3D280CE8ED750B36FEA4D0AD(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_108 = ___0_value;
						Il2CppFakeBox<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_112 = ___0_value;
						Il2CppFakeBox<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
// Method Definition Index: 87445
// Method Definition Index: 87445
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisIl2CppSharedGenericObject_mE25917CD0DC92F25816BAFAE7FE832A42CC88291_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Il2CppSharedGenericObject** ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		Il2CppSharedGenericObject** L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_TisIl2CppSharedGenericObject_mFCE59DB57FA2C88AD8052A4B3AD65D019C3B0F96((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		Il2CppSharedGenericObject** L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisIl2CppSharedGenericObject_mEE815CF21346DF5F95997FB3149451F16DCCDB66((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		Il2CppSharedGenericObject** L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisIl2CppSharedGenericObject_mA93595DEDDF271964522FC644E2D1D52C4EB6D36((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		Il2CppSharedGenericObject** L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisIl2CppSharedGenericObject_m8365780B6A8275468BF4E685321F13EB541CD9BD((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		Il2CppSharedGenericObject** L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisIl2CppSharedGenericObject_m65CC551B4FF39A45DB59F6FA94CD18A378CBB953((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		Il2CppSharedGenericObject** L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(Il2CppSharedGenericObject*));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		Il2CppSharedGenericObject** L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(Il2CppSharedGenericObject**)L_49 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 5)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_49, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		Il2CppSharedGenericObject** L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_TisIl2CppSharedGenericObject_m75C113486F3A834AE7F037E41EE92BFD62ABB79C(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		Il2CppSharedGenericObject** L_69 = ___0_value;
		Il2CppSharedGenericObject* L_70 = (*(Il2CppSharedGenericObject**)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_TisIl2CppSharedGenericObject_m5B92E4126837500C8C3208CE672B6D6B55C1696F(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						Il2CppSharedGenericObject** L_78 = ___0_value;
						Il2CppSharedGenericObject* L_79 = (*(Il2CppSharedGenericObject**)L_78);
						Type_t* L_80 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_81;
						L_81 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_79, L_80, NULL);
						V_14 = L_81;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_82 = V_16;
						bool L_83;
						L_83 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_82, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_83)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_84 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_84, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_85 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_85, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, method);
					}

IL_0264_2:
					{
						Il2CppSharedGenericObject** L_86 = ___0_value;
						NullCheck((RuntimeObject*)(*L_86));
						Type_t* L_87;
						L_87 = il2cpp_codegen_object_get_type((RuntimeObject*)(*L_86));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_88 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_88, L_87, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, method);
					}

IL_0276_2:
					{
						Il2CppSharedGenericObject** L_89 = ___0_value;
						NullCheck((RuntimeObject*)(*L_89));
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((RuntimeObject*)(*L_89));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_91 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0288_2:
					{
						int32_t L_92 = V_15;
						int32_t L_93 = L_92;
						RuntimeObject* L_94 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_93);
						String_t* L_95;
						L_95 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_94, NULL);
						Exception_t* L_96 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_96, L_95, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_96, method);
					}

IL_02a4_2:
					{
						Il2CppSharedGenericObject** L_97 = ___0_value;
						RuntimeObject* L_98 = V_14;
						*(Il2CppSharedGenericObject**)L_97 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 5)));
						Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_97, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						Il2CppSharedGenericObject** L_99 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_100 = V_16;
						bool L_101;
						L_101 = PropertyContainer_TryAccept_TisIl2CppSharedGenericObject_m5B2656784F8E36FE7BD3EBFEFC574900280A34F8(__this, L_99, (&V_17), L_100, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_101)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_102 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_102, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_103 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_103, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, method);
					}

IL_02ed_2:
					{
						Il2CppSharedGenericObject** L_104 = ___0_value;
						NullCheck((RuntimeObject*)(*L_104));
						Type_t* L_105;
						L_105 = il2cpp_codegen_object_get_type((RuntimeObject*)(*L_104));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_106 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_106, L_105, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, method);
					}

IL_02ff_2:
					{
						Il2CppSharedGenericObject** L_107 = ___0_value;
						NullCheck((RuntimeObject*)(*L_107));
						Type_t* L_108;
						L_108 = il2cpp_codegen_object_get_type((RuntimeObject*)(*L_107));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_109 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_109, L_108, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_109, method);
					}

IL_0311_2:
					{
						int32_t L_110 = V_17;
						int32_t L_111 = L_110;
						RuntimeObject* L_112 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_111);
						String_t* L_113;
						L_113 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_112, NULL);
						Exception_t* L_114 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_114, L_113, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_114, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_TisIl2CppFullySharedGenericAny_mF9E065F6237FD8C5166E76F21461AAFC95DE30BA_fshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Il2CppFullySharedGenericAny* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	const uint32_t SizeOf_TValue_t5C8799A7B178448B6C8C2B3BAA821872E3862F87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	void* L_90 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	void* L_97 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	void* L_118 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	void* L_125 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_t5C8799A7B178448B6C8C2B3BAA821872E3862F87);
	const Il2CppFullySharedGenericAny L_72 = L_54;
	const Il2CppFullySharedGenericAny L_81 = L_54;
	const Il2CppFullySharedGenericAny L_110 = L_54;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		Il2CppFullySharedGenericAny* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = ((  bool (*) (String_t**, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		Il2CppFullySharedGenericAny* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = ((  bool (*) (int64_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		Il2CppFullySharedGenericAny* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = ((  bool (*) (uint64_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		Il2CppFullySharedGenericAny* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ((  bool (*) (float*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		Il2CppFullySharedGenericAny* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, SizeOf_TValue_t5C8799A7B178448B6C8C2B3BAA821872E3862F87);
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		Il2CppFullySharedGenericAny* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		void* L_55 = UnBox_Any(L_53, il2cpp_rgctx_data(method->rgctx_data, 5), L_54);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_49, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_55)), SizeOf_TValue_t5C8799A7B178448B6C8C2B3BAA821872E3862F87);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_49, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_55)));
		return;
	}

IL_018b:
	{
	}
	try
	{
		Il2CppFullySharedGenericAny* L_56 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		((  void (*) (Il2CppFullySharedGenericAny*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(L_56, L_57, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_58 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_58;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_59 = __this->___m_SerializedTypeProvider;
		NullCheck(L_59);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_60 = L_59->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = V_10;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_61);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_63 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_63, L_62, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_64;
		memset((&L_64), 0, sizeof(L_64));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_64), 4, L_63, NULL);
		NullCheck(L_60);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_60, L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_65 = V_8;
		bool L_66 = L_65.___HasSerializedId;
		if (!L_66)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_67 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_68 = L_67;
		if (L_68)
		{
			G_B34_0 = L_68;
			goto IL_01d8;
		}
		G_B33_0 = L_68;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_69 = V_8;
		int32_t L_70 = L_69.___SerializedId;
		Il2CppFullySharedGenericAny* L_71 = ___0_value;
		il2cpp_codegen_memcpy(L_72, L_71, SizeOf_TValue_t5C8799A7B178448B6C8C2B3BAA821872E3862F87);
		NullCheck(G_B34_0);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), G_B34_0, L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_72: *(void**)L_72));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_73 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_73, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_74 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_75;
				memset((&L_75), 0, sizeof(L_75));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_75), __this, L_74, NULL);
				V_12 = L_75;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_76;
						L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_76)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_78;
						L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
						Type_t* L_79;
						L_79 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_78, NULL);
						V_13 = L_79;
						Il2CppFullySharedGenericAny* L_80 = ___0_value;
						il2cpp_codegen_memcpy(L_81, L_80, SizeOf_TValue_t5C8799A7B178448B6C8C2B3BAA821872E3862F87);
						RuntimeObject* L_82 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), L_81);
						Type_t* L_83 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_84;
						L_84 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_82, L_83, NULL);
						V_14 = L_84;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_85 = V_16;
						bool L_86;
						L_86 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_85, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_86)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_87 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_87, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_88 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_88, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, method);
					}

IL_0264_2:
					{
						Il2CppFullySharedGenericAny* L_89 = ___0_value;
						Il2CppConstrainedCallData L_91;
						Il2CppMethodPointer L_92 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 11), (void*)L_89, &L_91, L_90);
						typedef Type_t* ( *func_L_93)(void*,const RuntimeMethod*);
						Type_t* L_94 = ((func_L_93)L_92)(L_91.thisPtr,L_91.method);
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_95 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0276_2:
					{
						Il2CppFullySharedGenericAny* L_96 = ___0_value;
						Il2CppConstrainedCallData L_98;
						Il2CppMethodPointer L_99 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 11), (void*)L_96, &L_98, L_97);
						typedef Type_t* ( *func_L_100)(void*,const RuntimeMethod*);
						Type_t* L_101 = ((func_L_100)L_99)(L_98.thisPtr,L_98.method);
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_102 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_102, L_101, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, method);
					}

IL_0288_2:
					{
						int32_t L_103 = V_15;
						int32_t L_104 = L_103;
						RuntimeObject* L_105 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_104);
						String_t* L_106;
						L_106 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_105, NULL);
						Exception_t* L_107 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_107, L_106, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02a4_2:
					{
						Il2CppFullySharedGenericAny* L_108 = ___0_value;
						RuntimeObject* L_109 = V_14;
						void* L_111 = UnBox_Any(L_109, il2cpp_rgctx_data(method->rgctx_data, 5), L_110);
						il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_108, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_111)), SizeOf_TValue_t5C8799A7B178448B6C8C2B3BAA821872E3862F87);
						Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_108, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_111)));
						goto IL_034b;
					}

IL_02b6_2:
					{
						Il2CppFullySharedGenericAny* L_112 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_113 = V_16;
						bool L_114;
						L_114 = ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(__this, L_112, (&V_17), L_113, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_114)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_115 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_115, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_116 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_116, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_116, method);
					}

IL_02ed_2:
					{
						Il2CppFullySharedGenericAny* L_117 = ___0_value;
						Il2CppConstrainedCallData L_119;
						Il2CppMethodPointer L_120 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 11), (void*)L_117, &L_119, L_118);
						typedef Type_t* ( *func_L_121)(void*,const RuntimeMethod*);
						Type_t* L_122 = ((func_L_121)L_120)(L_119.thisPtr,L_119.method);
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_123 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_123, L_122, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
					}

IL_02ff_2:
					{
						Il2CppFullySharedGenericAny* L_124 = ___0_value;
						Il2CppConstrainedCallData L_126;
						Il2CppMethodPointer L_127 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 11), (void*)L_124, &L_126, L_125);
						typedef Type_t* ( *func_L_128)(void*,const RuntimeMethod*);
						Type_t* L_129 = ((func_L_128)L_127)(L_126.thisPtr,L_126.method);
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_130 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_130, L_129, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_130, method);
					}

IL_0311_2:
					{
						int32_t L_131 = V_17;
						int32_t L_132 = L_131;
						RuntimeObject* L_133 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_132);
						String_t* L_134;
						L_134 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_133, NULL);
						Exception_t* L_135 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_135, L_134, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_135, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValueWithoutAdapters_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4704BA83967800CE50A8A0D624115EF38B0141A8_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, int32_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	SerializedContainerMetadataScope_t5183BCE0CB15F36149D25291C9D8A63A16D41CF6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	int32_t V_15 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B21_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B20_0 = NULL;
	Type_t* G_B22_0 = NULL;
	SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* G_B22_1 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B34_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B33_0 = NULL;
	{
		int32_t L_0;
		L_0 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00d3;
	}

IL_0015:
	{
		UnsafeStringView_t74CDF255D567E727699F915667D4B9D456CBDF59 L_3;
		L_3 = UnsafeValueView_AsStringView_m3524744B079885988287278F7D7EA74E0E0F2D1B((&___1_view), NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = UnsafeStringView_ToString_mE80F751805E27FD755FCFF4FEF804B92082E2022((&V_2), NULL);
		V_1 = L_4;
		int32_t* L_5 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_6;
		L_6 = TypeConversion_TryConvert_TisString_t_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m80C4448802DEAE86AE92E79CEBB5EF1869E4E049((&V_1), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0035:
	{
		UnsafePrimitiveView_t002681A6024710B55A17D2F8A2B2DF749A9CCF14 L_7;
		L_7 = UnsafeValueView_AsPrimitiveView_mC08D78F4BBD832FD571FC38E2E55BFB195B344CB((&___1_view), NULL);
		V_3 = L_7;
		bool L_8;
		L_8 = UnsafePrimitiveView_IsIntegral_m2DEC7821294261E9CED2C08A47A7853AE0F2C026((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		bool L_9;
		L_9 = UnsafePrimitiveView_IsSigned_m846CA9975E98AF3FF3B600C25311A34EC2C22942((&V_3), NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_10;
		L_10 = UnsafePrimitiveView_AsInt64_m06A881092CFC33F9029DCFD645E8C94085739E25((&V_3), NULL);
		V_4 = L_10;
		int32_t* L_11 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = TypeConversion_TryConvert_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m5410DC5DD22A36989A0A6733AEFBE6B2DA13080F((&V_4), L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0062:
	{
		uint64_t L_13;
		L_13 = UnsafePrimitiveView_AsUInt64_mDE2C0C56D18F328CB66276A134EC6851FBA969A7((&V_3), NULL);
		V_5 = L_13;
		int32_t* L_14 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCFA3BE9517FD86E7317D03163D9B8025C659C791((&V_5), L_14, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0075:
	{
		bool L_16;
		L_16 = UnsafePrimitiveView_IsDecimal_m02D6F8F12D38CFDA4E0F495B8FEB2591E6F70207((&V_3), NULL);
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		bool L_17;
		L_17 = UnsafePrimitiveView_IsInfinity_m7D67E8C87AAFAFFB609D5412F494F45BF598CF0B((&V_3), NULL);
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		bool L_18;
		L_18 = UnsafePrimitiveView_IsNaN_mDC44C2C4E46EAC38DF51F0129BB4ABFF11D84239((&V_3), NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0090:
	{
		float L_19;
		L_19 = UnsafePrimitiveView_AsFloat_mA6B85FE2A678F494AAD76C60C074E96183300A2F((&V_3), NULL);
		V_6 = L_19;
		int32_t* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m08D4436912E6FBA06E34537C6371948305541C9E((&V_6), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00a3:
	{
		bool L_22;
		L_22 = UnsafePrimitiveView_IsBoolean_mCAC47C37AB341FA2639568C6B09FCF80A2218797((&V_3), NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_23;
		L_23 = UnsafePrimitiveView_AsBoolean_m8DEA6F2D2EEAFE2001D78B0A1E7C7C33A6C4F20D((&V_3), NULL);
		V_7 = L_23;
		int32_t* L_24 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = TypeConversion_TryConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mBBBB5C91A094658564EEE6805B00434016DF733C((&V_7), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00bf:
	{
		bool L_26;
		L_26 = UnsafePrimitiveView_IsNull_mF1BD4524E84A53278CEBD431E3AF376173811E6E((&V_3), NULL);
		if (!L_26)
		{
			goto IL_034b;
		}
	}
	{
		int32_t* L_27 = ___0_value;
		il2cpp_codegen_initobj(L_27, sizeof(int32_t));
		return;
	}

IL_00d3:
	{
		int32_t L_28;
		L_28 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&___1_view), NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8));
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_29 = V_9;
		G_B19_0 = L_29;
		goto IL_00f5;
	}

IL_00e9:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_30;
		L_30 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&___1_view), NULL);
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_31;
		L_31 = JsonPropertyReader_GetSerializedContainerMetadata_mEE7A7F14139D956CBE583A2991BF795AC037BC5B(L_30, NULL);
		G_B19_0 = L_31;
	}

IL_00f5:
	{
		V_8 = G_B19_0;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_32 = __this->___m_SerializedTypeProvider;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_33 = ___1_view;
		NullCheck(L_32);
		L_32->___View = L_33;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_34 = __this->___m_SerializedTypeProvider;
		bool L_35 = ___2_isRoot;
		if (L_35)
		{
			G_B21_0 = L_34;
			goto IL_010f;
		}
		G_B20_0 = L_34;
	}
	{
		G_B22_0 = ((Type_t*)(NULL));
		G_B22_1 = G_B20_0;
		goto IL_0115;
	}

IL_010f:
	{
		Type_t* L_36 = __this->___m_SerializedType;
		G_B22_0 = L_36;
		G_B22_1 = G_B21_0;
	}

IL_0115:
	{
		NullCheck(G_B22_1);
		G_B22_1->___SerializedType = G_B22_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B22_1->___SerializedType), (void*)G_B22_0);
		CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_38 = __this->___m_SerializedTypeProvider;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		Type_t* L_41;
		L_41 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_40, NULL);
		NullCheck(L_38);
		L_38->___SerializedType = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___SerializedType), (void*)L_41);
	}

IL_013b:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_42 = V_8;
		bool L_43 = L_42.___IsSerializedReference;
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_44 = __this->___m_SerializedReferences;
		if (L_44)
		{
			goto IL_016d;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_45 = __this->___m_SerializedTypeProvider;
		NullCheck(L_45);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_46 = L_45->___Events;
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, _stringLiteralC5B2022F50F868894692162C4E9D94C36C41AA2A, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_48), 4, L_47, NULL);
		NullCheck(L_46);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_46, L_48, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		return;
	}

IL_016d:
	{
		int32_t* L_49 = ___0_value;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_50 = __this->___m_SerializedReferences;
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_51 = V_8;
		int32_t L_52 = L_51.___SerializedId;
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializedReferences_GetDeserializedReference_m165C7F40D2BF692EB9A8436BD3C65178E26ED342(L_50, L_52, NULL);
		*(int32_t*)L_49 = ((*(int32_t*)UnBox(L_53, il2cpp_rgctx_data(method->rgctx_data, 5))));
		return;
	}

IL_018b:
	{
	}
	try
	{
		int32_t* L_54 = ___0_value;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_55 = __this->___m_SerializedTypeProvider;
		DefaultTypeConstruction_Construct_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m6AB44CE837733A74E8AA76A96997EBB6A3E45676(L_54, L_55, il2cpp_rgctx_method(method->rgctx_data, 9));
		goto IL_01c3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		V_10 = L_56;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_57 = __this->___m_SerializedTypeProvider;
		NullCheck(L_57);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_58 = L_57->___Events;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = V_10;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_59);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_62), 4, L_61, NULL);
		NullCheck(L_58);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_58, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_034b;
	}

IL_01c3:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_63 = V_8;
		bool L_64 = L_63.___HasSerializedId;
		if (!L_64)
		{
			goto IL_01ea;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_65 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_66 = L_65;
		if (L_66)
		{
			G_B34_0 = L_66;
			goto IL_01d8;
		}
		G_B33_0 = L_66;
	}
	{
		goto IL_01ea;
	}

IL_01d8:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_67 = V_8;
		int32_t L_68 = L_67.___SerializedId;
		int32_t* L_69 = ___0_value;
		int32_t L_70 = (*(int32_t*)L_69);
		NullCheck(G_B34_0);
		SerializedReferences_AddDeserializedReference_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m5044643F1CB98629414BC2BC8FA3DF5F257561A8(G_B34_0, L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_01ea:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8 L_71 = V_8;
		SerializedContainerMetadataScope__ctor_mD787F78B9632E2BAEE3F840027F624198F10737A((&V_11), __this, L_71, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				SerializedContainerMetadataScope_Dispose_m4652CEE3820473A6BFC47DC54118A2DAB05433CA((&V_11), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_72 = ___1_view;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_73;
				memset((&L_73), 0, sizeof(L_73));
				UnsafeViewScope__ctor_m8B1EF2D91E86AC2CC7801A22A6249A7C6B04278F((&L_73), __this, L_72, NULL);
				V_12 = L_73;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_032f_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_12), NULL);
						return;
					}
				});
				try
				{
					{
						CHECKED_LOCAL_INIT(TypeTraits_1_tCD336C0FA2454B0DA22CDF00D8BC5231D503F0E0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
						bool L_74;
						L_74 = TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
						if (!L_74)
						{
							goto IL_02b6_2;
						}
					}
					{
						RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
						CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						Type_t* L_76;
						L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
						Type_t* L_77;
						L_77 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_76, NULL);
						V_13 = L_77;
						int32_t* L_78 = ___0_value;
						int32_t L_79 = (*(int32_t*)L_78);
						int32_t L_80 = L_79;
						RuntimeObject* L_81 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_80);
						Type_t* L_82 = V_13;
						CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						RuntimeObject* L_83;
						L_83 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_81, L_82, NULL);
						V_14 = L_83;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_84 = V_16;
						bool L_85;
						L_85 = PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D(__this, (&V_14), (&V_15), L_84, PropertyContainer_TryAccept_TisRuntimeObject_mB6FB92B27875A6970EB6B2F948AE57066573F29D_RuntimeMethod_var);
						if (L_85)
						{
							goto IL_02a4_2;
						}
					}
					{
						int32_t L_86 = V_15;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_86, 1)))
						{
							case 0:
							{
								goto IL_0259_2;
							}
							case 1:
							{
								goto IL_0264_2;
							}
							case 2:
							{
								goto IL_0276_2;
							}
						}
					}
					{
						goto IL_0288_2;
					}

IL_0259_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_87 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_87, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
					}

IL_0264_2:
					{
						int32_t* L_88 = ___0_value;
						Il2CppFakeBox<int32_t> L_89(il2cpp_rgctx_data(method->rgctx_data, 5), *L_88);
						Type_t* L_90;
						L_90 = il2cpp_codegen_object_get_type((&L_89));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_91 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_91, L_90, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, method);
					}

IL_0276_2:
					{
						int32_t* L_92 = ___0_value;
						Il2CppFakeBox<int32_t> L_93(il2cpp_rgctx_data(method->rgctx_data, 5), *L_92);
						Type_t* L_94;
						L_94 = il2cpp_codegen_object_get_type((&L_93));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_95 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_95, L_94, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, method);
					}

IL_0288_2:
					{
						int32_t L_96 = V_15;
						int32_t L_97 = L_96;
						RuntimeObject* L_98 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_97);
						String_t* L_99;
						L_99 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_98, NULL);
						Exception_t* L_100 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_100, L_99, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
					}

IL_02a4_2:
					{
						int32_t* L_101 = ___0_value;
						RuntimeObject* L_102 = V_14;
						*(int32_t*)L_101 = ((*(int32_t*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 5))));
						goto IL_034b;
					}

IL_02b6_2:
					{
						int32_t* L_103 = ___0_value;
						il2cpp_codegen_initobj((&V_16), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
						VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_104 = V_16;
						bool L_105;
						L_105 = PropertyContainer_TryAccept_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m9E87548B66AEBFBB89580925AA2D6A35D930A3B2(__this, L_103, (&V_17), L_104, il2cpp_rgctx_method(method->rgctx_data, 12));
						if (L_105)
						{
							goto IL_032d_2;
						}
					}
					{
						int32_t L_106 = V_17;
						switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, 1)))
						{
							case 0:
							{
								goto IL_02e2_2;
							}
							case 1:
							{
								goto IL_02ed_2;
							}
							case 2:
							{
								goto IL_02ff_2;
							}
						}
					}
					{
						goto IL_0311_2;
					}

IL_02e2_2:
					{
						ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_107 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
						ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, method);
					}

IL_02ed_2:
					{
						int32_t* L_108 = ___0_value;
						Il2CppFakeBox<int32_t> L_109(il2cpp_rgctx_data(method->rgctx_data, 5), *L_108);
						Type_t* L_110;
						L_110 = il2cpp_codegen_object_get_type((&L_109));
						InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA* L_111 = (InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidContainerTypeException_tBC0F64EF2ECCABF59C7376B86E6E2A4213FD0EFA_il2cpp_TypeInfo_var)));
						InvalidContainerTypeException__ctor_mD3139C3BDB58E245B4F75FAD5EA45B70B0432BF3(L_111, L_110, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, method);
					}

IL_02ff_2:
					{
						int32_t* L_112 = ___0_value;
						Il2CppFakeBox<int32_t> L_113(il2cpp_rgctx_data(method->rgctx_data, 5), *L_112);
						Type_t* L_114;
						L_114 = il2cpp_codegen_object_get_type((&L_113));
						MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_115 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
						MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_115, L_114, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_115, method);
					}

IL_0311_2:
					{
						int32_t L_116 = V_17;
						int32_t L_117 = L_116;
						RuntimeObject* L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_117);
						String_t* L_119;
						L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_118, NULL);
						Exception_t* L_120 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
						Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_120, L_119, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, method);
					}

IL_032d_2:
					{
						goto IL_034b;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_034b:
	{
		return;
	}
}
// Method Definition Index: 87445
// Method Definition Index: 87445
// Method Definition Index: 87445
// Method Definition Index: 87445
// Method Definition Index: 87445
// Method Definition Index: 87445
// Method Definition Index: 87441
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IDictionaryPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mF882CDE516D434C594D32B88D34FF3D22DC1BFFB_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_7;
	memset((&V_7), 0, sizeof(V_7));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	Il2CppSharedGenericObject* V_9 = NULL;
	Il2CppSharedGenericObject* V_10 = NULL;
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UnsafeMemberView_tAE4B89ACAEF257063FD2EC4F6E8A4AE08D52DD3F V_13;
	memset((&V_13), 0, sizeof(V_13));
	Il2CppSharedGenericObject* V_14 = NULL;
	Il2CppSharedGenericObject* V_15 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_1 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_1), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		Il2CppSharedGenericObject** L_6 = ___1_container;
		NullCheck((RuntimeObject*)(*L_6));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 1), (RuntimeObject*)(*L_6));
		int32_t L_7;
		L_7 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_10;
		L_10 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_3 = L_10;
		RuntimeObject* L_11;
		L_11 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_3), NULL);
		V_4 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e3:
			{
				{
					RuntimeObject* L_12 = V_4;
					if (!L_12)
					{
						goto IL_00ee;
					}
				}
				{
					RuntimeObject* L_13 = V_4;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00ee:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00d5_1;
			}

IL_0063_1:
			{
				RuntimeObject* L_14 = V_4;
				NullCheck(L_14);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_15;
				L_15 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_14);
				V_5 = L_15;
				int32_t L_16;
				L_16 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_5), NULL);
				if ((!(((uint32_t)L_16) == ((uint32_t)1))))
				{
					goto IL_00d5_1;
				}
			}
			{
				UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_17;
				L_17 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&V_5), NULL);
				V_6 = L_17;
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&V_6), _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, (&V_7), NULL);
				if (!L_18)
				{
					goto IL_00d5_1;
				}
			}
			{
				bool L_19;
				L_19 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&V_6), _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, (&V_8), NULL);
				if (!L_19)
				{
					goto IL_00d5_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_9), sizeof(Il2CppSharedGenericObject*));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_20 = V_7;
				JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_9), L_20, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 4));
				il2cpp_codegen_initobj((&V_10), sizeof(Il2CppSharedGenericObject*));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_8;
				JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_10), L_21, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 6));
				Il2CppSharedGenericObject** L_22 = ___1_container;
				Il2CppSharedGenericObject* L_23 = V_9;
				Il2CppSharedGenericObject* L_24 = V_10;
				NullCheck((RuntimeObject*)(*L_22));
				InterfaceActionInvoker2< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(5, il2cpp_rgctx_data_init(method->rgctx_data, 8), (RuntimeObject*)(*L_22), L_23, L_24);
			}

IL_00d5_1:
			{
				RuntimeObject* L_25 = V_4;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0063_1;
				}
			}
			{
				goto IL_0165;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ef:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_27;
		L_27 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&V_0), NULL);
		V_11 = L_27;
		Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02 L_28;
		L_28 = UnsafeObjectView_GetEnumerator_m167F74CEACF84D7D778D935F51C7363EDA7887DE((&V_11), NULL);
		V_12 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0157:
			{
				Enumerator_Dispose_mFD5BE201ED50D08962FA69208511B0E22B00333E((&V_12), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_014c_1;
			}

IL_0103_1:
			{
				UnsafeMemberView_tAE4B89ACAEF257063FD2EC4F6E8A4AE08D52DD3F L_29;
				L_29 = Enumerator_get_Current_mB9297BB2868750D8F98737907A7F3CB343BA9BB5((&V_12), NULL);
				V_13 = L_29;
				il2cpp_codegen_initobj((&V_14), sizeof(Il2CppSharedGenericObject*));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_30;
				L_30 = UnsafeMemberView_Key_mC6171CE59D0682D4771B6D16AAAAEA2B09A15FC6((&V_13), NULL);
				JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_14), L_30, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 4));
				il2cpp_codegen_initobj((&V_15), sizeof(Il2CppSharedGenericObject*));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = UnsafeMemberView_Value_m2CCE2ED138D1C2ED3D15BD67DFDFAC119EE14AD2((&V_13), NULL);
				JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_15), L_31, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 6));
				Il2CppSharedGenericObject** L_32 = ___1_container;
				Il2CppSharedGenericObject* L_33 = V_14;
				Il2CppSharedGenericObject* L_34 = V_15;
				NullCheck((RuntimeObject*)(*L_32));
				InterfaceActionInvoker2< Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(5, il2cpp_rgctx_data_init(method->rgctx_data, 8), (RuntimeObject*)(*L_32), L_33, L_34);
			}

IL_014c_1:
			{
				bool L_35;
				L_35 = Enumerator_MoveNext_mFFB3E2C355D8DD544660C14C596E80278DE3B1BE((&V_12), NULL);
				if (L_35)
				{
					goto IL_0103_1;
				}
			}
			{
				goto IL_0165;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0165:
	{
		return;
	}
}
// Method Definition Index: 87441
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IDictionaryPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m70E551C60AC9B14EAE0878BEA6B7CD2772B00F2F_fshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_29 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_42 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
	const Il2CppFullySharedGenericAny L_40 = L_27;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
	const Il2CppFullySharedGenericAny L_41 = L_28;
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_7;
	memset((&V_7), 0, sizeof(V_7));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
	memset(V_9, 0, SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
	Il2CppFullySharedGenericAny V_10 = alloca(SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
	memset(V_10, 0, SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UnsafeMemberView_tAE4B89ACAEF257063FD2EC4F6E8A4AE08D52DD3F V_13;
	memset((&V_13), 0, sizeof(V_13));
	Il2CppFullySharedGenericAny V_14 = alloca(SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
	memset(V_14, 0, SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
	Il2CppFullySharedGenericAny V_15 = alloca(SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
	memset(V_15, 0, SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_1 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_1), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		Il2CppFullySharedGenericAny* L_6 = ___1_container;
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_6, &L_8, L_7);
		typedef void ( *func_L_10)(void*,const RuntimeMethod*);
		((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		int32_t L_11;
		L_11 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		V_2 = L_11;
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_14;
		L_14 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_3 = L_14;
		RuntimeObject* L_15;
		L_15 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_3), NULL);
		V_4 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e3:
			{
				{
					RuntimeObject* L_16 = V_4;
					if (!L_16)
					{
						goto IL_00ee;
					}
				}
				{
					RuntimeObject* L_17 = V_4;
					NullCheck(L_17);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
				}

IL_00ee:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00d5_1;
			}

IL_0063_1:
			{
				RuntimeObject* L_18 = V_4;
				NullCheck(L_18);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_19;
				L_19 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_18);
				V_5 = L_19;
				int32_t L_20;
				L_20 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_5), NULL);
				if ((!(((uint32_t)L_20) == ((uint32_t)1))))
				{
					goto IL_00d5_1;
				}
			}
			{
				UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_21;
				L_21 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&V_5), NULL);
				V_6 = L_21;
				bool L_22;
				L_22 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&V_6), _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, (&V_7), NULL);
				if (!L_22)
				{
					goto IL_00d5_1;
				}
			}
			{
				bool L_23;
				L_23 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&V_6), _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, (&V_8), NULL);
				if (!L_23)
				{
					goto IL_00d5_1;
				}
			}
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_24 = V_7;
				((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppFullySharedGenericAny*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(__this, (Il2CppFullySharedGenericAny*)V_9, L_24, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 4));
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_10, SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_25 = V_8;
				((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppFullySharedGenericAny*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(__this, (Il2CppFullySharedGenericAny*)V_10, L_25, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 6));
				Il2CppFullySharedGenericAny* L_26 = ___1_container;
				il2cpp_codegen_memcpy(L_27, V_9, SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
				il2cpp_codegen_memcpy(L_28, V_10, SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
				Il2CppConstrainedCallData L_30;
				Il2CppMethodPointer L_31 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 7), (void*)L_26, &L_30, L_29);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(L_31, L_30.method,L_30.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_28: *(void**)L_28));
			}

IL_00d5_1:
			{
				RuntimeObject* L_32 = V_4;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0063_1;
				}
			}
			{
				goto IL_0165;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ef:
	{
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_34;
		L_34 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64((&V_0), NULL);
		V_11 = L_34;
		Enumerator_t8BEFBE0E1DAD8A23F5F47D08961CE83FFE02EA02 L_35;
		L_35 = UnsafeObjectView_GetEnumerator_m167F74CEACF84D7D778D935F51C7363EDA7887DE((&V_11), NULL);
		V_12 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0157:
			{
				Enumerator_Dispose_mFD5BE201ED50D08962FA69208511B0E22B00333E((&V_12), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_014c_1;
			}

IL_0103_1:
			{
				UnsafeMemberView_tAE4B89ACAEF257063FD2EC4F6E8A4AE08D52DD3F L_36;
				L_36 = Enumerator_get_Current_mB9297BB2868750D8F98737907A7F3CB343BA9BB5((&V_12), NULL);
				V_13 = L_36;
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_14, SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_37;
				L_37 = UnsafeMemberView_Key_mC6171CE59D0682D4771B6D16AAAAEA2B09A15FC6((&V_13), NULL);
				((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppFullySharedGenericAny*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(__this, (Il2CppFullySharedGenericAny*)V_14, L_37, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 4));
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_15, SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_38;
				L_38 = UnsafeMemberView_Value_m2CCE2ED138D1C2ED3D15BD67DFDFAC119EE14AD2((&V_13), NULL);
				((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppFullySharedGenericAny*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(__this, (Il2CppFullySharedGenericAny*)V_15, L_38, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 6));
				Il2CppFullySharedGenericAny* L_39 = ___1_container;
				il2cpp_codegen_memcpy(L_40, V_14, SizeOf_TKey_t4D4E85514B1446ECC0919655D2B7D3D0042111A8);
				il2cpp_codegen_memcpy(L_41, V_15, SizeOf_TValue_t85F4806D586FFF6ADF99068A922B8BB6BBAAEFC0);
				Il2CppConstrainedCallData L_43;
				Il2CppMethodPointer L_44 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 7), (void*)L_39, &L_43, L_42);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(L_44, L_43.method,L_43.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_40: *(void**)L_40), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_41: *(void**)L_41));
			}

IL_014c_1:
			{
				bool L_45;
				L_45 = Enumerator_MoveNext_mFFB3E2C355D8DD544660C14C596E80278DE3B1BE((&V_12), NULL);
				if (L_45)
				{
					goto IL_0103_1;
				}
			}
			{
				goto IL_0165;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0165:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m814695E6C38A938AD3FE7AE930816E46C1154419 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_StaticInit);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F V_6;
	memset((&V_6), 0, sizeof(V_6));
	SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD V_7;
	memset((&V_7), 0, sizeof(V_7));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F V_9;
	memset((&V_9), 0, sizeof(V_9));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* G_B10_0 = NULL;
	SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((&V_6), sizeof(SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				JsonPropertyReader_ReadValue_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m64D726446F8070E6195B055A73204FEB41DE684E(__this, (&V_6), L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_18 = ___1_container;
				il2cpp_codegen_initobj((&V_7), sizeof(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD));
				G_B10_0 = L_18;
				goto IL_009b_1;
			}
			{
				SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_20 = (*(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD*)G_B9_0);
				V_7 = L_20;
				G_B10_0 = (&V_7);
			}

IL_009b_1:
			{
				int32_t L_21 = V_3;
				int32_t L_22 = L_21;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_23 = V_6;
				CHECKED_LOCAL_INIT(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_StaticInit,(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				SerializedArrayView_System_Collections_Generic_IListU3CUnity_Behavior_Serialization_Json_SerializedValueViewU3E_set_Item_m35D14F28205D73314508B6FE5C3EC1E761F6B0C9(G_B10_0, L_22, L_23, NULL);
			}

IL_00ad_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_26 = ___1_container;
		CHECKED_LOCAL_INIT(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_StaticInit,(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedArrayView_System_Collections_Generic_ICollectionU3CUnity_Behavior_Serialization_Json_SerializedValueViewU3E_Clear_mB1D540B014D9B64A0ECE0DF5CA19F0DC6899288A(L_26, NULL);
		RuntimeObject* L_27;
		L_27 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_28 = V_4;
					if (!L_28)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_30);
				V_8 = L_31;
				il2cpp_codegen_initobj((&V_9), sizeof(SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_32 = V_8;
				JsonPropertyReader_ReadValue_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m64D726446F8070E6195B055A73204FEB41DE684E(__this, (&V_9), L_32, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_33 = ___1_container;
				SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_34 = V_9;
				CHECKED_LOCAL_INIT(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_StaticInit,(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				SerializedArrayView_System_Collections_Generic_ICollectionU3CUnity_Behavior_Serialization_Json_SerializedValueViewU3E_Add_m79BFBC008B7A7341E8350D9472214D4A78366A5C(L_33, L_34, NULL);
			}

IL_0105_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m8B72D76D042601C485831574F5404AE5880DFFF6_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* V_7 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Il2CppSharedGenericObject** G_B10_0 = NULL;
	Il2CppSharedGenericObject** G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((&V_6), sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				JsonPropertyReader_ReadValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m63944369FF6EC8B190FACB7B5910D8DCEC807391(__this, (&V_6), L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_18 = ___1_container;
				il2cpp_codegen_initobj((&V_7), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_19 = V_7;
				if (L_19)
				{
					G_B10_0 = L_18;
					goto IL_009b_1;
				}
				G_B9_0 = L_18;
			}
			{
				Il2CppSharedGenericObject* L_20 = (*(Il2CppSharedGenericObject**)G_B9_0);
				V_7 = L_20;
				G_B10_0 = (&V_7);
			}

IL_009b_1:
			{
				int32_t L_21 = V_3;
				int32_t L_22 = L_21;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_23 = V_6;
				NullCheck((RuntimeObject*)(*G_B10_0));
				InterfaceActionInvoker2< int32_t, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), (RuntimeObject*)(*G_B10_0), L_22, L_23);
			}

IL_00ad_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		Il2CppSharedGenericObject** L_26 = ___1_container;
		NullCheck((RuntimeObject*)(*L_26));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_26));
		RuntimeObject* L_27;
		L_27 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_28 = V_4;
					if (!L_28)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_30);
				V_8 = L_31;
				il2cpp_codegen_initobj((&V_9), sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_32 = V_8;
				JsonPropertyReader_ReadValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m63944369FF6EC8B190FACB7B5910D8DCEC807391(__this, (&V_9), L_32, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_33 = ___1_container;
				EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_34 = V_9;
				NullCheck((RuntimeObject*)(*L_33));
				InterfaceActionInvoker1< EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_33), L_34);
			}

IL_0105_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m62CE0135CA60541276864CA77E5FC475B517840F_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* V_7 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF V_9;
	memset((&V_9), 0, sizeof(V_9));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Il2CppSharedGenericObject** G_B10_0 = NULL;
	Il2CppSharedGenericObject** G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((&V_6), sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				JsonPropertyReader_ReadValue_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m2DF55F20D1B65B85181CA1C113D4EC5C5CC8FB49(__this, (&V_6), L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_18 = ___1_container;
				il2cpp_codegen_initobj((&V_7), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_19 = V_7;
				if (L_19)
				{
					G_B10_0 = L_18;
					goto IL_009b_1;
				}
				G_B9_0 = L_18;
			}
			{
				Il2CppSharedGenericObject* L_20 = (*(Il2CppSharedGenericObject**)G_B9_0);
				V_7 = L_20;
				G_B10_0 = (&V_7);
			}

IL_009b_1:
			{
				int32_t L_21 = V_3;
				int32_t L_22 = L_21;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_23 = V_6;
				NullCheck((RuntimeObject*)(*G_B10_0));
				InterfaceActionInvoker2< int32_t, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), (RuntimeObject*)(*G_B10_0), L_22, L_23);
			}

IL_00ad_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		Il2CppSharedGenericObject** L_26 = ___1_container;
		NullCheck((RuntimeObject*)(*L_26));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_26));
		RuntimeObject* L_27;
		L_27 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_28 = V_4;
					if (!L_28)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_30);
				V_8 = L_31;
				il2cpp_codegen_initobj((&V_9), sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_32 = V_8;
				JsonPropertyReader_ReadValue_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m2DF55F20D1B65B85181CA1C113D4EC5C5CC8FB49(__this, (&V_9), L_32, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_33 = ___1_container;
				FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_34 = V_9;
				NullCheck((RuntimeObject*)(*L_33));
				InterfaceActionInvoker1< FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_33), L_34);
			}

IL_0105_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8F4011E7BB40EC95D09D7288D94332F87F166449_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Il2CppSharedGenericObject* V_7 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Il2CppSharedGenericObject** G_B10_0 = NULL;
	Il2CppSharedGenericObject** G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9BE4BF6F205B68D749830A9C339454E7775D2B09(__this, (&V_6), L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_18 = ___1_container;
				il2cpp_codegen_initobj((&V_7), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_19 = V_7;
				if (L_19)
				{
					G_B10_0 = L_18;
					goto IL_009b_1;
				}
				G_B9_0 = L_18;
			}
			{
				Il2CppSharedGenericObject* L_20 = (*(Il2CppSharedGenericObject**)G_B9_0);
				V_7 = L_20;
				G_B10_0 = (&V_7);
			}

IL_009b_1:
			{
				int32_t L_21 = V_3;
				int32_t L_22 = L_21;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				int32_t L_23 = V_6;
				NullCheck((RuntimeObject*)(*G_B10_0));
				InterfaceActionInvoker2< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), (RuntimeObject*)(*G_B10_0), L_22, L_23);
			}

IL_00ad_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		Il2CppSharedGenericObject** L_26 = ___1_container;
		NullCheck((RuntimeObject*)(*L_26));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_26));
		RuntimeObject* L_27;
		L_27 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_28 = V_4;
					if (!L_28)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_30);
				V_8 = L_31;
				il2cpp_codegen_initobj((&V_9), sizeof(int32_t));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_32 = V_8;
				JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9BE4BF6F205B68D749830A9C339454E7775D2B09(__this, (&V_9), L_32, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_33 = ___1_container;
				int32_t L_34 = V_9;
				NullCheck((RuntimeObject*)(*L_33));
				InterfaceActionInvoker1< int32_t >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_33), L_34);
			}

IL_0105_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mFB40740F0C062D1C566B0C49BAC08210D05A2557_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* V_7 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C V_9;
	memset((&V_9), 0, sizeof(V_9));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Il2CppSharedGenericObject** G_B10_0 = NULL;
	Il2CppSharedGenericObject** G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((&V_6), sizeof(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				JsonPropertyReader_ReadValue_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m885E7EB07895C87040A686A35CFEC81BBD666836(__this, (&V_6), L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_18 = ___1_container;
				il2cpp_codegen_initobj((&V_7), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_19 = V_7;
				if (L_19)
				{
					G_B10_0 = L_18;
					goto IL_009b_1;
				}
				G_B9_0 = L_18;
			}
			{
				Il2CppSharedGenericObject* L_20 = (*(Il2CppSharedGenericObject**)G_B9_0);
				V_7 = L_20;
				G_B10_0 = (&V_7);
			}

IL_009b_1:
			{
				int32_t L_21 = V_3;
				int32_t L_22 = L_21;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_23 = V_6;
				NullCheck((RuntimeObject*)(*G_B10_0));
				InterfaceActionInvoker2< int32_t, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), (RuntimeObject*)(*G_B10_0), L_22, L_23);
			}

IL_00ad_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		Il2CppSharedGenericObject** L_26 = ___1_container;
		NullCheck((RuntimeObject*)(*L_26));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_26));
		RuntimeObject* L_27;
		L_27 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_28 = V_4;
					if (!L_28)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_30);
				V_8 = L_31;
				il2cpp_codegen_initobj((&V_9), sizeof(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_32 = V_8;
				JsonPropertyReader_ReadValue_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m885E7EB07895C87040A686A35CFEC81BBD666836(__this, (&V_9), L_32, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_33 = ___1_container;
				SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_34 = V_9;
				NullCheck((RuntimeObject*)(*L_33));
				InterfaceActionInvoker1< SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_33), L_34);
			}

IL_0105_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m43527E50491B9FC16DA4EEC6587C88FFFA188EB1_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* V_7 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_9;
	memset((&V_9), 0, sizeof(V_9));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Il2CppSharedGenericObject** G_B10_0 = NULL;
	Il2CppSharedGenericObject** G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((&V_6), sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mD12A3C7734AFFD5C6297F33EA75D008304FFF6FF(__this, (&V_6), L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_18 = ___1_container;
				il2cpp_codegen_initobj((&V_7), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_19 = V_7;
				if (L_19)
				{
					G_B10_0 = L_18;
					goto IL_009b_1;
				}
				G_B9_0 = L_18;
			}
			{
				Il2CppSharedGenericObject* L_20 = (*(Il2CppSharedGenericObject**)G_B9_0);
				V_7 = L_20;
				G_B10_0 = (&V_7);
			}

IL_009b_1:
			{
				int32_t L_21 = V_3;
				int32_t L_22 = L_21;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_23 = V_6;
				NullCheck((RuntimeObject*)(*G_B10_0));
				InterfaceActionInvoker2< int32_t, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), (RuntimeObject*)(*G_B10_0), L_22, L_23);
			}

IL_00ad_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		Il2CppSharedGenericObject** L_26 = ___1_container;
		NullCheck((RuntimeObject*)(*L_26));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_26));
		RuntimeObject* L_27;
		L_27 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_28 = V_4;
					if (!L_28)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_30);
				V_8 = L_31;
				il2cpp_codegen_initobj((&V_9), sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_32 = V_8;
				JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mD12A3C7734AFFD5C6297F33EA75D008304FFF6FF(__this, (&V_9), L_32, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_33 = ___1_container;
				StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34 = V_9;
				NullCheck((RuntimeObject*)(*L_33));
				InterfaceActionInvoker1< StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_33), L_34);
			}

IL_0105_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m8FBB138DD20F7BB838D1CDF6AF51E524B3A64103_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* V_7 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_9;
	memset((&V_9), 0, sizeof(V_9));
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Il2CppSharedGenericObject** G_B10_0 = NULL;
	Il2CppSharedGenericObject** G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((&V_6), sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m610639040E05B9A88FBD352A9C9EB9218141966C(__this, (&V_6), L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_18 = ___1_container;
				il2cpp_codegen_initobj((&V_7), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_19 = V_7;
				if (L_19)
				{
					G_B10_0 = L_18;
					goto IL_009b_1;
				}
				G_B9_0 = L_18;
			}
			{
				Il2CppSharedGenericObject* L_20 = (*(Il2CppSharedGenericObject**)G_B9_0);
				V_7 = L_20;
				G_B10_0 = (&V_7);
			}

IL_009b_1:
			{
				int32_t L_21 = V_3;
				int32_t L_22 = L_21;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_23 = V_6;
				NullCheck((RuntimeObject*)(*G_B10_0));
				InterfaceActionInvoker2< int32_t, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), (RuntimeObject*)(*G_B10_0), L_22, L_23);
			}

IL_00ad_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		Il2CppSharedGenericObject** L_26 = ___1_container;
		NullCheck((RuntimeObject*)(*L_26));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_26));
		RuntimeObject* L_27;
		L_27 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_28 = V_4;
					if (!L_28)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_30);
				V_8 = L_31;
				il2cpp_codegen_initobj((&V_9), sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_32 = V_8;
				JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m610639040E05B9A88FBD352A9C9EB9218141966C(__this, (&V_9), L_32, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_33 = ___1_container;
				TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_34 = V_9;
				NullCheck((RuntimeObject*)(*L_33));
				InterfaceActionInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_33), L_34);
			}

IL_0105_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mEB7DF32E90809992C7D00A2325D11C727E594A31_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	Il2CppSharedGenericObject* V_6 = NULL;
	Il2CppSharedGenericObject* V_7 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	Il2CppSharedGenericObject* V_9 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Il2CppSharedGenericObject** G_B10_0 = NULL;
	Il2CppSharedGenericObject** G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_6), L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_18 = ___1_container;
				il2cpp_codegen_initobj((&V_7), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_19 = V_7;
				if (L_19)
				{
					G_B10_0 = L_18;
					goto IL_009b_1;
				}
				G_B9_0 = L_18;
			}
			{
				Il2CppSharedGenericObject* L_20 = (*(Il2CppSharedGenericObject**)G_B9_0);
				V_7 = L_20;
				G_B10_0 = (&V_7);
			}

IL_009b_1:
			{
				int32_t L_21 = V_3;
				int32_t L_22 = L_21;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				Il2CppSharedGenericObject* L_23 = V_6;
				NullCheck((RuntimeObject*)(*G_B10_0));
				InterfaceActionInvoker2< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), (RuntimeObject*)(*G_B10_0), L_22, L_23);
			}

IL_00ad_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		Il2CppSharedGenericObject** L_26 = ___1_container;
		NullCheck((RuntimeObject*)(*L_26));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_26));
		RuntimeObject* L_27;
		L_27 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_28 = V_4;
					if (!L_28)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_31;
				L_31 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_30);
				V_8 = L_31;
				il2cpp_codegen_initobj((&V_9), sizeof(Il2CppSharedGenericObject*));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_32 = V_8;
				JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_9), L_32, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppSharedGenericObject** L_33 = ___1_container;
				Il2CppSharedGenericObject* L_34 = V_9;
				NullCheck((RuntimeObject*)(*L_33));
				InterfaceActionInvoker1< Il2CppSharedGenericObject* >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)(*L_33), L_34);
			}

IL_0105_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IListPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mEAF881C2C0417CBCF3A19379537C3E2121964696_fshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_TList_tA92D892D22E0338446F3200B881B88F6E271242B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Type_t_StaticInit);
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_43 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TList_tA92D892D22E0338446F3200B881B88F6E271242B);
	const Il2CppFullySharedGenericAny L_21 = L_19;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
	const Il2CppFullySharedGenericAny L_42 = L_24;
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_5;
	memset((&V_5), 0, sizeof(V_5));
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
	memset(V_6, 0, SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_TList_tA92D892D22E0338446F3200B881B88F6E271242B);
	memset(V_7, 0, SizeOf_TList_tA92D892D22E0338446F3200B881B88F6E271242B);
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_8;
	memset((&V_8), 0, sizeof(V_8));
	Il2CppFullySharedGenericAny V_9 = alloca(SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
	memset(V_9, 0, SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Il2CppFullySharedGenericAny* G_B10_0 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_0 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_3 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_4;
		L_4 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5;
		L_5 = UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31((&V_0), NULL);
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_10, NULL);
		if (!L_11)
		{
			goto IL_00c4;
		}
	}
	{
		V_3 = 0;
		RuntimeObject* L_12;
		L_12 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_16;
				L_16 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_17 = V_5;
				((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppFullySharedGenericAny*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(__this, (Il2CppFullySharedGenericAny*)V_6, L_17, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppFullySharedGenericAny* L_18 = ___1_container;
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_7, SizeOf_TList_tA92D892D22E0338446F3200B881B88F6E271242B);
				il2cpp_codegen_memcpy(L_19, V_7, SizeOf_TList_tA92D892D22E0338446F3200B881B88F6E271242B);
				bool L_20 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_19);
				if (L_20)
				{
					G_B10_0 = ((Il2CppFullySharedGenericAny*)L_18);
					goto IL_009b_1;
				}
				G_B9_0 = ((Il2CppFullySharedGenericAny*)L_18);
			}
			{
				il2cpp_codegen_memcpy(L_21, G_B9_0, SizeOf_TList_tA92D892D22E0338446F3200B881B88F6E271242B);
				il2cpp_codegen_memcpy(V_7, L_21, SizeOf_TList_tA92D892D22E0338446F3200B881B88F6E271242B);
				G_B10_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_7);
			}

IL_009b_1:
			{
				int32_t L_22 = V_3;
				int32_t L_23 = L_22;
				V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				il2cpp_codegen_memcpy(L_24, V_6, SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
				Il2CppConstrainedCallData L_26;
				Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B10_0, &L_26, L_25);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(L_27, L_26.method,L_26.thisPtr, L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_24: *(void**)L_24));
			}

IL_00ad_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		Il2CppFullySharedGenericAny* L_30 = ___1_container;
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 6), (void*)L_30, &L_32, L_31);
		typedef void ( *func_L_34)(void*,const RuntimeMethod*);
		((func_L_34)L_33)(L_32.thisPtr,L_32.method);
		RuntimeObject* L_35;
		L_35 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_4 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					RuntimeObject* L_36 = V_4;
					if (!L_36)
					{
						goto IL_011b;
					}
				}
				{
					RuntimeObject* L_37 = V_4;
					NullCheck(L_37);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_37);
				}

IL_011b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0105_1;
			}

IL_00db_1:
			{
				RuntimeObject* L_38 = V_4;
				NullCheck(L_38);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39;
				L_39 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_38);
				V_8 = L_39;
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_9, SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_40 = V_8;
				((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppFullySharedGenericAny*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(__this, (Il2CppFullySharedGenericAny*)V_9, L_40, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
				Il2CppFullySharedGenericAny* L_41 = ___1_container;
				il2cpp_codegen_memcpy(L_42, V_9, SizeOf_TElement_t8724D50D1E10F397D7E944193B80408CACC92630);
				Il2CppConstrainedCallData L_44;
				Il2CppMethodPointer L_45 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 8), (void*)L_41, &L_44, L_43);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(L_45, L_44.method,L_44.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_42: *(void**)L_42));
			}

IL_0105_1:
			{
				RuntimeObject* L_46 = V_4;
				NullCheck(L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_011c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		return;
	}
}
// Method Definition Index: 87437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyBagVisitor_Visit_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m5D15D3D5C69A39D48D46A536DEE794FB43F42F2B_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_4;
	memset((&V_4), 0, sizeof(V_4));
	PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B16_0 = NULL;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* G_B15_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_properties;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_1 = ___0_properties;
		NullCheck(L_1);
		PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6 L_2;
		L_2 = InterfaceFuncInvoker0< PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6 >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_1);
		V_1 = L_2;
		Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F L_3;
		L_3 = PropertyCollection_1_GetEnumerator_m94472DB432071002798D5153C7DAE59C9F54BE3F((&V_1), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{
				Enumerator_Dispose_mBF37D8DAF6AA278E39454040745D83F28183D226((&V_0), il2cpp_rgctx_method(method->rgctx_data, 9));
				return;
			}
		});
		try
		{
			{
				bool L_4;
				L_4 = Enumerator_MoveNext_mF40C6D080C23B00D5DFE96DED4D4E0CD0EF02CCA((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
				if (!L_4)
				{
					goto IL_0054_1;
				}
			}
			{
				RuntimeObject* L_5;
				L_5 = Enumerator_get_Current_mB7C492138984C907F8B89245F80866DBA2A8CE5D_inline((&V_0), NULL);
				if (!L_5)
				{
					goto IL_0054_1;
				}
			}
			{
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_mB7C492138984C907F8B89245F80866DBA2A8CE5D_inline((&V_0), NULL);
				V_2 = L_6;
				RuntimeObject* L_7 = V_2;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_8;
				L_8 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_7, NULL);
				V_3 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0046_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_3), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_9 = V_2;
					PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_10 = ___1_container;
					NullCheck((RuntimeObject*)L_9);
					InterfaceActionInvoker2< RuntimeObject*, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 7), (RuntimeObject*)L_9, __this, L_10);
					goto IL_0130;
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0054_1:
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D4FC64881AC7B47448894410786C7886AE62FE6)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_12 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		int32_t L_13;
		L_13 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863(L_12, NULL);
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0081;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0081:
	{
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* L_15 = (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E*)(&__this->___m_View);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_16;
		L_16 = UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64(L_15, NULL);
		V_4 = L_16;
		RuntimeObject* L_17;
		L_17 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_17, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00a3;
		}
	}
	{
		bool L_18 = __this->___m_DisableRootMigration;
		if (L_18)
		{
			goto IL_00e7;
		}
	}

IL_00a3:
	{
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_19 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_20 = V_4;
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_21 = __this->___m_SerializedTypeProvider;
		NullCheck(L_21);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_22 = L_21->___Events;
		bool L_23;
		L_23 = JsonMigrationCollection_TryMigrate_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m1FF26FCF29814DEDF2DF2275A6192229E5B915CC(L_19, L_20, (&V_5), __this, L_22, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_23)
		{
			goto IL_00e7;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = L_24;
		if (L_25)
		{
			G_B16_0 = L_25;
			goto IL_00cc;
		}
		G_B15_0 = L_25;
	}
	{
		goto IL_00de;
	}

IL_00cc:
	{
		SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8* L_26 = (SerializedContainerMetadata_t1112F209893E4364AE123A5087678781DCA08BD8*)(&__this->___m_Metadata);
		int32_t L_27 = L_26->___SerializedId;
		PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 L_28 = V_5;
		NullCheck(G_B16_0);
		SerializedReferences_AddDeserializedReference_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m0FD4220D31DC5A66521C09111D4980776C9235F4(G_B16_0, L_27, L_28, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_00de:
	{
		PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_29 = ___1_container;
		PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 L_30 = V_5;
		*(PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22*)L_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22*)L_29)->___Value), (void*)NULL);
		return;
	}

IL_00e7:
	{
		RuntimeObject* L_31 = ___0_properties;
		PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_32 = ___1_container;
		NullCheck(L_31);
		PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6 L_33;
		L_33 = InterfaceFuncInvoker1< PropertyCollection_1_tA09426E152518EA77AB4BA0CD14BA49A78E7E0E6, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_31, L_32);
		V_1 = L_33;
		Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F L_34;
		L_34 = PropertyCollection_1_GetEnumerator_m94472DB432071002798D5153C7DAE59C9F54BE3F((&V_1), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_6 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0122:
			{
				Enumerator_Dispose_mBF37D8DAF6AA278E39454040745D83F28183D226((&V_6), il2cpp_rgctx_method(method->rgctx_data, 9));
				return;
			}
		});
		try
		{
			{
				goto IL_0117_1;
			}

IL_00fa_1:
			{
				RuntimeObject* L_35;
				L_35 = Enumerator_get_Current_mB7C492138984C907F8B89245F80866DBA2A8CE5D_inline((&V_6), NULL);
				V_7 = L_35;
				RuntimeObject* L_36 = V_7;
				bool L_37;
				L_37 = PropertyChecks_IsPropertyExcludedFromSerialization_mB1BC9CBE6B1A4426B6C45608F7DA02985FE0D863((RuntimeObject*)L_36, NULL);
				if (L_37)
				{
					goto IL_0117_1;
				}
			}
			{
				PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_38 = ___1_container;
				UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 L_39 = V_4;
				RuntimeObject* L_40 = V_7;
				JsonPropertyReader_AcceptProperty_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m5AB21F36646853720714FFD531B9407505F32F29(__this, L_38, L_39, L_40, il2cpp_rgctx_method(method->rgctx_data, 14));
			}

IL_0117_1:
			{
				bool L_41;
				L_41 = Enumerator_MoveNext_mF40C6D080C23B00D5DFE96DED4D4E0CD0EF02CCA((&V_6), il2cpp_rgctx_method(method->rgctx_data, 5));
				if (L_41)
				{
					goto IL_00fa_1;
				}
			}
			{
				goto IL_0130;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0130:
	{
		return;
	}
}
// Method Definition Index: 87437
// Method Definition Index: 87437
// Method Definition Index: 87437
// Method Definition Index: 87437
// Method Definition Index: 87437
// Method Definition Index: 87437
// Method Definition Index: 87437
// Method Definition Index: 87437
// Method Definition Index: 87460
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline (JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CPropertyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m93EB07A80440B7E77671B54C1D8C08181E12A499_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 11266
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE* L_7 = V_0;
		int32_t L_8 = V_1;
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9)L_9);
		return;
	}

IL_0034:
	{
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10 = ___0_item;
		List_1_AddWithResize_m33721C3206790908F95C4F736E10D66AC606B185(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m648B789A6C0E45C15D1B380C236BAC1C31DE31FB_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m9034B0A94134882152B213FF050C3F53CF633819_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m97B6E9830CAA98FFEE7154FAD31DCB8E155BBA17_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mB8715953B15429CDB6A7D50697117EF2F2CA97C1_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB439768C3A79904448564C831E2894C0B5B57EAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90445
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90321
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB7C492138984C907F8B89245F80866DBA2A8CE5D_gshared_inline (Enumerator_t15B2270FBEF83CF2B6E8FF8D2486F3761415E57F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
