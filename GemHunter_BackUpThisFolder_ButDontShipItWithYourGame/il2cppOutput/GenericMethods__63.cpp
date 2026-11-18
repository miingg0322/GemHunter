#include "pch-cpp.hpp"





struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
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

struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
struct IContravariantJsonMigration_1_tE0353C0015315F8F86CD6BA4191725FD9E1A439D;
struct IContravariantJsonMigration_1_t2144D17C4F1AA13708DD08FD6CEC0889FB141187;
struct IContravariantJsonMigration_1_t34431E50148A78D7C31FC042A38322525031320B;
struct IContravariantJsonMigration_1_tF228CF31A68E6DF3163463763C69988B7D40C9B2;
struct IContravariantJsonMigration_1_tADCDDA688A10C920C4854A05A735E9AAB7B22C80;
struct IContravariantJsonMigration_1_tFAC33FAB4E0BCA9E2991A569A9E90C738CFE248D;
struct IContravariantJsonMigration_1_t9F8BE03E2F9FF448C6DF65E20ED5289B15D65975;
struct IContravariantJsonMigration_1_tF7DDA79F28632BF5070CCCD99C3B59D804A06BED;
struct IContravariantJsonMigration_1_t98915DEF563340ADBE16527D187B56EB40AC15A3;
struct IContravariantJsonMigration_1_tA259F423E2399B480A87C29B96A7B2B302359662;
struct IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70;
struct IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D;
struct IJsonMigration_1_t86BCC26F8A5FF04C91EBAFE5704C9FB0A3D8B3BD;
struct IJsonMigration_1_tF540CB6C24C1BFD0AE4C4C22FD6BB37F4D14D5A6;
struct IJsonMigration_1_t5F8E8DF9A4E3404EDCFD00A1DA5602758B356469;
struct IJsonMigration_1_tF93610CAE51F36F4929D78272A031F960E861744;
struct IJsonMigration_1_t4CC22C0E20E3BF0EB8E25EDC86525D5A537DA943;
struct IJsonMigration_1_t0FE03586AA71BBE2B41DE647348C01A274E483E1;
struct IJsonMigration_1_tEB894A5D312BF2492F51DFFB62ACD9BB07C12A08;
struct IJsonMigration_1_t088FFEFECB15A042617C27B0F1EAE6F6873C8E58;
struct IJsonMigration_1_tE0873209E56F3FF7E0B0DB1AC2D8FF83AC47FE1C;
struct IJsonMigration_1_t28F6E01F512B91FB83162CD5C1E40E7862B8BB4C;
struct IProperty_1_t7A1634D9DE438EA88AEF58A0215DBA4C028E3EBA;
struct IProperty_1_t98878FD77D337872A4E5BC68C68B41F682CD3B6C;
struct IProperty_1_t49CEA58F187BC2188B8C7455257619386615F2D9;
struct IProperty_1_t3F614B28D9097A146C2C94A503BB36864477D6AA;
struct IProperty_1_t4BDA5F59B6CF957E8D8E3802E69B767A12C532B0;
struct IProperty_1_tF20CE8FBC7B20A09C2A7E0EB9630919D71339E99;
struct IProperty_1_t5E43D0F89C8C835C74BBF564571DA984A6415335;
struct IProperty_1_tD9FE1AF3703439208728AD16A49693976E1C4BC0;
struct IProperty_1_t0CED323160A5869C2EF0D8E073FBEEDBDA2EFF28;
struct IProperty_1_tB7F6496CEFBE912425446A3DB3235CAE0654CB1D;
struct IProperty_1_t33BD2C97D37F86F94427C4DAD86A13162B485570;
struct IProperty_1_tD244114CE436FD9ED0FFA2D1D455AEDAC05FF05E;
struct IProperty_1_tA0905C4267FB6A7FD0A05C37B6A16B0F607E7169;
struct IProperty_1_t8885BD5CD7EF54503D9E4531265EFE41C32A76A7;
struct IProperty_1_tA91D958F297A9E6CAA1A37517EE12264CE046A34;
struct IProperty_1_t07316563C3064E0D46C1476430CB2E10558FE27D;
struct IProperty_1_tCFEF868BA125BBF458061067FBFEFE885B76B8DD;
struct IProperty_1_t326CF524CC80B6F64C96D78AFB3CB0A694D3B714;
struct IProperty_1_t9633168F8959E99C6DEC1E1CA3BFB629E86FA76A;
struct IProperty_1_t3AEB7D7876565B1FEF99953E8021246722F904D0;
struct IProperty_1_t832ED82D47DC151BD5CB382310E356E6CFFA0089;
struct IProperty_1_tEBB8266DC6A35BE366DEDDADAC3058C4F9B09515;
struct IProperty_1_tC8A9F7A47A6336EB9794E9A3C9FF3CDDBE47FC3F;
struct IProperty_1_t9FE05EB8AFC85DCB41CB2F5213FCF6A9D160D485;
struct IProperty_1_t5B25A2721B5E4AE6634B2B1494E725296A1D8AA6;
struct IProperty_1_tB9AB7CB6E503A707D0919B964DAF91F7EEA60CAD;
struct IProperty_1_t59E20F90DB98F2BBAE67DF5CD980664BC258AEB0;
struct IProperty_1_t3172E042E641A7A013BE61F6493CEFFF7F87A92A;
struct IProperty_1_t34F484178257879F595602865D833FBB36E25609;
struct IProperty_1_t3C38EDA987E18932165E4D3AAC5655C99DC314C6;
struct IProperty_1_t5FF1B889D0F2BC3603CAD8421073C8E07036D826;
struct IProperty_1_t16851B2242BE6D75845567D065579B8A82F0F766;
struct IProperty_1_t690452A259821E292DF4FED348BBFFAB0C29C46D;
struct IProperty_1_t79C1337C9F8525F749DDF1D234309C6FACEF9F83;
struct IProperty_1_tF7EF99542FB8234BAA46C88E688AA6393B3EE7FF;
struct IProperty_1_t6C7004C6DB8DFFA2A3D4654E38248B04A15D0EB1;
struct IProperty_1_tECC241D1D210C65FCAD259D0183F9D167B424FFA;
struct IProperty_1_t2481B62C7E7B4F1EBA8580B2D1AFB43BD439BD7F;
struct IProperty_1_tB2BB5F24788BF2E4BAF1D8A0228943216217A680;
struct IProperty_1_tFFC6DFAD6033D9CD7AC3F321EE99F08C8586301A;
struct IProperty_1_t578DDEBAA2A91F19DDB259DB85226B438091998A;
struct IProperty_1_t3DC03FED148B3FFD7EC3569720E19949C1DAD428;
struct IProperty_1_t7DD1A0033BA45A0A00F6C5DD2595CAEF490F666C;
struct IProperty_1_t34993F32F2DDBE80D298CE14C80483415BD5A725;
struct IProperty_1_t18B46B89915AFFD1154896397B979A65DCD324D6;
struct IProperty_1_t2781E725B1462A4426C549FA5D012588E648C263;
struct IProperty_1_t12C99126ED85120DC9BDD8A1721003A0B2907D3B;
struct IProperty_1_t9322C99A9228ED1E00DCCC9712B3CAA8BAAB8398;
struct IProperty_1_tBE66FDD74D9A71EAD0FBE846E81E2B5229F3AEE3;
struct IProperty_1_tA9AE98EECF93307CB9EA1D98BE9F544BB3187A68;
struct IProperty_1_t8A9879FB1F0190B5CC47F7000F0B7142216A439C;
struct IProperty_1_t0E317E01E6618E11E9F06771E5DB46F5CC25B22A;
struct IProperty_1_tA5E463FB3AF5B8F812635E7D7D8C1124890E39F8;
struct List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_t534D2333B268A3580A409E37E69D1D54668A35DB;
struct List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Exception_t;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781;
struct FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IJsonMigration_tEEAD4D9D819B04D329DAFAD0DC78DC979934D536;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct JsonAdapter_t4387298CACEC425123A5D8C620C8888E8D4BD6C8;
struct JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E;
struct JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A;
struct UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38;
IL2CPP_EXTERN_C String_t* _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5;
IL2CPP_EXTERN_C String_t* _stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434;
IL2CPP_EXTERN_C const RuntimeMethod* IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var;
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
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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
struct PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 
{
	Il2CppSharedGenericObject* ___Value;
};
typedef Il2CppFullySharedGenericStruct PropertyWrapper_1_t7CF194EAB4BC55EFE39E0B5FF3979E198DC84B71;
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
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
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
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
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___U3COldNameU3Ek__BackingField;
};
struct FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___m_oldName;
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
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 
{
	float ___m_Value;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 
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
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
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
struct DisableRootMigrationScope_t54C910B9600E9E80EDBA017CCE5F545133334949 
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	bool ___m_DisableRootMigration;
};
struct DisableRootMigrationScope_t54C910B9600E9E80EDBA017CCE5F545133334949_marshaled_pinvoke
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	int32_t ___m_DisableRootMigration;
};
struct DisableRootMigrationScope_t54C910B9600E9E80EDBA017CCE5F545133334949_marshaled_com
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	int32_t ___m_DisableRootMigration;
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
struct SerializedTypeScope_t026120ED4A2AB2575E13B7D8812DD8AFB6286AC5 
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	Type_t* ___m_SerializedType;
};
struct SerializedTypeScope_t026120ED4A2AB2575E13B7D8812DD8AFB6286AC5_marshaled_pinvoke
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	Type_t* ___m_SerializedType;
};
struct SerializedTypeScope_t026120ED4A2AB2575E13B7D8812DD8AFB6286AC5_marshaled_com
{
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
	Type_t* ___m_SerializedType;
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
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	union
	{
		struct
		{
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Texture;
			int32_t ___m_DefaultCursorId;
			int32_t _____dummy;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Hotspot;
		};
		uint8_t Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82__padding[24];
	};
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
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
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
struct SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	Handle_tB95417622C3A6F71FD5157D3B61F37A84BF2A03F ___m_Handle;
};
struct SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	Handle_tB95417622C3A6F71FD5157D3B61F37A84BF2A03F ___m_Handle;
};
struct SerializedStringView_t7BA9EC55E466FD0FE7DC387045FF6AB5CFA45AE1 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	Handle_tB95417622C3A6F71FD5157D3B61F37A84BF2A03F ___m_Handle;
};
struct SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	Handle_tB95417622C3A6F71FD5157D3B61F37A84BF2A03F ___m_Handle;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextAutoSizeMode_t10C0C54209C97D8A231AF021AE2F9DFFD26EE2C9 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
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
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
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
struct StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 
{
	int32_t ___m_Keyword;
	List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
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
struct JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B 
{
	int32_t ___SerializedVersion;
	SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A ___SerializedObject;
	Type_t* ___SerializedType;
	RuntimeObject* ___UserData;
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
};
struct JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B_marshaled_pinvoke
{
	int32_t ___SerializedVersion;
	SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A ___SerializedObject;
	Type_t* ___SerializedType;
	Il2CppIUnknown* ___UserData;
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
};
struct JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B_marshaled_com
{
	int32_t ___SerializedVersion;
	SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A ___SerializedObject;
	Type_t* ___SerializedType;
	Il2CppIUnknown* ___UserData;
	JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___m_Visitor;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_marshaled_pinvoke
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_marshaled_com
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
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
struct StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 
{
	Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 
{
	UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_marshaled_pinvoke
{
	UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_marshaled_com
{
	UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A* ___m_Value;
	int32_t ___m_Keyword;
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
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MinSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MaxSize;
	int32_t ___m_Mode;
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
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A 
{
	int32_t ___m_Keyword;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___m_Value;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB_StaticFields
{
	DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE* ___s_emptyArray;
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
struct FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_StaticFields
{
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___s_FormerlySerializedAsToCurrentName;
	bool ___m_Registered;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_StaticFields
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kZero;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_StaticFields
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___kZero;
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
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
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
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_StaticFields
{
	Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0* ___s_AngleUnitLookup;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mE217CAC84F7BAFA25543F85675B2B6B5867825FA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m492769BEA8B1F0643D24EDFB0E0B3094EB9B4E88 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mDAB73A5FCC0F1308297CFC9F5C29B9BB4E599366 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m90C53A4BCDF43BD931DE74D8163EFA256F5DB0BB (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mF5D7B6A710F5C83C99501EBF6574383802846D13 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB25D6412E1AB4323385B4F4150FFDAEFC2CFB351 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m88794AEF30003FD7A3A12EC95A8A7C167F9DA9DA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCD67C4DAA5460083A24BA1C21E20F6C167E5611D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisIl2CppSharedGenericObject_m6576111B2E01D95B30AD7BE786CC92FC619B113D_gshared (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m33721C3206790908F95C4F736E10D66AC606B185 (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mE217CAC84F7BAFA25543F85675B2B6B5867825FA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850 (UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541* __this, String_t* ___0_name, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863 (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A (DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9* __this, int32_t ___0_type, RuntimeObject* ___1_payload, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823 (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D (UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109 (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* __this, int32_t ___0_serializedVersion, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A ___1_serializedObject, Type_t* ___2_serializedType, RuntimeObject* ___3_userData, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___4_visitor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m492769BEA8B1F0643D24EDFB0E0B3094EB9B4E88 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mDAB73A5FCC0F1308297CFC9F5C29B9BB4E599366 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m90C53A4BCDF43BD931DE74D8163EFA256F5DB0BB (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mF5D7B6A710F5C83C99501EBF6574383802846D13 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB25D6412E1AB4323385B4F4150FFDAEFC2CFB351 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m88794AEF30003FD7A3A12EC95A8A7C167F9DA9DA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCD67C4DAA5460083A24BA1C21E20F6C167E5611D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
inline RuntimeObject* JsonMigrationCollection_GetMigrationForType_TisIl2CppSharedGenericObject_m6576111B2E01D95B30AD7BE786CC92FC619B113D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_GetMigrationForType_TisIl2CppSharedGenericObject_m6576111B2E01D95B30AD7BE786CC92FC619B113D_gshared)(__this, ___0_version, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F SerializedObjectView_op_Implicit_m56B6BE7CDF24DD0653812BB24EF2A2C600207410 (SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A ___0_view, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F SerializedObjectView_get_Item_mB4923A036F7F3CBEA152ECFAA655A13F70C931B4 (SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializedValueView_get_Type_m39D8B82F00A3D863899F91874714975746778768 (SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedStringView_t7BA9EC55E466FD0FE7DC387045FF6AB5CFA45AE1 SerializedValueView_AsStringView_m4BA766D591E2E85D3EA06E3584D4115BA75B1CCF (SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializedStringView_ToString_mE9B0F1C344745D78175159FB9D9958410E85B72A (SerializedStringView_t7BA9EC55E466FD0FE7DC387045FF6AB5CFA45AE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114 SerializedValueView_AsPrimitiveView_m597669180A2982E01345B873BB8D316A59A2BDD9 (SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedPrimitiveView_IsIntegral_mBF29C9BDB98965C8924E0E92B5113287AC5C8F65 (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedPrimitiveView_IsSigned_mC798D76B647ED42C2931AFF85B4D45225B69EC21 (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SerializedPrimitiveView_AsInt64_m50806C4043CF26429A9D405D59CEBD511E74FE6C (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SerializedPrimitiveView_AsUInt64_m21105A04A273918458BED1B7072269B44A8C4C70 (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedPrimitiveView_IsDecimal_m938498591374BD63C2505B901ECCABD88831DDA2 (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedPrimitiveView_IsInfinity_m511B012257C464E97A5EB055364E566A308FA3FF (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedPrimitiveView_IsNaN_m7AA917130CDA731F08685A3AB123AB6223489373 (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SerializedPrimitiveView_AsFloat_m9B3CB443E4CFB839D4A4D7022DA50C4BBB8AF090 (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedPrimitiveView_IsBoolean_mC87C8EDACC848B0B2E6A059249B8BBC40D394D2E (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedPrimitiveView_AsBoolean_m87A50469C8434F21E52DFD3C7A0E4567EEBAFA90 (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedPrimitiveView_IsNull_mAC92793A64470474C8A8D48A3EBC2C30A4AD8E4A (SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedTypeScope_t026120ED4A2AB2575E13B7D8812DD8AFB6286AC5 JsonPropertyReader_CreateSerializedTypeScope_mE4CFD1DFF922C7AD6C03CBAE1A00E430FAFFAED1 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Type_t* ___0_serializedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedTypeScope_Dispose_mC483CE9B291FF3352A4E77C3E43DED353FD89EC4 (SerializedTypeScope_t026120ED4A2AB2575E13B7D8812DD8AFB6286AC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E SerializedValueView_AsUnsafe_m6D39288B0CCAFF19F48506FA8630C202CB7ABE8B (SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___0_view, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308 (UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisableRootMigrationScope_t54C910B9600E9E80EDBA017CCE5F545133334949 JsonPropertyReader_CreateDisableRootMigrationScope_m68291C25BBC929B3FCFD5A0ACF65F61BD6ED561B (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, bool ___0_disableRootMigration, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableRootMigrationScope_Dispose_m11188C404AA84A525E138A914A0D425E2AB189A4 (DisableRootMigrationScope_t54C910B9600E9E80EDBA017CCE5F545133334949* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C (JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* __this, RuntimeObject* ___0_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946 (PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline (FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline (FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m33721C3206790908F95C4F736E10D66AC606B185 (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mEEE8D5A084A442247C77DF094A12F0B6EB62098B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mE217CAC84F7BAFA25543F85675B2B6B5867825FA(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_28;
		L_28 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_26 = L_28;
		goto IL_00e6;
	}

IL_00c5:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_29 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m2D2801B01F78700EB7229782DD7226D9EA27E29E (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m492769BEA8B1F0643D24EDFB0E0B3094EB9B4E88(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_28;
		L_28 = InterfaceFuncInvoker1< TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_26 = L_28;
		goto IL_00e6;
	}

IL_00c5:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_29 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m250F566BFC6B43317DD273B3992CD07436043CB2 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mDAB73A5FCC0F1308297CFC9F5C29B9BB4E599366(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_28;
		L_28 = InterfaceFuncInvoker1< Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_26 = L_28;
		goto IL_00e6;
	}

IL_00c5:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_29 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBD8E9FFF3784616636C7F584907ADF4825E03BD9 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m90C53A4BCDF43BD931DE74D8163EFA256F5DB0BB(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_26 = L_28;
		goto IL_00e6;
	}

IL_00c5:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_29 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5822F94C8C327C67FA02281CE0CA9077A8DD65E9 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mF5D7B6A710F5C83C99501EBF6574383802846D13(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_28;
		L_28 = InterfaceFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)L_26 = L_28;
		goto IL_00e6;
	}

IL_00c5:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)L_29 = ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF81E24D9BF4BA27C747769010D6C6F36B71375E7 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB25D6412E1AB4323385B4F4150FFDAEFC2CFB351(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_26 = L_28;
		goto IL_00e6;
	}

IL_00c5:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_29 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mD8528988250D072470404F361BBAC4F088C65031 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m88794AEF30003FD7A3A12EC95A8A7C167F9DA9DA(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_28;
		L_28 = InterfaceFuncInvoker1< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_26 = L_28;
		goto IL_00e6;
	}

IL_00c5:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_29 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mE8654D6CD0369C2BBA8AE82E5093ADB97C887806 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCD67C4DAA5460083A24BA1C21E20F6C167E5611D(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28;
		L_28 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_26 = L_28;
		goto IL_00e6;
	}

IL_00c5:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_29 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisIl2CppSharedGenericObject_m96244BE75C983E60B84FDA7EF0639F00475A9D61_gshared (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, Il2CppSharedGenericObject** ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonMigrationCollection_GetMigrationForType_TisIl2CppSharedGenericObject_m6576111B2E01D95B30AD7BE786CC92FC619B113D(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Il2CppSharedGenericObject** L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		Il2CppSharedGenericObject** L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		Il2CppSharedGenericObject** L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		Il2CppSharedGenericObject** L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_28;
		L_28 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4));
		*(Il2CppSharedGenericObject**)L_26 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_26, (void*)L_28);
		goto IL_00e6;
	}

IL_00c5:
	{
		Il2CppSharedGenericObject** L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		*(Il2CppSharedGenericObject**)L_29 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_31, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_29, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_31, il2cpp_rgctx_data(method->rgctx_data, 1))));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryMigrate_TisIl2CppFullySharedGenericAny_m86FE2362716999BECF8C26CD4CB911F98DB4CB7B_fshared (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___0_view, Il2CppFullySharedGenericAny* ___1_value, JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* ___2_reader, List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___3_events, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t39B15A14DEBEC7480689BA5E47305E655E5F1102 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_t39B15A14DEBEC7480689BA5E47305E655E5F1102);
	const Il2CppFullySharedGenericAny L_32 = L_28;
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_3;
	memset((&V_3), 0, sizeof(V_3));
	JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, SizeOf_TValue_t39B15A14DEBEC7480689BA5E47305E655E5F1102);
		return (bool)0;
	}

IL_0015:
	{
		V_2 = 0;
		bool L_3;
		L_3 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___0_view), _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, (&V_3), NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4;
		L_4 = UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863((&V_3), NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}
	{
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_5 = ___3_events;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07E15CE902B2DDDF6C7C264F0B8E38178EA51C38, L_7, _stringLiteral905C19B06B73ED521816E0DF60DCCC59B36B47F5, NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_10), 4, L_9, NULL);
		NullCheck(L_5);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_5, L_10, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		Il2CppFullySharedGenericAny* L_11 = ___1_value;
		il2cpp_codegen_initobj(L_11, SizeOf_TValue_t39B15A14DEBEC7480689BA5E47305E655E5F1102);
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_12;
		L_12 = UnsafeValueView_AsInt32_mB061C2AD66D96C08896F3E082508432C6E6BA823((&V_3), NULL);
		V_2 = L_12;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___1_value;
		il2cpp_codegen_initobj(L_15, SizeOf_TValue_t39B15A14DEBEC7480689BA5E47305E655E5F1102);
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_16 = V_2;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17;
		L_17 = UnsafeObjectView_AsSafe_mA8BC661ACDA65BB1AE336F1885A97C222C817A8D((&___0_view), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeObject* L_20 = __this->___UserData;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_21 = ___2_reader;
		JsonMigrationContext__ctor_mE820582BB03FAF2923291C8E8884F5CA08CDC109((&V_4), L_16, L_17, L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = V_0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_23 = V_5;
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_25 = V_6;
		if (L_25)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00db;
	}

IL_00b4:
	{
		Il2CppFullySharedGenericAny* L_26 = ___1_value;
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		InterfaceActionInvoker2Invoker< JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B*, Il2CppFullySharedGenericAny* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_27, (&V_4), (Il2CppFullySharedGenericAny*)L_28);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_26, L_28, SizeOf_TValue_t39B15A14DEBEC7480689BA5E47305E655E5F1102);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_26, (void*)L_28);
		goto IL_00e6;
	}

IL_00c5:
	{
		Il2CppFullySharedGenericAny* L_29 = ___1_value;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_30, (&V_4));
		void* L_33 = UnBox_Any(L_31, il2cpp_rgctx_data(method->rgctx_data, 1), L_32);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_29, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_33)), SizeOf_TValue_t39B15A14DEBEC7480689BA5E47305E655E5F1102);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_29, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_33)));
		goto IL_00e6;
	}

IL_00db:
	{
		Exception_t* L_34 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60C95D35235DF5D72870F14994C45B97EDA0434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
	}

IL_00e6:
	{
		return (bool)1;
	}
}
// Method Definition Index: 87219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMigrationContext_Read_TisIl2CppFullySharedGenericAny_m6A349E95779D773D33D29BB25077D96598A3FD30_fshared (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_StaticInit);
	const uint32_t SizeOf_TValue_t2484413C9198E1B2CD94F8CF562E2328C758F98A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t2484413C9198E1B2CD94F8CF562E2328C758F98A);
	//<source_info:<no-source>:1>
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_0 = __this->___SerializedObject;
		CHECKED_LOCAL_INIT(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_StaticInit,(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_1;
		L_1 = SerializedObjectView_op_Implicit_m56B6BE7CDF24DD0653812BB24EF2A2C600207410(L_0, NULL);
		InvokerActionInvoker2< SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_t2484413C9198E1B2CD94F8CF562E2328C758F98A);
		return;
	}
}
// Method Definition Index: 87223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMigrationContext_Read_TisIl2CppFullySharedGenericAny_mF581FF94D20DEE384F173391B7CEE829FBC9BE44_fshared (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* __this, SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F ___0_view, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tA61B1E19DC8CA84E4A3E74112FF19C0A6FBD940D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tA61B1E19DC8CA84E4A3E74112FF19C0A6FBD940D);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tA61B1E19DC8CA84E4A3E74112FF19C0A6FBD940D);
	memset(V_0, 0, SizeOf_TValue_tA61B1E19DC8CA84E4A3E74112FF19C0A6FBD940D);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_tA61B1E19DC8CA84E4A3E74112FF19C0A6FBD940D);
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_0 = ___0_view;
		((  void (*) (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B*, Il2CppFullySharedGenericAny*, SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, (Il2CppFullySharedGenericAny*)V_0, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TValue_tA61B1E19DC8CA84E4A3E74112FF19C0A6FBD940D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TValue_tA61B1E19DC8CA84E4A3E74112FF19C0A6FBD940D);
		return;
	}
}
// Method Definition Index: 87221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMigrationContext_Read_TisIl2CppFullySharedGenericAny_m0BC7A2DF98EC5B3500402C293E0A49B2F2CC64B7_fshared (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* __this, String_t* ___0_name, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_StaticInit);
	const uint32_t SizeOf_TValue_t9734962E092A4EECAEE02D3F9012137C9006728C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t9734962E092A4EECAEE02D3F9012137C9006728C);
	//<source_info:<no-source>:1>
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_0 = (SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A*)(&__this->___SerializedObject);
		String_t* L_1 = ___0_name;
		CHECKED_LOCAL_INIT(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_StaticInit,(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_2;
		L_2 = SerializedObjectView_get_Item_mB4923A036F7F3CBEA152ECFAA655A13F70C931B4(L_0, L_1, NULL);
		InvokerActionInvoker2< SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t9734962E092A4EECAEE02D3F9012137C9006728C);
		return;
	}
}
// Method Definition Index: 87224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMigrationContext_Read_TisIl2CppFullySharedGenericAny_m3EEFCAA5F73C8098CF51B6D43CC3789AEC69F849_fshared (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* __this, Il2CppFullySharedGenericAny* ___0_value, SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F ___1_view, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_PropertyWrapper_1_tD1A70D1E29E37096F5F202FBAEC90B066BC89CDD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	const uint32_t SizeOf_TValue_tF3B9F8BDC755E898FAC9F0BFC1D7D99094A9B0D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	CHECKED_LOCAL(TypeTraits_1_tB140CEB995EE3A9084258E4967220F4CD4E70A0F_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_TValue_tF3B9F8BDC755E898FAC9F0BFC1D7D99094A9B0D0);
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_TValue_tF3B9F8BDC755E898FAC9F0BFC1D7D99094A9B0D0);
	const PropertyWrapper_1_t7CF194EAB4BC55EFE39E0B5FF3979E198DC84B71 L_44 = alloca(SizeOf_PropertyWrapper_1_tD1A70D1E29E37096F5F202FBAEC90B066BC89CDD);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	SerializedStringView_t7BA9EC55E466FD0FE7DC387045FF6AB5CFA45AE1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	Type_t* V_8 = NULL;
	SerializedTypeScope_t026120ED4A2AB2575E13B7D8812DD8AFB6286AC5 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_10;
	memset((&V_10), 0, sizeof(V_10));
	DisableRootMigrationScope_t54C910B9600E9E80EDBA017CCE5F545133334949 V_11;
	memset((&V_11), 0, sizeof(V_11));
	PropertyWrapper_1_t7CF194EAB4BC55EFE39E0B5FF3979E198DC84B71 V_12 = alloca(SizeOf_PropertyWrapper_1_tD1A70D1E29E37096F5F202FBAEC90B066BC89CDD);
	memset(V_12, 0, SizeOf_PropertyWrapper_1_tD1A70D1E29E37096F5F202FBAEC90B066BC89CDD);
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_13;
	memset((&V_13), 0, sizeof(V_13));
	Type_t* G_B18_0 = NULL;
	{
		int32_t L_0;
		L_0 = SerializedValueView_get_Type_m39D8B82F00A3D863899F91874714975746778768((&___1_view), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_00e3;
			}
			case 1:
			{
				goto IL_00e3;
			}
			case 2:
			{
				goto IL_0025;
			}
			case 3:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0188;
	}

IL_0025:
	{
		SerializedStringView_t7BA9EC55E466FD0FE7DC387045FF6AB5CFA45AE1 L_2;
		L_2 = SerializedValueView_AsStringView_m4BA766D591E2E85D3EA06E3584D4115BA75B1CCF((&___1_view), NULL);
		V_2 = L_2;
		String_t* L_3;
		L_3 = SerializedStringView_ToString_mE9B0F1C344745D78175159FB9D9958410E85B72A((&V_2), NULL);
		V_1 = L_3;
		Il2CppFullySharedGenericAny* L_4 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = ((  bool (*) (String_t**, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&V_1), L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0045:
	{
		SerializedPrimitiveView_t96A8B124329D3A1A66438D35C88BF1B32B3F9114 L_6;
		L_6 = SerializedValueView_AsPrimitiveView_m597669180A2982E01345B873BB8D316A59A2BDD9((&___1_view), NULL);
		V_3 = L_6;
		bool L_7;
		L_7 = SerializedPrimitiveView_IsIntegral_mBF29C9BDB98965C8924E0E92B5113287AC5C8F65((&V_3), NULL);
		if (!L_7)
		{
			goto IL_0085;
		}
	}
	{
		bool L_8;
		L_8 = SerializedPrimitiveView_IsSigned_mC798D76B647ED42C2931AFF85B4D45225B69EC21((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0072;
		}
	}
	{
		int64_t L_9;
		L_9 = SerializedPrimitiveView_AsInt64_m50806C4043CF26429A9D405D59CEBD511E74FE6C((&V_3), NULL);
		V_4 = L_9;
		Il2CppFullySharedGenericAny* L_10 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = ((  bool (*) (int64_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_4), L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0072:
	{
		uint64_t L_12;
		L_12 = SerializedPrimitiveView_AsUInt64_m21105A04A273918458BED1B7072269B44A8C4C70((&V_3), NULL);
		V_5 = L_12;
		Il2CppFullySharedGenericAny* L_13 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_14;
		L_14 = ((  bool (*) (uint64_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&V_5), L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0085:
	{
		bool L_15;
		L_15 = SerializedPrimitiveView_IsDecimal_m938498591374BD63C2505B901ECCABD88831DDA2((&V_3), NULL);
		if (L_15)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_16;
		L_16 = SerializedPrimitiveView_IsInfinity_m511B012257C464E97A5EB055364E566A308FA3FF((&V_3), NULL);
		if (L_16)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_17;
		L_17 = SerializedPrimitiveView_IsNaN_m7AA917130CDA731F08685A3AB123AB6223489373((&V_3), NULL);
		if (!L_17)
		{
			goto IL_00b3;
		}
	}

IL_00a0:
	{
		float L_18;
		L_18 = SerializedPrimitiveView_AsFloat_m9B3CB443E4CFB839D4A4D7022DA50C4BBB8AF090((&V_3), NULL);
		V_6 = L_18;
		Il2CppFullySharedGenericAny* L_19 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_20;
		L_20 = ((  bool (*) (float*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&V_6), L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_00b3:
	{
		bool L_21;
		L_21 = SerializedPrimitiveView_IsBoolean_mC87C8EDACC848B0B2E6A059249B8BBC40D394D2E((&V_3), NULL);
		if (!L_21)
		{
			goto IL_00cf;
		}
	}
	{
		bool L_22;
		L_22 = SerializedPrimitiveView_AsBoolean_m87A50469C8434F21E52DFD3C7A0E4567EEBAFA90((&V_3), NULL);
		V_7 = L_22;
		Il2CppFullySharedGenericAny* L_23 = ___0_value;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_24;
		L_24 = ((  bool (*) (bool*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_7), L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}

IL_00cf:
	{
		bool L_25;
		L_25 = SerializedPrimitiveView_IsNull_mAC92793A64470474C8A8D48A3EBC2C30A4AD8E4A((&V_3), NULL);
		if (!L_25)
		{
			goto IL_018e;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_26 = ___0_value;
		il2cpp_codegen_initobj(L_26, SizeOf_TValue_tF3B9F8BDC755E898FAC9F0BFC1D7D99094A9B0D0);
		return;
	}

IL_00e3:
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_tB140CEB995EE3A9084258E4967220F4CD4E70A0F_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 7)),il2cpp_codegen_runtime_class_init_inline);
		bool L_27;
		L_27 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		if (!L_27)
		{
			goto IL_00ed;
		}
	}
	{
		G_B18_0 = ((Type_t*)(NULL));
		goto IL_00f7;
	}

IL_00ed:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		G_B18_0 = L_29;
	}

IL_00f7:
	{
		V_8 = G_B18_0;
		JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_30 = __this->___m_Visitor;
		Type_t* L_31 = V_8;
		NullCheck(L_30);
		SerializedTypeScope_t026120ED4A2AB2575E13B7D8812DD8AFB6286AC5 L_32;
		L_32 = JsonPropertyReader_CreateSerializedTypeScope_mE4CFD1DFF922C7AD6C03CBAE1A00E430FAFFAED1(L_30, L_31, NULL);
		V_9 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017a:
			{
				SerializedTypeScope_Dispose_mC483CE9B291FF3352A4E77C3E43DED353FD89EC4((&V_9), NULL);
				return;
			}
		});
		try
		{
			{
				JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_33 = __this->___m_Visitor;
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_34;
				L_34 = SerializedValueView_AsUnsafe_m6D39288B0CCAFF19F48506FA8630C202CB7ABE8B((&___1_view), NULL);
				NullCheck(L_33);
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_35;
				L_35 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(L_33, L_34, NULL);
				V_10 = L_35;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_016c_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_10), NULL);
						return;
					}
				});
				try
				{
					{
						JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_36 = __this->___m_Visitor;
						NullCheck(L_36);
						DisableRootMigrationScope_t54C910B9600E9E80EDBA017CCE5F545133334949 L_37;
						L_37 = JsonPropertyReader_CreateDisableRootMigrationScope_m68291C25BBC929B3FCFD5A0ACF65F61BD6ED561B(L_36, (bool)1, NULL);
						V_11 = L_37;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_015e_2:
							{
								DisableRootMigrationScope_Dispose_m11188C404AA84A525E138A914A0D425E2AB189A4((&V_11), NULL);
								return;
							}
						});
						try
						{
							Il2CppFullySharedGenericAny* L_38 = ___0_value;
							il2cpp_codegen_memcpy(L_39, L_38, SizeOf_TValue_tF3B9F8BDC755E898FAC9F0BFC1D7D99094A9B0D0);
							InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), (PropertyWrapper_1_t7CF194EAB4BC55EFE39E0B5FF3979E198DC84B71*)V_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_39: *(void**)L_39));
							JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* L_40 = __this->___m_Visitor;
							il2cpp_codegen_initobj((&V_13), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
							VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_41 = V_13;
							bool L_42;
							L_42 = ((  bool (*) (RuntimeObject*, PropertyWrapper_1_t7CF194EAB4BC55EFE39E0B5FF3979E198DC84B71*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(L_40, (PropertyWrapper_1_t7CF194EAB4BC55EFE39E0B5FF3979E198DC84B71*)V_12, L_41, il2cpp_rgctx_method(method->rgctx_data, 10));
							Il2CppFullySharedGenericAny* L_43 = ___0_value;
							il2cpp_codegen_memcpy(L_44, V_12, SizeOf_PropertyWrapper_1_tD1A70D1E29E37096F5F202FBAEC90B066BC89CDD);
							il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_field_data_pointer(L_44, il2cpp_rgctx_offset(method->rgctx_data, 12)), SizeOf_TValue_tF3B9F8BDC755E898FAC9F0BFC1D7D99094A9B0D0);
							il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_43, L_45, SizeOf_TValue_tF3B9F8BDC755E898FAC9F0BFC1D7D99094A9B0D0);
							Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_43, (void*)L_45);
							goto IL_018e;
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

IL_0188:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_46 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_46, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, method);
	}

IL_018e:
	{
		return;
	}
}
// Method Definition Index: 87218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationContext_TryRead_TisIl2CppFullySharedGenericAny_m9C717CFB154BD04951E62438B7F0123D107959E2_fshared (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_0 = __this->___SerializedObject;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		bool L_2;
		L_2 = ((  bool (*) (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B*, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 87222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationContext_TryRead_TisIl2CppFullySharedGenericAny_m202834F8F68F646CF48B18D4EC4A491F9BFDED08_fshared (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* __this, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A ___0_view, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_StaticInit);
	const uint32_t SizeOf_TValue_t589C51D5AA80D20BBAA107CF76D7A01B1AB67BBE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t589C51D5AA80D20BBAA107CF76D7A01B1AB67BBE);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_value;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_1 = ___0_view;
		CHECKED_LOCAL_INIT(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_StaticInit,(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_2;
		L_2 = SerializedObjectView_op_Implicit_m56B6BE7CDF24DD0653812BB24EF2A2C600207410(L_1, NULL);
		InvokerActionInvoker2< SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_3, SizeOf_TValue_t589C51D5AA80D20BBAA107CF76D7A01B1AB67BBE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_3);
		V_0 = (bool)1;
		goto IL_0022;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		RuntimeObject* L_4 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		Il2CppFullySharedGenericAny* L_5 = ___1_value;
		il2cpp_codegen_initobj(L_5, SizeOf_TValue_t589C51D5AA80D20BBAA107CF76D7A01B1AB67BBE);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0022;
	}

IL_0022:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 87220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationContext_TryRead_TisIl2CppFullySharedGenericAny_m8027C0E142973C972C37F3090F90D783216CF57B_fshared (JsonMigrationContext_t1DB527C56172E28D9B786208D034C1F398DEA84B* __this, String_t* ___0_name, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tAADBF5D2205EC38268A311C282E7D1266E92CCA0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tAADBF5D2205EC38268A311C282E7D1266E92CCA0);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_value;
		String_t* L_1 = ___0_name;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_2, SizeOf_TValue_tAADBF5D2205EC38268A311C282E7D1266E92CCA0);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_2);
		V_0 = (bool)1;
		goto IL_001d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{
		RuntimeObject* L_3 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		Il2CppFullySharedGenericAny* L_4 = ___1_value;
		il2cpp_codegen_initobj(L_4, SizeOf_TValue_tAADBF5D2205EC38268A311C282E7D1266E92CCA0);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001d;
	}

IL_001d:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m5AB21F36646853720714FFD531B9407505F32F29_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck((RuntimeObject*)L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_8 = ___0_container;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker2< RuntimeObject*, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck((RuntimeObject*)L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, (RuntimeObject*)L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_24 = ___0_container;
							NullCheck((RuntimeObject*)L_23);
							InterfaceActionInvoker2< RuntimeObject*, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck((RuntimeObject*)L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, (RuntimeObject*)L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_42 = ___0_container;
							NullCheck((RuntimeObject*)L_41);
							InterfaceActionInvoker2< RuntimeObject*, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m629ADCA7427DAFDC9AE6421EBD3580391A23F76F_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck((RuntimeObject*)L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_8 = ___0_container;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck((RuntimeObject*)L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, (RuntimeObject*)L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_24 = ___0_container;
							NullCheck((RuntimeObject*)L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck((RuntimeObject*)L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, (RuntimeObject*)L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_42 = ___0_container;
							NullCheck((RuntimeObject*)L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), (RuntimeObject*)L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mA9511799BB7349A1F30A03F79CC46C9015BA37FF (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mA81C057940711876E827047087864E8F794A2250 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mB867828B28993024ABADA02DF1CF4D19814D31DF (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mB21A4AEDC1B6947999CA30A218B1D735214E523D (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m1FE2A54CA23AB15FB77D4784772A812D812F106B (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m197A06E1207E8B7967A51C4ACB1193431EA5003F (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mD562A87D5A1824A45985710A55C392DEFE767039 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF38BC1AB1944468263EA9170146E693012B52185 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m9028CA62078378352D267A9C838A68B82C2B839E (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD46ED86D0BFFBD1299AEBE7654F7C7398760255C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m106A7F64067751F8F7FC0782CE07040A415EED5A (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m517A5BC3D593EEF0FC2C80D6B429038EF80A73CA (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m28E7A22481AFFC74461DC7BA112674F6E619445D (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m07F36AD742BD51D3FF1A38BCB6A49F3C4AE2CFFD (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mE7E1BC36F2B977D26776AF8C0F51E7DA17A997F8 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mD785DFA86CDBDA91C9A36D4F59920711CBCABAB8 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m887612DD511603DD25C1C7BF97679F54969E3F69 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m886D305E4EEF3EEBE17B41DC1277218E37DD4491 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAFAE27B01D803BBB3D33322DCC29BE5642182204 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m1F7CC0729B8E4C3D1999BF3E0A1B42F9AED756FB (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m264E056D11BDEAF60DCCE8E7E71D21EE218ACE63 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m017EC5CEB6F7F6798F4F97474A681E531AD83636 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m2D4AF9886D48130852BDBB455B20808DEA066B2A (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m9105AD17DF805A84522E42DFE4A6C2BE36E85480 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m3CB2B1D615515A93734E4E8A1D341239CC39174F (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_mA8BEE9F70CDDEB1EEAADAB84CDE9893DBF959424 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2FAE79952E04CF68AA5C96E45A9CCC812C4381FE (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m536AA97FE765DD05CD61E13B45F4F1955ACD4802 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m710786B707615490100C81E919F3F1781DAC9D23 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m20B42F2A56A1A2E6912722C90BA78C8373B9667D (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m27DA0320A3AF776D922732A07B457BA7780C4A6F (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mD1D6C573A9DA1FE659336CA799270451703E30DB (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF0F09C1BC8D09F649B1612FFC7773A838C564D5B (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8AFEA7910AF8D585FDE4EF1FA2B6F24CE3C6D055 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mE0918D6FD7E6CB641D47900488FA3F159225D326 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mD161369A3AFEB041214A302B8A1B00C135C5D76F (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mEB25EEDC12EF3CF39A0C4101CF66F8F59F2E41A9 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m809A1BDBE1F5DCCA4EC6917F2F58931FCAF7F639 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m0194F8F5CE71500E04FD9C231D58EA521EA59D22 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mA8690AE7897E96F0F16AE0DDC9FFDC3A46E9C740 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3DC89EAE476A903EB610D8B6BE456600A112D8D3 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m3E239A1B4FD647CD8575228A406B09592064883C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mE7775CB09B43F0735289BADBD6525EE966CFCD2B (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mAA2A634BA32EC37FC083B3392783818CAF4097F5 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m6AA51478ACD634C98C78FDD82EC07532377B3818 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mE4BB183041538CE1EB939D5420C4F6B92F98480A (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mA28746500587324DBCE53FCB812315B1280CA4B0 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mFBE908F33BBEAC56F974C44A592437C1BF276FAE (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC7C554B694B74291D20EC431177281353496772C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m2DC4413F2ED7CD9EA37F70167740E37CF9B94226 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 87438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_AcceptProperty_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m104BCF1CE4B971F10CF51C8A7AD8B439514EE910 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_container, UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 ___1_view, RuntimeObject* ___2_property, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___2_property;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = ___2_property;
		PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_4;
		L_4 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_5 = V_0;
				UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_6;
				L_6 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_5, NULL);
				V_2 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002b_1:
					{
						UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
						return;
					}
				});
				try
				{
					RuntimeObject* L_7 = ___2_property;
					TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_8 = ___0_container;
					NullCheck(L_7);
					InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_7, __this, L_8);
					goto IL_0047;
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

IL_0047:
	{
		return;
	}

IL_0048:
	{
		RuntimeObject* L_9 = ___2_property;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781_mB43B3E4E102CD9646F4F29B5B04C1D92E4325E81_RuntimeMethod_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tB5CDE9AB07BF7DCB5B9C623F1E58446FE02386E2_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00bc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_15;
				L_15 = InterfaceFuncInvoker0< FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* >::Invoke(0, IEnumerator_1_t67F58B79AFE13231A3BBCE3D9FCA7298D3114A70_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline(L_16, NULL);
				bool L_18;
				L_18 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_17, (&V_0), NULL);
				if (!L_18)
				{
					goto IL_00a9_1;
				}
			}
			{
				RuntimeObject* L_19 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_20;
				L_20 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_19, NULL);
				V_1 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009b_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_21 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_22;
						L_22 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_21, NULL);
						V_2 = L_22;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008d_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_23 = ___2_property;
							TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_24 = ___0_container;
							NullCheck(L_23);
							InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_23, __this, L_24);
							goto IL_0134;
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

IL_00a9_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_00bd;
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

IL_00bd:
	{
		RuntimeObject* L_27 = ___2_property;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IProperty_GetAttributes_TisFormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343_m23B7839CA9AFEFAAA22F46B7256DD802C3015CCD_RuntimeMethod_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9D115C26AD70EA47E40804FDBE4270F25FB18AA5_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{
				{
					RuntimeObject* L_30 = V_5;
					if (!L_30)
					{
						goto IL_0133;
					}
				}
				{
					RuntimeObject* L_31 = V_5;
					NullCheck(L_31);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
				}

IL_0133:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_011d_1;
			}

IL_00cc_1:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_33;
				L_33 = InterfaceFuncInvoker0< FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* >::Invoke(0, IEnumerator_1_t5A99E1A43F3815DCC7F1BB3667490A55C27B030D_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline(L_34, NULL);
				bool L_36;
				L_36 = UnsafeObjectView_TryGetValue_m858C1DD251963CF175315DB8B90D8191EFBFB850((&___1_view), L_35, (&V_0), NULL);
				if (!L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				RuntimeObject* L_37 = ___2_property;
				PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_38;
				L_38 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_37, NULL);
				V_1 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010f_1:
					{
						PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_1), NULL);
						return;
					}
				});
				try
				{
					{
						UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_39 = V_0;
						UnsafeViewScope_t077AB68B6C6E607378FF96DB5409C1EFA9F748A3 L_40;
						L_40 = JsonPropertyReader_CreateViewScope_mD4FB04E61CAA0C5CF8D7A45C007A9DAA24B61C69(__this, L_39, NULL);
						V_2 = L_40;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0101_2:
							{
								UnsafeViewScope_Dispose_mB38D862FD811A006D30F486ECB1DA88C14C31308((&V_2), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_41 = ___2_property;
							TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_42 = ___0_container;
							NullCheck(L_41);
							InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_41, __this, L_42);
							goto IL_0134;
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

IL_011d_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				bool L_44;
				L_44 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_0134;
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

IL_0134:
	{
		return;
	}
}
// Method Definition Index: 86881
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FormerNameAttribute_get_OldName_m31B45982F5D4B2DA74E4C95A2648621E9BFDE8B8_inline (FormerNameAttribute_t6134FA446A0E7E59E44F8BBEE8C02797E901B781* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___U3COldNameU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 50872
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FormerlySerializedAsAttribute_get_oldName_m1D14B0BAB2305E1A3E20C64103FB6E0E84F4C027_inline (FormerlySerializedAsAttribute_t3962B42E10E2E369F71542567E784A8CBAC80343* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = __this->___m_oldName;
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
