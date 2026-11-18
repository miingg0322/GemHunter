#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
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
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0;
struct ISetPropertyBag_2_t05190865C56BC8E2F7D91312F3BB2A475B305AE7;
struct ISetPropertyBag_2_t56E6EDABDE18CE848804E70344D9A2B8608F8EE2;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_t534D2333B268A3580A409E37E69D1D54668A35DB;
struct List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B;
struct Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852;
struct Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676;
struct Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3;
struct Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809;
struct Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4;
struct Property_2_t20A025311CE5A099276CB813872583CED6D6E825;
struct Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298;
struct Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6;
struct Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77;
struct Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB;
struct Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F;
struct Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158;
struct Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD;
struct Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56;
struct Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D;
struct Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA;
struct Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA;
struct Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C;
struct Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F;
struct Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585;
struct Property_2_t77BD2AD223504355C87784ACF22E76208DA91020;
struct Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20;
struct Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9;
struct Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8;
struct Property_2_t113890ECA80F29325A033471911F4E8E45B619ED;
struct Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3;
struct Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029;
struct Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F;
struct Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC;
struct Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89;
struct Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9;
struct Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452;
struct Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214;
struct Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0;
struct Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223;
struct UnsafeList_1_t823260CC648D4FAB5E8934C1D8E387F44BD66497;
struct UnsafeList_1_t238C6D0E6E21F9806AB40612F33B2EFD63244113;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct JsonAdapter_t4387298CACEC425123A5D8C620C8888E8D4BD6C8;
struct JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E;
struct JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E;
struct JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA;
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
struct SerializedIdProperty_tC288BDFA559889145732E5D454D0477B0F30047F;
struct SerializedTypeProperty_tCF1F8B9984C9FCA9FBFF60D17A3264429A481AA7;
struct SerializedVersionProperty_t7BD2B75FCD30579F5D6090EA270A2594F8B65724;
struct Data_tD9ADCCDFFF56E03AA0A5E567D30C64F4A2A55D44;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var;
struct Data_tD9ADCCDFFF56E03AA0A5E567D30C64F4A2A55D44;
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
struct Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t20A025311CE5A099276CB813872583CED6D6E825  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t77BD2AD223504355C87784ACF22E76208DA91020  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t113890ECA80F29325A033471911F4E8E45B619ED  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct TypeTraits_1_t0614FE4DB6001B9C4443540E857D867F39D23F49  : public RuntimeObject
{
};
struct TypeTraits_1_t974939ED5858E136E6783074D927B7A0A887BCA2  : public RuntimeObject
{
};
struct TypeTraits_1_t849B267549097D96986DCAD2850793D54566B07D  : public RuntimeObject
{
};
struct TypeTraits_1_tA707EF483A6846D64DDD63F963A95C7304B53E5C  : public RuntimeObject
{
};
struct TypeTraits_1_tB8799E05D6377C80FC931AA2ED809D6EF251A05A  : public RuntimeObject
{
};
struct TypeTraits_1_tF5A724F99569364D7615977EF32CDCB2A1045BBA  : public RuntimeObject
{
};
struct TypeTraits_1_tDEB67735C0E3D316A776B5FC5E1D6BDFAFA02066  : public RuntimeObject
{
};
struct TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A  : public RuntimeObject
{
};
struct TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E  : public RuntimeObject
{
};
struct TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B  : public RuntimeObject
{
};
struct TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6  : public RuntimeObject
{
};
struct TypeTraits_1_t0DF62A72B3297A00D56AC85CFB01E8C3E9460D97  : public RuntimeObject
{
};
struct TypeTraits_1_t4BD624776DB5B1CA6F4CD8522DD3007FEDF0CCCD  : public RuntimeObject
{
};
struct TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21  : public RuntimeObject
{
};
struct TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9  : public RuntimeObject
{
};
struct TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551  : public RuntimeObject
{
};
struct TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039  : public RuntimeObject
{
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9  : public RuntimeObject
{
};
struct TypeTraits_1_t8AB7CD711706308490EFF51F31AF45C6AB97DDF6  : public RuntimeObject
{
};
struct TypeTraits_1_t50A802605DEECAC604087278D28F6DAD1D87E594  : public RuntimeObject
{
};
struct TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C  : public RuntimeObject
{
};
struct TypeTraits_1_tFB0FF557412A3562B89AFBD03F8113908FA09E96  : public RuntimeObject
{
};
struct TypeTraits_1_t2CC90C31519F2DAF95C7F643DE417BCFE97C698C  : public RuntimeObject
{
};
struct TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A  : public RuntimeObject
{
};
struct TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E  : public RuntimeObject
{
};
struct TypeTraits_1_t0FE337A60044F2930698F87A52FFCF681FB47715  : public RuntimeObject
{
};
struct TypeTraits_1_tC8A6838D020F659D649CBD833D68D21FF989D9AD  : public RuntimeObject
{
};
struct TypeTraits_1_tE208CC239AE748DF86153C46E3E53BC1B4803FE6  : public RuntimeObject
{
};
struct TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1  : public RuntimeObject
{
};
struct TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9  : public RuntimeObject
{
};
struct TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408  : public RuntimeObject
{
};
struct TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C  : public RuntimeObject
{
};
struct TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034  : public RuntimeObject
{
};
struct TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD  : public RuntimeObject
{
};
struct TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00  : public RuntimeObject
{
};
struct TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640  : public RuntimeObject
{
};
struct TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB  : public RuntimeObject
{
};
struct TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF  : public RuntimeObject
{
};
struct TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943  : public RuntimeObject
{
};
struct TypeTraits_1_t0671FE8E5B12D2B48C84E8F9F22F08BE9CA2FB84  : public RuntimeObject
{
};
struct TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF  : public RuntimeObject
{
};
struct TypeTraits_1_tEF6310A0910FEA8D9823620EA14ACAEC9AE964AD  : public RuntimeObject
{
};
struct TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6  : public RuntimeObject
{
};
struct TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC  : public RuntimeObject
{
};
struct TypeTraits_1_tF87930A08DE9EF913CCD9ADBE4F0515D6A46B444  : public RuntimeObject
{
};
struct TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816  : public RuntimeObject
{
};
struct TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB  : public RuntimeObject
{
};
struct TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934  : public RuntimeObject
{
};
struct TypeTraits_1_t4BC1505B3A69B29873280F3486B77BCC7D4E4404  : public RuntimeObject
{
};
struct TypeTraits_1_t4CFE7EF9DB9BB1CAE6CCA93CF3D6BE4308502C60  : public RuntimeObject
{
};
struct TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0  : public RuntimeObject
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
struct NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 
{
	UnsafeList_1_t823260CC648D4FAB5E8934C1D8E387F44BD66497* ___m_ListData;
};
struct NativeList_1_t6B350AE4E09DCADC9C2673572317CF843DC720AC 
{
	UnsafeList_1_t238C6D0E6E21F9806AB40612F33B2EFD63244113* ___m_ListData;
};
struct PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 
{
	Il2CppSharedGenericObject* ___Value;
};
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
struct UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 
{
	UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4* ___m_Stream;
	int32_t ___m_TokenIndex;
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
struct SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 
{
	bool ___IsSerializedReference;
	bool ___HasSerializedId;
	bool ___HasSerializedType;
	bool ___HasSerializedVersion;
	int32_t ___SerializedId;
	int32_t ___SerializedVersion;
};
struct SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98_marshaled_pinvoke
{
	int32_t ___IsSerializedReference;
	int32_t ___HasSerializedId;
	int32_t ___HasSerializedType;
	int32_t ___HasSerializedVersion;
	int32_t ___SerializedId;
	int32_t ___SerializedVersion;
};
struct SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98_marshaled_com
{
	int32_t ___IsSerializedReference;
	int32_t ___HasSerializedId;
	int32_t ___HasSerializedType;
	int32_t ___HasSerializedVersion;
	int32_t ___SerializedId;
	int32_t ___SerializedVersion;
};
struct SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC 
{
	int32_t ___Id;
};
struct SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9 
{
	Type_t* ___Type;
};
struct SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9_marshaled_pinvoke
{
	Type_t* ___Type;
};
struct SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9_marshaled_com
{
	Type_t* ___Type;
};
struct SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7 
{
	int32_t ___Version;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD  : public RuntimeObject
{
	List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* ___Events;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___View;
	Type_t* ___SerializedType;
};
struct Overrides_tC9B103FDC9701E9AEC24EF9791E329C3FB131D5C 
{
	int32_t ___value__;
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
struct JsonWriterOptions_t133B56BD9C431AE12DA6BC9AEFA009D3CB37A8FE 
{
	int32_t ___m_Overrides;
	int32_t ___m_Indent;
	bool ___m_StringEscapeHandling;
	bool ___U3CMinifiedU3Ek__BackingField;
	bool ___U3CSimplifiedU3Ek__BackingField;
};
struct JsonWriterOptions_t133B56BD9C431AE12DA6BC9AEFA009D3CB37A8FE_marshaled_pinvoke
{
	int32_t ___m_Overrides;
	int32_t ___m_Indent;
	int32_t ___m_StringEscapeHandling;
	int32_t ___U3CMinifiedU3Ek__BackingField;
	int32_t ___U3CSimplifiedU3Ek__BackingField;
};
struct JsonWriterOptions_t133B56BD9C431AE12DA6BC9AEFA009D3CB37A8FE_marshaled_com
{
	int32_t ___m_Overrides;
	int32_t ___m_Indent;
	int32_t ___m_StringEscapeHandling;
	int32_t ___U3CMinifiedU3Ek__BackingField;
	int32_t ___U3CSimplifiedU3Ek__BackingField;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA  : public Exception_t
{
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
struct Unsafe_tFF30FD6EEC75B86798A13AA22C8CDA94583C52C0 
{
	int32_t ___m_Label;
	Data_tD9ADCCDFFF56E03AA0A5E567D30C64F4A2A55D44* ___m_Data;
	NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 ___m_Buffer;
	NativeList_1_t6B350AE4E09DCADC9C2673572317CF843DC720AC ___m_Stack;
	JsonWriterOptions_t133B56BD9C431AE12DA6BC9AEFA009D3CB37A8FE ___m_Options;
};
struct Unsafe_tFF30FD6EEC75B86798A13AA22C8CDA94583C52C0_marshaled_pinvoke
{
	int32_t ___m_Label;
	Data_tD9ADCCDFFF56E03AA0A5E567D30C64F4A2A55D44* ___m_Data;
	NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 ___m_Buffer;
	NativeList_1_t6B350AE4E09DCADC9C2673572317CF843DC720AC ___m_Stack;
	JsonWriterOptions_t133B56BD9C431AE12DA6BC9AEFA009D3CB37A8FE_marshaled_pinvoke ___m_Options;
};
struct Unsafe_tFF30FD6EEC75B86798A13AA22C8CDA94583C52C0_marshaled_com
{
	int32_t ___m_Label;
	Data_tD9ADCCDFFF56E03AA0A5E567D30C64F4A2A55D44* ___m_Data;
	NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 ___m_Buffer;
	NativeList_1_t6B350AE4E09DCADC9C2673572317CF843DC720AC ___m_Stack;
	JsonWriterOptions_t133B56BD9C431AE12DA6BC9AEFA009D3CB37A8FE_marshaled_com ___m_Options;
};
struct JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3 
{
	Unsafe_tFF30FD6EEC75B86798A13AA22C8CDA94583C52C0 ___m_Impl;
};
struct JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3_marshaled_pinvoke
{
	Unsafe_tFF30FD6EEC75B86798A13AA22C8CDA94583C52C0_marshaled_pinvoke ___m_Impl;
};
struct JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3_marshaled_com
{
	Unsafe_tFF30FD6EEC75B86798A13AA22C8CDA94583C52C0_marshaled_com ___m_Impl;
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
struct JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231  : public JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E
{
	JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3 ___m_Writer;
	Type_t* ___m_SerializedType;
	bool ___m_DisableRootAdapters;
	JsonAdapterCollection_t3F341DE8D22201859E95D99E77B995BD2B97B1CE ___m_Adapters;
	JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548 ___m_Migrations;
	SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* ___m_SerializedReferences;
	bool ___m_HasPrimitiveOrStringGlobalAdapters;
	bool ___m_HasPrimitiveOrStringUserDefinedAdapters;
	bool ___SkipBeginEndObject;
};
struct List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB_StaticFields
{
	DeserializationEventU5BU5D_tEA7885834887C4A7DD13FB9B9157DDC8B31337FE* ___s_emptyArray;
};
struct TypeTraits_1_t0614FE4DB6001B9C4443540E857D867F39D23F49_StaticFields
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
struct TypeTraits_1_t974939ED5858E136E6783074D927B7A0A887BCA2_StaticFields
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
struct TypeTraits_1_t849B267549097D96986DCAD2850793D54566B07D_StaticFields
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
struct TypeTraits_1_tA707EF483A6846D64DDD63F963A95C7304B53E5C_StaticFields
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
struct TypeTraits_1_tB8799E05D6377C80FC931AA2ED809D6EF251A05A_StaticFields
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
struct TypeTraits_1_tF5A724F99569364D7615977EF32CDCB2A1045BBA_StaticFields
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
struct TypeTraits_1_tDEB67735C0E3D316A776B5FC5E1D6BDFAFA02066_StaticFields
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
struct TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A_StaticFields
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
struct TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E_StaticFields
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
struct TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B_StaticFields
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
struct TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6_StaticFields
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
struct TypeTraits_1_t0DF62A72B3297A00D56AC85CFB01E8C3E9460D97_StaticFields
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
struct TypeTraits_1_t4BD624776DB5B1CA6F4CD8522DD3007FEDF0CCCD_StaticFields
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
struct TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21_StaticFields
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
struct TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9_StaticFields
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
struct TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551_StaticFields
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
struct TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039_StaticFields
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
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields
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
struct TypeTraits_1_t8AB7CD711706308490EFF51F31AF45C6AB97DDF6_StaticFields
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
struct TypeTraits_1_t50A802605DEECAC604087278D28F6DAD1D87E594_StaticFields
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
struct TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C_StaticFields
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
struct TypeTraits_1_tFB0FF557412A3562B89AFBD03F8113908FA09E96_StaticFields
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
struct TypeTraits_1_t2CC90C31519F2DAF95C7F643DE417BCFE97C698C_StaticFields
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
struct TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields
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
struct TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields
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
struct TypeTraits_1_t0FE337A60044F2930698F87A52FFCF681FB47715_StaticFields
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
struct TypeTraits_1_tC8A6838D020F659D649CBD833D68D21FF989D9AD_StaticFields
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
struct TypeTraits_1_tE208CC239AE748DF86153C46E3E53BC1B4803FE6_StaticFields
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
struct TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields
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
struct TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields
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
struct TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields
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
struct TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields
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
struct TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields
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
struct TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields
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
struct TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields
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
struct TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields
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
struct TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields
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
struct TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields
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
struct TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields
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
struct TypeTraits_1_t0671FE8E5B12D2B48C84E8F9F22F08BE9CA2FB84_StaticFields
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
struct TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields
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
struct TypeTraits_1_tEF6310A0910FEA8D9823620EA14ACAEC9AE964AD_StaticFields
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
struct TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields
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
struct TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields
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
struct TypeTraits_1_tF87930A08DE9EF913CCD9ADBE4F0515D6A46B444_StaticFields
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
struct TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields
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
struct TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields
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
struct TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields
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
struct TypeTraits_1_t4BC1505B3A69B29873280F3486B77BCC7D4E4404_StaticFields
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
struct TypeTraits_1_t4CFE7EF9DB9BB1CAE6CCA93CF3D6BE4308502C60_StaticFields
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
struct TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields
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
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
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
struct JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231_StaticFields
{
	SerializedIdProperty_tC288BDFA559889145732E5D454D0477B0F30047F* ___s_SerializedIdProperty;
	SerializedTypeProperty_tCF1F8B9984C9FCA9FBFF60D17A3264429A481AA7* ___s_SerializedTypeProperty;
	SerializedVersionProperty_t7BD2B75FCD30579F5D6090EA270A2594F8B65724* ___s_SerializedVersionProperty;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCF3C145DE3467525446E1F7CAB869E173EFBB03D (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4496F2159EF66681EEB4A7E7D31B69261C701B51_gshared (Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B* ___0_property, Il2CppSharedGenericObject** ___1_container, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA348947A76168A136330BCF5679AF4637059FDCE (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m885C3604C4B823F16840294C26C79428C8DA9FEB_gshared (Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* ___0_property, Il2CppSharedGenericObject** ___1_container, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mFE4D4A25583B1FFA3A4BC1455F16D3DF2BA24505 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mCC3A2108B7C13EA6ABEE7C8835BCFD6E1CD1BCD6_gshared (Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* ___0_property, Il2CppSharedGenericObject** ___1_container, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m3AB154B55C0A1F7EA019AC28BBCCAB78C90AB161 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m7640CB03066D8BEFCD3F67C6262309C5BE71A2C0_gshared (Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* ___0_property, Il2CppSharedGenericObject** ___1_container, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m885E7EB07895C87040A686A35CFEC81BBD666836 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC2A61D4ED5C475CD822A0696E111A44A600D77B2_gshared (Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809* ___0_property, Il2CppSharedGenericObject** ___1_container, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC4A1AC19BAAEBA8880B8BE0B3F59A6AB23F16865 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, float* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m54FFD7C7CB280262009FBBD75896269FA535546C_gshared (Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* ___0_property, Il2CppSharedGenericObject** ___1_container, float* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mB6716834210E03B55812846EA31B6E6F44801EDB (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m62257F5563A69FB91F73952FCB27A02E344D2B0F_gshared (Property_2_t20A025311CE5A099276CB813872583CED6D6E825* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m5C54CE7240CB8B60A1D821FDF133E01DD974BCDF (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m9CA56AA62BD99124AC841378CE37CCD4949A04C3_gshared (Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mB69919C818E8BDBB6CCCC66BD1F02582E970BBF5 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0BCAB10A8053541684703771DD5251ED5F75FE6A_gshared (Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m7FA6071BFCAC55131638176826CB972EF6653EA2 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m26B7AFE05867C85D05EBB7C0031DA06E70A32A21_gshared (Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m059997CA980FA2A95E0C5C25490DD635F8067745 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m24B420D60BF1B7D55A301BF0008DD3F272D3E088_gshared (Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mC2F6EFAD160B78370EFB76CCA150AB3BC498102E (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mF1F606BA9518A9D877512D9DC6044FC52B577C74_gshared (Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m0BCC9D1AE2FEB27BBE290F883FF2B9D99C619E0D (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mAB60608701E550308C2DDD0781BF665F0C307DA7_gshared (Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mE57644FE5A6DE3586F2D3A3745B24FCDEB35ABF4 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m71124942566EA255D590FDC95FFF47CFB808B380_gshared (Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m6A3D6F7DA37D1A69CB73F8901C9936B7DD32D428 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m61E37F67164B4CE051F65E9FBB068AF8D3C7AB5A_gshared (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m998DEF98D807D1331705BA1302590F58007CA1F1 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mD64C5B7D0A54CACACE121433618236815E1F7D2D_gshared (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m0D2976EA91E33E6898BE1A63BFD32EBC16F4E43C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mEF5C1D3EB345C7360CCEC77AB02BF0CDED0942A1_gshared (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mAADE9EC5955E05358B5A3D86FFD56218B99F3D62 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1B945F28CB0B5B6842B4B21C845B92FA03EF89BF_gshared (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mD12A3C7734AFFD5C6297F33EA75D008304FFF6FF (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mAE69D7245D617F13CDAB15DE9C5D1D8B5425FDDE_gshared (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* ___0_property, Il2CppSharedGenericObject** ___1_container, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m98FD30F3AE99CE1B79975F4D08EB6EB72D5311B4 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m1D04E22A905D590C69DE60802C8237C1CCB446B8_gshared (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m55C3420D663AEE2B0DB7FA161797059717FA0674 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3772F064575D19A9E11FFA224EF55B8C880CFC37_gshared (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mE0EEEE631946642C0D9526EE6ACD0AAA775A26B1 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m4EEFB463411D07CFA76AF98579D1CD4D1A0FB978_gshared (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m8DE92B0721AFDD6310299C6E307E487D9FD186E7 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mDBE6E1E048D16B62F4D3804EA734569554BD7EA1_gshared (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m07982991AED9E83ABCA5A0CC279016F4C21BA240 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mD9D607F0A7FB0D2FC2871D0AA2AE3F0A58DDC231_gshared (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m553B26CDA90602FCFA8CC744F0F6AA6047A4E367 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mBDA566347BC06134235834E38F91CBC370EB8D86_gshared (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m2F148F28EC2671E9258DA86357913ABFD0407D88 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mF7B4AFAF90DCDB7F8A94187812EDCF2E6244A7E3_gshared (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m7E35E9733D1F626AEB50AAD1E5E4EE74BCF99676 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mA23DD61F56DE5314E871E464F77DACF17DEBA4D8_gshared (Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB65256EFBC205AD8332D43DD83B2A8CFB6352A71 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m48732DDBDA76F4F9226B93BF831F18C2F0A5CDF8_gshared (Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* ___0_property, Il2CppSharedGenericObject** ___1_container, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m610639040E05B9A88FBD352A9C9EB9218141966C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m700870671A6B27D88BD088DFC4276D5C9987BB8E_gshared (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* ___0_property, Il2CppSharedGenericObject** ___1_container, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m08E91A9C4A7A64CDD1D7AA52EA3C00829D787285 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAAFA516C8D072CF1B36F18751E2AE82A0A8C9EE7_gshared (Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC* ___0_property, Il2CppSharedGenericObject** ___1_container, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C601217137044C68E9B7EDB100F451F41F2BF96 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4382894B1CD3598B7782C01A62AADBDFD836BA45_gshared (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* ___0_property, Il2CppSharedGenericObject** ___1_container, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mE5CAB96AB8F870825F79CAF9ACE4259EDC5D03AE (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m710679318C07A4FAD9920DA24866242604550254_gshared (Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9* ___0_property, Il2CppSharedGenericObject** ___1_container, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Il2CppSharedGenericObject** ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mE87C95D88C0DE6933438938E9F0E51813382F79F_gshared (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* ___0_property, Il2CppSharedGenericObject** ___1_container, Il2CppSharedGenericObject** ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mB38C9FE7234745CE0F3203FF6C3DC1FD389AD8B0_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, int32_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m49973C1E65ED8B09AA88B55097C7839A05B63148_gshared (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* ___0_property, Il2CppSharedGenericObject** ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9BE4BF6F205B68D749830A9C339454E7775D2B09 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, int32_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m884FCE817528BD9A92657C0D14B042AFBF377E0C (Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214* ___0_property, SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC* ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9_TisIl2CppSharedGenericObject_m2C3D81C90A7261D70761F23ABFA60218180B3520_gshared (Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0* ___0_property, SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9* ___1_container, Il2CppSharedGenericObject** ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB7B8D35CB8B9676A21E5F537C3F22C7FF4BAD8A8 (Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223* ___0_property, SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7* ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m05C24B984ED5E003760111FCE688D4201B821D4D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m63198A74A6507D9DF5B16781B6E6DFBDCA13DACF_gshared (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mE8B20E6C97EC4F9D67C80720AAD48B435CBFE216_gshared (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m867CE27CD24B93F1C71D3CE45B94C1079523FBB8 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m8230756E22CA6E43E10FF2E8341714EA85C96C23 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m7BF17CAA828E327B35F8A45AFF880A01B8886A61 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m80CCBD2C014FD184B680F08C07821C3CB78C678B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m2736544205B762AEB6A96790F8A09EAAC8DE8EA8 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m56D3700161EE0CC9EA1C7462B619328C050C112C (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m0CA828005833C88942CFDA543E78E2E2751E7281 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF5A2D199795A7C8B59DC2182C6C2424545ACEECA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m3C78374D1B41C28E77378E6BE5A463B116B8687A (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4237C08CBF0577AA35F784336981CA080D432B01 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m0A6604598F0F03BFF6D0F7C881781AD5B8C90D3B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5B2E6F596C59B8068C8531DDA4DA8EE9017D0986 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m23B4B3B276C33BB228E3110C24D6B6EC969FC891 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m236E31A4E861874EDE8971FD85FEF14707214331 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m344B8CBDC6A75A996CA619FAEEA32844645DA350 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mE6561A1021C097D5B7F7BAA72E4169D882A5F0F7 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m00B9284D9252158A0069165DAA5F073C84E9AB68 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m91BC8626D79E7B4C9D4A9980B0631651325DE31F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DF819650B3509475FF723759D53D05F23C6999 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA7D0A6B7D07116F35A4BF94D3C23B25757F14DC3 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m9A15042C84BC982D2CFECE3776CF7E727DE684F4 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m993EF6F6012EC564EDF962ABD0D30A809DB4294F (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m5CB3F617F2C76F727BAE0EAA00E1849C6B787932 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE651736FFB9D2F9E2A6EBC3AEB89F31CEC4FC30D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBFB2AD144330663C18B55DD1FC2A8EF526EBA025_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC6A2E63A68E51944068061F612EE638E72BC8E7B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m8F7CA8C1377860B4F47CC0D6A28525E64D9517A6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m273AD0D18397D56AF315DAF57DFB27DD4FD1C1D3 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0A6B9FF2C17F6D0FC03E49E1820FFFDF376C2E0D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m93B9BE89D187CE4DE54655FC8E79C21A80067FDB (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mDD61931C1B047D44EFD1C54158194AFE517CEEAA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m83FC6ADAF40A2737CFC01503A6E925AEF1F2D820 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m7386FE58D1B6D5928CAAFFB503CD812A45542428 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m98E585835D34CCB96B16F30DD0220D0BD78658B2 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m1B6AB5F94246287C5D81FF26E57AC66133EDC960 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m33FB5DB5DD3B2970869A7DE90B38ED0930E2002C (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m8E45D555F23AF25A0D9ED79700D2FEECB7CF7872 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mB7431DCBEDEFF111011CA9517BBB631428308519 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1B8BFA4C9BD8DFC817394CD997A8F159C7A3FD81 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m0D6C5E742F85F1575A901E2CDB3769A270CAB113 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m012405968D1304341EE78DE223F7A48FB5451B7D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8E777BA813D4666A35C41D9A5387DE4DB9F4C3F6 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m30A270989DB143BC69EBDA624ECFAA0C04EE7C05 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m1A3F8F7F986E5F79443EA32C0B2BA0B0685CF714 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m32C6D30C386B6E438683C0360696117CDD1E20F8 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m4D2A18658522FE673F4E477CAF4878C2DD1C702E (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB30352A507841B59CEEE6FBF7D3B081736DB8269 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mE01733076CC927D6624527037712FC3C52E98CCD (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m2EAD1BBCEBC9B3ECCC8A058D7A2BF5EAE3F283DF (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m830983F662C903FF252D67F2135458E8871225BA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE959270386DDBD289CF70FAC36A02D47138982E7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mF5494B869B8E56F9584715B5A503AF52938ACC9B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m09DC351DA422FB2626B12838F5FFED98C5EC4F48 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m618608405C88E438B580204CACF3CC4009F87AAE (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m33721C3206790908F95C4F736E10D66AC606B185 (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCF3C145DE3467525446E1F7CAB869E173EFBB03D (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4496F2159EF66681EEB4A7E7D31B69261C701B51 (Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B* ___0_property, Il2CppSharedGenericObject** ___1_container, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B*, Il2CppSharedGenericObject**, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4496F2159EF66681EEB4A7E7D31B69261C701B51_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A (DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9* __this, int32_t ___0_type, RuntimeObject* ___1_payload, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA348947A76168A136330BCF5679AF4637059FDCE (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m885C3604C4B823F16840294C26C79428C8DA9FEB (Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* ___0_property, Il2CppSharedGenericObject** ___1_container, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852*, Il2CppSharedGenericObject**, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m885C3604C4B823F16840294C26C79428C8DA9FEB_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mFE4D4A25583B1FFA3A4BC1455F16D3DF2BA24505 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mCC3A2108B7C13EA6ABEE7C8835BCFD6E1CD1BCD6 (Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* ___0_property, Il2CppSharedGenericObject** ___1_container, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676*, Il2CppSharedGenericObject**, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mCC3A2108B7C13EA6ABEE7C8835BCFD6E1CD1BCD6_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m3AB154B55C0A1F7EA019AC28BBCCAB78C90AB161 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m7640CB03066D8BEFCD3F67C6262309C5BE71A2C0 (Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* ___0_property, Il2CppSharedGenericObject** ___1_container, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3*, Il2CppSharedGenericObject**, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m7640CB03066D8BEFCD3F67C6262309C5BE71A2C0_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m885E7EB07895C87040A686A35CFEC81BBD666836 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC2A61D4ED5C475CD822A0696E111A44A600D77B2 (Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809* ___0_property, Il2CppSharedGenericObject** ___1_container, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809*, Il2CppSharedGenericObject**, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC2A61D4ED5C475CD822A0696E111A44A600D77B2_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC4A1AC19BAAEBA8880B8BE0B3F59A6AB23F16865 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, float* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m54FFD7C7CB280262009FBBD75896269FA535546C (Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* ___0_property, Il2CppSharedGenericObject** ___1_container, float* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4*, Il2CppSharedGenericObject**, float*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m54FFD7C7CB280262009FBBD75896269FA535546C_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mB6716834210E03B55812846EA31B6E6F44801EDB (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m62257F5563A69FB91F73952FCB27A02E344D2B0F (Property_2_t20A025311CE5A099276CB813872583CED6D6E825* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t20A025311CE5A099276CB813872583CED6D6E825*, Il2CppSharedGenericObject**, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m62257F5563A69FB91F73952FCB27A02E344D2B0F_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m5C54CE7240CB8B60A1D821FDF133E01DD974BCDF (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m9CA56AA62BD99124AC841378CE37CCD4949A04C3 (Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298*, Il2CppSharedGenericObject**, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m9CA56AA62BD99124AC841378CE37CCD4949A04C3_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mB69919C818E8BDBB6CCCC66BD1F02582E970BBF5 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0BCAB10A8053541684703771DD5251ED5F75FE6A (Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6*, Il2CppSharedGenericObject**, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0BCAB10A8053541684703771DD5251ED5F75FE6A_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m7FA6071BFCAC55131638176826CB972EF6653EA2 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m26B7AFE05867C85D05EBB7C0031DA06E70A32A21 (Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77*, Il2CppSharedGenericObject**, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m26B7AFE05867C85D05EBB7C0031DA06E70A32A21_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m059997CA980FA2A95E0C5C25490DD635F8067745 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m24B420D60BF1B7D55A301BF0008DD3F272D3E088 (Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB*, Il2CppSharedGenericObject**, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m24B420D60BF1B7D55A301BF0008DD3F272D3E088_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mC2F6EFAD160B78370EFB76CCA150AB3BC498102E (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mF1F606BA9518A9D877512D9DC6044FC52B577C74 (Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F*, Il2CppSharedGenericObject**, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mF1F606BA9518A9D877512D9DC6044FC52B577C74_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m0BCC9D1AE2FEB27BBE290F883FF2B9D99C619E0D (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mAB60608701E550308C2DDD0781BF665F0C307DA7 (Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158*, Il2CppSharedGenericObject**, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mAB60608701E550308C2DDD0781BF665F0C307DA7_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mE57644FE5A6DE3586F2D3A3745B24FCDEB35ABF4 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m71124942566EA255D590FDC95FFF47CFB808B380 (Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD*, Il2CppSharedGenericObject**, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m71124942566EA255D590FDC95FFF47CFB808B380_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m6A3D6F7DA37D1A69CB73F8901C9936B7DD32D428 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m61E37F67164B4CE051F65E9FBB068AF8D3C7AB5A (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56*, Il2CppSharedGenericObject**, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m61E37F67164B4CE051F65E9FBB068AF8D3C7AB5A_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m998DEF98D807D1331705BA1302590F58007CA1F1 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mD64C5B7D0A54CACACE121433618236815E1F7D2D (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D*, Il2CppSharedGenericObject**, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mD64C5B7D0A54CACACE121433618236815E1F7D2D_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m0D2976EA91E33E6898BE1A63BFD32EBC16F4E43C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mEF5C1D3EB345C7360CCEC77AB02BF0CDED0942A1 (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA*, Il2CppSharedGenericObject**, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mEF5C1D3EB345C7360CCEC77AB02BF0CDED0942A1_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mAADE9EC5955E05358B5A3D86FFD56218B99F3D62 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1B945F28CB0B5B6842B4B21C845B92FA03EF89BF (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA*, Il2CppSharedGenericObject**, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1B945F28CB0B5B6842B4B21C845B92FA03EF89BF_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mD12A3C7734AFFD5C6297F33EA75D008304FFF6FF (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mAE69D7245D617F13CDAB15DE9C5D1D8B5425FDDE (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* ___0_property, Il2CppSharedGenericObject** ___1_container, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C*, Il2CppSharedGenericObject**, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mAE69D7245D617F13CDAB15DE9C5D1D8B5425FDDE_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m98FD30F3AE99CE1B79975F4D08EB6EB72D5311B4 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m1D04E22A905D590C69DE60802C8237C1CCB446B8 (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F*, Il2CppSharedGenericObject**, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m1D04E22A905D590C69DE60802C8237C1CCB446B8_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m55C3420D663AEE2B0DB7FA161797059717FA0674 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3772F064575D19A9E11FFA224EF55B8C880CFC37 (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585*, Il2CppSharedGenericObject**, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3772F064575D19A9E11FFA224EF55B8C880CFC37_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mE0EEEE631946642C0D9526EE6ACD0AAA775A26B1 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m4EEFB463411D07CFA76AF98579D1CD4D1A0FB978 (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020*, Il2CppSharedGenericObject**, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m4EEFB463411D07CFA76AF98579D1CD4D1A0FB978_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m8DE92B0721AFDD6310299C6E307E487D9FD186E7 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mDBE6E1E048D16B62F4D3804EA734569554BD7EA1 (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20*, Il2CppSharedGenericObject**, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mDBE6E1E048D16B62F4D3804EA734569554BD7EA1_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m07982991AED9E83ABCA5A0CC279016F4C21BA240 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mD9D607F0A7FB0D2FC2871D0AA2AE3F0A58DDC231 (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9*, Il2CppSharedGenericObject**, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mD9D607F0A7FB0D2FC2871D0AA2AE3F0A58DDC231_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m553B26CDA90602FCFA8CC744F0F6AA6047A4E367 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mBDA566347BC06134235834E38F91CBC370EB8D86 (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8*, Il2CppSharedGenericObject**, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mBDA566347BC06134235834E38F91CBC370EB8D86_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m2F148F28EC2671E9258DA86357913ABFD0407D88 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mF7B4AFAF90DCDB7F8A94187812EDCF2E6244A7E3 (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED*, Il2CppSharedGenericObject**, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mF7B4AFAF90DCDB7F8A94187812EDCF2E6244A7E3_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m7E35E9733D1F626AEB50AAD1E5E4EE74BCF99676 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mA23DD61F56DE5314E871E464F77DACF17DEBA4D8 (Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3*, Il2CppSharedGenericObject**, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mA23DD61F56DE5314E871E464F77DACF17DEBA4D8_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB65256EFBC205AD8332D43DD83B2A8CFB6352A71 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m48732DDBDA76F4F9226B93BF831F18C2F0A5CDF8 (Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* ___0_property, Il2CppSharedGenericObject** ___1_container, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029*, Il2CppSharedGenericObject**, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m48732DDBDA76F4F9226B93BF831F18C2F0A5CDF8_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m610639040E05B9A88FBD352A9C9EB9218141966C (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m700870671A6B27D88BD088DFC4276D5C9987BB8E (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* ___0_property, Il2CppSharedGenericObject** ___1_container, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F*, Il2CppSharedGenericObject**, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m700870671A6B27D88BD088DFC4276D5C9987BB8E_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m08E91A9C4A7A64CDD1D7AA52EA3C00829D787285 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAAFA516C8D072CF1B36F18751E2AE82A0A8C9EE7 (Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC* ___0_property, Il2CppSharedGenericObject** ___1_container, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC*, Il2CppSharedGenericObject**, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAAFA516C8D072CF1B36F18751E2AE82A0A8C9EE7_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C601217137044C68E9B7EDB100F451F41F2BF96 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4382894B1CD3598B7782C01A62AADBDFD836BA45 (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* ___0_property, Il2CppSharedGenericObject** ___1_container, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89*, Il2CppSharedGenericObject**, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4382894B1CD3598B7782C01A62AADBDFD836BA45_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mE5CAB96AB8F870825F79CAF9ACE4259EDC5D03AE (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m710679318C07A4FAD9920DA24866242604550254 (Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9* ___0_property, Il2CppSharedGenericObject** ___1_container, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9*, Il2CppSharedGenericObject**, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m710679318C07A4FAD9920DA24866242604550254_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Il2CppSharedGenericObject** ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppSharedGenericObject**, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mE87C95D88C0DE6933438938E9F0E51813382F79F (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* ___0_property, Il2CppSharedGenericObject** ___1_container, Il2CppSharedGenericObject** ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452*, Il2CppSharedGenericObject**, Il2CppSharedGenericObject**, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mE87C95D88C0DE6933438938E9F0E51813382F79F_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mB38C9FE7234745CE0F3203FF6C3DC1FD389AD8B0 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, int32_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, int32_t*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mB38C9FE7234745CE0F3203FF6C3DC1FD389AD8B0_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m49973C1E65ED8B09AA88B55097C7839A05B63148 (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* ___0_property, Il2CppSharedGenericObject** ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A*, Il2CppSharedGenericObject**, int32_t*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m49973C1E65ED8B09AA88B55097C7839A05B63148_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9BE4BF6F205B68D749830A9C339454E7775D2B09 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, int32_t* ___0_value, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m884FCE817528BD9A92657C0D14B042AFBF377E0C (Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214* ___0_property, SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC* ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9_TisIl2CppSharedGenericObject_m2C3D81C90A7261D70761F23ABFA60218180B3520 (Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0* ___0_property, SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9* ___1_container, Il2CppSharedGenericObject** ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0*, SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9*, Il2CppSharedGenericObject**, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9_TisIl2CppSharedGenericObject_m2C3D81C90A7261D70761F23ABFA60218180B3520_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB7B8D35CB8B9676A21E5F537C3F22C7FF4BAD8A8 (Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223* ___0_property, SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7* ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 UnsafeValueView_AsObjectView_m6290F9D3141103E3E4AE96191812A43B3E989F64 (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E UnsafeObjectView_get_Item_m660688D6D93C8B833FC13832E677DAAA0883784A (UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeValueView_get_Type_m3C8846F758989E5350799BBFDDAE7BFB4AD3D863 (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 UnsafeValueView_AsArrayView_mCFB893A04F5B3C21F99BD38D92827E3F94F59C31 (UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611 (UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool TypeTraits_1_get_IsValueType_m05C24B984ED5E003760111FCE688D4201B821D4D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m05C24B984ED5E003760111FCE688D4201B821D4D_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, RuntimeObject* ___0_value, int32_t* ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline (JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m63198A74A6507D9DF5B16781B6E6DFBDCA13DACF (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m63198A74A6507D9DF5B16781B6E6DFBDCA13DACF_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mE8B20E6C97EC4F9D67C80720AAD48B435CBFE216 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mE8B20E6C97EC4F9D67C80720AAD48B435CBFE216_gshared)(__this, ___0_version, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m867CE27CD24B93F1C71D3CE45B94C1079523FBB8 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m8230756E22CA6E43E10FF2E8341714EA85C96C23 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m7BF17CAA828E327B35F8A45AFF880A01B8886A61 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m80CCBD2C014FD184B680F08C07821C3CB78C678B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m2736544205B762AEB6A96790F8A09EAAC8DE8EA8 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m56D3700161EE0CC9EA1C7462B619328C050C112C (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m0CA828005833C88942CFDA543E78E2E2751E7281 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF5A2D199795A7C8B59DC2182C6C2424545ACEECA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m3C78374D1B41C28E77378E6BE5A463B116B8687A (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4237C08CBF0577AA35F784336981CA080D432B01 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m0A6604598F0F03BFF6D0F7C881781AD5B8C90D3B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5B2E6F596C59B8068C8531DDA4DA8EE9017D0986 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m23B4B3B276C33BB228E3110C24D6B6EC969FC891 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m236E31A4E861874EDE8971FD85FEF14707214331 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m344B8CBDC6A75A996CA619FAEEA32844645DA350 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mE6561A1021C097D5B7F7BAA72E4169D882A5F0F7 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m00B9284D9252158A0069165DAA5F073C84E9AB68 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m91BC8626D79E7B4C9D4A9980B0631651325DE31F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DF819650B3509475FF723759D53D05F23C6999 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA7D0A6B7D07116F35A4BF94D3C23B25757F14DC3 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m9A15042C84BC982D2CFECE3776CF7E727DE684F4 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m993EF6F6012EC564EDF962ABD0D30A809DB4294F (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m5CB3F617F2C76F727BAE0EAA00E1849C6B787932 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE651736FFB9D2F9E2A6EBC3AEB89F31CEC4FC30D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBFB2AD144330663C18B55DD1FC2A8EF526EBA025_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC6A2E63A68E51944068061F612EE638E72BC8E7B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m8F7CA8C1377860B4F47CC0D6A28525E64D9517A6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m273AD0D18397D56AF315DAF57DFB27DD4FD1C1D3 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0A6B9FF2C17F6D0FC03E49E1820FFFDF376C2E0D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m93B9BE89D187CE4DE54655FC8E79C21A80067FDB (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mDD61931C1B047D44EFD1C54158194AFE517CEEAA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m83FC6ADAF40A2737CFC01503A6E925AEF1F2D820 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m7386FE58D1B6D5928CAAFFB503CD812A45542428 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m98E585835D34CCB96B16F30DD0220D0BD78658B2 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m1B6AB5F94246287C5D81FF26E57AC66133EDC960 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m33FB5DB5DD3B2970869A7DE90B38ED0930E2002C (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m8E45D555F23AF25A0D9ED79700D2FEECB7CF7872 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mB7431DCBEDEFF111011CA9517BBB631428308519 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1B8BFA4C9BD8DFC817394CD997A8F159C7A3FD81 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m0D6C5E742F85F1575A901E2CDB3769A270CAB113 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m012405968D1304341EE78DE223F7A48FB5451B7D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8E777BA813D4666A35C41D9A5387DE4DB9F4C3F6 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m30A270989DB143BC69EBDA624ECFAA0C04EE7C05 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m1A3F8F7F986E5F79443EA32C0B2BA0B0685CF714 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m32C6D30C386B6E438683C0360696117CDD1E20F8 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m4D2A18658522FE673F4E477CAF4878C2DD1C702E (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB30352A507841B59CEEE6FBF7D3B081736DB8269 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mE01733076CC927D6624527037712FC3C52E98CCD (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m2EAD1BBCEBC9B3ECCC8A058D7A2BF5EAE3F283DF (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m830983F662C903FF252D67F2135458E8871225BA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE959270386DDBD289CF70FAC36A02D47138982E7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mF5494B869B8E56F9584715B5A503AF52938ACC9B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m09DC351DA422FB2626B12838F5FFED98C5EC4F48 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m618608405C88E438B580204CACF3CC4009F87AAE (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m33721C3206790908F95C4F736E10D66AC606B185 (List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* __this, DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 ___0_item, const RuntimeMethod* method) ;
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m2728D22DB200A8FDB2D06F05F689CA3E7DAEC2FC_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCF3C145DE3467525446E1F7CAB869E173EFBB03D(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t40B34B6BFA484F11F632ED19F11B8076C63E233B* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4496F2159EF66681EEB4A7E7D31B69261C701B51(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m4FC4548FB1CC92305468D8E83A06A8E4042E904F_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_2;
		L_2 = VirtualFuncInvoker1< Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA348947A76168A136330BCF5679AF4637059FDCE(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m885C3604C4B823F16840294C26C79428C8DA9FEB(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mC44D97FBB1BF1574C9EE2FC968B422FCEAB35961_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_2;
		L_2 = VirtualFuncInvoker1< Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mFE4D4A25583B1FFA3A4BC1455F16D3DF2BA24505(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mCC3A2108B7C13EA6ABEE7C8835BCFD6E1CD1BCD6(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m74DF255169E8695624E62F83376F17BCD9BAB987_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_2;
		L_2 = VirtualFuncInvoker1< Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m3AB154B55C0A1F7EA019AC28BBCCAB78C90AB161(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m7640CB03066D8BEFCD3F67C6262309C5BE71A2C0(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mF36DA1FA0FD3791B7D4D48C801448469E9375D37_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_2;
		L_2 = VirtualFuncInvoker1< SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m885E7EB07895C87040A686A35CFEC81BBD666836(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tE6821AB2AA6805D94C061FB15BE2D0495CE2F809* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC2A61D4ED5C475CD822A0696E111A44A600D77B2(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0D48C75C8FA0DF12F3DFB077401A1301A7100454_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		float L_2;
		L_2 = VirtualFuncInvoker1< float, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC4A1AC19BAAEBA8880B8BE0B3F59A6AB23F16865(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		float L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, float >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m54FFD7C7CB280262009FBBD75896269FA535546C(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m23EEB37B79C1DF995D21FE916412E44CA5773002_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t20A025311CE5A099276CB813872583CED6D6E825* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_2;
		L_2 = VirtualFuncInvoker1< StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mB6716834210E03B55812846EA31B6E6F44801EDB(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m62257F5563A69FB91F73952FCB27A02E344D2B0F(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mB81F13E3E0D999E078973230E506C668CEBE19FF_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_2;
		L_2 = VirtualFuncInvoker1< StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m5C54CE7240CB8B60A1D821FDF133E01DD974BCDF(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m9CA56AA62BD99124AC841378CE37CCD4949A04C3(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m95B86B3046C70527B0CB2CC39A4435DF01F67E11_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_2;
		L_2 = VirtualFuncInvoker1< StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mB69919C818E8BDBB6CCCC66BD1F02582E970BBF5(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0BCAB10A8053541684703771DD5251ED5F75FE6A(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m103817F2CEF30405458AEE15CDF6DB7187144C00_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_2;
		L_2 = VirtualFuncInvoker1< StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m7FA6071BFCAC55131638176826CB972EF6653EA2(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m26B7AFE05867C85D05EBB7C0031DA06E70A32A21(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mFB87282E4FCA1D65F5EC495E449C506FE8445DE9_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_2;
		L_2 = VirtualFuncInvoker1< StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m059997CA980FA2A95E0C5C25490DD635F8067745(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m24B420D60BF1B7D55A301BF0008DD3F272D3E088(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m4A2F4DB53A5453C3C74DE018BBB89604EC3FEB54_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_2;
		L_2 = VirtualFuncInvoker1< StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mC2F6EFAD160B78370EFB76CCA150AB3BC498102E(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mF1F606BA9518A9D877512D9DC6044FC52B577C74(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m8AE1C0C3CD53CC0C6CF73AFEC995D5C779C733A2_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_2;
		L_2 = VirtualFuncInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m0BCC9D1AE2FEB27BBE290F883FF2B9D99C619E0D(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mAB60608701E550308C2DDD0781BF665F0C307DA7(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m33F651C962078406A6FE47E4A221EA6E08AFAA22_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_2;
		L_2 = VirtualFuncInvoker1< StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mE57644FE5A6DE3586F2D3A3745B24FCDEB35ABF4(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m71124942566EA255D590FDC95FFF47CFB808B380(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mEBB3CBB1824BFEBB23C1A7752F2B1281BF85799F_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_2;
		L_2 = VirtualFuncInvoker1< StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m6A3D6F7DA37D1A69CB73F8901C9936B7DD32D428(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m61E37F67164B4CE051F65E9FBB068AF8D3C7AB5A(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m3E0C7A05BF14F1E57FD55D9EA28C8A0C9E36AB08_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_2;
		L_2 = VirtualFuncInvoker1< StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m998DEF98D807D1331705BA1302590F58007CA1F1(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mD64C5B7D0A54CACACE121433618236815E1F7D2D(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m5BB2DCFAE6D3D5B4542E5EF80CC51CA0C2864409_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_2;
		L_2 = VirtualFuncInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m0D2976EA91E33E6898BE1A63BFD32EBC16F4E43C(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mEF5C1D3EB345C7360CCEC77AB02BF0CDED0942A1(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m71AD3A3E719C7C02269685AF3481C93437FEF5CF_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_2;
		L_2 = VirtualFuncInvoker1< StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mAADE9EC5955E05358B5A3D86FFD56218B99F3D62(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1B945F28CB0B5B6842B4B21C845B92FA03EF89BF(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mAF8528E359B1A4C599143ECE9C0F8CDBDF854E70_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_2;
		L_2 = VirtualFuncInvoker1< StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mD12A3C7734AFFD5C6297F33EA75D008304FFF6FF(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mAE69D7245D617F13CDAB15DE9C5D1D8B5425FDDE(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mCD13CFEE6CFAFEFA48BF7DA5EC41EAF084FDEA5C_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_2;
		L_2 = VirtualFuncInvoker1< StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m98FD30F3AE99CE1B79975F4D08EB6EB72D5311B4(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m1D04E22A905D590C69DE60802C8237C1CCB446B8(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m90039205A218B3F6FC0FA6C68C7EF05769BF4C0A_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_2;
		L_2 = VirtualFuncInvoker1< StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m55C3420D663AEE2B0DB7FA161797059717FA0674(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3772F064575D19A9E11FFA224EF55B8C880CFC37(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m19D701B9A7872CF72C328940E17F4D48FCC3C9B7_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_2;
		L_2 = VirtualFuncInvoker1< StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mE0EEEE631946642C0D9526EE6ACD0AAA775A26B1(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m4EEFB463411D07CFA76AF98579D1CD4D1A0FB978(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m960CB9DC7366174ED9E99BF64FA9DEE9F09847A0_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_2;
		L_2 = VirtualFuncInvoker1< StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m8DE92B0721AFDD6310299C6E307E487D9FD186E7(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mDBE6E1E048D16B62F4D3804EA734569554BD7EA1(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m10F6D1789A776FF33B1F6AF510916022B6D0EA8D_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_2;
		L_2 = VirtualFuncInvoker1< StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m07982991AED9E83ABCA5A0CC279016F4C21BA240(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mD9D607F0A7FB0D2FC2871D0AA2AE3F0A58DDC231(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3AC7C2F5EAB3E809B82924E871AE4CA22CF5AFF9_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_2;
		L_2 = VirtualFuncInvoker1< StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m553B26CDA90602FCFA8CC744F0F6AA6047A4E367(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mBDA566347BC06134235834E38F91CBC370EB8D86(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m264E97CF8A24BBCBB2CB4925B847C30524751517_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_2;
		L_2 = VirtualFuncInvoker1< StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m2F148F28EC2671E9258DA86357913ABFD0407D88(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mF7B4AFAF90DCDB7F8A94187812EDCF2E6244A7E3(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m8AB00B31B8568DF2A6E44BCC27D2A4A8892EBEB7_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_2;
		L_2 = VirtualFuncInvoker1< StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m7E35E9733D1F626AEB50AAD1E5E4EE74BCF99676(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mA23DD61F56DE5314E871E464F77DACF17DEBA4D8(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m273C7DB70ED806ADED00F7B2874A6435DEF6FFBB_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_2;
		L_2 = VirtualFuncInvoker1< TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB65256EFBC205AD8332D43DD83B2A8CFB6352A71(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m48732DDBDA76F4F9226B93BF831F18C2F0A5CDF8(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0C9E3EB4CDD79090D06E14C065BE5EFE4D9E0797_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2;
		L_2 = VirtualFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m610639040E05B9A88FBD352A9C9EB9218141966C(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m700870671A6B27D88BD088DFC4276D5C9987BB8E(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3E1B293A5305EF3FAE8ACB7A11E2EC08D6F78DF1_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m08E91A9C4A7A64CDD1D7AA52EA3C00829D787285(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t67509E843FD90B9D7146D70D03DF73D352B55FAC* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAAFA516C8D072CF1B36F18751E2AE82A0A8C9EE7(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30C3327BD99BE002E975C870AA072C6FED04278E_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C601217137044C68E9B7EDB100F451F41F2BF96(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4382894B1CD3598B7782C01A62AADBDFD836BA45(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m19E96A5F94FD7ABC1955A8F0E0AD542C01907A3A_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = VirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mE5CAB96AB8F870825F79CAF9ACE4259EDC5D03AE(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t2B1BB493C1350C98A8BAF47F0399386D3757CEC9* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m710679318C07A4FAD9920DA24866242604550254(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m0168BE53AF448ED995A7A2B3C8194C5ED57F0FC3_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Il2CppSharedGenericObject* L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Il2CppSharedGenericObject* >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mE87C95D88C0DE6933438938E9F0E51813382F79F(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mD22A0503D906BF7038BCDAD879D63EB388653A8F_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mB38C9FE7234745CE0F3203FF6C3DC1FD389AD8B0(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, int32_t >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m49973C1E65ED8B09AA88B55097C7839A05B63148(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m12A4B95DC1631D1F9331762B9D85DCC3BC5A7CA9_fshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t76E82D111089EF48772AE5104444F123074EF191 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t76E82D111089EF48772AE5104444F123074EF191);
	const Il2CppFullySharedGenericAny L_10 = L_2;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t76E82D111089EF48772AE5104444F123074EF191);
	memset(V_0, 0, SizeOf_TValue_t76E82D111089EF48772AE5104444F123074EF191);
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		NullCheck(L_0);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(16, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TValue_t76E82D111089EF48772AE5104444F123074EF191);
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppFullySharedGenericAny*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, (Il2CppFullySharedGenericAny*)V_0, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_8 = ___0_property;
		Il2CppFullySharedGenericAny* L_9 = ___1_container;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TValue_t76E82D111089EF48772AE5104444F123074EF191);
		NullCheck(L_8);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(17, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_10: *(void**)L_10));
		return;
	}

IL_0032:
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_11 = ___0_property;
		Il2CppFullySharedGenericAny* L_12 = ___1_container;
		bool L_13;
		L_13 = ((  bool (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, String_t**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, (Il2CppFullySharedGenericAny*)V_0, (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisSerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m033FB3461EF5246FE5655F644F0182D3F8E6E477 (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214* ___0_property, SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214* L_0 = ___0_property;
		SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC* >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9BE4BF6F205B68D749830A9C339454E7775D2B09(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214* L_8 = ___0_property;
		SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC* L_9 = ___1_container;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC*, int32_t >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tA63B61B5A86019976540DF4A18B4109FA9666214* L_11 = ___0_property;
		SerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC* L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedId_t1F0100A1EE426BE5873B545BB564BB0EB9C493AC_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m884FCE817528BD9A92657C0D14B042AFBF377E0C(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisSerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9_TisIl2CppSharedGenericObject_mBF937AA6C272975012FE23A6903D488074FDCDEC_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0* ___0_property, SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0* L_0 = ___0_property;
		SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9* L_1 = ___1_container;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9* >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0* L_8 = ___0_property;
		SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9* L_9 = ___1_container;
		Il2CppSharedGenericObject* L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9*, Il2CppSharedGenericObject* >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tEF14EC83025CD1FC373BF789B4B67FFF1612EBA0* L_11 = ___0_property;
		SerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9* L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedType_tDC77E92139A74DF52EF8D435C546C1B727B175B9_TisIl2CppSharedGenericObject_m2C3D81C90A7261D70761F23ABFA60218180B3520(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisSerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2B0DCDD8C5DD0D03B9575D931E0ED60FD3001D3E (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223* ___0_property, SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223* L_0 = ___0_property;
		SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7* >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9BE4BF6F205B68D749830A9C339454E7775D2B09(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223* L_8 = ___0_property;
		SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7* L_9 = ___1_container;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7*, int32_t >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t3742EBB0C496101759CCB31FA92F519CF97E2223* L_11 = ___0_property;
		SerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7* L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedVersion_t513A19AD05DEB5A2EB3EA3DBCAE467E99E9501D7_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB7B8D35CB8B9676A21E5F537C3F22C7FF4BAD8A8(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tE7EB1F85ABDA864F047757B1A9C0C22C2F0A4BFD* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tAE7E551A20846E5DFD9A9EECDA47DC7C1942DEAB* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA* L_17 = (SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA*)il2cpp_codegen_object_new(SerializationException_t0C6ACBE3B45CD020592E48470DBAE8F9B1C4BFCA_il2cpp_TypeInfo_var);
		SerializationException__ctor_mBDA4A5AD4FF6072512F11AE5FC2C227985622A5C(L_17, L_16, NULL);
		DeserializationEvent_tE73A6EA9DA88061C7C9F1C93CCF1617756E9E2A9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m764E62C4401CE492B4682A6EE1B3043E59F7CE4A((&L_18), 4, L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_inline(L_15, L_18, List_1_Add_m6E4D55D4E5A421BEFFB3823AF82AA6BFB4D72F3F_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 87439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_ISetPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m4B7E81EE18FAE4D5755A23FE9620A64E77E93C86_gshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppSharedGenericObject* V_5 = NULL;
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
		Il2CppSharedGenericObject** L_9 = ___1_container;
		NullCheck((RuntimeObject*)(*L_9));
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 1), (RuntimeObject*)(*L_9));
		RuntimeObject* L_10;
		L_10 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{
				{
					RuntimeObject* L_11 = V_3;
					if (!L_11)
					{
						goto IL_0099;
					}
				}
				{
					RuntimeObject* L_12 = V_3;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0099:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0086_1;
			}

IL_005c_1:
			{
				RuntimeObject* L_13 = V_3;
				NullCheck(L_13);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_14;
				L_14 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_13);
				V_4 = L_14;
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_15 = V_4;
				JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_mDB570FB089FB820954B8473F1DE5C23AEC431695(__this, (&V_5), L_15, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 4));
				Il2CppSharedGenericObject** L_16 = ___1_container;
				Il2CppSharedGenericObject* L_17 = V_5;
				NullCheck((RuntimeObject*)(*L_16));
				bool L_18;
				L_18 = InterfaceFuncInvoker1< bool, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 6), (RuntimeObject*)(*L_16), L_17);
			}

IL_0086_1:
			{
				RuntimeObject* L_19 = V_3;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_005c_1;
				}
			}
			{
				goto IL_009a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		return;
	}
}
// Method Definition Index: 87439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_ISetPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m181D3CB8161FB29C48980BFC0E7DE5E7D705741E_fshared (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TElement_t8406C15F449AFB824E76ADA484898E5429A9CBE0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TElement_t8406C15F449AFB824E76ADA484898E5429A9CBE0);
	//<source_info:<no-source>:1>
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_tFCB99765E2952C52ED7A425BC5032AF0D5D444D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tD5008393002152AFDA51B8951B8224C8A8336541 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TElement_t8406C15F449AFB824E76ADA484898E5429A9CBE0);
	memset(V_5, 0, SizeOf_TElement_t8406C15F449AFB824E76ADA484898E5429A9CBE0);
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
		Il2CppFullySharedGenericAny* L_9 = ___1_container;
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_9, &L_11, L_10);
		typedef void ( *func_L_13)(void*,const RuntimeMethod*);
		((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		RuntimeObject* L_14;
		L_14 = UnsafeArrayView_GetEnumerator_m006714BB2A11F1D710C1C908C9D27962D7F70611((&V_1), NULL);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{
				{
					RuntimeObject* L_15 = V_3;
					if (!L_15)
					{
						goto IL_0099;
					}
				}
				{
					RuntimeObject* L_16 = V_3;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_0099:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0086_1;
			}

IL_005c_1:
			{
				RuntimeObject* L_17 = V_3;
				NullCheck(L_17);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_18;
				L_18 = InterfaceFuncInvoker0< UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E >::Invoke(0, IEnumerator_1_t2B23125AD9A617D3BB4C5E250285E61616BB81D0_il2cpp_TypeInfo_var, L_17);
				V_4 = L_18;
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_TElement_t8406C15F449AFB824E76ADA484898E5429A9CBE0);
				UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E L_19 = V_4;
				((  void (*) (JsonPropertyReader_t306DCAF5A5E87D6E2619E2FEEB80AD83A639BC3E*, Il2CppFullySharedGenericAny*, UnsafeValueView_t22D78AC75DA41B64FDEDA057EB40FF5EE943822E, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(__this, (Il2CppFullySharedGenericAny*)V_5, L_19, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 4));
				Il2CppFullySharedGenericAny* L_20 = ___1_container;
				il2cpp_codegen_memcpy(L_21, V_5, SizeOf_TElement_t8406C15F449AFB824E76ADA484898E5429A9CBE0);
				Il2CppConstrainedCallData L_23;
				Il2CppMethodPointer L_24 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)L_20, &L_23, L_22);
				InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_24, L_23.method,L_23.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_21: *(void**)L_21));
			}

IL_0086_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_005c_1;
				}
			}
			{
				goto IL_009a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		return;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m03DA6F728D7AF275DAE2C7FDD35572352C04FC19_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m05C24B984ED5E003760111FCE688D4201B821D4D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_12 = ___0_container;
		Il2CppFakeBox<PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22* L_16 = ___0_container;
		PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 L_17 = (*(PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22*)L_16);
		PropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisPropertyWrapper_1_t5758944BDFEFF5F53115891F0ABBCD0E38449D22_m63198A74A6507D9DF5B16781B6E6DFBDCA13DACF(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m2529705D985CA19815FFA580677CFC1AF6D0EA1F_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_12 = ___0_container;
		Il2CppFakeBox<StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_16 = ___0_container;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_17 = (*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_16);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mE8B20E6C97EC4F9D67C80720AAD48B435CBFE216(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB0C2813873C4BD30E6965DA3BA0F2C509265EEEF (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_12 = ___0_container;
		Il2CppFakeBox<StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_16 = ___0_container;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_17 = (*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_16);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m867CE27CD24B93F1C71D3CE45B94C1079523FBB8(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m58719C35E23628099E8F3317725FADE2E68A0617 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_12 = ___0_container;
		Il2CppFakeBox<StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_16 = ___0_container;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_17 = (*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_16);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m8230756E22CA6E43E10FF2E8341714EA85C96C23(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m92E34BE4E1152F52C039F9FF6236C0E9499AC6AE (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_12 = ___0_container;
		Il2CppFakeBox<StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_16 = ___0_container;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_17 = (*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_16);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m7BF17CAA828E327B35F8A45AFF880A01B8886A61(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m0DD55B621AB32CC80A7CA31D54ABE787FFC4167E (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_12 = ___0_container;
		Il2CppFakeBox<StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_16 = ___0_container;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_17 = (*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_16);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m80CCBD2C014FD184B680F08C07821C3CB78C678B(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mFC217E329C0E433958DDB009DBE5E508EF44B954 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_12 = ___0_container;
		Il2CppFakeBox<Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_16 = ___0_container;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_17 = (*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_16);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m2736544205B762AEB6A96790F8A09EAAC8DE8EA8(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m07E057736DC6F140D420D3256B767C31F21DDD79 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_12 = ___0_container;
		Il2CppFakeBox<Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_16 = ___0_container;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_17 = (*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_16);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m56D3700161EE0CC9EA1C7462B619328C050C112C(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mB9C600D4D8D81C386A8BCF738BC9058C43001B21 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_12 = ___0_container;
		Il2CppFakeBox<BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_16 = ___0_container;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_17 = (*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_16);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m0CA828005833C88942CFDA543E78E2E2751E7281(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m795E04A8BE09BD12F23A43D5E9B012A6B0013864 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_12 = ___0_container;
		Il2CppFakeBox<BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_16 = ___0_container;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_17 = (*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_16);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF5A2D199795A7C8B59DC2182C6C2424545ACEECA(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m90261866DC3A3E137F17F7C8998428759412A174 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_12 = ___0_container;
		Il2CppFakeBox<BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_16 = ___0_container;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_17 = (*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_16);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m3C78374D1B41C28E77378E6BE5A463B116B8687A(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mFE0AC26BAF6B258E4F91851404E1A02D21583FA4 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12 = ___0_container;
		Il2CppFakeBox<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = ___0_container;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = (*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_16);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4237C08CBF0577AA35F784336981CA080D432B01(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m9249BE0406735FF82E56B7C761610789E1A9054C (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_12 = ___0_container;
		Il2CppFakeBox<BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_16 = ___0_container;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_17 = (*(BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*)L_16);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m0A6604598F0F03BFF6D0F7C881781AD5B8C90D3B(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m06DE140CDFB9FE3A485B145FE57ADAE62C262FEA (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = ___0_container;
		Il2CppFakeBox<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = ___0_container;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5B2E6F596C59B8068C8531DDA4DA8EE9017D0986(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m5907B300676FDE08EBC8F8A5FB67983515DDA296 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_12 = ___0_container;
		Il2CppFakeBox<Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_16 = ___0_container;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_17 = (*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_16);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m23B4B3B276C33BB228E3110C24D6B6EC969FC891(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mE1E90CC873634967ED9B8DA73E3D20F38C668151 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_12 = ___0_container;
		Il2CppFakeBox<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_16 = ___0_container;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_17 = (*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_16);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m236E31A4E861874EDE8971FD85FEF14707214331(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mA6DD9D17E56035C9E71F126B931400A270E6417B (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_12 = ___0_container;
		Il2CppFakeBox<FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_16 = ___0_container;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_17 = (*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_16);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m344B8CBDC6A75A996CA619FAEEA32844645DA350(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m867294BA6D563E83FF963016FB40736654A572D4 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_12 = ___0_container;
		Il2CppFakeBox<Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_16 = ___0_container;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_17 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_16);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mE6561A1021C097D5B7F7BAA72E4169D882A5F0F7(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m02D66CCB6AA25B13A383C868FBEEA48AC5D2F205 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_12 = ___0_container;
		Il2CppFakeBox<MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_16 = ___0_container;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_17 = (*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_16);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m00B9284D9252158A0069165DAA5F073C84E9AB68(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA10697A63C74FCDCF1A0AB8B5E7904768E86A638 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m91BC8626D79E7B4C9D4A9980B0631651325DE31F_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_12 = ___0_container;
		Il2CppFakeBox<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_16 = ___0_container;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DF819650B3509475FF723759D53D05F23C6999(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAA7E16C3D92F8D97B2F3874BB2AEFD106580E65D (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_12 = ___0_container;
		Il2CppFakeBox<Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_16 = ___0_container;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_17 = (*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_16);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA7D0A6B7D07116F35A4BF94D3C23B25757F14DC3(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m4B26852BB5BC61FBC532090B4BC997A10022FD2E (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_12 = ___0_container;
		Il2CppFakeBox<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = ___0_container;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_16);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m9A15042C84BC982D2CFECE3776CF7E727DE684F4(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m73B0BB7D6F78C98913343EC592FF142B3A3C013E (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_12 = ___0_container;
		Il2CppFakeBox<RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_16 = ___0_container;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_17 = (*(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*)L_16);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m993EF6F6012EC564EDF962ABD0D30A809DB4294F(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m6D9DA3CFE29BF5DC6FF77511010A154D8AF75073 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_12 = ___0_container;
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_16 = ___0_container;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_17 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_16);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m5CB3F617F2C76F727BAE0EAA00E1849C6B787932(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m5C3E50FEAD2F74790790C4FE3843BEC1CB5926C7 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_12 = ___0_container;
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_16 = ___0_container;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_17 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_16);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE651736FFB9D2F9E2A6EBC3AEB89F31CEC4FC30D(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mA35FA78B6EC2683698597B686416D204B108DE42 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mBFB2AD144330663C18B55DD1FC2A8EF526EBA025_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_12 = ___0_container;
		Il2CppFakeBox<SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_16 = ___0_container;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_17 = (*(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C*)L_16);
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC6A2E63A68E51944068061F612EE638E72BC8E7B(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m0E14D06FF7273D8E63F7317E565E783A475AD128 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m8F7CA8C1377860B4F47CC0D6A28525E64D9517A6_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_12 = ___0_container;
		Il2CppFakeBox<SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_16 = ___0_container;
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_17 = (*(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD*)L_16);
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m273AD0D18397D56AF315DAF57DFB27DD4FD1C1D3(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m220AB0A8E5AE37C4EF6A98D122DF9BABC5BE6867 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m0A6B9FF2C17F6D0FC03E49E1820FFFDF376C2E0D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_12 = ___0_container;
		Il2CppFakeBox<SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_16 = ___0_container;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_17 = (*(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A*)L_16);
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m93B9BE89D187CE4DE54655FC8E79C21A80067FDB(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m948D322C2CB2EDF6F6A34CFB2055E2479A0792EF (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_12 = ___0_container;
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_16 = ___0_container;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_17 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_16);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mDD61931C1B047D44EFD1C54158194AFE517CEEAA(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE28070DD185259654AB3ED261F5A343C673048B7 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_12 = ___0_container;
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_16 = ___0_container;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_17 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_16);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m83FC6ADAF40A2737CFC01503A6E925AEF1F2D820(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mCBDAD9216C312EF1BB7FA583D386B3E25F2B7DB1 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_12 = ___0_container;
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_16 = ___0_container;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_17 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_16);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m7386FE58D1B6D5928CAAFFB503CD812A45542428(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m63835F3A51AEB141F88340528FAA2DE7B4575FF1 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_12 = ___0_container;
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_16 = ___0_container;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_17 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_16);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m98E585835D34CCB96B16F30DD0220D0BD78658B2(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mBD33F05E5F45D344A54D85D777C7C9811F356F87 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_12 = ___0_container;
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_16 = ___0_container;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_17 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_16);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m1B6AB5F94246287C5D81FF26E57AC66133EDC960(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mEBC6FBDCD9886836CB78558D680CDA35DCA0D810 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_12 = ___0_container;
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_16 = ___0_container;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_17 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_16);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m33FB5DB5DD3B2970869A7DE90B38ED0930E2002C(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m9B721C801894035E1149BB3AB3C1982CD17F7B7D (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_12 = ___0_container;
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_16 = ___0_container;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_17 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_16);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m8E45D555F23AF25A0D9ED79700D2FEECB7CF7872(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m95D9E7FEF337BDA653C18D8D1DE92DCD54835FE3 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_12 = ___0_container;
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_16 = ___0_container;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_17 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_16);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mB7431DCBEDEFF111011CA9517BBB631428308519(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m4A8C43DEB8B02E35A3BA7E23EC38F4C9F1CFAFD8 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_12 = ___0_container;
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_16 = ___0_container;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_17 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_16);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1B8BFA4C9BD8DFC817394CD997A8F159C7A3FD81(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m776EDE2BD875B5C46CA179E1F6CEEFCE5F10897E (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_12 = ___0_container;
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_16 = ___0_container;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_17 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_16);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m0D6C5E742F85F1575A901E2CDB3769A270CAB113(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m0B0B582398E353EEC6C5EFF255A055DB3D51925F (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_12 = ___0_container;
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_16 = ___0_container;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_17 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_16);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m012405968D1304341EE78DE223F7A48FB5451B7D(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m00AF6A8713284CB36863AA22FE9FAD54B6419501 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_12 = ___0_container;
		Il2CppFakeBox<StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_16 = ___0_container;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_17 = (*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_16);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8E777BA813D4666A35C41D9A5387DE4DB9F4C3F6(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mD0DC6876C80314A3B0BF0F6A90887EAB934E821B (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_12 = ___0_container;
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_16 = ___0_container;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_17 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_16);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m30A270989DB143BC69EBDA624ECFAA0C04EE7C05(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mD0F0B78149E65C1EF236656B11D53E143CE3443A (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_12 = ___0_container;
		Il2CppFakeBox<StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_16 = ___0_container;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_17 = (*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_16);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m1A3F8F7F986E5F79443EA32C0B2BA0B0685CF714(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m8BFA2D901CC060B6EDC6F457172A795CEBE97282 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_12 = ___0_container;
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_16 = ___0_container;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_17 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_16);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m32C6D30C386B6E438683C0360696117CDD1E20F8(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mF18D20ACFCC7333B64C98CDA63DB081B8C86B77D (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_12 = ___0_container;
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_16 = ___0_container;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_17 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_16);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m4D2A18658522FE673F4E477CAF4878C2DD1C702E(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mFD7CA1B8D3FC9D850BA6C60C57DD05A868AF634C (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_12 = ___0_container;
		Il2CppFakeBox<StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_16 = ___0_container;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_17 = (*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_16);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB30352A507841B59CEEE6FBF7D3B081736DB8269(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mB0171B64F116A54D7F1372529419312D09D13B6A (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_12 = ___0_container;
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_16 = ___0_container;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_17 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_16);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mE01733076CC927D6624527037712FC3C52E98CCD(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m799EB5E334459097052EB41F1CB927F6DF5F4A3B (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_12 = ___0_container;
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_16 = ___0_container;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_17 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_16);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m2EAD1BBCEBC9B3ECCC8A058D7A2BF5EAE3F283DF(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m52DB6BD31F8C2170A7DAF7B94D19ECE8559E0515 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_12 = ___0_container;
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_16 = ___0_container;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_17 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_16);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m830983F662C903FF252D67F2135458E8871225BA(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m55B168130A4C8A0B8FC213FB0F4F91DB7195EE58 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mE959270386DDBD289CF70FAC36A02D47138982E7_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_12 = ___0_container;
		Il2CppFakeBox<StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_16 = ___0_container;
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_17 = (*(StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_16);
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mF5494B869B8E56F9584715B5A503AF52938ACC9B(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m783C83A8875B2E5B2936DDB838AD29FE5AA985FF (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_12 = ___0_container;
		Il2CppFakeBox<TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_16 = ___0_container;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_17 = (*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_16);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m09DC351DA422FB2626B12838F5FFED98C5EC4F48(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC58BF55A1A35009C19FAA5CCC6DB73CB9F45A4A4 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B17_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B15_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t0DA73954B578C5A0C23661E8F9436C31679EA0B8_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_12 = ___0_container;
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_13(il2cpp_rgctx_data(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_16 = ___0_container;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_17 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_16);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_43 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m618608405C88E438B580204CACF3CC4009F87AAE(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 87460
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline (JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CPropertyU3Ek__BackingField;
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
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m05C24B984ED5E003760111FCE688D4201B821D4D_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t0614FE4DB6001B9C4443540E857D867F39D23F49_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t974939ED5858E136E6783074D927B7A0A887BCA2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t849B267549097D96986DCAD2850793D54566B07D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tA707EF483A6846D64DDD63F963A95C7304B53E5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB8799E05D6377C80FC931AA2ED809D6EF251A05A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tF5A724F99569364D7615977EF32CDCB2A1045BBA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tDEB67735C0E3D316A776B5FC5E1D6BDFAFA02066_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t0DF62A72B3297A00D56AC85CFB01E8C3E9460D97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t4BD624776DB5B1CA6F4CD8522DD3007FEDF0CCCD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t8AB7CD711706308490EFF51F31AF45C6AB97DDF6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m91BC8626D79E7B4C9D4A9980B0631651325DE31F_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t50A802605DEECAC604087278D28F6DAD1D87E594_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tFB0FF557412A3562B89AFBD03F8113908FA09E96_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t2CC90C31519F2DAF95C7F643DE417BCFE97C698C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBFB2AD144330663C18B55DD1FC2A8EF526EBA025_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t0FE337A60044F2930698F87A52FFCF681FB47715_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m8F7CA8C1377860B4F47CC0D6A28525E64D9517A6_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tC8A6838D020F659D649CBD833D68D21FF989D9AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0A6B9FF2C17F6D0FC03E49E1820FFFDF376C2E0D_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tE208CC239AE748DF86153C46E3E53BC1B4803FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t0671FE8E5B12D2B48C84E8F9F22F08BE9CA2FB84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tEF6310A0910FEA8D9823620EA14ACAEC9AE964AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tF87930A08DE9EF913CCD9ADBE4F0515D6A46B444_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE959270386DDBD289CF70FAC36A02D47138982E7_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t4BC1505B3A69B29873280F3486B77BCC7D4E4404_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t4CFE7EF9DB9BB1CAE6CCA93CF3D6BE4308502C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
